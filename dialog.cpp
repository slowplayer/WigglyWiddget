#include "dialog.h"
#include "wigglywidget.h"
#include <QLineEdit>
#include <QVBoxLayout>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    WigglyWidget *wigglyWidget=new WigglyWidget;
    QLineEdit *lineEdit=new QLineEdit;

    QVBoxLayout *layout=new QVBoxLayout(this);
    layout->addWidget(wigglyWidget);
    layout->addWidget(lineEdit);

    connect(lineEdit,SIGNAL(textChanged(QString)),wigglyWidget,SLOT(setText(QString)));
    lineEdit->setText(tr("Hello World"));

    setWindowTitle(tr("Wiggly"));
    resize(360,145);
}
