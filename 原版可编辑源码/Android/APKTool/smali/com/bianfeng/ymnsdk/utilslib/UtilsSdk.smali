.class public Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;
.super Ljava/lang/Object;
.source "UtilsSdk.java"


# static fields
.field private static volatile isFrist:Z

.field private static volatile isFristInitDeviceInfo:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAppPermissions(Landroid/content/Context;)Ljava/lang/String;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 72
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppPermissionUtils;->getList(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 73
    :catch_0
    move-exception v0

    .line 74
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, ""

    return-object v1
.end method

.method public static getDebugUrl()Ljava/lang/String;
    .locals 1

    .line 53
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getDebugUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDebugUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "key"    # Ljava/lang/String;

    .line 62
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getDebugUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;
    .locals 2

    .line 48
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;

    const-string v1, "getGsonUtils"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/Class;Ljava/lang/String;)I

    .line 49
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    .line 79
    const-string v0, "1.5.8"

    return-object v0
.end method

.method public static initContext(Landroid/content/Context;)V
    .locals 2
    .param p0, "context"    # Landroid/content/Context;

    .line 27
    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFrist:Z

    if-nez v0, :cond_0

    .line 28
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->init(Landroid/content/Context;)V

    .line 29
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->initDebugUrl()V

    .line 30
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    .line 31
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->updateState()V

    .line 32
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->init(Landroid/content/Context;)V

    .line 33
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->setContext(Landroid/content/Context;)V

    .line 34
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFrist:Z

    .line 36
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "UtilsSdk initContext: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFrist:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 37
    return-void
.end method

.method public static initDeviceInfo(Landroid/content/Context;)V
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 41
    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFristInitDeviceInfo:Z

    if-nez v0, :cond_0

    .line 42
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->init(Landroid/content/Context;)V

    .line 43
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFristInitDeviceInfo:Z

    .line 45
    :cond_0
    return-void
.end method
