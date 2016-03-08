#include <QCoreApplication>
#include <QDebug>
#include <QSettings>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSettings *settings = new QSettings("monkey&wolf", "TuneEditor");
    settings->clear();

    qDebug() << "Cleaned up the TuneEditor persistent settings. You may now close this app.";

    return a.exec();
}
