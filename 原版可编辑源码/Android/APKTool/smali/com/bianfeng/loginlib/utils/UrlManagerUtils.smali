.class public Lcom/bianfeng/loginlib/utils/UrlManagerUtils;
.super Ljava/lang/Object;
.source "UrlManagerUtils.java"


# static fields
.field private static final H5_LOGIN_URL:Ljava/lang/String; = "BF_H5SDK_LOGIN_URL"

.field private static final login_action:Ljava/lang/String; = "/channel_games/door"

.field private static final mURL:Ljava/lang/String; = "https://h5.starsshine1.com"

.field private static final url_test:Ljava/lang/String; = "https://h5-test.starsshine1.com"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkDebug()Z
    .locals 3

    const/4 v0, 0x0

    .line 32
    :try_start_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/FileUtils;->isSdcardReady()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 33
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v1

    const-string v2, "bianfeng/sdk/h5_login_debug"

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/FileUtils;->isSdcardFileExist(Ljava/lang/String;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    :catch_0
    :cond_0
    return v0
.end method

.method public static getUrl()Ljava/lang/String;
    .locals 4

    .line 18
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    const-string v1, "BF_H5SDK_LOGIN_URL"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 19
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "https://h5.starsshine1.com"

    .line 22
    :goto_0
    invoke-static {}, Lcom/bianfeng/loginlib/utils/UrlManagerUtils;->checkDebug()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v0, "https://h5-test.starsshine1.com"

    .line 25
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/channel_games/door"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 26
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "login-->"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    return-object v0
.end method
