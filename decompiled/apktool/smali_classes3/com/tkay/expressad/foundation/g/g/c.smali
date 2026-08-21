.class public final Lcom/tkay/expressad/foundation/g/g/c;
.super Ljava/lang/Object;


# instance fields
.field a:Ljava/util/concurrent/ThreadPoolExecutor;

.field b:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Long;",
            "Lcom/tkay/expressad/foundation/g/g/a;",
            ">;"
        }
    .end annotation
.end field

.field c:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 9

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 35
    new-instance v8, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v6, Ljava/util/concurrent/LinkedBlockingDeque;

    invoke-direct {v6}, Ljava/util/concurrent/LinkedBlockingDeque;-><init>()V

    new-instance v7, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;

    invoke-direct {v7}, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;-><init>()V

    const/4 v1, 0x0

    const v2, 0x7fffffff

    const-wide/16 v3, 0xf

    move-object v0, v8

    invoke-direct/range {v0 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v8, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v0, 0x1

    .line 36
    invoke-virtual {v8, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V

    .line 37
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    .line 38
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;B)V
    .locals 9

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 45
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Runtime;->availableProcessors()I

    move-result p2

    mul-int/lit8 p2, p2, 0x2

    const/4 v0, 0x1

    add-int/lit8 v3, p2, 0x1

    .line 46
    new-instance p2, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/LinkedBlockingDeque;

    invoke-direct {v7}, Ljava/util/concurrent/LinkedBlockingDeque;-><init>()V

    new-instance v8, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;

    invoke-direct {v8}, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;-><init>()V

    const-wide/16 v4, 0x1

    move-object v1, p2

    move v2, v3

    invoke-direct/range {v1 .. v8}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    .line 47
    invoke-virtual {p2, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V

    .line 48
    new-instance p2, Ljava/util/HashMap;

    invoke-direct {p2}, Ljava/util/HashMap;-><init>()V

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    .line 49
    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/g/c;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;I)V
    .locals 10

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v8, 0x1

    if-nez p2, :cond_0

    .line 23
    new-instance v9, Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v1, 0x1

    const/4 v2, 0x5

    const-wide/16 v3, 0xf

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v6, Ljava/util/concurrent/LinkedBlockingDeque;

    invoke-direct {v6}, Ljava/util/concurrent/LinkedBlockingDeque;-><init>()V

    new-instance v7, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;

    invoke-direct {v7}, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;-><init>()V

    move-object v0, v9

    invoke-direct/range {v0 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v9, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    goto :goto_0

    .line 25
    :cond_0
    new-instance v9, Ljava/util/concurrent/ThreadPoolExecutor;

    mul-int/lit8 v0, p2, 0x2

    add-int/lit8 v2, v0, 0x1

    const-wide/16 v3, 0xf

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v6, Ljava/util/concurrent/LinkedBlockingDeque;

    invoke-direct {v6}, Ljava/util/concurrent/LinkedBlockingDeque;-><init>()V

    new-instance v7, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;

    invoke-direct {v7}, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;-><init>()V

    move-object v0, v9

    move v1, p2

    invoke-direct/range {v0 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v9, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    .line 27
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v0, v8}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V

    .line 28
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    .line 29
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method private b()V
    .locals 4

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    .line 102
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 103
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/g/g/a;

    .line 2061
    iget-object v2, v1, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    .line 104
    sget-object v3, Lcom/tkay/expressad/foundation/g/g/a$a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-ne v2, v3, :cond_1

    .line 105
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/g/g/a;->g()V

    goto :goto_0

    .line 3061
    :cond_1
    iget-object v2, v1, Lcom/tkay/expressad/foundation/g/g/a;->c:Lcom/tkay/expressad/foundation/g/g/a$a;

    .line 106
    sget-object v3, Lcom/tkay/expressad/foundation/g/g/a$a;->a:Lcom/tkay/expressad/foundation/g/g/a$a;

    if-ne v2, v3, :cond_0

    .line 107
    iget-object v2, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method private declared-synchronized b(Lcom/tkay/expressad/foundation/g/g/a;)V
    .locals 2

    monitor-enter p0

    if-eqz p1, :cond_1

    .line 54
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    invoke-static {}, Lcom/tkay/expressad/foundation/g/g/a;->e()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 55
    iget-object p1, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    invoke-static {}, Lcom/tkay/expressad/foundation/g/g/a;->e()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/g/g/a;

    if-eqz p1, :cond_0

    .line 58
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/g/a;->f()V

    .line 60
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    invoke-static {}, Lcom/tkay/expressad/foundation/g/g/a;->e()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 62
    :cond_1
    :goto_0
    monitor-exit p0

    return-void
.end method

.method private declared-synchronized b(Lcom/tkay/expressad/foundation/g/g/a;Lcom/tkay/expressad/foundation/g/g/a$b;)V
    .locals 3

    monitor-enter p0

    .line 66
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    invoke-static {}, Lcom/tkay/expressad/foundation/g/g/a;->e()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    new-instance v0, Lcom/tkay/expressad/foundation/g/g/c$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/foundation/g/g/c$1;-><init>(Lcom/tkay/expressad/foundation/g/g/c;Lcom/tkay/expressad/foundation/g/g/a;Lcom/tkay/expressad/foundation/g/g/a$b;)V

    .line 1072
    iput-object v0, p1, Lcom/tkay/expressad/foundation/g/g/a;->d:Lcom/tkay/expressad/foundation/g/g/a$b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 87
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized a()V
    .locals 2

    monitor-enter p0

    .line 91
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    .line 92
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 93
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/g/g/a;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/g/g/a;->f()V

    goto :goto_0

    .line 95
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->b:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 97
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    .line 98
    :catch_0
    monitor-exit p0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/g/g/a;)V
    .locals 1

    const/4 v0, 0x0

    .line 113
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/foundation/g/g/c;->b(Lcom/tkay/expressad/foundation/g/g/a;Lcom/tkay/expressad/foundation/g/g/a$b;)V

    .line 114
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/g/g/a;Lcom/tkay/expressad/foundation/g/g/a$b;)V
    .locals 0

    .line 118
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/foundation/g/g/c;->b(Lcom/tkay/expressad/foundation/g/g/a;Lcom/tkay/expressad/foundation/g/g/a$b;)V

    .line 119
    iget-object p2, p0, Lcom/tkay/expressad/foundation/g/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
