#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logoPixmap(":/images/coreel_logo.png");
    ui->labelLogo->setPixmap(logoPixmap);
    ui->labelLogo->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



bool MainWindow::checkCredentials(const QString &username, const QString &password)
{
    QString filePath = QCoreApplication::applicationDirPath() + "/../../../users.csv";
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Could not open file: " + file.errorString());
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        QStringList parts = line.split(',');

        if (parts.size() >= 2 && parts[0] == username && parts[1] == password) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username=ui->lineEdit_Username->text();
    QString password=ui->lineEdit_Password->text();

    if (checkCredentials(username, password)) {
        QMessageBox::information(this, "Login", "Login successful!");
        //next window
    }
    else {
        QMessageBox::warning(this, "Login", "Invalid username or password!");
    }

}


