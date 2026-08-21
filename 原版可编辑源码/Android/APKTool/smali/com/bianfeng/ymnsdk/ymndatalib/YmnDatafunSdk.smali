.class public Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;
.super Ljava/lang/Object;
.source "YmnDatafunSdk.java"


# static fields
.field public static volatile datafunSdk:Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;


# instance fields
.field public isInited:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->datafunSdk:Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    if-nez v0, :cond_0

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    monitor-enter v0

    .line 3
    :try_start_0
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->datafunSdk:Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    .line 4
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 6
    :cond_0
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->datafunSdk:Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;

    return-object v0
.end method


# virtual methods
.method public getInitTrace()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getOriginTrace()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getLoginEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/login/LoginEventMap;

    move-result-object v0

    return-object v0
.end method

.method public getLoginTrace()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getLoginTrace()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getOtherEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    move-result-object v0

    return-object v0
.end method

.method public getPayEvent()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/pay/PayEventMap;

    move-result-object v0

    return-object v0
.end method

.method public getPayTrace()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getPayTrace()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPlatformUtils()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    return-object v0
.end method

.method public getPluginEvent()Lcom/bianfeng/ymnsdk/gongxiang/l;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/gongxiang/l;->a()Lcom/bianfeng/ymnsdk/gongxiang/l;

    move-result-object v0

    return-object v0
.end method

.method public initSdkReturn(ILjava/lang/String;)V
    .locals 1

    .line 1
    const-string v0, "YmnDatafunSdk onResume"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->initSdkReturn(ILjava/lang/String;)V

    return-void
.end method

.method public onCreate()V
    .locals 1

    .line 1
    const-string v0, "YmnDatafunSdk onCreate"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    return-void
.end method

.method public onDestroy()V
    .locals 1

    .line 1
    const-string v0, "YmnDatafunSdk onDestroy"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->appOnDestroy()V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->isInited:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 2
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/YmnDatafunSdk;->isInited:Z

    .line 3
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    .line 4
    invoke-static {}, Lcom/bianfeng/datafunsdk/PostDatalib;->getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/PostDatalib;->init(Landroid/content/Context;)V

    .line 5
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->appInstall()V

    .line 6
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->b()Lcom/bianfeng/ymnsdk/ymndatalib/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/h;->a()V

    .line 8
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->appStart(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 1
    const-string v0, "YmnDatafunSdk onPause"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->appOnPaues()V

    return-void
.end method

.method public onRequestPermissionsResult(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public onResume()V
    .locals 1

    .line 1
    const-string v0, "YmnDatafunSdk onResume"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->appOnResume()V

    return-void
.end method

.method public setBaseVer(Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->setYmnsdkVer(Ljava/lang/String;)V

    return-void
.end method

.method public setLoginPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1
    const-string v0, "YmnDatafunSdk setLoginPlatformInfo"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->setLoginPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public setPayPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1
    const-string v0, "YmnDatafunSdk setPayPlatformInfo"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmnDatalibLogger;->i(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/TraceUtils;->getStartPayTrace()Ljava/lang/String;

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->setPayPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public setPostUrl(Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->b(Ljava/lang/String;)V

    return-void
.end method
