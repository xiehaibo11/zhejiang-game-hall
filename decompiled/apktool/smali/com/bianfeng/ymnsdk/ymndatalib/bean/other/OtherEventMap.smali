.class public Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;
.super Ljava/lang/Object;
.source "OtherEventMap.java"


# static fields
.field public static final key:Ljava/lang/String; = "ymn_app_install"

.field public static volatile otherEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->otherEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->otherEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->otherEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

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
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;->otherEventMap:Lcom/bianfeng/ymnsdk/ymndatalib/bean/other/OtherEventMap;

    return-object v0
.end method


# virtual methods
.method public appInstall()V
    .locals 5

    .line 1
    const-string v0, "ymn_app_install"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 4
    :try_start_0
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V

    .line 5
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    new-instance v2, Lcom/bianfeng/ymnsdk/ymndatalib/c;

    invoke-direct {v2}, Lcom/bianfeng/ymnsdk/ymndatalib/c;-><init>()V

    const/16 v3, 0x13ec

    const-string v4, "app_install"

    invoke-direct {v1, v2, v3, v4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;)V

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    :cond_0
    :goto_0
    return-void
.end method

.method public appOnDestroy()V
    .locals 5

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    new-instance v2, Lcom/bianfeng/ymnsdk/ymndatalib/c;

    invoke-direct {v2}, Lcom/bianfeng/ymnsdk/ymndatalib/c;-><init>()V

    const/16 v3, 0x1453

    const-string v4, "app_destroy"

    invoke-direct {v1, v2, v3, v4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;)V

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public appOnPaues()V
    .locals 5

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    new-instance v2, Lcom/bianfeng/ymnsdk/ymndatalib/c;

    invoke-direct {v2}, Lcom/bianfeng/ymnsdk/ymndatalib/c;-><init>()V

    const/16 v3, 0x1452

    const-string v4, "app_paues"

    invoke-direct {v1, v2, v3, v4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;)V

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public appOnResume()V
    .locals 5

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    new-instance v2, Lcom/bianfeng/ymnsdk/ymndatalib/c;

    invoke-direct {v2}, Lcom/bianfeng/ymnsdk/ymndatalib/c;-><init>()V

    const/16 v3, 0x1451

    const-string v4, "app_resume"

    invoke-direct {v1, v2, v3, v4}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;)V

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public appStart()V
    .locals 4

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/c;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/c;-><init>()V

    const/16 v2, 0x1450

    const-string v3, "app_launch"

    invoke-direct {v0, v1, v2, v3}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;)V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->toString()Ljava/lang/String;

    move-result-object v0

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public appStart(Landroid/content/Context;)V
    .locals 4

    .line 4
    new-instance v0, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/c;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/c;-><init>()V

    const/16 v2, 0x1450

    const-string v3, "app_launch"

    invoke-direct {v0, v1, v2, v3, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/c;ILjava/lang/String;Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/InitEvent;->toString()Ljava/lang/String;

    move-result-object p1

    .line 6
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public initSdkReturn(ILjava/lang/String;)V
    .locals 3

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a()Lcom/bianfeng/ymnsdk/ymndatalib/f;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;

    new-instance v2, Lcom/bianfeng/ymnsdk/ymndatalib/a;

    invoke-direct {v2, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/a;-><init>(ILjava/lang/String;)V

    const/16 p1, 0x2ee1

    const-string p2, "init_sdk_return"

    invoke-direct {v1, v2, p1, p2}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;-><init>(Lcom/bianfeng/ymnsdk/ymndatalib/a;ILjava/lang/String;)V

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/ymndatalib/bean/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/ymndatalib/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method public postPermissionEvent(Landroid/content/Context;)V
    .locals 0

    return-void
.end method
