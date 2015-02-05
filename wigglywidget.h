#ifndef WIGGLYWIDGET_H
#define WIGGLYWIDGET_H

#include <QWidget>
#include <QTimer>
class WigglyWidget : public QWidget
{
    Q_OBJECT
public:
    WigglyWidget(QWidget *parent = 0);
private slots:
    void setText(const QString &newText)
    {
        text=newText;
    }
protected:
    void paintEvent(QPaintEvent *e);
    void timerEvent(QTimerEvent *e);
private:
    QBasicTimer timer;
    QString text;
    int step;
};
