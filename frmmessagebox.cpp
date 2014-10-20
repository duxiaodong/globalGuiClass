#include "frmmessagebox.h"
#include "ui_frmmessagebox.h"
#include"iconhelper.h"
#include"myhelper.h"
frmMessageBox::frmMessageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmMessageBox)
{
    ui->setupUi(this);
    this->mousePressed = false;
    //设置窗体标题栏隐藏
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    //设置窗体关闭时自动释放内存
    this->setAttribute(Qt::WA_DeleteOnClose);
    //设置图形字体
    IconHelper::Instance()->SetIcon(ui->iconTitleLabel, QChar(0xf015), 12);
    IconHelper::Instance()->SetIcon(ui->closeBtn, QChar(0xf00d), 10);
    //关联关闭按钮
    connect(ui->closeBtn, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->cancelBtn, SIGNAL(clicked()), this, SLOT(close()));
    //窗体居中显示
    MyHelper::FormInCenter(this);
}

frmMessageBox::~frmMessageBox()
{
    delete ui;
}

void frmMessageBox::on_okBtn_clicked()
{
    done(1);
    this->close();
}

void frmMessageBox::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton)) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void frmMessageBox::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void frmMessageBox::mouseReleaseEvent(QMouseEvent *)
{
     mousePressed = false;
}

void frmMessageBox::SetMessage(const QString &msg, int type)
{
    if (type == 0) {
        ui->iconLabel->setStyleSheet("border-image: url(../image/info.png);");
        ui->cancelBtn->setVisible(false);
        ui->titleLabel->setText("提示");
    } else if (type == 1) {
        ui->iconLabel->setStyleSheet("border-image: url(../image/question.png);");
        ui->titleLabel->setText("询问");
    } else if (type == 2) {
        ui->iconLabel->setStyleSheet("border-image: url(../image/error.png);");
        ui->cancelBtn->setVisible(false);
        ui->titleLabel->setText("错误");
    }

    ui->infoLabel->setText(msg);
}
