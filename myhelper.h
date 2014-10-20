#ifndef MYHELPER_H
#define MYHELPER_H

#include <QtCore>
#include <QtGui>
#include <QDesktopWidget>
#include"frmmessagebox.h"
class MyHelper: public QObject
{

public:

    //设置编码为UTF8
    static void SetUTF8Code()
    {
#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        QTextCodec::setCodecForLocale(codec);
        QTextCodec::setCodecForCStrings(codec);
        QTextCodec::setCodecForTr(codec);
#endif
    }
    //添加中文字符
    static void setChinese()
    {
        QTranslator *translator = new QTranslator(qApp);
        translator->load("../image/qt_zh_CN.qm");
        qApp->installTranslator(translator);
        qDebug() << "bb";
    }

    //设置皮肤样式
    static void SetStyle(const QString &styleName)
    {
        //理解相对路径是按照可执行程序的所在路径为开始的，如果说可执行
        //文件再bin下面，那么image 需要是../image
        QFile file(QString("../image/%1.css").arg(styleName));
        file.open(QFile::ReadOnly);
        QString qss = QLatin1String(file.readAll());
        qApp->setStyleSheet(qss);//qApp是全局性的
        qApp->setPalette(QPalette(QColor("#F0F0F0")));
    }

    //显示信息框,仅确定按钮
    static void ShowMessageBoxInfo(QString info)
    {
        frmMessageBox *msg = new frmMessageBox;
        msg->SetMessage(info, 0);
        msg->exec();
    }

    //显示错误框,仅确定按钮
    static void ShowMessageBoxError(QString info)
    {
        frmMessageBox *msg = new frmMessageBox;
        msg->SetMessage(info, 2);
        msg->exec();
    }

    //显示询问框,确定和取消按钮
    static int ShowMessageBoxQuesion(QString info)
    {
        frmMessageBox *msg = new frmMessageBox;
        msg->SetMessage(info, 1);
        return msg->exec();

    }

    //延时
    static void Sleep(int sec)
    {
        QTime dieTime = QTime::currentTime().addMSecs(sec);
        while ( QTime::currentTime() < dieTime ) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        }
    }
//窗体居中显示
    static void FormInCenter(QWidget *frm)
    {
        int frmX = frm->width();
        int frmY = frm->height();
        QDesktopWidget w;
        int deskWidth = w.width();
        int deskHeight = w.height();
        QPoint movePoint(deskWidth / 2 - frmX / 2, deskHeight / 2 - frmY / 2);
        frm->move(movePoint);
    }

};
#endif // MYHELPER_H
