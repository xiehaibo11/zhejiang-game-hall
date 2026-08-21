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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static check()V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    const-string v1, ""

    if-nez v0, :cond_0

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    .line 2
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    if-nez v0, :cond_1

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    .line 3
    :cond_1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    if-nez v0, :cond_2

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    .line 4
    :cond_2
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    if-nez v0, :cond_3

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    .line 5
    :cond_3
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    if-nez v0, :cond_4

    const-string v0, "0"

    sput-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    .line 6
    :cond_4
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    const-string v2, "1"

    if-nez v0, :cond_5

    sput-object v2, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    .line 7
    :cond_5
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    if-nez v0, :cond_6

    sput-object v2, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    .line 8
    :cond_6
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    if-nez v0, :cond_7

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    .line 10
    :cond_7
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 11
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/f;

    const-string v1, "\u672a\u914d\u7f6e\u6709\u732b\u817b AppId"

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/feature/f;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/feature/f;)Lcom/bianfeng/ymnsdk/feature/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/f;->a()Lcom/bianfeng/ymnsdk/feature/f;

    :cond_8
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

.method public static getAppId()I
    .locals 1

    .line 1
    sget v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->appId:I

    return v0
.end method

.method public static getAreaId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    return-object v0
.end method

.method public static getChannelId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    return-object v0
.end method

.method public static getChannelIdInt()I
    .locals 1

    .line 1
    :try_start_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    const/4 v0, 0x0

    return v0
.end method

.method public static getClientType()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    return-object v0
.end method

.method public static getConfigId()I
    .locals 1

    .line 1
    sget v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->configId:I

    return v0
.end method

.method public static getConfigIdStr()Ljava/lang/String;
    .locals 2

    .line 1
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

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->datafunUrl:Ljava/lang/String;

    return-object v0
.end method

.method public static getGroupId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    return-object v0
.end method

.method public static getHostUrl()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    return-object v0
.end method

.method public static getMainActivity()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->mainActivity:Ljava/lang/String;

    return-object v0
.end method

.method public static getMetaDataValueInt(Ljava/lang/String;)I
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    const/4 p0, 0x0

    return p0
.end method

.method public static getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, ""

    return-object p0
.end method

.method public static getPkgName()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    return-object v0
.end method

.method public static getProductId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->productId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppId()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    return-object v0
.end method

.method public static getSdkAppKey()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppKey:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerCode()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    return-object v0
.end method

.method public static getVerName()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 1
    sget-boolean p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->inited:Z

    if-eqz p0, :cond_0

    return-void

    :cond_0
    const/4 p0, 0x1

    .line 4
    sput-boolean p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->inited:Z

    .line 5
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getPkgName()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->pkgName:Ljava/lang/String;

    .line 6
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verName:Ljava/lang/String;

    .line 7
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerCode()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->verCode:Ljava/lang/String;

    .line 8
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result p0

    sput p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->appId:I

    const-string p0, "TD_SDK_APP_ID"

    .line 9
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    .line 10
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getIdentify_id()I

    move-result p0

    sput p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->configId:I

    .line 11
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getDeviceType()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->clientType:Ljava/lang/String;

    .line 12
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getChannelId()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->channelId:Ljava/lang/String;

    const-string p0, "TD_GROUP_ID"

    .line 13
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    const-string p0, "TD_AREA_ID"

    .line 14
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->areaId:Ljava/lang/String;

    const-string p0, "TD_PRODUCT_ID"

    .line 15
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->productId:Ljava/lang/String;

    const-string p0, "YMN_HOST_VER"

    .line 17
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->hostUrl:Ljava/lang/String;

    const-string p0, "KEY_DATAFUN_HOST"

    .line 18
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->datafunUrl:Ljava/lang/String;

    const-string p0, "MAIN_ACTIVITY"

    .line 19
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->mainActivity:Ljava/lang/String;

    const-string p0, "TD_SDK_APP_KEY"

    .line 20
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppKey:Ljava/lang/String;

    .line 21
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->check()V

    return-void
.end method

.method public static isDebug()Z
    .locals 2

    const-string v0, "debug"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v0

    sput-boolean v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->debug:Z

    .line 2
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

    .line 3
    sget-boolean v0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->debug:Z

    return v0
.end method

.method public static setAppId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppId:Ljava/lang/String;

    return-void
.end method

.method public static setConfigId(I)V
    .locals 0

    .line 1
    sput p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->configId:I

    return-void
.end method

.method public static setGroupId(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->groupId:Ljava/lang/String;

    return-void
.end method

.method public static setSdkAppKey(Ljava/lang/String;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->sdkAppKey:Ljava/lang/String;

    return-void
.end method
