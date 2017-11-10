#include <QCoreApplication>
#include <QDebug>
#include <QtPrintSupport>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    foreach (QPrinterInfo p, QPrinterInfo::availablePrinters())
        qDebug() << p.printerName();
}
