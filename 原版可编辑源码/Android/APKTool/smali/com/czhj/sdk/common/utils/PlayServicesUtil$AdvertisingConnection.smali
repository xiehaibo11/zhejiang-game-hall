.class final Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/utils/PlayServicesUtil;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "AdvertisingConnection"
.end annotation


# instance fields
.field a:Z

.field private final b:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;->a:Z

    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    return-void
.end method

.method synthetic constructor <init>(Lcom/czhj/sdk/common/utils/PlayServicesUtil$1;)V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;-><init>()V

    return-void
.end method


# virtual methods
.method a()Landroid/os/IBinder;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;->a:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;->a:Z

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0
.end method

.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingConnection;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
