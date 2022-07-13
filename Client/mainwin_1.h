#ifndef MAINWIN_1_H
#define MAINWIN_1_H

#include <QMainWindow>
#include <algorithm>
#include <random>
#include <QThread>

namespace Ui {
class MainWin_1;
}

class MainWin_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin_1(QWidget *parent = nullptr);
    ~MainWin_1();

public slots:
    void set_user(QString user);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::MainWin_1 *ui;
    QString generate_qast();

signals:
    void send_from_user(QString id);

};

#endif // MAINWIN_1_H
