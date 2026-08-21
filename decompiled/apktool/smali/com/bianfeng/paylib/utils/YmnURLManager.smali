.class public Lcom/bianfeng/paylib/utils/YmnURLManager;
.super Ljava/lang/Object;
.source "YmnURLManager.java"


# static fields
.field private static final H5_PAYMENT_URL:Ljava/lang/String; = "BF_H5SDK_PAYMENT_URL"

.field private static final H5_PAY_URL:Ljava/lang/String; = "BF_H5SDK_PAY_URL"

.field private static final URL_HOST_PUBLIC_PAYMENT:Ljava/lang/String; = "https://h5-sdk.starsshine1.com/h5_hall/payment.html"

.field private static final URL_HOST_PUBLIC_PAYMENT_TEST:Ljava/lang/String; = "https://h5-test.starsshine1.com/payment.html"

.field public static return_url:Ljava/lang/String; = "https://static.imeete.net/h5_hall/payresult.html"

.field private static final url_host_public_pay:[Ljava/lang/String;

.field public static final url_host_test_pay:Ljava/lang/String; = "https://h5-test.starsshine1.com"


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "https://h5.starsshine1.com"

    aput-object v2, v0, v1

    .line 11
    sput-object v0, Lcom/bianfeng/paylib/utils/YmnURLManager;->url_host_public_pay:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkDebug()Z
    .locals 3

    .line 38
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/FileUtils;->isSdcardReady()Z

    move-result v0

    .line 39
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v1

    const-string v2, "bianfeng/sdk/h5_pay_debug"

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/FileUtils;->isSdcardFileExist(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    if-eqz v1, :cond_0

    .line 43
    :try_start_0
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "\u6d4b\u8bd5\u57df\u540d\u4e0b\u7684\u652f\u4ed8"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    return v0

    :catch_0
    :cond_0
    return v2
.end method

.method public static getPayUrl()[Ljava/lang/String;
    .locals 4

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/String;

    .line 23
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v1

    const-string v2, "BF_H5SDK_PAY_URL"

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 25
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x0

    if-nez v2, :cond_0

    aput-object v1, v0, v3

    return-object v0

    .line 30
    :cond_0
    invoke-static {}, Lcom/bianfeng/paylib/utils/YmnURLManager;->checkDebug()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "https://h5-test.starsshine1.com"

    aput-object v1, v0, v3

    return-object v0

    .line 34
    :cond_1
    sget-object v0, Lcom/bianfeng/paylib/utils/YmnURLManager;->url_host_public_pay:[Ljava/lang/String;

    return-object v0
.end method

.method public static getPaymentUrl()Ljava/lang/String;
    .locals 3

    .line 55
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    const-string v1, "BF_H5SDK_PAYMENT_URL"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 56
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "?timestamp="

    if-nez v1, :cond_0

    .line 57
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSystemUtil()Lcom/bianfeng/utilslib/SystemUtil;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/SystemUtil;->getSystemCurrentTime()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 60
    :cond_0
    invoke-static {}, Lcom/bianfeng/paylib/utils/YmnURLManager;->checkDebug()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 61
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "https://h5-test.starsshine1.com/payment.html?timestamp="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSystemUtil()Lcom/bianfeng/utilslib/SystemUtil;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/SystemUtil;->getSystemCurrentTime()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 64
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "https://h5-sdk.starsshine1.com/h5_hall/payment.html"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSystemUtil()Lcom/bianfeng/utilslib/SystemUtil;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/SystemUtil;->getSystemCurrentTime()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
