#include "frmmain.h"
#include "ui_frmmain.h"
#include"iconhelper.h"
#include"myhelper.h"
frmMain::frmMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmMain)
{
    ui->setupUi(this);
    this->InitStyle();

}

frmMain::~frmMain()
{
    delete ui;
}

void frmMain::InitStyle()
{

    //设置标题栏隐藏
    this->setWindowFlags(Qt::FramelessWindowHint);
    max = false;
    mousePressed = false;
    location = this->geometry();
    ui->titleLabel->installEventFilter(this);
    IconHelper::Instance()->SetIcon(ui->minBtn,QChar(0xf068),10);
    IconHelper::Instance()->SetIcon(ui->maxBtn,QChar(0xf096),10);
    IconHelper::Instance()->SetIcon(ui->closeBtn,QChar(0xf00d),10);
    IconHelper::Instance()->SetIcon(ui->iconTitleLabel,QChar(0xf015),12);
    MyHelper::FormInCenter(this);
}

void frmMain::on_pushButton_2_clicked()
{
    MyHelper::ShowMessageBoxInfo("恭喜你已经进入了自定义的样式中来了，你是最棒的");
}

void frmMain::on_pushButton_3_clicked()
{
    int result = MyHelper::ShowMessageBoxQuesion("真的要是删除我吗");
    if(result == 1){
        MyHelper::ShowMessageBoxInfo("好狠心");
    }else{
        MyHelper::ShowMessageBoxInfo("谢谢主人留我活口");
    }

}

void frmMain::on_closeBtn_clicked()
{
    qApp->exit();
}

void frmMain::on_maxBtn_clicked()
{
    if (max) {
        this->setGeometry(location);
        IconHelper::Instance()->SetIcon(ui->maxBtn, QChar(0xf096), 10);
//        ui->maxBtn->setToolTip("最大化");
    } else {
        location = this->geometry();
        this->setGeometry(qApp->desktop()->availableGeometry());
        IconHelper::Instance()->SetIcon(ui->maxBtn, QChar(0xf079), 10);
//        ui->maxBtn->setToolTip("还原");
    }
    max = !max;
}

void frmMain::on_minBtn_clicked()
{
    this->showMinimized();
}

void frmMain::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton) && !max) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void frmMain::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void frmMain::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

bool frmMain::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        this->on_maxBtn_clicked();
        return true;
    }
    return QObject::eventFilter(obj, event);
}

void frmMain::on_pushButton_clicked()
{
    MyHelper::ShowMessageBoxError("出现一个错误咋办");
}
