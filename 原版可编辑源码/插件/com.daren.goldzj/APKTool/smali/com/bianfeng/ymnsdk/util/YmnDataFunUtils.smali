.class public Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
.super Ljava/lang/Object;
.source "YmnDataFunUtils.java"


# static fields
.field private static volatile ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    return-object v0
.end method


# virtual methods
.method public getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    return-object v0
.end method

.method public getChannelId()Ljava/lang/String;
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelId()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getDeviceId()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    return-object v0
.end method

.method public getGroupId()Ljava/lang/String;
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getGroupId()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getInitTrace()Ljava/lang/String;
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getLoginTrace()Ljava/lang/String;
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginTrace()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getPayTrace()Ljava/lang/String;
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayTrace()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const-string v0, ""

    return-object v0
.end method

.method public getPlatformUtils()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    return-object v0
.end method

.method public initActivity(Landroid/app/Activity;)V
    .locals 0

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onCreate(Landroid/content/Context;)V

    return-void
.end method

.method public initContext(Landroid/content/Context;)V
    .locals 3

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getPlatformUtils()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->getVersion()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->setYmnsdkVer(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getDataFunUrl()Ljava/lang/String;

    move-result-object v0

    .line 3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4e0a\u629b\u7684url---"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 4
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 5
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->setPostUrl(Ljava/lang/String;)V

    .line 7
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onInit(Landroid/content/Context;)V

    return-void
.end method

.method public initLogin(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 4

    .line 1
    :try_start_0
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    .line 6
    :goto_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v0, v2, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->setLoginPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 8
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public loginCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginFinishEvent(ILjava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginFinishEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginNewRequest(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "YmnDataFunUtils loginNewRequest"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginNewRequestEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginNewResponseEvent(ILjava/lang/String;)V
    .locals 3

    const/16 v0, 0x76

    if-eq p1, v0, :cond_0

    const/16 v0, 0x77

    if-eq p1, v0, :cond_1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :cond_1
    :try_start_0
    const-string v0, "YmnDataFunUtils loginNewResponseEvent"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginNewResponseEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginOldRequestCheckEvent(Ljava/lang/String;)V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnDataFunUtils loginOldRequestCheckEvent|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldRequestCheckEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 5
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginOldRequestEvent(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    const-string v0, "YmnDataFunUtils loginOldRequestEvent"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldRequestEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnDataFunUtils loginOldResponseCheckEvent|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 4
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 6
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginOldResponseEvent(ILjava/lang/String;)V
    .locals 4

    const-string v0, ""

    const/16 v1, 0x66

    if-eq p1, v1, :cond_0

    const/16 v1, 0x69

    if-eq p1, v1, :cond_1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :cond_1
    :try_start_0
    const-string v1, "YmnDataFunUtils loginOldResponseEvent"

    .line 1
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2, v0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldResponseEvent(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginSdkReturn(ILjava/lang/String;)V
    .locals 2

    const/16 v0, 0x66

    if-eq p1, v0, :cond_0

    const/16 v0, 0x69

    if-eq p1, v0, :cond_1

    const/16 v0, 0x6a

    if-eq p1, v0, :cond_1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 1
    :cond_1
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnDataFunUtils loginSdkReturn"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginSdkReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginStart()V
    .locals 1

    const-string v0, "YmnDataFunUtils loginStart"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginStartEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public loginStart(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 1

    const-string v0, "YmnDataFunUtils loginStart"

    .line 6
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 7
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->initLogin(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 9
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginStartEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 11
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onCreate(Landroid/content/Context;)V
    .locals 0

    :try_start_0
    const-string p1, "YmnDataFunUtils onCreate"

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onDestroy()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 3
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onPause()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    return-void
.end method

.method public onResume()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    const-string v0, "YmnDataFunUtils onResume"

    .line 3
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onResume()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 6
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public payCallSdk()V
    .locals 1

    const-string v0, "YmnDataFunUtils payCallSdk"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCallSdkEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 4
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 6
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1

    .line 4
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 6
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payInit(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 4

    .line 1
    :try_start_0
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    .line 6
    :goto_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ""

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v0, v2, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->setPayPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 8
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public payRequestNotity(Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestNotityEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payRequestNotity(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 4
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestNotityEvent(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 6
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payRequestOrder(Ljava/lang/String;)V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnDataFunUtils payRequestOrder"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestOrderEvent(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 5
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payRequestOrderListSdkEvent()V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestOrderListSdkEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payResponseNotity(ILjava/lang/String;)V
    .locals 3

    const/16 v0, 0xc8

    if-eq p1, v0, :cond_0

    const/16 v0, 0xc9

    if-eq p1, v0, :cond_1

    const/16 v0, 0xcb

    if-eq p1, v0, :cond_1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 1
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseNotityEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payResponseNotity(ILjava/lang/String;Ljava/lang/String;)V
    .locals 3

    const/16 v0, 0xc8

    if-eq p1, v0, :cond_0

    const/16 v0, 0xc9

    if-eq p1, v0, :cond_1

    const/16 v0, 0xcb

    if-eq p1, v0, :cond_1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 4
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p2, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseNotityEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 6
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V
    .locals 3

    const/16 v0, 0xd4

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const/4 p1, 0x0

    :cond_0
    :pswitch_1
    :try_start_0
    const-string v0, "YmnDataFunUtils payResponseOrder"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseOrderEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0xc8
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method public payResponseOrderListEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseOrderListEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public paySdkOrderEvent(Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->paySdkOrderEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public paySdkOrderReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->paySdkOrderReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public paySdkReturn(ILjava/lang/String;)V
    .locals 2

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const/4 p1, 0x0

    .line 1
    :pswitch_1
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnDataFunUtils paySdkReturn"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->paySdkReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0xc8
        :pswitch_0
        :pswitch_1
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method public pluginFinish(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
    .locals 9

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPluginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/plugin/PluginEventMap;

    move-result-object v1

    const-string v8, ""

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move v6, p5

    move-object v7, p6

    invoke-virtual/range {v1 .. v8}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/plugin/PluginEventMap;->end(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPluginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/plugin/PluginEventMap;

    move-result-object v1

    const-string v6, ""

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/plugin/PluginEventMap;->start(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 7

    if-eqz p5, :cond_0

    .line 2
    :try_start_0
    array-length v0, p5

    if-eqz v0, :cond_0

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPluginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/plugin/PluginEventMap;

    move-result-object v1

    invoke-static {p5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/plugin/PluginEventMap;->start(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 5
    :cond_0
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :goto_0
    return-void
.end method
