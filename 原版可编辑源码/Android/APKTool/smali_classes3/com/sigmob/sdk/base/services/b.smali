.class public Lcom/sigmob/sdk/base/services/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/services/j$a;


# instance fields
.field a:Lcom/sigmob/sdk/base/services/a;

.field b:Lcom/sigmob/sdk/base/services/k;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->b:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/b;->b:Lcom/sigmob/sdk/base/services/k;

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/b;->a:Lcom/sigmob/sdk/base/services/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/base/services/a;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/services/a;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/b;->a:Lcom/sigmob/sdk/base/services/a;

    :cond_0
    return-void
.end method

.method public static a()V
    .locals 0

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/services/b;->g()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method static synthetic c(Landroid/content/Context;)Ljava/util/List;
    .locals 0

    invoke-static {p0}, Lcom/sigmob/sdk/base/services/b;->e(Landroid/content/Context;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method private static d(Landroid/content/Context;)Z
    .locals 3

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    new-instance p0, Ljava/util/Date;

    invoke-direct {p0}, Ljava/util/Date;-><init>()V

    sget-object v0, Lcom/czhj/sdk/common/Constants;->sdf:Ljava/text/SimpleDateFormat;

    invoke-virtual {v0, p0}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "BuriedPointConfig"

    invoke-static {v0}, Lcom/sigmob/sdk/base/utils/c;->a(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "last_day"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method private static e(Landroid/content/Context;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/List<",
            "Landroid/content/pm/PackageInfo;",
            ">;"
        }
    .end annotation

    :try_start_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/AppPackageUtil;->getPackageManager(Landroid/content/Context;)Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Landroid/content/pm/PackageManager;->getInstalledPackages(I)Ljava/util/List;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static f()V
    .locals 3

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/base/services/b;->d(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/base/services/b$1;

    invoke-direct {v2, v0}, Lcom/sigmob/sdk/base/services/b$1;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v2}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->submit(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static g()V
    .locals 2

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->i()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->H()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/services/b;->f()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "BuriedPointManager getInstance"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;)V
    .locals 3

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.intent.action.INSTALL_PACKAGE"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1b

    if-lt v1, v2, :cond_0

    const-string v1, "android.intent.action.INSTALL_FAILURE"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    :cond_0
    const-string v1, "android.intent.action.PACKAGE_ADDED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.PACKAGE_REMOVED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.PACKAGE_REPLACED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "package"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.intent.action.DOWNLOAD_COMPLETE"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/services/b;->a:Lcom/sigmob/sdk/base/services/a;

    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    return-void
.end method

.method public b(Landroid/content/Context;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/b;->a:Lcom/sigmob/sdk/base/services/a;

    invoke-virtual {p1, v0}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    return-void
.end method

.method public b()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/b;->b:Lcom/sigmob/sdk/base/services/k;

    sget-object v1, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    if-eq v0, v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/services/b;->a(Landroid/content/Context;)V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/b;->b:Lcom/sigmob/sdk/base/services/k;

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public c()Lcom/sigmob/sdk/base/services/k;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/b;->b:Lcom/sigmob/sdk/base/services/k;

    return-object v0
.end method

.method public d()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/services/b;->b:Lcom/sigmob/sdk/base/services/k;

    sget-object v1, Lcom/sigmob/sdk/base/services/k;->a:Lcom/sigmob/sdk/base/services/k;

    if-ne v0, v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/services/b;->b(Landroid/content/Context;)V

    sget-object v0, Lcom/sigmob/sdk/base/services/k;->b:Lcom/sigmob/sdk/base/services/k;

    iput-object v0, p0, Lcom/sigmob/sdk/base/services/b;->b:Lcom/sigmob/sdk/base/services/k;

    :cond_0
    return-void
.end method

.method public e()Ljava/lang/Error;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
