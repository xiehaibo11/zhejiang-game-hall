.class public Lcom/bianfeng/ymnsdk/util/YmnAppContext;
.super Ljava/lang/Object;
.source "YmnAppContext.java"


# static fields
.field private static final KEY_AREA_ID:Ljava/lang/String; = "TD_AREA_ID"

.field private static final KEY_CHANNEL_ID:Ljava/lang/String; = "TD_CHANNEL_ID"

.field private static final KEY_CHANNEL_ID_FIX:Ljava/lang/String; = "channel_id"

.field private static final KEY_DATAFUN_URL:Ljava/lang/String; = "KEY_DATAFUN_HOST"

.field private static final KEY_GROUP_ID:Ljava/lang/String; = "TD_GROUP_ID"

.field private static final KEY_HOST_URL:Ljava/lang/String; = "YMN_HOST_VER"

.field private static final KEY_MAIN_ACTIVITY:Ljava/lang/String; = "MAIN_ACTIVITY"

.field private static final KEY_PRODUCT_ID:Ljava/lang/String; = "TD_PRODUCT_ID"

.field private static final KEY_SDK_APP_ID:Ljava/lang/String; = "TD_SDK_APP_ID"

.field public static final SIGN_APP_SECREAT:Ljava/lang/String; = "c986f7b40c468a3a3b1087d0eb08628b"

.field private static final TAG:Ljava/lang/String; = "YmnAppContext"

.field private static final TD_SDK_APP_KEY:Ljava/lang/String; = "TD_SDK_APP_KEY"

.field private static appId:I

.field private static areaId:Ljava/lang/String;

.field private static channelId:Ljava/lang/String;

.field private static clientType:Ljava/lang/String;

.field private static configId:I

.field private static datafunUrl:Ljava/lang/String;

.field private static debug:Z

.field private static groupId:Ljava/lang/String;

.field private static hostUrl:Ljava/lang/String;

.field private static volatile inited:Z

.field private static mainActivity:Ljava/lang/String;

.field private static pkgName:Ljava/lang/String;

.field private static productId:Ljava/lang/String;

.field private static sdkAppId:Ljava/lang/String;

.field private static sdkAppKey:Ljava/lang/String;

.field private static verCode:Ljava/lang/String;

.field private static verName:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static check()V
    .locals 3

    .line 100
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    const-string v1, ""

    if-nez v0, :cond_0

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    .line 101
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    if-nez v0, :cond_1

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    .line 102
    :cond_1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    if-nez v0, :cond_2

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    .line 103
    :cond_2
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    if-nez v0, :cond_3

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    .line 104
    :cond_3
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    if-nez v0, :cond_4

    const-string v0, "0"

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    .line 105
    :cond_4
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    const-string v2, "1"

    if-nez v0, :cond_5

    sput-object v2, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    .line 106
    :cond_5
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    if-nez v0, :cond_6

    sput-object v2, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    .line 107
    :cond_6
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    if-nez v0, :cond_7

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    .line 109
    :cond_7
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 110
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/f;

    const-string v1, "\u672a\u914d\u7f6e\u6709\u732b\u817b AppId"

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/feature/f;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/f;->a()Lcom/bianfeng/ymnsdk/feature/f;

    .line 112
    :cond_8
    return-void
.end method

.method public static getApkPath(Landroid/content/Context;)Ljava/lang/String;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 93
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    .line 94
    :catchall_0
    move-exception v0

    .line 95
    .local v0, "e":Ljava/lang/Throwable;
    const/4 v1, 0x0

    return-object v1
.end method

.method public static getAppId()I
    .locals 1

    .line 132
    sget v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->appId:I

    return v0
.end method

.method public static getAreaId()Ljava/lang/String;
    .locals 1

    .line 158
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    return-object v0
.end method

.method public static getChannelId()Ljava/lang/String;
    .locals 1

    .line 141
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    return-object v0
.end method

.method public static getChannelIdInt()I
    .locals 2

    .line 146
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 147
    :catch_0
    move-exception v0

    .line 148
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, 0x0

    return v1
.end method

.method public static getClientType()Ljava/lang/String;
    .locals 1

    .line 181
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    return-object v0
.end method

