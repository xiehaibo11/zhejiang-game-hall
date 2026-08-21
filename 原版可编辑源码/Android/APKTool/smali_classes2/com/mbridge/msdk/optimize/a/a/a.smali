.class public final Lcom/mbridge/msdk/optimize/a/a/a;
.super Ljava/lang/Object;
.source "ASUSDeviceHelper.java"


# instance fields
.field public final a:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field

.field b:Landroid/content/ServiceConnection;

.field private c:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/a;->a:Ljava/util/concurrent/LinkedBlockingQueue;

    .line 60
    new-instance v0, Lcom/mbridge/msdk/optimize/a/a/a$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/a/a/a$1;-><init>(Lcom/mbridge/msdk/optimize/a/a/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/a;->b:Landroid/content/ServiceConnection;

    .line 23
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/a;->c:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/optimize/a/b;)V
    .locals 5

    const-string v0, "com.asus.msa.SupplementaryDID"

    const/4 v1, 0x0

    .line 28
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/optimize/a/a/a;->c:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 30
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 33
    :goto_0
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-string v3, "com.asus.msa.action.ACCESS_DID"

    .line 34
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 35
    new-instance v3, Landroid/content/ComponentName;

    const-string v4, "com.asus.msa.SupplementaryDID.SupplementaryDIDService"

    invoke-direct {v3, v0, v4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 36
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 39
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/a;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/optimize/a/a/a;->b:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v0, :cond_0

    .line 42
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/optimize/a/a/a;->a:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    .line 43
    new-instance v2, Lcom/mbridge/msdk/optimize/a/b/a$a;

    invoke-direct {v2, v0}, Lcom/mbridge/msdk/optimize/a/b/a$a;-><init>(Landroid/os/IBinder;)V

    .line 44
    invoke-virtual {v2}, Lcom/mbridge/msdk/optimize/a/b/a$a;->a()Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_0

    .line 47
    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/optimize/a/b;->a(Ljava/lang/String;Z)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 52
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_1
    move-exception p1

    .line 50
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p1

    .line 56
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_1
    return-void
.end method
