#include <QtCore>
#include <QList>
#include <QtSql>
#include <QDebug>
#include <QtWidgets>
#include <QSqlRelationalTableModel>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "authorization.h"
#include "ui_authorization.h"

Authorization * formAuthorization;
QSqlDatabase db;

QSqlRelationalTableModel * tableModel;
QSqlRelationalTableModel * table;

QSqlQueryModel* tempQueryKafedra;
QSqlQueryModel* tempQueryPrep;
QSqlQueryModel* tempQueryIndex;
QComboBox * tempBoxKafedra;
QComboBox * tempBoxIndex;
QComboBox * tempBoxSphere;
QComboBox * tempBoxPrep;
QComboBox * tempBoxUnit;

mainWindow::mainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::mainWindow)
{
    ui->setupUi(this);

    QMenu *menuMain = new QMenu(tr("&Меню"), this);
    QMenu *menuOtherTables = new QMenu(tr("&Справочники по таблицам"), this);

    QAction *actAuthorization = new QAction(tr("&Авторизация"), this);
    QAction *actPrep = new QAction(tr("&Преподаватель"), this);
    QAction *actKaf = new QAction(tr("&Кафедра"), this);
    QAction *actUnit = new QAction(tr("&Единица измерения"), this);
    QAction *actIndex = new QAction(tr("&Показатель"), this);
    QAction *actSphere = new QAction(tr("&Сфера деятельности"), this);
    QAction *actWork = new QAction(tr("&Работы"), this);

    menuMain->addAction(actAuthorization);

    menuOtherTables->addAction(actPrep);
    menuOtherTables->addAction(actKaf);
    menuOtherTables->addAction(actSphere);
    menuOtherTables->addAction(actIndex);
    menuOtherTables->addAction(actWork);
    menuOtherTables->addAction(actUnit);

    ui->menubar->addMenu(menuMain);
    ui->menubar->addMenu(menuOtherTables);

    //открыть форму авторизации, принять сигналы из формы
    formAuthorization = new Authorization();
    connect(actAuthorization, SIGNAL(triggered()), formAuthorization, SLOT(show()));
    connect(formAuthorization, SIGNAL(sendConnect()), this, SLOT(Connect()));
    connect(formAuthorization, SIGNAL(sendDisconnect()), this, SLOT(Disconnect()));

    //сигналы выбора пункта меню
    connect(actKaf, SIGNAL(triggered()), this, SLOT(selectKaf()));
    connect(actPrep, SIGNAL(triggered()), this, SLOT(selectPrep()));
    connect(actSphere, SIGNAL(triggered()), this, SLOT(selectSphere()));
    connect(actUnit, SIGNAL(triggered()), this, SLOT(selectUnit()));
    connect(actIndex, SIGNAL(triggered()), this, SLOT(selectIndex()));
    connect(actWork, SIGNAL(triggered()), this, SLOT(selectWork()));

    //сигналы для фильтров
    connect(ui->boxKaf, SIGNAL(activated(QString)), this, SLOT(setFilterKafedra(QString)));
    connect(ui->boxPrep, SIGNAL(activated(QString)), this, SLOT(setFilterPrep(QString)));
    connect(ui->boxIndex, SIGNAL(activated(QString)), this, SLOT(setFilterIndex(QString)));

    //сигнал поиска
    connect(ui->editSearch,SIGNAL(textChanged(QString)),this, SLOT(search(QString)));

//connect(ui->tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(activeIndexTable(QModelIndex)));
}

//соединение с базой
void mainWindow::Connect()
{
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(formAuthorization->host);
    db.setPort(formAuthorization->port);
    db.setDatabaseName("university");
    db.setUserName(formAuthorization->usr);
    db.setPassword(formAuthorization->password);
    formAuthorization->hide();
    if (!db.open())
        QMessageBox::critical(this, tr("ERROR!"), db.lastError().databaseText());
    else
        QMessageBox::information(this, tr("SUCCESS!"), tr("Соединение установлено! Выберите таблицу для работы"));
    tableModel = new QSqlRelationalTableModel(0, db);
    ui->tableView->setModel(tableModel);
}

