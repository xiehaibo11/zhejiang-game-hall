.class public Lcom/qihoo360/replugin/base/ThreadUtils;
.super Ljava/lang/Object;
.source "ThreadUtils.java"


# static fields
.field private static sHandler:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 35
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/qihoo360/replugin/base/ThreadUtils;->sHandler:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static syncToMainThread(Ljava/util/concurrent/Callable;I)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/concurrent/Callable<",
            "TT;>;I)TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    .line 48
    sget-object v0, Lcom/qihoo360/replugin/base/ThreadUtils;->sHandler:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 50
    invoke-interface {p0}, Ljava/util/concurrent/Callable;->call()Ljava/lang/Object;

    move-result-object p0

    return-object p0

    .line 54
    :cond_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/base/ThreadUtils;->syncToMainThreadByOthers(Ljava/util/concurrent/Callable;I)Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method private static syncToMainThreadByOthers(Ljava/util/concurrent/Callable;I)Ljava/lang/Object;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/util/concurrent/Callable<",
            "TT;>;I)TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    .line 59
    new-instance v0, Ljava/util/concurrent/atomic/AtomicReference;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicReference;-><init>()V

    .line 60
    new-instance v1, Ljava/util/concurrent/atomic/AtomicReference;

    invoke-direct {v1}, Ljava/util/concurrent/atomic/AtomicReference;-><init>()V

    .line 63
    new-instance v2, Ljava/util/concurrent/CountDownLatch;

    const/4 v3, 0x1

    invoke-direct {v2, v3}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    .line 66
    sget-object v3, Lcom/qihoo360/replugin/base/ThreadUtils;->sHandler:Landroid/os/Handler;

    new-instance v4, Lcom/qihoo360/replugin/base/ThreadUtils$1;

    invoke-direct {v4, v0, p0, v1, v2}, Lcom/qihoo360/replugin/base/ThreadUtils$1;-><init>(Ljava/util/concurrent/atomic/AtomicReference;Ljava/util/concurrent/Callable;Ljava/util/concurrent/atomic/AtomicReference;Ljava/util/concurrent/CountDownLatch;)V

    invoke-virtual {v3, v4}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    int-to-long p0, p1

    .line 79
    :try_start_0
    sget-object v3, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v2, p0, p1, v3}, Ljava/util/concurrent/CountDownLatch;->await(JLjava/util/concurrent/TimeUnit;)Z
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 85
    :catch_0
    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Throwable;

    if-nez p0, :cond_0

    .line 91
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicReference;->get()Ljava/lang/Object;

    move-result-object p0

    return-object p0

    .line 87
    :cond_0
    throw p0
.end method
