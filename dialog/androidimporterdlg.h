#ifndef IMPORTANDROID_H
#define IMPORTANDROID_H

#include <QDialog>

namespace Ui {
class importandroid;
}

class AndroidImporterDlg : public QDialog
{
    Q_OBJECT

public:
    explicit AndroidImporterDlg(QString confpath, QWidget *parent = nullptr);
    ~AndroidImporterDlg();
private slots:
    void import();
signals:
    void importFinished();
private:
    Ui::importandroid *ui;
    QString m_confpath;
    QString pathAppend(const QString& path1, const QString& path2);
};

#endif // IMPORTANDROID_H