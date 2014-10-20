#ifndef FRMMESSAGEBOX_H
#define FRMMESSAGEBOX_H

#include <QDialog>

namespace Ui {
    class frmMessageBox;
}
//frameMessageBox消息样式
class frmMessageBox : public QDialog
{
    Q_OBJECT

public:
    explicit frmMessageBox(QWidget *parent = 0);
    ~frmMessageBox();
    void SetMessage(const QString &msg, int type);

protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);

private:
    Ui::frmMessageBox *ui;
    QPoint mousePoint;              //鼠标拖动自定义标题栏时的坐标
    bool mousePressed;              //鼠标是否按下
private slots:

    void on_okBtn_clicked();
};

#endif // FRMMESSAGEBOX_H
