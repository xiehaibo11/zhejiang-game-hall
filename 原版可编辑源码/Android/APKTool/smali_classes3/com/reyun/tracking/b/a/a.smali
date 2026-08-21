.class public Lcom/reyun/tracking/b/a/a;
.super Ljava/lang/Object;


# instance fields
.field public final a:Ljava/util/concurrent/LinkedBlockingQueue;

.field b:Landroid/content/ServiceConnection;

.field private c:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/reyun/tracking/b/a/a;->a:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v0, Lcom/reyun/tracking/b/a/b;

    invoke-direct {v0, p0}, Lcom/reyun/tracking/b/a/b;-><init>(Lcom/reyun/tracking/b/a/a;)V

    iput-object v0, p0, Lcom/reyun/tracking/b/a/a;->b:Landroid/content/ServiceConnection;

    iput-object p1, p0, Lcom/reyun/tracking/b/a/a;->c:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public a(Lcom/reyun/tracking/b/d;)V
    .locals 5

    const-string v0, "com.asus.msa.SupplementaryDID"

    const/4 v1, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/reyun/tracking/b/a/a;->c:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-string v3, "com.asus.msa.action.ACCESS_DID"

    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    new-instance v3, Landroid/content/ComponentName;

    const-string v4, "com.asus.msa.SupplementaryDID.SupplementaryDIDService"

    invoke-direct {v3, v0, v4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    iget-object v0, p0, Lcom/reyun/tracking/b/a/a;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/reyun/tracking/b/a/a;->b:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_1
    iget-object v0, p0, Lcom/reyun/tracking/b/a/a;->a:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    new-instance v2, Lcom/reyun/tracking/b/b/b;

    invoke-direct {v2, v0}, Lcom/reyun/tracking/b/b/b;-><init>(Landroid/os/IBinder;)V

    invoke-virtual {v2}, Lcom/reyun/tracking/b/b/b;->a()Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_0

    invoke-interface {p1, v0, v1}, Lcom/reyun/tracking/b/d;->a(Ljava/lang/String;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_1
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_1
    return-void
.end method