//выход из базы
void mainWindow::Disconnect()
{
    tableModel = new QSqlRelationalTableModel(0, db);
    ui->tableView->setModel(tableModel);
    db.close();
    QMessageBox::information(this, tr("SUCCESS!"), tr("Соединение разорвано"));
    formAuthorization->hide();
}

void mainWindow::selectTable(QString nameTable)
{
    ui->tableView->show();
    table = new QSqlRelationalTableModel(0, db);
    table->setTable(nameTable);
    if (nameTable == "kaf")
    {
        table->setHeaderData(1, Qt::Horizontal,
            QObject::tr("Наименование кафедры"), Qt::DisplayRole);
    }
    else if (nameTable == "prepodavatel")
    {
        table->setHeaderData(1, Qt::Horizontal,
            QObject::tr("Преподаватель"), Qt::DisplayRole);
    }
    else if (nameTable == "unit")
    {
        table->setHeaderData(1, Qt::Horizontal,
            QObject::tr("Название ед. изм."), Qt::DisplayRole);
    }
    else if (nameTable == "sphere")
    {

        table->setHeaderData(1, Qt::Horizontal,
            QObject::tr("Наименование сферы деятельности"),
            Qt::DisplayRole);
        table->setHeaderData(2, Qt::Horizontal,
            QObject::tr("Название ед. изм."), Qt::DisplayRole);

        table->setRelation(2, QSqlRelation("unit", "id_unit", "name_unit"));
        ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
        // установить содержимое фильтра Combo Box
        QSqlQueryModel *filter1 = new QSqlQueryModel;
        filter1->setQuery("SELECT name_unit FROM unit");
        ui->boxSphere->setModel(filter1);
        ui->boxSphere->setCurrentIndex(-1);
    }
    else if (nameTable == "index")
    {
        table->setHeaderData(1, Qt::Horizontal,
            QObject::tr("Наименование показателя"), Qt::DisplayRole);
        table->setHeaderData(2, Qt::Horizontal,
            QObject::tr("Наименование сферы деятельности"),
            Qt::DisplayRole);

        table->setRelation(2, QSqlRelation("sphere",
            "id_sph", "name_sph"));
        ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
        QSqlQueryModel *filter = new QSqlQueryModel;
        filter->setQuery("SELECT name_sph FROM sphere");
        ui->boxIndex->setModel(filter);
        ui->boxIndex->setCurrentIndex(-1);
    }
    else if (nameTable == "work")
    {
        table->setHeaderData(1, Qt::Horizontal,
            QObject::tr("Наименование работы"), Qt::DisplayRole);
        table->setHeaderData(2, Qt::Horizontal,
            QObject::tr("Наименование показателя"), Qt::DisplayRole);
        table->setHeaderData(3, Qt::Horizontal,
            QObject::tr("Наименование кафедры"), Qt::DisplayRole);
        table->setHeaderData(4, Qt::Horizontal,
            QObject::tr("Ф.И.О. преподавателя"), Qt::DisplayRole);
        table->setHeaderData(5, Qt::Horizontal,
            QObject::tr("Учебный год"), Qt::DisplayRole);
        table->setHeaderData(6, Qt::Horizontal,
            QObject::tr("Объем в ед. изм."), Qt::DisplayRole);

        table->setRelation(2, QSqlRelation("index", "id_ind", "name_ind"));

        table->setRelation(3, QSqlRelation("kaf", "id_kaf", "name_kaf"));

        table->setRelation(4, QSqlRelation("prepodavatel", "id_prepod", "name_prepod"));
        ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));

        QSqlQueryModel *filter2 = new QSqlQueryModel;
        filter2->setQuery("SELECT name_ind FROM index");
        ui->boxIndex->setModel(filter2);
        ui->boxIndex->setCurrentIndex(-1);

        QSqlQueryModel *filter3 = new QSqlQueryModel;
        filter3->setQuery("SELECT name_kaf FROM kaf");
        ui->boxKaf->setModel(filter3);
        ui->boxKaf->setCurrentIndex(-1);

        QSqlQueryModel *filter4 = new QSqlQueryModel;
        filter4->setQuery("SELECT name_prepod FROM prepodavatel");
        ui->boxPrep->setModel(filter4);
        ui->boxPrep->setCurrentIndex(-1);

        QSqlQueryModel *filter5 = new QSqlQueryModel;
        filter5->setQuery("SELECT DISTINCT year FROM work");
        ui->boxYear->setModel(filter5);
        ui->boxYear->setCurrentIndex(-1);
    }
    table->select();
    ui->tableView->setModel(table);

    // скрыть поле ID
    ui->tableView->setColumnHidden(0, true);

    // установить ширину столбцов
    int count = table->columnCount();
    for (int i = 1; i < count; i++)
    {
        ui->tableView->setColumnWidth(i, 300);
    }
    // стратегия редактирования - ручная
    table->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->buttonAdd->setEnabled(true);
    ui->buttonDel->setEnabled(true);
}

