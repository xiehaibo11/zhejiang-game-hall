.class public Lcom/bianfeng/fastvo/action/OSSHelper;
.super Ljava/lang/Object;
.source "OSSHelper.java"


# static fields
.field private static oss:Lcom/alibaba/sdk/android/oss/OSS;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/alibaba/sdk/android/oss/OSS;
    .locals 1

    .line 25
    sget-object v0, Lcom/bianfeng/fastvo/action/OSSHelper;->oss:Lcom/alibaba/sdk/android/oss/OSS;

    return-object v0
.end method

.method public static downLoadfile(Ljava/lang/String;)Lcom/alibaba/sdk/android/oss/model/GetObjectResult;
    .locals 2

    .line 98
    invoke-static {}, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->getBucketName()Ljava/lang/String;

    move-result-object v0

    .line 100
    new-instance v1, Lcom/alibaba/sdk/android/oss/model/GetObjectRequest;

    invoke-direct {v1, v0, p0}, Lcom/alibaba/sdk/android/oss/model/GetObjectRequest;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 104
    :try_start_0
    sget-object p0, Lcom/bianfeng/fastvo/action/OSSHelper;->oss:Lcom/alibaba/sdk/android/oss/OSS;

    invoke-interface {p0, v1}, Lcom/alibaba/sdk/android/oss/OSS;->getObject(Lcom/alibaba/sdk/android/oss/model/GetObjectRequest;)Lcom/alibaba/sdk/android/oss/model/GetObjectResult;

    move-result-object p0
    :try_end_0
    .catch Lcom/alibaba/sdk/android/oss/ClientException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lcom/alibaba/sdk/android/oss/ServiceException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 112
    invoke-virtual {p0}, Lcom/alibaba/sdk/android/oss/ServiceException;->getRequestId()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RequestId"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 113
    invoke-virtual {p0}, Lcom/alibaba/sdk/android/oss/ServiceException;->getErrorCode()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ErrorCode"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 114
    invoke-virtual {p0}, Lcom/alibaba/sdk/android/oss/ServiceException;->getHostId()Ljava/lang/String;

    move-result-object v0

    const-string v1, "HostId"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 115
    invoke-virtual {p0}, Lcom/alibaba/sdk/android/oss/ServiceException;->getRawMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "RawMessage"

    invoke-static {v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :catch_1
    move-exception p0

    .line 109
    invoke-virtual {p0}, Lcom/alibaba/sdk/android/oss/ClientException;->printStackTrace()V

    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static getObjectKey(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 81
    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getUid()Ljava/lang/String;

    move-result-object v0

    .line 82
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 83
    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getOpenId()Ljava/lang/String;

    move-result-object v0

    .line 85
    :cond_0
    new-instance v1, Ljava/text/SimpleDateFormat;

    const-string v2, "yyyy/MM"

    invoke-direct {v1, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    new-instance v2, Ljava/util/Date;

    invoke-direct {v2}, Ljava/util/Date;-><init>()V

    invoke-virtual {v1, v2}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    .line 87
    invoke-static {p0}, Lcom/bianfeng/fastvo/util/FileUtil;->getSuffix(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x5

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    const-string v4, "50027.fpftrrdlrs"

    aput-object v4, v2, v3

    const/4 v3, 0x1

    aput-object v1, v2, v3

    const/4 v1, 0x2

    .line 91
    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getAppId()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v1

    const/4 v1, 0x3

    .line 92
    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getPlatformId()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v2, v1

    const/4 v1, 0x4

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 93
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    aput-object p0, v2, v1

    const-string p0, "%s/%s/%s/%s/%s"

    .line 88
    invoke-static {p0, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 29
    invoke-static {p0}, Lcom/bianfeng/fastvo/action/FastvoOssClientFactory;->create(Landroid/content/Context;)Lcom/alibaba/sdk/android/oss/OSS;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/fastvo/action/OSSHelper;->oss:Lcom/alibaba/sdk/android/oss/OSS;

    return-void
.end method

.method public static upLoadFile(Ljava/lang/String;Lcom/bianfeng/fastvo/action/UploadListener;)V
    .locals 5

    .line 34
    invoke-static {p0}, Lcom/bianfeng/fastvo/action/OSSHelper;->getObjectKey(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 35
    invoke-static {}, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->getBucketName()Ljava/lang/String;

    move-result-object v1

    .line 37
    new-instance v2, Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;

    invoke-direct {v2, v1, v0, p0}, Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "PutObjectBUCKET_NAME: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " objectKey: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "    filePath :"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 40
    new-instance p0, Lcom/bianfeng/fastvo/action/OSSHelper$1;

    invoke-direct {p0}, Lcom/bianfeng/fastvo/action/OSSHelper$1;-><init>()V

    invoke-virtual {v2, p0}, Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;->setProgressCallback(Lcom/alibaba/sdk/android/oss/callback/OSSProgressCallback;)V

    .line 47
    sget-object p0, Lcom/bianfeng/fastvo/action/OSSHelper;->oss:Lcom/alibaba/sdk/android/oss/OSS;

    new-instance v3, Lcom/bianfeng/fastvo/action/OSSHelper$2;

    invoke-direct {v3, v1, v0, p1}, Lcom/bianfeng/fastvo/action/OSSHelper$2;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/fastvo/action/UploadListener;)V

    invoke-interface {p0, v2, v3}, Lcom/alibaba/sdk/android/oss/OSS;->asyncPutObject(Lcom/alibaba/sdk/android/oss/model/PutObjectRequest;Lcom/alibaba/sdk/android/oss/callback/OSSCompletedCallback;)Lcom/alibaba/sdk/android/oss/internal/OSSAsyncTask;

    return-void
.end method
