.class public final Lcom/kwad/sdk/core/threads/GlobalThreadPools;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$d;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$c;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$e;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$b;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$h;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$g;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$f;,
        Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;
    }
.end annotation


# static fields
.field private static TAG:Ljava/lang/String;

.field private static final ava:I

.field private static final avb:I

.field private static final avc:I

.field private static avd:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Ljava/util/concurrent/ExecutorService;",
            ">;>;"
        }
    .end annotation
.end field

.field private static ave:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v0

    sput v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->ava:I

    if-lez v0, :cond_0

    add-int/lit8 v0, v0, 0x4

    goto :goto_0

    :cond_0
    const/16 v0, 0x9

    :goto_0
    sput v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avb:I

    sput v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avc:I

    const-string v0, "GlobalThreadPools"

    sput-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->ave:Ljava/util/Map;

    return-void
.end method

.method public static CP()V
    .locals 10

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    sget-object v2, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Ljava/util/concurrent/ThreadPoolExecutor;

    if-eqz v2, :cond_0

    sget-object v2, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v2}, Ljava/util/concurrent/ThreadPoolExecutor;->getCorePoolSize()I

    move-result v3

    invoke-virtual {v2}, Ljava/util/concurrent/ThreadPoolExecutor;->getMaximumPoolSize()I

    move-result v4

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v2, v5}, Ljava/util/concurrent/ThreadPoolExecutor;->getKeepAliveTime(Ljava/util/concurrent/TimeUnit;)J

    move-result-wide v5

    long-to-int v5, v5

    sget-object v6, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->CORE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    invoke-static {v1, v6, v3}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I

    move-result v6

    sget-object v7, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->MAX:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    invoke-static {v1, v7, v4}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I

    move-result v7

    sget-object v8, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->KEEP_ALIVE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    invoke-static {v1, v8, v5}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I

    move-result v1

    int-to-long v8, v1

    sget-object v1, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v2, v8, v9, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->setKeepAliveTime(JLjava/util/concurrent/TimeUnit;)V

    if-ne v3, v6, :cond_1

    if-eq v4, v7, :cond_0

    :cond_1
    if-gt v3, v7, :cond_2

    invoke-virtual {v2, v7}, Ljava/util/concurrent/ThreadPoolExecutor;->setMaximumPoolSize(I)V

    invoke-virtual {v2, v6}, Ljava/util/concurrent/ThreadPoolExecutor;->setCorePoolSize(I)V

    goto :goto_0

    :cond_2
    if-gt v6, v4, :cond_0

    invoke-virtual {v2, v6}, Ljava/util/concurrent/ThreadPoolExecutor;->setCorePoolSize(I)V

    invoke-virtual {v2, v7}, Ljava/util/concurrent/ThreadPoolExecutor;->setMaximumPoolSize(I)V

    goto :goto_0

    :cond_3
    return-void
.end method

.method public static CQ()Ljava/util/concurrent/ExecutorService;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$f;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$f;-><init>(B)V

    const-string v1, "lruDiskCache"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    return-object v0
.end method

.method public static declared-synchronized CR()Ljava/util/concurrent/ExecutorService;
    .locals 4

    const-class v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v2, "forKsImageLoaderTask"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "ksImageLoaderTask"

    new-instance v2, Lcom/kwad/sdk/core/threads/GlobalThreadPools$e;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$e;-><init>(B)V

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized CS()Ljava/util/concurrent/ExecutorService;
    .locals 4

    const-class v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v2, "forKsImageLoaderCachedImages"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "ksImageLoaderTask"

    new-instance v2, Lcom/kwad/sdk/core/threads/GlobalThreadPools$e;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$e;-><init>(B)V

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static CT()Ljava/util/concurrent/ExecutorService;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v1, "forKsImageLoaderTaskDistributor"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$c;-><init>(B)V

    const-string v1, "imageLoaderDistributor"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    return-object v0
.end method

