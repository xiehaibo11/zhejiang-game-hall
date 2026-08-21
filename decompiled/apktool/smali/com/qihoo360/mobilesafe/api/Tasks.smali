.class public final Lcom/qihoo360/mobilesafe/api/Tasks;
.super Ljava/lang/Object;
.source "Tasks.java"


# static fields
.field private static sLock:Ljava/lang/Object;

.field private static sMainHandler:Landroid/os/Handler;

.field private static sThreadHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 32
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sLock:Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final cancelTask(Ljava/lang/Runnable;)V
    .locals 1

    .line 58
    invoke-static {}, Lcom/qihoo360/mobilesafe/api/Tasks;->initThread()V

    .line 59
    sget-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sMainHandler:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static final cancelThreadTask(Ljava/lang/Runnable;)V
    .locals 1

    .line 86
    invoke-static {}, Lcom/qihoo360/mobilesafe/api/Tasks;->initThread()V

    .line 87
    sget-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sThreadHandler:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static final init()V
    .locals 2

    .line 94
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sMainHandler:Landroid/os/Handler;

    return-void
.end method

.method public static final init(Landroid/os/Handler;)V
    .locals 0

    .line 98
    sput-object p0, Lcom/qihoo360/mobilesafe/api/Tasks;->sMainHandler:Landroid/os/Handler;

    return-void
.end method

.method private static final initThread()V
    .locals 3

    .line 102
    sget-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sLock:Ljava/lang/Object;

    monitor-enter v0

    .line 103
    :try_start_0
    sget-object v1, Lcom/qihoo360/mobilesafe/api/Tasks;->sThreadHandler:Landroid/os/Handler;

    if-nez v1, :cond_0

    .line 104
    new-instance v1, Landroid/os/HandlerThread;

    const-string v2, "daemon-handler-thread"

    invoke-direct {v1, v2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    .line 105
    invoke-virtual {v1}, Landroid/os/HandlerThread;->start()V

    .line 106
    new-instance v2, Landroid/os/Handler;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v2, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v2, Lcom/qihoo360/mobilesafe/api/Tasks;->sThreadHandler:Landroid/os/Handler;

    .line 108
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public static final post2Thread(Ljava/lang/Runnable;)Z
    .locals 1

    .line 67
    invoke-static {}, Lcom/qihoo360/mobilesafe/api/Tasks;->initThread()V

    .line 68
    sget-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sThreadHandler:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    move-result p0

    return p0
.end method

.method public static final post2UI(Ljava/lang/Runnable;)Z
    .locals 1

    .line 41
    sget-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sMainHandler:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    move-result p0

    return p0
.end method

.method public static final postDelayed2Thread(Ljava/lang/Runnable;J)Z
    .locals 1

    .line 77
    invoke-static {}, Lcom/qihoo360/mobilesafe/api/Tasks;->initThread()V

    .line 78
    sget-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sThreadHandler:Landroid/os/Handler;

    invoke-virtual {v0, p0, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    move-result p0

    return p0
.end method

.method public static final postDelayed2UI(Ljava/lang/Runnable;J)Z
    .locals 1

    .line 50
    sget-object v0, Lcom/qihoo360/mobilesafe/api/Tasks;->sMainHandler:Landroid/os/Handler;

    invoke-virtual {v0, p0, p1, p2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    move-result p0

    return p0
.end method
