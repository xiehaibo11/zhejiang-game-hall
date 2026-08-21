.class public Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
.super Ljava/lang/Object;
.source "YmnDataFunUtils.java"


# static fields
.field private static volatile ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;
    .locals 2

    .line 27
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    if-nez v0, :cond_1

    .line 28
    const-class v0, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    monitor-enter v0

    .line 29
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    if-nez v1, :cond_0

    .line 30
    new-instance v1, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    .line 32
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 34
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->ymnDataFunUtils:Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    return-object v0
.end method


# virtual methods
.method public getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;
    .locals 1

    .line 565
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    return-object v0
.end method

.method public getChannelId()Ljava/lang/String;
    .locals 2

    .line 574
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelId()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 575
    :catch_0
    move-exception v0

    .line 576
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 577
    const-string v1, ""

    return-object v1
.end method

.method public getDeviceId()Ljava/lang/String;
    .locals 1

    .line 561
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getDeviceInfo()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;
    .locals 1

    .line 557
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object v0

    return-object v0
.end method

.method public getGroupId()Ljava/lang/String;
    .locals 2

    .line 584
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getGroupId()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 585
    :catch_0
    move-exception v0

    .line 586
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 587
    const-string v1, ""

    return-object v1
.end method

.method public getInitTrace()Ljava/lang/String;
    .locals 2

    .line 549
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 550
    :catch_0
    move-exception v0

    .line 551
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 552
    const-string v1, ""

    return-object v1
.end method

.method public getLoginTrace()Ljava/lang/String;
    .locals 2

    .line 531
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginTrace()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 532
    :catch_0
    move-exception v0

    .line 533
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 534
    const-string v1, ""

    return-object v1
.end method

.method public getPayTrace()Ljava/lang/String;
    .locals 2

    .line 541
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayTrace()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 542
    :catch_0
    move-exception v0

    .line 543
    .local v0, "e":Ljava/lang/Exception;
    const-string v1, ""

    return-object v1
.end method

.method public getPlatformUtils()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;
    .locals 1

    .line 569
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    return-object v0
.end method

.method public initActivity(Landroid/app/Activity;)V
    .locals 0
    .param p1, "activity"    # Landroid/app/Activity;

    .line 58
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onCreate(Landroid/content/Context;)V

    .line 59
    return-void
.end method