void mainWindow::selectKaf()
{
    QString nameTable = "kaf";
    selectTable(nameTable);
}
void mainWindow::selectPrep()
{
    QString nameTable = "prepodavatel";
    selectTable(nameTable);
}
void mainWindow::selectSphere()
{
    QString nameTable = "sphere";
    selectTable(nameTable);
}
void mainWindow::selectUnit()
{
    QString nameTable = "unit";
    selectTable(nameTable);
}
void mainWindow::selectIndex()
{
    QString nameTable = "index";
    selectTable(nameTable);
}
void mainWindow::selectWork()
{
    QString nameTable = "work";
    ui->boxUnit->setEnabled(false);
    ui->boxPrep->setEnabled(false);
    ui->boxSphere->setEnabled(false);
    selectTable(nameTable);
}

void mainWindow::on_buttonReset_clicked()
{
    // убрать фильтр
    table->setFilter("");
    table->select();
    int count = table->columnCount();
    for (int i = 1; i < count; i++)
    {
        // колонки снова сделать видимыми
        ui->tableView->setColumnHidden(i, false);
    }
    // текущее значение Combo Box
    ui->boxUnit->setCurrentIndex(-1);
    ui->boxKaf->setCurrentIndex(-1);
    ui->boxIndex->setCurrentIndex(-1);
    ui->boxPrep->setCurrentIndex(-1);
    ui->boxSphere->setCurrentIndex(-1);
    ui->boxYear->setCurrentIndex(-1);

    ui->boxUnit->setEnabled(true);
    ui->boxPrep->setEnabled(true);
    ui->boxSphere->setEnabled(true);
}
void mainWindow::setFilterKafedra(QString currentText)
    {
        tempQueryKafedra = new QSqlQueryModel;
        // получить id кафедры по наименованию
        tempQueryKafedra->setQuery(QString("SELECT id_kaf FROM kaf WHERE name_kaf = '%1'").arg(currentText));
        tempBoxKafedra = new QComboBox;
        tempBoxKafedra->setModel(tempQueryKafedra);
        // начало текста для фильтрации
        QString text = QString("work.id_kaf =%1").arg(tempBoxKafedra->currentText());
        // если выбран фильтр по показателю, добавить в текст
        if (ui->boxIndex->currentIndex() != -1)
            {
        text += "AND work.id_index = "+tempBoxIndex->currentText();
            }
        // если выбран фильтр по преподавателю, добавить в текст
        if (ui->boxPrep->currentIndex() != -1)
            {
                text += " AND work.id_prep = " + tempBoxPrep ->currentText();
            }
                    // если выбран фильтр по году, добавить в текст
                    if (ui->boxYear->currentIndex() != -1)
                    {
                        text += " AND work.year = " + ui->boxYear -> currentText();
                    }
                    // установить фильтр
                    table->setFilter(text);
                    table->select();
}
void mainWindow::setFilterIndex(QString currentText)
    {
        tempQueryIndex = new QSqlQueryModel;
        // получить id показателя по наименованию
        tempQueryIndex->setQuery(QString("SELECT id_ind FROM index WHERE name_ind = '%1'").arg(currentText));
        tempBoxIndex = new QComboBox;
        tempBoxIndex->setModel(tempQueryIndex);
        // начало текста для фильтрации
        QString text = QString("work.id_ind =%1").arg(tempBoxIndex->currentText());
        // если выбран фильтр по кафедре, добавить в текст
        if (ui->boxKaf->currentIndex() != -1)
            {
        text += "AND work.id_kaf = "+tempBoxKafedra->currentText();
            }
        // если выбран фильтр по преподавателю, добавить в текст
        if (ui->boxPrep->currentIndex() != -1)
            {
                text += " AND work.id_prep = " + tempBoxPrep ->currentText();
            }
                    // если выбран фильтр по году, добавить в текст
                    if (ui->boxYear->currentIndex() != -1)
                    {
                        text += " AND work.year = " + ui->boxYear -> currentText();
                    }
                    // установить фильтр
                    table->setFilter(text);
                    table->select();
}
void mainWindow::setFilterPrep(QString currentText)
    {
        tempQueryPrep = new QSqlQueryModel;
        // получить id преподавателя по наименованию
        tempQueryPrep->setQuery(QString("SELECT id_prep FROM prepodavatel WHERE name_prep = '%1'").arg(currentText));
        tempBoxPrep = new QComboBox;
        tempBoxPrep->setModel(tempQueryPrep);
        // начало текста для фильтрации
        QString text = QString("work.id_prep =%1").arg(tempBoxPrep->currentText());
        // если выбран фильтр по показателю, добавить в текст
        if (ui->boxIndex->currentIndex() != -1)
            {
        text += "AND work.id_index = "+tempBoxIndex->currentText();
            }
        // если выбран фильтр по кафедре, добавить в текст
        if (ui->boxKaf->currentIndex() != -1)
            {
                text += " AND work.id_kaf = " + tempBoxKafedra ->currentText();
            }
                    // если выбран фильтр по году, добавить в текст
                    if (ui->boxYear->currentIndex() != -1)
                    {
                        text += " AND work.year = " + ui->boxYear -> currentText();
                    }
                    // установить фильтр
                    table->setFilter(text);
                    table->select();
}

