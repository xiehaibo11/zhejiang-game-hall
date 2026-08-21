.class public Lcom/bianfeng/platform/executor/AppConfig;
.super Ljava/lang/Object;
.source "AppConfig.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field private static final KEY_APP_ID:Ljava/lang/String; = "TD_APP_ID"

.field private static final KEY_AREA_ID:Ljava/lang/String; = "TD_AREA_ID"

.field private static final KEY_CHANNEL_ID:Ljava/lang/String; = "TD_CHANNEL_ID"

.field private static final KEY_CHANNEL_ID_FIX:Ljava/lang/String; = "channel_id"

.field private static final KEY_CONFIG_ID:Ljava/lang/String; = "TD_CONFIG_ID"

.field private static final KEY_GROUP_ID:Ljava/lang/String; = "TD_GROUP_ID"

.field private static final KEY_HOST_URL:Ljava/lang/String; = "YMN_HOST_VER"

.field private static final KEY_MAIN_ACTIVITY:Ljava/lang/String; = "MAIN_ACTIVITY"

.field private static final KEY_OS_TYPE:Ljava/lang/String; = "TD_CLIENT_TYPE"

.field private static final KEY_PRODUCT_ID:Ljava/lang/String; = "TD_PRODUCT_ID"

.field private static final KEY_SDK_APP_ID:Ljava/lang/String; = "TD_SDK_APP_ID"

.field public static final SIGN_APP_SECREAT:Ljava/lang/String; = "c986f7b40c468a3a3b1087d0eb08628b"

.field private static final TAG:Ljava/lang/String; = "AppConfig"

.field private static final TD_SDK_APP_KEY:Ljava/lang/String; = "TD_SDK_APP_KEY"

.field private static appId:Ljava/lang/String;

.field private static areaId:Ljava/lang/String;

.field private static channelId:Ljava/lang/String;

.field private static clientType:Ljava/lang/String;

.field private static configId:Ljava/lang/String;

.field private static context:Landroid/content/Context;

.field private static debug:Z

.field private static groupId:Ljava/lang/String;

.field private static hostUrl:Ljava/lang/String;

.field private static inited:Z

.field private static mainActivity:Ljava/lang/String;

.field private static metaData:Landroid/os/Bundle;

.field private static pkgName:Ljava/lang/String;

.field private static productId:Ljava/lang/String;

.field private static sdkAppId:Ljava/lang/String;

.field private static sdkAppKey:Ljava/lang/String;

.field private static verCode:Ljava/lang/String;

.field private static verName:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static check()V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    const-string v1, ""

    if-nez v0, :cond_0

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    .line 2
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verName:Ljava/lang/String;

    if-nez v0, :cond_1

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->verName:Ljava/lang/String;

    .line 3
    :cond_1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verCode:Ljava/lang/String;

    if-nez v0, :cond_2

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->verCode:Ljava/lang/String;

    .line 4
    :cond_2
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    if-nez v0, :cond_3

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 5
    :cond_3
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    if-nez v0, :cond_4

    const-string v0, "0"

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    .line 6
    :cond_4
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    const-string v2, "1"

    if-nez v0, :cond_5

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    .line 7
    :cond_5
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    if-nez v0, :cond_6

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    .line 8
    :cond_6
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    if-nez v0, :cond_7

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    .line 9
    :cond_7
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    if-nez v0, :cond_8

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    .line 11
    :cond_8
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 12
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/f;

    const-string v1, "\u672a\u914d\u7f6e\u6709\u732b\u817b AppId"

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/feature/f;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/f;->a()Lcom/bianfeng/ymnsdk/feature/f;

    :cond_9
    return-void
.end method

