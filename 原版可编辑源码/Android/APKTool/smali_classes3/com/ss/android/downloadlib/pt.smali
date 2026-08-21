.class public Lcom/ss/android/downloadlib/pt;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/pt$rg;
    }
.end annotation


# instance fields
.field private df:Ljava/util/concurrent/ExecutorService;

.field private q:Ljava/util/concurrent/ScheduledExecutorService;

.field private rg:Ljava/util/concurrent/ExecutorService;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/downloadlib/pt$1;)V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/ss/android/downloadlib/pt;-><init>()V

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/pt;
    .locals 1

    .line 36
    invoke-static {}, Lcom/ss/android/downloadlib/pt$rg;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public df()Ljava/util/concurrent/ExecutorService;
    .locals 11

    .line 103
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt;->rg:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_1

    .line 104
    const-class v0, Lcom/ss/android/downloadlib/pt;

    monitor-enter v0

    .line 105
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/pt;->rg:Ljava/util/concurrent/ExecutorService;

    if-nez v1, :cond_0

    .line 106
    new-instance v1, Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v3, 0x0

    const v4, 0x7fffffff

    const-wide/16 v5, 0x1e

    sget-object v7, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v8, Ljava/util/concurrent/SynchronousQueue;

    invoke-direct {v8}, Ljava/util/concurrent/SynchronousQueue;-><init>()V

    new-instance v9, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-class v10, Lcom/ss/android/downloadlib/ux;

    .line 109
    invoke-virtual {v10}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "-CPUThreadPool"

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v9, v2}, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;-><init>(Ljava/lang/String;)V

    move-object v2, v1

    invoke-direct/range {v2 .. v9}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V

    iput-object v1, p0, Lcom/ss/android/downloadlib/pt;->rg:Ljava/util/concurrent/ExecutorService;

    .line 111
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 113
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt;->rg:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method public df(Ljava/lang/Runnable;)V
    .locals 1

    const/4 v0, 0x0

    .line 51
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/downloadlib/pt;->df(Ljava/lang/Runnable;Z)V

    return-void
.end method

.method public df(Ljava/lang/Runnable;Z)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    if-eqz p2, :cond_1

    .line 75
    invoke-static {}, Lcom/ss/android/downloadlib/utils/b;->rg()Z

    move-result p2

    if-nez p2, :cond_1

    .line 76
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    goto :goto_0

    .line 78
    :cond_1
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/pt;->q()Ljava/util/concurrent/ExecutorService;

    move-result-object p2

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :goto_0
    return-void
.end method

.method public pp()V
    .locals 1

    .line 151
    new-instance v0, Lcom/ss/android/downloadlib/pt$1;

    invoke-direct {v0, p0}, Lcom/ss/android/downloadlib/pt$1;-><init>(Lcom/ss/android/downloadlib/pt;)V

    invoke-virtual {p0, v0}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;)V

    return-void
.end method

.method public pt()Ljava/util/concurrent/ScheduledExecutorService;
    .locals 6

    .line 131
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt;->q:Ljava/util/concurrent/ScheduledExecutorService;

    if-nez v0, :cond_1

    .line 132
    const-class v0, Lcom/ss/android/downloadlib/pt;

    monitor-enter v0

    .line 133
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/pt;->q:Ljava/util/concurrent/ScheduledExecutorService;

    if-nez v1, :cond_0

    .line 134
    new-instance v1, Ljava/util/concurrent/ScheduledThreadPoolExecutor;

    const/4 v2, 0x0

    new-instance v3, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-class v5, Lcom/ss/android/downloadlib/ux;

    .line 135
    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "-ScheduledThreadPool"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;-><init>(Ljava/lang/String;)V

    invoke-direct {v1, v2, v3}, Ljava/util/concurrent/ScheduledThreadPoolExecutor;-><init>(ILjava/util/concurrent/ThreadFactory;)V

    iput-object v1, p0, Lcom/ss/android/downloadlib/pt;->q:Ljava/util/concurrent/ScheduledExecutorService;

    .line 137
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 139
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt;->q:Ljava/util/concurrent/ScheduledExecutorService;

    return-object v0
.end method

.method public q()Ljava/util/concurrent/ExecutorService;
    .locals 11

    .line 117
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt;->df:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_1

    .line 118
    const-class v0, Lcom/ss/android/downloadlib/pt;

    monitor-enter v0

    .line 119
    :try_start_0
    iget-object v1, p0, Lcom/ss/android/downloadlib/pt;->df:Ljava/util/concurrent/ExecutorService;

    if-nez v1, :cond_0

    .line 120
    new-instance v1, Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v3, 0x0

    const v4, 0x7fffffff

    const-wide/16 v5, 0x1e

    sget-object v7, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v8, Ljava/util/concurrent/SynchronousQueue;

    invoke-direct {v8}, Ljava/util/concurrent/SynchronousQueue;-><init>()V

    new-instance v9, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-class v10, Lcom/ss/android/downloadlib/ux;

    .line 123
    invoke-virtual {v10}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, "-IOThreadPool"

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v9, v2}, Lcom/ss/android/socialbase/downloader/thread/DefaultThreadFactory;-><init>(Ljava/lang/String;)V

    move-object v2, v1

    invoke-direct/range {v2 .. v9}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V

    iput-object v1, p0, Lcom/ss/android/downloadlib/pt;->df:Ljava/util/concurrent/ExecutorService;

    .line 125
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 127
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt;->df:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method public rg(Ljava/lang/Runnable;)V
    .locals 1

    const/4 v0, 0x0

    .line 47
    invoke-virtual {p0, p1, v0}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;Z)V

    return-void
.end method

.method public rg(Ljava/lang/Runnable;J)V
    .locals 2

    .line 84
    :try_start_0
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/pt;->pt()Ljava/util/concurrent/ScheduledExecutorService;

    move-result-object v0

    sget-object v1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-interface {v0, p1, p2, p3, v1}, Ljava/util/concurrent/ScheduledExecutorService;->schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 86
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public rg(Ljava/lang/Runnable;Z)V
    .locals 0

    if-nez p1, :cond_0

    return-void

    :cond_0
    if-eqz p2, :cond_1

    .line 61
    invoke-static {}, Lcom/ss/android/downloadlib/utils/b;->rg()Z

    move-result p2

    if-nez p2, :cond_1

    .line 62
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V

    goto :goto_0

    .line 64
    :cond_1
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/pt;->df()Ljava/util/concurrent/ExecutorService;

    move-result-object p2

    invoke-interface {p2, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :goto_0
    return-void
.end method
