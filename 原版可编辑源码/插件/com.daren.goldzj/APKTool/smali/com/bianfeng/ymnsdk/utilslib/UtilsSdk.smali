.class public Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;
.super Ljava/lang/Object;
.source "UtilsSdk.java"


# static fields
.field private static volatile isFrist:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAppPermissions(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 63
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppPermissionUtils;->getList(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, ""

    return-object p0
.end method

.method public static getDebugUrl()Ljava/lang/String;
    .locals 1

    .line 44
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getDebugUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDebugUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 53
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getDebugUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;
    .locals 2

    .line 39
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;

    const-string v1, "getGsonUtils"

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/Class;Ljava/lang/String;)I

    .line 40
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.3.8"

    return-object v0
.end method

.method public static initContext(Landroid/content/Context;)V
    .locals 1

    .line 26
    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFrist:Z

    if-nez v0, :cond_0

    .line 27
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->init(Landroid/content/Context;)V

    .line 28
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/YmnDeubgUrlUtils;->initDebugUrl()V

    .line 29
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    .line 30
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->updateState()V

    .line 31
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->init(Landroid/content/Context;)V

    .line 32
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->init(Landroid/content/Context;)V

    const/4 p0, 0x1

    .line 33
    sput-boolean p0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFrist:Z

    .line 35
    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "UtilsSdk initContext: "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->isFrist:Z

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "ymnsdk"

    invoke-static {v0, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