.method public static getApkPath(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getAppId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->appId:Ljava/lang/String;

    return-object v0
.end method

.method public static getAreaId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    return-object v0
.end method

.method public static getChannelId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    return-object v0
.end method

.method public static getClientType()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    return-object v0
.end method

.method public static getConfigId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    return-object v0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->context:Landroid/content/Context;

    return-object v0
.end method

.method public static getGroupId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    return-object v0
.end method

.method public static getHostUrl()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    return-object v0
.end method

.method public static getMainActivity()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->mainActivity:Ljava/lang/String;

    return-object v0
.end method

.method private static getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    .line 1
    invoke-virtual {p0, p1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 2
    :cond_0
    invoke-virtual {p0, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 3
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    if-eqz v0, :cond_0

    .line 4
    invoke-static {v0, p0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getPkgName()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    return-object v0
.end method

.method public static getProductId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->productId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppKey()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppKey:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerCode()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verCode:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerName()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verName:Ljava/lang/String;

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 3

    .line 1
    :try_start_0
    sget-boolean v0, Lcom/bianfeng/platform/executor/AppConfig;->inited:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 4
    sput-boolean v0, Lcom/bianfeng/platform/executor/AppConfig;->inited:Z

    .line 6
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->context:Landroid/content/Context;

    .line 8
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    .line 10
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 11
    sget-object v1, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    .line 12
    iget-object v2, v1, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->verName:Ljava/lang/String;

    .line 13
    iget v1, v1, Landroid/content/pm/PackageInfo;->versionCode:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->verCode:Ljava/lang/String;

    .line 15
    sget-object v1, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 16
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    .line 17
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v1, "TD_APP_ID"

    invoke-static {v0, v1}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->appId:Ljava/lang/String;

    .line 18
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v1, "TD_SDK_APP_ID"

    invoke-static {v0, v1}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    .line 19
    invoke-static {p0}, Lcom/bianfeng/platform/executor/AppConfig;->getApkPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    .line 20
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 21
    invoke-static {p0}, Lcom/bianfeng/afext/Afexter;->readChannel(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 22
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "channelId from afexter "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 24
    :cond_1
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v0, "TD_CHANNEL_ID"

    if-eqz p0, :cond_2

    .line 25
    :try_start_1
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 28
    :cond_2
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_3

    .line 29
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 31
    :cond_3
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_4

    .line 32
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "channel_id"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 34
    :cond_4
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "TD_GROUP_ID"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    .line 35
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "TD_CLIENT_TYPE"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    .line 36
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "TD_AREA_ID"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    .line 37
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "TD_PRODUCT_ID"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->productId:Ljava/lang/String;

    .line 38
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "TD_CONFIG_ID"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    .line 40
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "YMN_HOST_VER"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    .line 42
    sget-object p0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v0, "MAIN_ACTIVITY"

    invoke-static {p0, v0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->mainActivity:Ljava/lang/String;

    const-string p0, "TD_SDK_APP_KEY"

    .line 43
    invoke-static {p0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppKey:Ljava/lang/String;

    .line 44
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->check()V

    const-string p0, "debug"

    .line 46
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result p0

    sput-boolean p0, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z
    :try_end_1
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_1 .. :try_end_1} :catch_0

    const-string p0, "AppConfig"

    .line 48
    :try_start_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "debugMode is"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 51
    invoke-virtual {p0}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static isDebug()Z
    .locals 1

    .line 1
    sget-boolean v0, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z

    return v0
.end method

.method public static setAppId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->appId:Ljava/lang/String;

    return-void
.end method

.method public static setAreaId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    return-void
.end method

.method public static setChannelId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    return-void
.end method

.method public static setClientType(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    return-void
.end method

.method public static setConfigId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    return-void
.end method

.method public static setDebug(Z)V
    .locals 0

    .line 1
    sput-boolean p0, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z

    return-void
.end method

.method public static setGroupId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    return-void
.end method

.method public static setHostUrl(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    return-void
.end method

.method public static setProductId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->productId:Ljava/lang/String;

    return-void
.end method

.method public static setSdkAppId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    return-void
.end method