.method public static getConfigId()I
    .locals 1

    .line 168
    sget v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->configId:I

    return v0
.end method

.method public static getConfigIdStr()Ljava/lang/String;
    .locals 2

    .line 172
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->configId:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDataFunUrl()Ljava/lang/String;
    .locals 1

    .line 212
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->datafunUrl:Ljava/lang/String;

    return-object v0
.end method

.method public static getGroupId()Ljava/lang/String;
    .locals 1

    .line 153
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    return-object v0
.end method

.method public static getHostUrl()Ljava/lang/String;
    .locals 1

    .line 176
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    return-object v0
.end method

.method public static getMainActivity()Ljava/lang/String;
    .locals 1

    .line 198
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->mainActivity:Ljava/lang/String;

    return-object v0
.end method

.method public static getMetaDataValueInt(Ljava/lang/String;)I
    .locals 2
    .param p0, "key"    # Ljava/lang/String;

    .line 23
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 24
    :catch_0
    move-exception v0

    .line 25
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, 0x0

    return v1
.end method

.method public static getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "key"    # Ljava/lang/String;

    .line 15
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 16
    :catch_0
    move-exception v0

    .line 17
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, ""

    return-object v1
.end method

.method public static getPkgName()Ljava/lang/String;
    .locals 1

    .line 186
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    return-object v0
.end method

.method public static getProductId()Ljava/lang/String;
    .locals 1

    .line 163
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->productId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppId()Ljava/lang/String;
    .locals 1

    .line 137
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppKey()Ljava/lang/String;
    .locals 1

    .line 202
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppKey:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerCode()Ljava/lang/String;
    .locals 1

    .line 194
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerName()Ljava/lang/String;
    .locals 1

    .line 190
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 68
    sget-boolean v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->inited:Z

    if-eqz v0, :cond_0

    .line 69
    return-void

    .line 71
    :cond_0
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->inited:Z

    .line 72
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getPkgName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    .line 73
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    .line 74
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerCode()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    .line 75
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v0

    sput v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->appId:I

    .line 76
    const-string v0, "TD_SDK_APP_ID"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    .line 77
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getIdentify_id()I

    move-result v0

    sput v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->configId:I

    .line 78
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getDeviceType()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    .line 79
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getChannelId()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    .line 80
    const-string v0, "TD_GROUP_ID"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    .line 81
    const-string v0, "TD_AREA_ID"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    .line 82
    const-string v0, "TD_PRODUCT_ID"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->productId:Ljava/lang/String;

    .line 84
    const-string v0, "YMN_HOST_VER"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    .line 85
    const-string v0, "KEY_DATAFUN_HOST"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->datafunUrl:Ljava/lang/String;

    .line 86
    const-string v0, "MAIN_ACTIVITY"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->mainActivity:Ljava/lang/String;

    .line 87
    const-string v0, "TD_SDK_APP_KEY"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppKey:Ljava/lang/String;

    .line 88
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->check()V

    .line 89
    return-void
.end method

.method public static isDebug()Z
    .locals 2

    .line 206
    const-string v0, "debug"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v0

    sput-boolean v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->debug:Z

    .line 207
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "debugMode is"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->debug:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YmnAppContext"

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 208
    sget-boolean v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->debug:Z

    return v0
.end method

.method public static setAppId(Ljava/lang/String;)V
    .locals 0
    .param p0, "sdkAppId"    # Ljava/lang/String;

    .line 115
    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    .line 116
    return-void
.end method

.method public static setConfigId(I)V
    .locals 0
    .param p0, "configId"    # I

    .line 128
    sput p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->configId:I

    .line 129
    return-void
.end method

.method public static setGroupId(Ljava/lang/String;)V
    .locals 0
    .param p0, "groupId"    # Ljava/lang/String;

    .line 119
    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    .line 120
    return-void
.end method

.method public static setSdkAppKey(Ljava/lang/String;)V
    .locals 0
    .param p0, "sdkAppKey"    # Ljava/lang/String;

    .line 124
    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppKey:Ljava/lang/String;

    .line 125
    return-void
.end method
