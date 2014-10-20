#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QDialog>

namespace Ui {
    class frmMain;
}

class frmMain : public QDialog
{
    Q_OBJECT

public:
    explicit frmMain(QWidget *parent = 0);
    ~frmMain();
protected:
    bool eventFilter(QObject *obj, QEvent *event);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_closeBtn_clicked();

    void on_maxBtn_clicked();

    void on_minBtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::frmMain *ui;

    bool mousePressed;
    QPoint mousePoint;
    bool max;
    QRect location;

    void InitStyle();
};

#endif // FRMMAIN_H
