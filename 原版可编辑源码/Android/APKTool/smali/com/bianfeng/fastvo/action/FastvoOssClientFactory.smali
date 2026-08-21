.class Lcom/bianfeng/fastvo/action/FastvoOssClientFactory;
.super Ljava/lang/Object;
.source "FastvoOssClientFactory.java"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static create(Landroid/content/Context;)Lcom/alibaba/sdk/android/oss/OSS;
    .locals 3

    .line 18
    invoke-static {}, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->getEndpoint()Ljava/lang/String;

    move-result-object v0

    .line 19
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "endpoint--->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 20
    new-instance v1, Lcom/bianfeng/fastvo/action/FastvoOssClientFactory$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/fastvo/action/FastvoOssClientFactory$1;-><init>(Landroid/content/Context;)V

    .line 35
    new-instance v2, Lcom/alibaba/sdk/android/oss/OSSClient;

    invoke-direct {v2, p0, v0, v1}, Lcom/alibaba/sdk/android/oss/OSSClient;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/alibaba/sdk/android/oss/common/auth/OSSCredentialProvider;)V

    return-object v2
.end method
