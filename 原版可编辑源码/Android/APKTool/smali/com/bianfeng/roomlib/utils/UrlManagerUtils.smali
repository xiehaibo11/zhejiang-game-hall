.class public Lcom/bianfeng/roomlib/utils/UrlManagerUtils;
.super Ljava/lang/Object;
.source "UrlManagerUtils.java"


# static fields
.field private static final H5_ROOM_WEB_URL:Ljava/lang/String; = "BF_H5SDK_ROOM_WEB_URL"

.field private static final room_web_action:Ljava/lang/String; = "/indexNew.html?"

.field private static final url_room_web:Ljava/lang/String; = "https://h5-sdk.starsshine1.com/h5_hall"

.field private static final url_room_web_test:Ljava/lang/String; = "https://h5-test.starsshine1.com/h5_hall"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkDebug()Z
    .locals 3

    const/4 v0, 0x0

    .line 36
    :try_start_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/FileUtils;->isSdcardReady()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 37
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v1

    const-string v2, "bianfeng/sdk/h5_room_debug"

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

.method public static getRoomWebUrl()Ljava/lang/String;
    .locals 4

    .line 22
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    const-string v1, "BF_H5SDK_ROOM_WEB_URL"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 23
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "https://h5-sdk.starsshine1.com/h5_hall"

    .line 26
    :goto_0
    invoke-static {}, Lcom/bianfeng/roomlib/utils/UrlManagerUtils;->checkDebug()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v0, "https://h5-test.starsshine1.com/h5_hall"

    .line 29
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/indexNew.html?"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 30
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "RoomWebUrl-->"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    return-object v0
.end method
