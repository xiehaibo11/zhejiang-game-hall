.class public Lcom/sigmob/sdk/base/common/ad;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/sigmob/sdk/base/common/ad;


# instance fields
.field private b:Landroid/os/HandlerThread;

.field private c:Landroid/os/Handler;


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "SigmobHandler"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/ad;->b:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    new-instance v0, Landroid/os/Handler;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ad;->b:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/ad;->c:Landroid/os/Handler;

    return-void
.end method

.method public static a()Lcom/sigmob/sdk/base/common/ad;
    .locals 2

    const-class v0, Lcom/sigmob/sdk/base/common/ad;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/base/common/ad;->a:Lcom/sigmob/sdk/base/common/ad;

    if-nez v1, :cond_0

    new-instance v1, Lcom/sigmob/sdk/base/common/ad;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/common/ad;-><init>()V

    sput-object v1, Lcom/sigmob/sdk/base/common/ad;->a:Lcom/sigmob/sdk/base/common/ad;

    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    sget-object v0, Lcom/sigmob/sdk/base/common/ad;->a:Lcom/sigmob/sdk/base/common/ad;

    return-object v0

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method


# virtual methods
.method public final a(Ljava/lang/Runnable;)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/ad;->c:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    move-result p1

    return p1
.end method