void mainWindow::search(QString string)
{
QSqlQueryModel *find = new QSqlQueryModel;
QString str_query, tableName;
tableName = table->tableName();
if(tableName == "work")
{
str_query = "SELECT id_work, name_work, name_ind, name_kaf, name_prepod, year, volume FROM work, index, kaf, prepodavatel WHERE (work.id_ind=index.id_ind) AND (work.id_prepod = prepodavatel.id_prepod) AND (work.id_kaf = kaf.id_kaf) AND (name_ind || name_kaf || name_prepod || year || volume || name_work LIKE '%"+string+"%')";
find->setQuery(str_query);
find->setHeaderData(1, Qt::Horizontal,
QObject::tr("Наименование работы"), Qt::DisplayRole);
find->setHeaderData(2, Qt::Horizontal,
QObject::tr("Наименование показателя"), Qt::DisplayRole);
find->setHeaderData(3, Qt::Horizontal,
QObject::tr("Наименование кафедры"), Qt::DisplayRole);
find->setHeaderData(4, Qt::Horizontal,
QObject::tr("Ф.И.О. преподавателя"), Qt::DisplayRole);
find->setHeaderData(5, Qt::Horizontal,
QObject::tr("Учебный год"), Qt::DisplayRole);
find->setHeaderData(6, Qt::Horizontal,
QObject::tr("Объем в ед. изм."), Qt::DisplayRole);
}
ui->tableView->setModel(find);
// скрыть поле ID
ui->tableView->setColumnHidden(0, true);
}
void mainWindow::on_buttonClear_clicked()
{
ui->tableView->setModel(table);
}
void mainWindow::on_buttonAdd_clicked() {
QString tableName;
tableName = table->tableName();
// получить число строк
int count = table->rowCount();

// вставить новую строку в конце
table->insertRow(count);
if(tableName == "sphere" && ui->boxUnit->currentIndex()!= -1)
{
// если применен фильтр, установить его значение в новой строке в соответствующей колонке
table->setData(table->index(count, 2), tempBoxUnit->currentText());
}
else if(tableName == "index" && ui->boxSphere->currentIndex() != -1)
{
table->setData(table->index(count, 2), tempBoxSphere->currentText());
}
else if(tableName == "work")
{
if(ui->boxIndex->currentIndex() != -1)
table->setData(table->index(count, 2), tempBoxIndex->currentText());
if(ui->boxKaf->currentIndex() != -1)
table->setData(table->index(count, 3), tempBoxKafedra->currentText());
if(ui->boxPrep->currentIndex() != -1)
table->setData(table->index(count, 4), tempBoxPrep->currentText());
if(ui->boxYear->currentIndex() != -1)
table->setData(table->index(count, 5), ui->boxYear->currentText());
}
}
void mainWindow::on_buttonDel_clicked()
{
QModelIndex index;
QString tableName, str_query;
QSqlQueryModel *find = new QSqlQueryModel;
QComboBox *temp = new QComboBox;
tableName = table->tableName();
QItemSelectionModel *select = ui->tableView->selectionModel();

// номер выбранной строки
int row = select->currentIndex().row();
// получить ID записи
QString data = (ui->tableView->model()->data(ui->tableView->model()->index(row, 0))).toString();
// текст запроса для проверки наличия ссылающихся записей на данную
if(tableName == "kaf")
{
str_query = "SELECT id_work FROM work WHERE id_kaf = "+data;
}
else if(tableName == "prepodavatel")
{
str_query = "SELECT id_work FROM work WHERE id_prepod = "+data;
}
else if(tableName == "index")
{
str_query = "SELECT id_work FROM work WHERE id_index = "+data;
}
else if(tableName == "sphere")
{
str_query = "SELECT id_index FROM index WHERE id_sphere = "+data;
}
else if(tableName == "unit")
{
str_query = "SELECT id_sphere FROM sphere WHERE unit = "+data;
}
// выполнить запрос для проверки
find->setQuery(str_query);
temp->setModel(find);
// если имеются зависимые записи, вывести диалоговое сообщение
if(temp->currentText() != "")
{
int result = QMessageBox::question(this,
tr("Каскадное удаление!"), tr("Внимание! Найдены связанные данные в зависимых таблицах. Удаление приведет к потере зависимых данных. Продолжить?"), QMessageBox::Yes, QMessageBox::No|QMessageBox::Default);
if(result == QMessageBox::Yes)
{
// удалить запись и применить изменения в случае согласия пользователя
table->removeRow(row, index);
if(!table->submitAll())
{
QMessageBox::critical(this, tr("ERROR!"), db.lastError().databaseText());
}
}
}
// если нет ссылок, выполнить и применить удаление
else
{
table->removeRow(row, index);
if(!table->submitAll())
{
QMessageBox::critical(this, tr("ERROR!"), db.lastError().databaseText());
}
}

}
void mainWindow::keyPressEvent(QKeyEvent *event)
{
 //если фокус находится на Table View и нажата клавиша Enter (основная или на Numpad)
if(ui->tableView->hasFocus() && (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter))
{
//QString tableName = table->tableName();
//QList<int> listRows;
//for (int i=0; i<ui->tableView->height(); i++)
//    listRows.push_front(ui->tableView->rowAt(i));// = table ->rowsAboutToBeInserted();
//// переменная, которая показывает, все ли записи корректны
//bool flag = true;
//if(tableName == "work")
//{
//int curYear = QDate::currentDate().year();
//// проверяем все строки, которые были активированы пользователем для редактирования
//for(int i = 0; i < listRows.size(); i++)
//{
//int row = listRows.value(i);
//float dataVolume = (ui->tableView->model()->data(ui->tableView->model()->index(row, 6))).toFloat();
//int dataYear = (ui->tableView->model()->data(ui->tableView->model()->index(row, 5))).toInt();
//if(dataYear < 1980 || dataYear >curYear)
//{
//flag = false;
//QMessageBox::critical(this, tr("ERROR!"), QString("Строка %1: Учебный год должен быть в пределах от 1980 по %2").arg(row+1).arg(curYear));
//}
//if(dataVolume <= 0 || dataVolume > 3000)
//{
//flag = false;
//QMessageBox::critical(this, tr("ERROR!"), QString("Строка %1: Объем работы должен быть положительным и не более 3000").arg(row + 1));
//}
//}
//}
//// если записи корректны, применяем изменения
//if(flag)
//{
if(!table->submitAll())
{
QMessageBox::critical(this, tr("ERROR!"), table->lastError().databaseText());
}
// очистить список измененных строк
//else listRows.clear();
}
}
mainWindow::~mainWindow()
{
    delete ui;
}
