#ifndef QINIU_H
#define QINIU_H
#include "iostream"
#include "lib/qiniu/include/qiniu/base.h"
#include "lib/qiniu/include/qiniu/conf.h"
#include "lib/qiniu/include/qiniu/http.h"

typedef struct qiniuReturn
{
    int code;
    const char * message;
}qiniuReturn;

class Qiniu
{
public:
    std::string sercertKey;
    std::string accessKey;
    std::string token;
    Qiniu(std::string sercertKeyIn, std::string AccessKeyIn);

    qiniuReturn uploadFile(std::string bucketName,std::string keyName, std::string fileName, int location);
    void getBucketsList();
    void getFilesList();
    void debug(Qiniu_Client *client, Qiniu_Error err);
};

#endif // QINIU_H
