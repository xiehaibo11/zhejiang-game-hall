.class public final Lcom/mbridge/msdk/optimize/a/a/i;
.super Ljava/lang/Object;
.source "ZTEDeviceHelper.java"


# instance fields
.field a:Landroid/content/Context;

.field b:Ljava/lang/String;

.field public final c:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field

.field d:Landroid/content/ServiceConnection;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "com.mdid.msa"

    .line 19
    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/i;->b:Ljava/lang/String;

    .line 86
    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/i;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    .line 87
    new-instance v0, Lcom/mbridge/msdk/optimize/a/a/i$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/a/a/i$1;-><init>(Lcom/mbridge/msdk/optimize/a/a/i;)V

    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/i;->d:Landroid/content/ServiceConnection;

    .line 22
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    return-void
.end method

.method private a()I
    .locals 3

    const/4 v0, 0x0

    .line 28
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/a/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 31
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return v0
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/optimize/a/b;)V
    .locals 7

    const/4 v0, 0x0

    .line 56
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/a/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 58
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 60
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 1037
    invoke-direct {p0}, Lcom/mbridge/msdk/optimize/a/a/i;->a()I

    .line 1040
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    .line 1041
    iget-object v3, p0, Lcom/mbridge/msdk/optimize/a/a/i;->b:Ljava/lang/String;

    const-string v4, "com.mdid.msa.service.MsaKlService"

    invoke-virtual {v2, v3, v4}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v3, "com.bun.msa.action.start.service"

    .line 1042
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v3, "com.bun.msa.param.pkgname"

    .line 1043
    invoke-virtual {v2, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/4 v4, 0x1

    :try_start_1
    const-string v5, "com.bun.msa.param.runinset"

    .line 1045
    invoke-virtual {v2, v5, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1046
    iget-object v5, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    invoke-virtual {v5, v2}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v2

    .line 1050
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 63
    :goto_1
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-string v5, "com.mdid.msa"

    const-string v6, "com.mdid.msa.service.MsaIdService"

    .line 64
    invoke-virtual {v2, v5, v6}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v5, "com.bun.msa.action.bindto.service"

    .line 65
    invoke-virtual {v2, v5}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 66
    invoke-virtual {v2, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 67
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/optimize/a/a/i;->d:Landroid/content/ServiceConnection;

    invoke-virtual {v1, v2, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 70
    :try_start_2
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v1}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/IBinder;

    .line 71
    new-instance v2, Lcom/mbridge/msdk/optimize/a/b/f$a$a;

    invoke-direct {v2, v1}, Lcom/mbridge/msdk/optimize/a/b/f$a$a;-><init>(Landroid/os/IBinder;)V

    .line 72
    invoke-interface {v2}, Lcom/mbridge/msdk/optimize/a/b/f;->a()Ljava/lang/String;

    move-result-object v1

    if-eqz p1, :cond_0

    .line 75
    invoke-interface {p1, v1, v0}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;Z)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_3

    :catch_2
    move-exception p1

    .line 79
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 81
    :cond_0
    :goto_2
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/i;->d:Landroid/content/ServiceConnection;

    invoke-virtual {p1, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    goto :goto_4

    :goto_3
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/i;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/optimize/a/a/i;->d:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    .line 82
    throw p1

    :cond_1
    :goto_4
    return-void
.end method
