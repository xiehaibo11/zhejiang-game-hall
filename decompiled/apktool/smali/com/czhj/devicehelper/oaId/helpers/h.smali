.class public Lcom/czhj/devicehelper/oaId/helpers/h;
.super Ljava/lang/Object;


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

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->a:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/h$1;

    invoke-direct {v0, p0}, Lcom/czhj/devicehelper/oaId/helpers/h$1;-><init>(Lcom/czhj/devicehelper/oaId/helpers/h;)V

    iput-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->b:Landroid/content/ServiceConnection;

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->c:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 4

    invoke-virtual {p0}, Lcom/czhj/devicehelper/oaId/helpers/h;->a()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "com.samsung.android.deviceidservice"

    const-string v2, "com.samsung.android.deviceidservice.DeviceIdService"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->b:Landroid/content/ServiceConnection;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v2, v3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    if-eqz v0, :cond_2

    :try_start_0
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->a:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    new-instance v1, Lcom/czhj/devicehelper/oaId/interfaces/f$a;

    invoke-direct {v1, v0}, Lcom/czhj/devicehelper/oaId/interfaces/f$a;-><init>(Landroid/os/IBinder;)V

    invoke-virtual {v1}, Lcom/czhj/devicehelper/oaId/interfaces/f$a;->a()Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_1

    invoke-interface {p1, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_1

    :catch_0
    move-exception p1

    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->c:Landroid/content/Context;

    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->b:Landroid/content/ServiceConnection;

    invoke-virtual {p1, v0}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    goto :goto_2

    :goto_1
    iget-object v0, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->c:Landroid/content/Context;

    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->b:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    throw p1

    :cond_2
    :goto_2
    return-void
.end method

.method public a()Z
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/devicehelper/oaId/helpers/h;->c:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "com.samsung.android.deviceidservice"

    invoke-virtual {v1, v2, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    const/4 v0, 0x1

    :catchall_0
    :cond_0
    return v0
.end method
