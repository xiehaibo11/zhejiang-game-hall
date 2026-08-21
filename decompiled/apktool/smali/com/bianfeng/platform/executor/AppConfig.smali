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

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static check()V
    .locals 3

    .line 134
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    const-string v1, ""

    if-nez v0, :cond_0

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    .line 135
    :cond_0
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verName:Ljava/lang/String;

    if-nez v0, :cond_1

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->verName:Ljava/lang/String;

    .line 136
    :cond_1
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verCode:Ljava/lang/String;

    if-nez v0, :cond_2

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->verCode:Ljava/lang/String;

    .line 137
    :cond_2
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    if-nez v0, :cond_3

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 138
    :cond_3
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    if-nez v0, :cond_4

    const-string v0, "0"

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    .line 139
    :cond_4
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    const-string v2, "1"

    if-nez v0, :cond_5

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    .line 140
    :cond_5
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    if-nez v0, :cond_6

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    .line 141
    :cond_6
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    if-nez v0, :cond_7

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    .line 142
    :cond_7
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    if-nez v0, :cond_8

    sput-object v1, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    .line 144
    :cond_8
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 145
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/f;

    const-string v1, "\u672a\u914d\u7f6e\u6709\u732b\u817b AppId"

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/feature/f;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/f;->a()Lcom/bianfeng/ymnsdk/feature/f;

    .line 152
    :cond_9
    return-void
.end method

.method public static getApkPath(Landroid/content/Context;)Ljava/lang/String;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 128
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    .line 129
    :catchall_0
    move-exception v0

    .line 130
    .local v0, "e":Ljava/lang/Throwable;
    const/4 v1, 0x0

    return-object v1
.end method

.method public static getAppId()Ljava/lang/String;
    .locals 1

    .line 167
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->appId:Ljava/lang/String;

    return-object v0
.end method

.method public static getAreaId()Ljava/lang/String;
    .locals 1

    .line 199
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    return-object v0
.end method

.method public static getChannelId()Ljava/lang/String;
    .locals 1

    .line 183
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    return-object v0
.end method

.method public static getClientType()Ljava/lang/String;
    .locals 1

    .line 231
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    return-object v0
.end method

.method public static getConfigId()Ljava/lang/String;
    .locals 1

    .line 215
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    return-object v0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 68
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->context:Landroid/content/Context;

    return-object v0
.end method

.method public static getGroupId()Ljava/lang/String;
    .locals 1

    .line 191
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    return-object v0
.end method

.method public static getHostUrl()Ljava/lang/String;
    .locals 1

    .line 223
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    return-object v0
.end method

.method public static getMainActivity()Ljava/lang/String;
    .locals 1

    .line 251
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->mainActivity:Ljava/lang/String;

    return-object v0
.end method

