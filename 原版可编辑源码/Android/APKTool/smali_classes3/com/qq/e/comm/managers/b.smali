.class public Lcom/qq/e/comm/managers/b;
.super Ljava/lang/Object;
.source ""

# interfaces
.implements Lcom/qq/e/comm/managers/IGDTAdManager;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qq/e/comm/managers/b$a;
    }
.end annotation


# static fields
.field public static final g:Ljava/util/concurrent/ExecutorService;


# instance fields
.field private volatile a:Ljava/lang/Boolean;

.field private volatile b:Z

.field private volatile c:Landroid/content/Context;

.field private volatile d:Lcom/qq/e/comm/managers/plugin/PM;

.field private volatile e:Lcom/qq/e/comm/managers/devtool/DevTools;

.field private volatile f:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    sput-object v0, Lcom/qq/e/comm/managers/b;->g:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/qq/e/comm/managers/b;->a:Ljava/lang/Boolean;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/qq/e/comm/managers/b;->b:Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/qq/e/comm/managers/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/qq/e/comm/managers/b;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/qq/e/comm/managers/b;)Lcom/qq/e/comm/managers/plugin/PM;
    .locals 0

    iget-object p0, p0, Lcom/qq/e/comm/managers/b;->d:Lcom/qq/e/comm/managers/plugin/PM;

    return-object p0
.end method

.method static synthetic a(Lcom/qq/e/comm/managers/b;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/qq/e/comm/managers/b;->b:Z

    return p1
.end method

.method public static b()Lcom/qq/e/comm/managers/b;
    .locals 1

    invoke-static {}, Lcom/qq/e/comm/managers/b$a;->a()Lcom/qq/e/comm/managers/b;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->f:Ljava/lang/String;

    return-object v0
.end method

.method declared-synchronized a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 3

    monitor-enter p0

    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xe

    const/4 v2, 0x0

    if-ge v0, v1, :cond_0

    const-string p1, "GDTADManager\u521d\u59cb\u5316\u9519\u8bef\uff0cSDK\u4e0d\u652f\u6301Android 4.0\u4ee5\u4e0b\u7248\u672c"

    invoke-static {p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    monitor-exit p0

    return v2

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->a:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    monitor-exit p0

    return v1

    :cond_1
    if-eqz p1, :cond_3

    :try_start_2
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-eqz v0, :cond_2

    goto :goto_0

    .line 1
    :cond_2
    :try_start_3
    iput-object p2, p0, Lcom/qq/e/comm/managers/b;->f:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/qq/e/comm/managers/b;->c:Landroid/content/Context;

    new-instance p1, Lcom/qq/e/comm/managers/plugin/PM;

    iget-object p2, p0, Lcom/qq/e/comm/managers/b;->c:Landroid/content/Context;

    const/4 v0, 0x0

    invoke-direct {p1, p2, v0}, Lcom/qq/e/comm/managers/plugin/PM;-><init>(Landroid/content/Context;Lcom/qq/e/comm/managers/plugin/f;)V

    iput-object p1, p0, Lcom/qq/e/comm/managers/b;->d:Lcom/qq/e/comm/managers/plugin/PM;

    sget-object p1, Lcom/qq/e/comm/managers/b;->g:Ljava/util/concurrent/ExecutorService;

    new-instance p2, Lcom/qq/e/comm/managers/a;

    invoke-direct {p2, p0}, Lcom/qq/e/comm/managers/a;-><init>(Lcom/qq/e/comm/managers/b;)V

    invoke-interface {p1, p2}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    .line 2
    sget-object p1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    iput-object p1, p0, Lcom/qq/e/comm/managers/b;->a:Ljava/lang/Boolean;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return v1

    :catchall_0
    move-exception p1

    :try_start_4
    const-string p2, "GDTADManager\u521d\u59cb\u5316\u9519\u8bef"

    invoke-static {p2, p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    monitor-exit p0

    return v2

    :cond_3
    :goto_0
    :try_start_5
    const-string p1, "GDTADManager\u521d\u59cb\u5316\u9519\u8bef\uff0ccontext\u548cappId\u4e0d\u80fd\u4e3a\u7a7a"

    invoke-static {p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    monitor-exit p0

    return v2

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public c()Lcom/qq/e/comm/managers/plugin/PM;
    .locals 1

    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->d:Lcom/qq/e/comm/managers/plugin/PM;

    return-object v0
.end method

.method public d()Z
    .locals 1

    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->a:Ljava/lang/Boolean;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->a:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    :goto_0
    const-string v0, "SDK \u5c1a\u672a\u521d\u59cb\u5316\uff0c\u8bf7\u5728 Application \u4e2d\u8c03\u7528 GDTAdSdk.init() \u521d\u59cb\u5316"

    invoke-static {v0}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;)V

    const/4 v0, 0x0

    return v0
.end method

.method public getBuyerId(Ljava/util/Map;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/qq/e/comm/managers/b;->d()Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->d:Lcom/qq/e/comm/managers/plugin/PM;

    invoke-virtual {v0}, Lcom/qq/e/comm/managers/plugin/PM;->getPOFactory()Lcom/qq/e/comm/pi/POFactory;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/qq/e/comm/pi/POFactory;->getBuyerId(Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    const-string v0, "SDK \u521d\u59cb\u5316\u5f02\u5e38"

    invoke-static {v0, p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-object v1
.end method

.method public getDevTools()Lcom/qq/e/comm/managers/devtool/DevTools;
    .locals 1

    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->e:Lcom/qq/e/comm/managers/devtool/DevTools;

    if-nez v0, :cond_0

    new-instance v0, Lcom/qq/e/comm/managers/devtool/DevTools;

    invoke-direct {v0}, Lcom/qq/e/comm/managers/devtool/DevTools;-><init>()V

    iput-object v0, p0, Lcom/qq/e/comm/managers/b;->e:Lcom/qq/e/comm/managers/devtool/DevTools;

    :cond_0
    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->e:Lcom/qq/e/comm/managers/devtool/DevTools;

    return-object v0
.end method

.method public getSDKInfo(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Lcom/qq/e/comm/managers/b;->d()Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->d:Lcom/qq/e/comm/managers/plugin/PM;

    invoke-virtual {v0}, Lcom/qq/e/comm/managers/plugin/PM;->getPOFactory()Lcom/qq/e/comm/pi/POFactory;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/qq/e/comm/pi/POFactory;->getSDKInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    const-string v0, "SDK \u521d\u59cb\u5316\u5f02\u5e38"

    invoke-static {v0, p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-object v1
.end method

.method public showOpenOrInstallAppDialog(Lcom/qq/e/ads/dfa/GDTAppDialogClickListener;)I
    .locals 2

    iget-boolean v0, p0, Lcom/qq/e/comm/managers/b;->b:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/qq/e/comm/managers/b;->d:Lcom/qq/e/comm/managers/plugin/PM;

    invoke-virtual {v0}, Lcom/qq/e/comm/managers/plugin/PM;->getPOFactory()Lcom/qq/e/comm/pi/POFactory;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/qq/e/comm/pi/POFactory;->showOpenOrInstallAppDialog(Lcom/qq/e/ads/dfa/GDTAppDialogClickListener;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    const-string v0, "SDK \u521d\u59cb\u5316\u5f02\u5e38"

    invoke-static {v0, p1}, Lcom/qq/e/comm/util/GDTLogger;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return v1
.end method
