.class public Lcom/reyun/tracking/b/a/n;
.super Ljava/lang/Object;


# instance fields
.field a:Landroid/content/Context;

.field b:Ljava/lang/String;

.field public final c:Ljava/util/concurrent/LinkedBlockingQueue;

.field d:Landroid/content/ServiceConnection;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "com.mdid.msa"

    iput-object v0, p0, Lcom/reyun/tracking/b/a/n;->b:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/reyun/tracking/b/a/n;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v0, Lcom/reyun/tracking/b/a/o;

    invoke-direct {v0, p0}, Lcom/reyun/tracking/b/a/o;-><init>(Lcom/reyun/tracking/b/a/n;)V

    iput-object v0, p0, Lcom/reyun/tracking/b/a/n;->d:Landroid/content/ServiceConnection;

    iput-object p1, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    return-void
.end method

.method private a()I
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    iget-object v2, p0, Lcom/reyun/tracking/b/a/n;->b:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return v0
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    invoke-direct {p0}, Lcom/reyun/tracking/b/a/n;->a()I

    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    iget-object v1, p0, Lcom/reyun/tracking/b/a/n;->b:Ljava/lang/String;

    const-string v2, "com.mdid.msa.service.MsaKlService"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "com.bun.msa.action.start.service"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "com.bun.msa.param.pkgname"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :try_start_0
    const-string p1, "com.bun.msa.param.runinset"

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    iget-object p1, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    invoke-virtual {p1, v0}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method


# virtual methods
.method public a(Lcom/reyun/tracking/b/d;)V
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    iget-object v2, p0, Lcom/reyun/tracking/b/a/n;->b:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    iget-object v1, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/reyun/tracking/b/a/n;->a(Ljava/lang/String;)V

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-string v3, "com.mdid.msa"

    const-string v4, "com.mdid.msa.service.MsaIdService"

    invoke-virtual {v2, v3, v4}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v3, "com.bun.msa.action.bindto.service"

    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v3, "com.bun.msa.param.pkgname"

    invoke-virtual {v2, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    iget-object v1, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/reyun/tracking/b/a/n;->d:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v1, v2, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v1

    if-eqz v1, :cond_1

    :try_start_1
    iget-object v1, p0, Lcom/reyun/tracking/b/a/n;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v1}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/IBinder;

    new-instance v2, Lcom/reyun/tracking/b/b/p;

    invoke-direct {v2, v1}, Lcom/reyun/tracking/b/b/p;-><init>(Landroid/os/IBinder;)V

    invoke-interface {v2}, Lcom/reyun/tracking/b/b/n;->a()Ljava/lang/String;

    move-result-object v1

    if-eqz p1, :cond_0

    invoke-interface {p1, v1, v0}, Lcom/reyun/tracking/b/d;->a(Ljava/lang/String;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_1
    move-exception p1

    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_0
    :goto_1
    iget-object p1, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/reyun/tracking/b/a/n;->d:Landroid/content/ServiceConnection;

    invoke-virtual {p1, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    goto :goto_3

    :goto_2
    iget-object v0, p0, Lcom/reyun/tracking/b/a/n;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/reyun/tracking/b/a/n;->d:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    throw p1

    :cond_1
    :goto_3
    return-void
.end method