.method public initContext(Landroid/content/Context;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 38
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getPlatformUtils()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->getVersion()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->setYmnsdkVer(Ljava/lang/String;)V

    .line 39
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getDataFunUrl()Ljava/lang/String;

    move-result-object v0

    .line 40
    .local v0, "url":Ljava/lang/String;
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u4e0a\u629b\u7684url---"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 41
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 42
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->setPostUrl(Ljava/lang/String;)V

    .line 44
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onInit(Landroid/content/Context;)V

    .line 46
    return-void
.end method

.method public initLogin(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 5
    .param p1, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 62
    const/4 v0, 0x0

    .line 64
    .local v0, "platform_id":I
    :try_start_0
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 67
    goto :goto_0

    .line 65
    :catch_0
    move-exception v1

    .line 66
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 69
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v0, v2, v3}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->setLoginPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 72
    goto :goto_1

    .line 70
    :catch_1
    move-exception v1

    .line 71
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 73
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method public initSdkResturn(ILjava/lang/String;)V
    .locals 1
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 51
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->initSdkReturn(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 54
    goto :goto_0

    .line 52
    :catch_0
    move-exception v0

    .line 53
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 55
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "eventid"    # Ljava/lang/Integer;
    .param p2, "server_name"    # Ljava/lang/String;
    .param p3, "callmsg"    # Ljava/lang/String;

    .line 234
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 237
    goto :goto_0

    .line 235
    :catch_0
    move-exception v0

    .line 236
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 239
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1
    .param p1, "eventid"    # Ljava/lang/Integer;
    .param p2, "rst_code"    # Ljava/lang/Integer;
    .param p3, "rst_msg"    # Ljava/lang/String;

    .line 249
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 252
    goto :goto_0

    .line 250
    :catch_0
    move-exception v0

    .line 251
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 254
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginFinishEvent(ILjava/lang/String;)V
    .locals 2
    .param p1, "rst_code"    # I
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 264
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginFinishEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 267
    goto :goto_0

    .line 265
    :catch_0
    move-exception v0

    .line 266
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 269
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginNewRequest(Ljava/lang/String;)V
    .locals 1
    .param p1, "server_name"    # Ljava/lang/String;

    .line 124
    :try_start_0
    const-string v0, "YmnDataFunUtils loginNewRequest"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 125
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginNewRequestEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 128
    goto :goto_0

    .line 126
    :catch_0
    move-exception v0

    .line 127
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 130
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginNewResponseEvent(ILjava/lang/String;)V
    .locals 4
    .param p1, "rst_code"    # I
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 139
    const/16 v0, 0x76

    if-eq p1, v0, :cond_0

    const/16 v0, 0x77

    if-eq p1, v0, :cond_1

    goto :goto_0

    .line 141
    :cond_0
    const/4 p1, 0x0

    .line 144
    :cond_1
    :try_start_0
    const-string v0, "YmnDataFunUtils loginNewResponseEvent"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 145
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginNewResponseEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 148
    goto :goto_0

    .line 146
    :catch_0
    move-exception v0

    .line 147
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 152
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginOldRequestCheckEvent(Ljava/lang/String;)V
    .locals 2
    .param p1, "server_name"    # Ljava/lang/String;

    .line 201
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

    .line 203
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldRequestCheckEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 206
    goto :goto_0

    .line 204
    :catch_0
    move-exception v0

    .line 205
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 207
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginOldRequestEvent(Ljava/lang/String;)V
    .locals 1
    .param p1, "server_name"    # Ljava/lang/String;

    .line 162
    :try_start_0
    const-string v0, "YmnDataFunUtils loginOldRequestEvent"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 163
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldRequestEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 166
    goto :goto_0

    .line 164
    :catch_0
    move-exception v0

    .line 165
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 168
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 2
    .param p1, "rst_code"    # Ljava/lang/Integer;
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 216
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

    .line 219
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldResponseCheckEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 222
    goto :goto_0

    .line 220
    :catch_0
    move-exception v0

    .line 221
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 224
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginOldResponseEvent(ILjava/lang/String;)V
    .locals 4
    .param p1, "rst_code"    # I
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 179
    const-string v0, ""

    const/16 v1, 0x66

    if-eq p1, v1, :cond_0

    const/16 v1, 0x69

    if-eq p1, v1, :cond_1

    goto :goto_0

    .line 181
    :cond_0
    const/4 p1, 0x0

    .line 184
    :cond_1
    :try_start_0
    const-string v1, "YmnDataFunUtils loginOldResponseEvent"

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 185
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

    move-result-object v2

    invoke-virtual {v1, p1, v2, v0, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginOldResponseEvent(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 188
    goto :goto_0

    .line 186
    :catch_0
    move-exception v0

    .line 187
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 192
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginSdkReturn(ILjava/lang/String;)V
    .locals 2
    .param p1, "rst_code"    # I
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 101
    const/16 v0, 0x66

    if-eq p1, v0, :cond_0

    const/16 v0, 0x69

    if-eq p1, v0, :cond_1

    const/16 v0, 0x6a

    if-eq p1, v0, :cond_1

    goto :goto_0

    .line 103
    :cond_0
    const/4 p1, 0x0

    .line 107
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

    .line 108
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginSdkReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 111
    goto :goto_0

    .line 109
    :catch_0
    move-exception v0

    .line 110
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 114
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginStart()V
    .locals 1

    .line 79
    const-string v0, "YmnDataFunUtils loginStart"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 81
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginStartEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 84
    goto :goto_0

    .line 82
    :catch_0
    move-exception v0

    .line 83
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 85
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public loginStart(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 1
    .param p1, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 88
    const-string v0, "YmnDataFunUtils loginStart"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 89
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->initLogin(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 91
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->loginStartEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 94
    goto :goto_0

    .line 92
    :catch_0
    move-exception v0

    .line 93
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 95
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public onCreate(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 593
    :try_start_0
    const-string v0, "YmnDataFunUtils onCreate"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 597
    goto :goto_0

    .line 595
    :catch_0
    move-exception v0

    .line 596
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 598
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 622
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 624
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onDestroy()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 627
    goto :goto_0

    .line 625
    :catch_0
    move-exception v0

    .line 626
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 629
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_0
    :goto_0
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 612
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 614
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onPause()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 617
    goto :goto_0

    .line 615
    :catch_0
    move-exception v0

    .line 616
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 619
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_0
    :goto_0
    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0
    .param p1, "requestCode"    # I
    .param p2, "permissions"    # [Ljava/lang/String;
    .param p3, "grantResults"    # [I

    .line 637
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 601
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->isAgreeprivacy()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 603
    :try_start_0
    const-string v0, "YmnDataFunUtils onResume"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 604
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->onResume()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 607
    goto :goto_0

    .line 605
    :catch_0
    move-exception v0

    .line 606
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 609
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_0
    :goto_0
    return-void
.end method

.method public payCallSdk()V
    .locals 1

    .line 288
    const-string v0, "YmnDataFunUtils payCallSdk"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 290
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCallSdkEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 293
    goto :goto_0

    .line 291
    :catch_0
    move-exception v0

    .line 292
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 295
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "eventid"    # Ljava/lang/Integer;
    .param p2, "server_name"    # Ljava/lang/String;
    .param p3, "callmsg"    # Ljava/lang/String;

    .line 476
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 479
    goto :goto_0

    .line 477
    :catch_0
    move-exception v0

    .line 478
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 480
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "eventid"    # Ljava/lang/Integer;
    .param p2, "orderOn"    # Ljava/lang/String;
    .param p3, "server_name"    # Ljava/lang/String;
    .param p4, "callmsg"    # Ljava/lang/String;

    .line 491
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomCallEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 494
    goto :goto_0

    .line 492
    :catch_0
    move-exception v0

    .line 493
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 495
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1
    .param p1, "eventid"    # Ljava/lang/Integer;
    .param p2, "rst_code"    # Ljava/lang/Integer;
    .param p3, "rst_msg"    # Ljava/lang/String;

    .line 507
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 510
    goto :goto_0

    .line 508
    :catch_0
    move-exception v0

    .line 509
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 511
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1
    .param p1, "eventid"    # Ljava/lang/Integer;
    .param p2, "orderOn"    # Ljava/lang/String;
    .param p3, "rst_code"    # Ljava/lang/Integer;
    .param p4, "rst_msg"    # Ljava/lang/String;

    .line 523
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payCustomReturnEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 526
    goto :goto_0

    .line 524
    :catch_0
    move-exception v0

    .line 525
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 527
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payInit(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 5
    .param p1, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 273
    const/4 v0, 0x0

    .line 275
    .local v0, "platform_id":I
    :try_start_0
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move v0, v1

    .line 278
    goto :goto_0

    .line 276
    :catch_0
    move-exception v1

    .line 277
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 280
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v1

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getSdkVersion()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v0, v2, v3}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->setPayPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 283
    goto :goto_1

    .line 281
    :catch_1
    move-exception v1

    .line 282
    .restart local v1    # "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 285
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method public payRequestNotity(Ljava/lang/String;)V
    .locals 1
    .param p1, "server_name"    # Ljava/lang/String;

    .line 348
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestNotityEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 351
    goto :goto_0

    .line 349
    :catch_0
    move-exception v0

    .line 350
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 352
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payRequestNotity(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "server_name"    # Ljava/lang/String;
    .param p2, "orderOn"    # Ljava/lang/String;

    .line 362
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestNotityEvent(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 365
    goto :goto_0

    .line 363
    :catch_0
    move-exception v0

    .line 364
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 366
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payRequestOrder(Ljava/lang/String;)V
    .locals 2
    .param p1, "ser_name"    # Ljava/lang/String;

    .line 315
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnDataFunUtils payRequestOrder"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 317
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    const-string v1, ""

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestOrderEvent(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 320
    goto :goto_0

    .line 318
    :catch_0
    move-exception v0

    .line 319
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 322
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payRequestOrderListSdkEvent()V
    .locals 1

    .line 447
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payRequestOrderListSdkEvent()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 450
    goto :goto_0

    .line 448
    :catch_0
    move-exception v0

    .line 449
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 452
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payResponseNotity(ILjava/lang/String;)V
    .locals 4
    .param p1, "rst_code"    # I
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 375
    const/16 v0, 0xc8

    if-eq p1, v0, :cond_0

    const/16 v0, 0xc9

    if-eq p1, v0, :cond_1

    const/16 v0, 0xcb

    if-eq p1, v0, :cond_1

    goto :goto_0

    .line 377
    :cond_0
    const/4 p1, 0x0

    .line 381
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

    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseNotityEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 384
    goto :goto_0

    .line 382
    :catch_0
    move-exception v0

    .line 383
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 388
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payResponseNotity(ILjava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "rst_code"    # I
    .param p2, "orderOn"    # Ljava/lang/String;
    .param p3, "rst_msg"    # Ljava/lang/String;

    .line 397
    const/16 v0, 0xc8

    if-eq p1, v0, :cond_0

    const/16 v0, 0xc9

    if-eq p1, v0, :cond_1

    const/16 v0, 0xcb

    if-eq p1, v0, :cond_1

    goto :goto_0

    .line 399
    :cond_0
    const/4 p1, 0x0

    .line 403
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

    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, p2, v2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseNotityEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 406
    goto :goto_0

    .line 404
    :catch_0
    move-exception v0

    .line 405
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 410
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V
    .locals 4
    .param p1, "rst_code"    # I
    .param p2, "rst_msg"    # Ljava/lang/String;
    .param p3, "order_no"    # Ljava/lang/String;

    .line 326
    const/16 v0, 0xd4

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 328
    :pswitch_0
    const/4 p1, 0x0

    .line 333
    :cond_0
    :pswitch_1
    :try_start_0
    const-string v0, "YmnDataFunUtils payResponseOrder"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 334
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseOrderEvent(Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 337
    goto :goto_0

    .line 335
    :catch_0
    move-exception v0

    .line 336
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 340
    .end local v0    # "e":Ljava/lang/Exception;
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
    .param p1, "rst_code"    # Ljava/lang/Integer;
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 460
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->payResponseOrderListEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 463
    goto :goto_0

    .line 461
    :catch_0
    move-exception v0

    .line 462
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 465
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public paySdkOrderEvent(Ljava/lang/String;)V
    .locals 1
    .param p1, "msg"    # Ljava/lang/String;

    .line 419
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->paySdkOrderEvent(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 422
    goto :goto_0

    .line 420
    :catch_0
    move-exception v0

    .line 421
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 424
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public paySdkOrderReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    .locals 1
    .param p1, "rst_code"    # Ljava/lang/Integer;
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 435
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->paySdkOrderReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 438
    goto :goto_0

    .line 436
    :catch_0
    move-exception v0

    .line 437
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 440
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method public paySdkReturn(ILjava/lang/String;)V
    .locals 2
    .param p1, "rst_code"    # I
    .param p2, "rst_msg"    # Ljava/lang/String;

    .line 298
    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 300
    :pswitch_0
    const/4 p1, 0x0

    .line 305
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

    .line 306
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->paySdkReturnEvent(Ljava/lang/Integer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 309
    goto :goto_0

    .line 307
    :catch_0
    move-exception v0

    .line 308
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 312
    .end local v0    # "e":Ljava/lang/Exception;
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
    .param p1, "event_name"    # Ljava/lang/String;
    .param p2, "plugin_id"    # Ljava/lang/String;
    .param p3, "plugin_ver"    # Ljava/lang/String;
    .param p4, "sdk_ver"    # Ljava/lang/String;
    .param p5, "rst_code"    # I
    .param p6, "msg"    # Ljava/lang/String;

    .line 660
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPluginEvent()Lcom/bianfeng/ymnsdk/gongxiang/l;

    move-result-object v1

    const-string v8, ""

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move v6, p5

    move-object v7, p6

    invoke-virtual/range {v1 .. v8}, Lcom/bianfeng/ymnsdk/gongxiang/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 662
    goto :goto_0

    .line 661
    :catch_0
    move-exception v0

    .line 663
    :goto_0
    return-void
.end method

.method public pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7
    .param p1, "event_name"    # Ljava/lang/String;
    .param p2, "plugin_id"    # Ljava/lang/String;
    .param p3, "plugin_ver"    # Ljava/lang/String;
    .param p4, "sdk_ver"    # Ljava/lang/String;

    .line 642
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPluginEvent()Lcom/bianfeng/ymnsdk/gongxiang/l;

    move-result-object v1

    const-string v6, ""

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/ymnsdk/gongxiang/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 644
    goto :goto_0

    .line 643
    :catch_0
    move-exception v0

    .line 645
    :goto_0
    return-void
.end method

.method public pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 7
    .param p1, "event_name"    # Ljava/lang/String;
    .param p2, "plugin_id"    # Ljava/lang/String;
    .param p3, "plugin_ver"    # Ljava/lang/String;
    .param p4, "sdk_ver"    # Ljava/lang/String;
    .param p5, "obj"    # [Ljava/lang/Object;

    .line 649
    if-eqz p5, :cond_0

    :try_start_0
    array-length v0, p5

    if-eqz v0, :cond_0

    .line 650
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->getPluginEvent()Lcom/bianfeng/ymnsdk/gongxiang/l;

    move-result-object v1

    invoke-static {p5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-virtual/range {v1 .. v6}, Lcom/bianfeng/ymnsdk/gongxiang/l;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 652
    :cond_0
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->pluginStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 655
    :goto_0
    goto :goto_1

    .line 654
    :catch_0
    move-exception v0

    .line 656
    :goto_1
    return-void
.end method
