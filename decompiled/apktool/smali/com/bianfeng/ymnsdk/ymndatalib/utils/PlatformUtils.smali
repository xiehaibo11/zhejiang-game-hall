.class public Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;
.super Ljava/lang/Object;
.source "PlatformUtils.java"


# static fields
.field public static volatile utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;


# instance fields
.field public datafun_ver:Ljava/lang/String;

.field public login_platform_id:I

.field public login_sdk_plugin_ver:Ljava/lang/String;

.field public login_sdk_third_ver:Ljava/lang/String;

.field public pay_platform_id:I

.field public pay_sdk_plugin_ver:Ljava/lang/String;

.field public pay_sdk_third_ver:Ljava/lang/String;

.field public ymnsdk_ver:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_platform_id:I

    .line 3
    const-string v1, ""

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_sdk_third_ver:Ljava/lang/String;

    .line 4
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_sdk_plugin_ver:Ljava/lang/String;

    .line 6
    iput v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_platform_id:I

    .line 7
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_sdk_third_ver:Ljava/lang/String;

    .line 8
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_sdk_plugin_ver:Ljava/lang/String;

    .line 9
    const-string v0, "1.1.5"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->datafun_ver:Ljava/lang/String;

    .line 10
    iput-object v1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->ymnsdk_ver:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

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
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->utils:Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;

    return-object v0
.end method


# virtual methods
.method public getApk_ver()Ljava/lang/String;
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ver_name:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-ver_code:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerCode()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getApp_id()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v0

    return v0
.end method

.method public getDatafun_ver()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->datafun_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getIdentify_id()I
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getIdentify_id()I

    move-result v0

    return v0
.end method

.method public getLogin_Sdk_plugin_ver()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_sdk_plugin_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getLogin_platform_id()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_platform_id:I

    return v0
.end method

.method public getLogin_sdk_third_ver()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_sdk_third_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getPay_Sdk_plugin_ver()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_sdk_plugin_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getPay_platform_id()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_platform_id:I

    return v0
.end method

.method public getPay_sdk_third_ver()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_sdk_third_ver:Ljava/lang/String;

    return-object v0
.end method

.method public getYmnsdk_ver()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->ymnsdk_ver:Ljava/lang/String;

    return-object v0
.end method

.method public setLoginPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_platform_id:I

    .line 2
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_sdk_third_ver:Ljava/lang/String;

    .line 3
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->login_sdk_plugin_ver:Ljava/lang/String;

    return-void
.end method

.method public setPayPlatformInfo(ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_platform_id:I

    .line 2
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_sdk_third_ver:Ljava/lang/String;

    .line 3
    iput-object p3, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->pay_sdk_plugin_ver:Ljava/lang/String;

    return-void
.end method

.method public setYmnsdkVer(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/PlatformUtils;->ymnsdk_ver:Ljava/lang/String;

    return-void
.end method
