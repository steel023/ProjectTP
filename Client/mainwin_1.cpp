#include "mainwin_1.h"
#include "ui_mainwin_1.h"
#include <QDebug>
QString name = "";
QMap<QString, QString> questions;
QString ansver = "";


MainWin_1::MainWin_1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWin_1)
{
    ui->setupUi(this);
    ui->label_11->setText(name);
    this->setFixedSize(QSize(582, 270));
    ui->label_5->setAlignment(Qt::AlignCenter);
    ui->label_9->setAlignment(Qt::AlignCenter);
    //ui->label_10->setAlignment(Qt::AlignCenter);
    ui->label_11->setAlignment(Qt::AlignCenter);

    ansver = generate_qast();
    ui->label_5->setText(ansver);
}

MainWin_1::~MainWin_1()
{
    delete ui;
}

void MainWin_1::set_user(QString user)
{
    name = user;
    ui->label_11->setText(user);
    qDebug() << "user set!!! " << user;
}

void MainWin_1::on_pushButton_clicked()
{
    if (questions[ansver] == "Да") {
        ui->label_5->setText("Верно");
    } else {
        ui->label_5->setText("Неверно");
    }
}


void MainWin_1::on_pushButton_2_clicked()
{
    if (questions[ansver] == "Нет") {
        ui->label_5->setText("Верно");
    } else {
        ui->label_5->setText("Неверно");
    }
}

QString MainWin_1::generate_qast()
{
    srand(time(0));
    questions["Вершины и дуги являются графами?"] = "Да";
    questions["Допускает ли мультиграф  кратные рёбра?"] = "Да";
    questions["Висячая вершина – инцидентна только одному ребру"] = "Да";
    questions["Два ребра называются смежными, если есть общая вершина"] = "Да";
    questions["Каркас - путь, в котором все ребра параллельны"] = "Нет";
    questions["Допускает ли псевдограф кратные рёбра?"] = "Да";
    questions["Простая цепь – все вершины и ребра различны."] = "Да";
    questions["Пустой граф — это тот, что состоит только из голых вершин."] = "Да";
    questions["Гамильтонов граф, содержит гамильтонов цикл"] = "Да";
    questions["Дерево — максимальный по числу рёбер связный граф."] = "Нет";

    auto i = questions.begin();
    std::advance(i, rand() % questions.size());
    QString random_key = i.key();

    return random_key;
}


void MainWin_1::on_pushButton_3_clicked()
{
    ansver = generate_qast();
    ui->label_5->setText(ansver);
}