.method private static getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "metaData"    # Landroid/os/Bundle;
    .param p1, "key"    # Ljava/lang/String;

    .line 155
    if-eqz p0, :cond_1

    invoke-virtual {p0, p1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 156
    :cond_0
    invoke-virtual {p0, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 155
    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "key"    # Ljava/lang/String;

    .line 160
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    if-eqz v0, :cond_0

    .line 161
    invoke-static {v0, p0}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 163
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getPkgName()Ljava/lang/String;
    .locals 1

    .line 239
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    return-object v0
.end method

.method public static getProductId()Ljava/lang/String;
    .locals 1

    .line 207
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->productId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppId()Ljava/lang/String;
    .locals 1

    .line 175
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppKey()Ljava/lang/String;
    .locals 1

    .line 259
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppKey:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerCode()Ljava/lang/String;
    .locals 1

    .line 247
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verCode:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerName()Ljava/lang/String;
    .locals 1

    .line 243
    sget-object v0, Lcom/bianfeng/platform/executor/AppConfig;->verName:Ljava/lang/String;

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 6
    .param p0, "context"    # Landroid/content/Context;

    .line 73
    :try_start_0
    sget-boolean v0, Lcom/bianfeng/platform/executor/AppConfig;->inited:Z

    if-eqz v0, :cond_0

    .line 74
    return-void

    .line 76
    :cond_0
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/platform/executor/AppConfig;->inited:Z

    .line 78
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->context:Landroid/content/Context;

    .line 80
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    .line 82
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 87
    .local v0, "pm":Landroid/content/pm/PackageManager;
    sget-object v1, Lcom/bianfeng/platform/executor/AppConfig;->pkgName:Ljava/lang/String;

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v1

    .line 88
    .local v1, "ai":Landroid/content/pm/ApplicationInfo;
    iget-object v2, v1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    .line 89
    sget-object v2, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v3, "TD_APP_ID"

    invoke-static {v2, v3}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->appId:Ljava/lang/String;

    .line 90
    sget-object v2, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v3, "TD_SDK_APP_ID"

    invoke-static {v2, v3}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    .line 91
    invoke-static {p0}, Lcom/bianfeng/platform/executor/AppConfig;->getApkPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    .line 92
    .local v2, "apkPath":Ljava/lang/String;
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 93
    invoke-static {v2}, Lcom/bianfeng/afext/Afexter;->readChannel(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 94
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "channelId from afexter "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 96
    :cond_1
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v4, "TD_CHANNEL_ID"

    if-eqz v3, :cond_2

    .line 97
    :try_start_1
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 100
    :cond_2
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 101
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 103
    :cond_3
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 104
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "channel_id"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 106
    :cond_4
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "TD_GROUP_ID"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    .line 107
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "TD_CLIENT_TYPE"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    .line 108
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "TD_AREA_ID"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    .line 109
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "TD_PRODUCT_ID"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->productId:Ljava/lang/String;

    .line 110
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "TD_CONFIG_ID"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    .line 112
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "YMN_HOST_VER"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    .line 114
    sget-object v3, Lcom/bianfeng/platform/executor/AppConfig;->metaData:Landroid/os/Bundle;

    const-string v4, "MAIN_ACTIVITY"

    invoke-static {v3, v4}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Landroid/os/Bundle;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->mainActivity:Ljava/lang/String;

    .line 115
    const-string v3, "TD_SDK_APP_KEY"

    invoke-static {v3}, Lcom/bianfeng/platform/executor/AppConfig;->getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppKey:Ljava/lang/String;

    .line 116
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->check()V

    .line 118
    const-string v3, "debug"

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v3

    sput-boolean v3, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z

    .line 120
    const-string v3, "AppConfig"

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "debugMode is"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v5, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_1 .. :try_end_1} :catch_0

    .line 124
    nop

    .end local v0    # "pm":Landroid/content/pm/PackageManager;
    .end local v1    # "ai":Landroid/content/pm/ApplicationInfo;
    .end local v2    # "apkPath":Ljava/lang/String;
    goto :goto_0

    .line 122
    :catch_0
    move-exception v0

    .line 123
    .local v0, "e":Landroid/content/pm/PackageManager$NameNotFoundException;
    invoke-virtual {v0}, Landroid/content/pm/PackageManager$NameNotFoundException;->printStackTrace()V

    .line 125
    .end local v0    # "e":Landroid/content/pm/PackageManager$NameNotFoundException;
    :goto_0
    return-void
.end method

.method public static isDebug()Z
    .locals 1

    .line 263
    sget-boolean v0, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z

    return v0
.end method

.method public static setAppId(Ljava/lang/String;)V
    .locals 0
    .param p0, "appId"    # Ljava/lang/String;

    .line 171
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->appId:Ljava/lang/String;

    .line 172
    return-void
.end method

.method public static setAreaId(Ljava/lang/String;)V
    .locals 0
    .param p0, "areaId"    # Ljava/lang/String;

    .line 203
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->areaId:Ljava/lang/String;

    .line 204
    return-void
.end method

.method public static setChannelId(Ljava/lang/String;)V
    .locals 0
    .param p0, "channelId"    # Ljava/lang/String;

    .line 187
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->channelId:Ljava/lang/String;

    .line 188
    return-void
.end method

.method public static setClientType(Ljava/lang/String;)V
    .locals 0
    .param p0, "clientType"    # Ljava/lang/String;

    .line 235
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->clientType:Ljava/lang/String;

    .line 236
    return-void
.end method

.method public static setConfigId(Ljava/lang/String;)V
    .locals 0
    .param p0, "configId"    # Ljava/lang/String;

    .line 219
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->configId:Ljava/lang/String;

    .line 220
    return-void
.end method

.method public static setDebug(Z)V
    .locals 0
    .param p0, "debug"    # Z

    .line 255
    sput-boolean p0, Lcom/bianfeng/platform/executor/AppConfig;->debug:Z

    .line 256
    return-void
.end method

.method public static setGroupId(Ljava/lang/String;)V
    .locals 0
    .param p0, "groupId"    # Ljava/lang/String;

    .line 195
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->groupId:Ljava/lang/String;

    .line 196
    return-void
.end method

.method public static setHostUrl(Ljava/lang/String;)V
    .locals 0
    .param p0, "hostUrl"    # Ljava/lang/String;

    .line 227
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->hostUrl:Ljava/lang/String;

    .line 228
    return-void
.end method

.method public static setProductId(Ljava/lang/String;)V
    .locals 0
    .param p0, "productId"    # Ljava/lang/String;

    .line 211
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->productId:Ljava/lang/String;

    .line 212
    return-void
.end method

.method public static setSdkAppId(Ljava/lang/String;)V
    .locals 0
    .param p0, "sdkAppId"    # Ljava/lang/String;

    .line 179
    sput-object p0, Lcom/bianfeng/platform/executor/AppConfig;->sdkAppId:Ljava/lang/String;

    .line 180
    return-void
.end method