.method public static declared-synchronized CU()Ljava/util/concurrent/ExecutorService;
    .locals 4

    const-class v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v2, "forBaseBatchReporter"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "report"

    new-instance v2, Lcom/kwad/sdk/core/threads/GlobalThreadPools$g;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$g;-><init>(B)V

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized CV()Ljava/util/concurrent/ExecutorService;
    .locals 4

    const-class v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v2, "forAdReportManager"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "report"

    new-instance v2, Lcom/kwad/sdk/core/threads/GlobalThreadPools$g;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$g;-><init>(B)V

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static CW()Ljava/util/concurrent/ExecutorService;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v1, "forBaseNetwork"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$b;-><init>(B)V

    const-string v1, "httpIO"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    return-object v0
.end method

.method public static CX()Ljava/util/concurrent/ExecutorService;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v1, "forHttpCacheServer"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$h;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$h;-><init>(B)V

    const-string v1, "videoCache"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    return-object v0
.end method

.method public static CY()Ljava/util/concurrent/ExecutorService;
    .locals 10

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v1, "forAppStatusHelper"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/threads/a/b;

    sget-object v1, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->CORE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    const/4 v2, 0x1

    const-string v3, "lruDiskCache"

    invoke-static {v3, v1, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I

    move-result v1

    sget-object v4, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->MAX:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    invoke-static {v3, v4, v2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I

    move-result v4

    sget-object v2, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->KEEP_ALIVE:Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;

    const/4 v5, 0x0

    invoke-static {v3, v2, v5}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I

    move-result v2

    int-to-long v5, v2

    sget-object v7, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v8, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v8}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v9, Lcom/kwad/sdk/core/threads/GlobalThreadPools$1;

    invoke-direct {v9}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$1;-><init>()V

    move-object v2, v0

    move v3, v1

    invoke-direct/range {v2 .. v9}, Lcom/kwad/sdk/core/threads/a/b;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V

    return-object v0
.end method

.method public static CZ()Ljava/util/concurrent/ExecutorService;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v1, "forAsync"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$2;

    invoke-direct {v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$2;-><init>()V

    const-string v1, "async"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    return-object v0
.end method

.method public static Da()Ljava/util/concurrent/ScheduledExecutorService;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->TAG:Ljava/lang/String;

    const-string v1, "forAsyncSchedule"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$3;

    invoke-direct {v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$3;-><init>()V

    const-string v1, "async-schedule"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    instance-of v2, v0, Ljava/util/concurrent/ScheduledExecutorService;

    if-eqz v2, :cond_0

    check-cast v0, Ljava/util/concurrent/ScheduledExecutorService;

    return-object v0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$d;

    const/4 v2, 0x5

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$d;-><init>(ILjava/lang/String;)V

    new-instance v1, Lcom/kwad/sdk/core/threads/a/a;

    const/4 v2, 0x1

    invoke-direct {v1, v2, v0}, Lcom/kwad/sdk/core/threads/a/a;-><init>(ILjava/util/concurrent/ThreadFactory;)V

    return-object v1
.end method

.method public static Db()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    return-object v0
.end method

.method static synthetic Dc()I
    .locals 1

    sget v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avb:I

    return v0
.end method

.method static synthetic Dd()I
    .locals 1

    sget v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avc:I

    return v0
.end method

.method private static a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools$4;->avf:[I

    invoke-virtual {p1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    return p2

    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_keep_alive"

    goto :goto_0

    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_max"

    goto :goto_0

    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_core"

    :goto_0
    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    sget-object p1, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->ave:Ljava/util/Map;

    invoke-interface {p1, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    sget-object p1, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->ave:Ljava/util/Map;

    invoke-interface {p1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_3

    sget-object p1, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->ave:Ljava/util/Map;

    invoke-interface {p1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    return p0

    :cond_3
    return p2
.end method

.method private static a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;)Ljava/util/concurrent/ExecutorService;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/concurrent/ExecutorService;

    return-object p0

    :cond_1
    :goto_0
    invoke-interface {p1}, Lcom/kwad/sdk/core/threads/GlobalThreadPools$a;->De()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v0, p0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object p1
.end method

.method static synthetic b(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->a(Ljava/lang/String;Lcom/kwad/sdk/core/threads/GlobalThreadPools$ParamType;I)I

    move-result p0

    return p0
.end method

.method public static dF(Ljava/lang/String;)Ljava/util/concurrent/ExecutorService;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->avd:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/ref/WeakReference;

    invoke-virtual {p0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/concurrent/ExecutorService;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static n(Ljava/lang/String;I)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/threads/GlobalThreadPools;->ave:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
