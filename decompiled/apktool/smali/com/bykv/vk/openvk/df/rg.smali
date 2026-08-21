.class public Lcom/bykv/vk/openvk/df/rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/df/rg$rg;
    }
.end annotation


# static fields
.field private static volatile df:Lcom/bykv/vk/openvk/df/rg;


# instance fields
.field private volatile rg:Ljava/util/concurrent/ThreadPoolExecutor;


# direct methods
.method public constructor <init>()V
    .locals 10

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 34
    new-instance v9, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v6, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v6}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v7, Lcom/bykv/vk/openvk/df/rg$rg;

    invoke-direct {v7}, Lcom/bykv/vk/openvk/df/rg$rg;-><init>()V

    new-instance v8, Lcom/bykv/vk/openvk/df/rg$1;

    invoke-direct {v8, p0}, Lcom/bykv/vk/openvk/df/rg$1;-><init>(Lcom/bykv/vk/openvk/df/rg;)V

    const/4 v1, 0x3

    const/4 v2, 0x3

    const-wide/16 v3, 0x5

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v9, p0, Lcom/bykv/vk/openvk/df/rg;->rg:Ljava/util/concurrent/ThreadPoolExecutor;

    .line 47
    iget-object v0, p0, Lcom/bykv/vk/openvk/df/rg;->rg:Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V

    return-void
.end method

.method public static rg()Lcom/bykv/vk/openvk/df/rg;
    .locals 2

    .line 25
    sget-object v0, Lcom/bykv/vk/openvk/df/rg;->df:Lcom/bykv/vk/openvk/df/rg;

    if-nez v0, :cond_0

    .line 26
    const-class v0, Lcom/bykv/vk/openvk/df/rg;

    monitor-enter v0

    .line 27
    :try_start_0
    new-instance v1, Lcom/bykv/vk/openvk/df/rg;

    invoke-direct {v1}, Lcom/bykv/vk/openvk/df/rg;-><init>()V

    sput-object v1, Lcom/bykv/vk/openvk/df/rg;->df:Lcom/bykv/vk/openvk/df/rg;

    .line 28
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 30
    :cond_0
    :goto_0
    sget-object v0, Lcom/bykv/vk/openvk/df/rg;->df:Lcom/bykv/vk/openvk/df/rg;

    return-object v0
.end method


# virtual methods
.method public rg(Ljava/lang/Runnable;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 53
    :try_start_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/df/rg;->rg:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 56
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
