#ifndef UPLOADWORKER_H
#define UPLOADWORKER_H

#include "qiniu.h"

#include <QFileInfoList>
#include <QObject>


class UploadWorker: public QObject
{
    Q_OBJECT

public:
    explicit UploadWorker(){}
    std::string UTF8_To_string(const std::string &str);
public slots:
    void doWork(QFileInfoList files,
                QString path,QString sercertKey,
                QString accessKey,QString bucket, int location);
signals:
    void resultReady(int value,qiniuReturn qReturn);
};

#endif // UPLOADWORKER_H
