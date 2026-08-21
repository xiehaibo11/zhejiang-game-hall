.class public Lcom/bianfeng/datafunsdk/k;
.super Ljava/lang/Object;
.source "DBQueueManager.java"


# instance fields
.field public a:Ljava/util/concurrent/ThreadPoolExecutor;

.field public b:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Ljava/lang/Runnable;",
            ">;"
        }
    .end annotation
.end field

.field public c:Lcom/bianfeng/datafunsdk/a;

.field public d:Lcom/bianfeng/datafunsdk/e;


# direct methods
.method public constructor <init>()V
    .locals 9

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v0}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    .line 47
    new-instance v0, Lcom/bianfeng/datafunsdk/k$c;

    invoke-direct {v0, p0}, Lcom/bianfeng/datafunsdk/k$c;-><init>(Lcom/bianfeng/datafunsdk/k;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/k;->d:Lcom/bianfeng/datafunsdk/e;

    .line 48
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v0

    add-int/lit8 v2, v0, 0x1

    .line 49
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v0

    mul-int/lit8 v0, v0, 0x2

    add-int/lit8 v3, v0, 0x1

    .line 50
    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    int-to-long v4, v3

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    iget-object v7, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v8, Lcom/bianfeng/datafunsdk/k$a;

    invoke-direct {v8, p0}, Lcom/bianfeng/datafunsdk/k$a;-><init>(Lcom/bianfeng/datafunsdk/k;)V

    move-object v1, v0

    invoke-direct/range {v1 .. v8}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/k;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    .line 57
    new-instance v1, Lcom/bianfeng/datafunsdk/k$b;

    invoke-direct {v1, p0}, Lcom/bianfeng/datafunsdk/k$b;-><init>(Lcom/bianfeng/datafunsdk/k;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static synthetic a(Lcom/bianfeng/datafunsdk/k;)Ljava/util/concurrent/LinkedBlockingQueue;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    return-object p0
.end method

.method public static synthetic b(Lcom/bianfeng/datafunsdk/k;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/k;->d()V

    const/4 p0, 0x0

    throw p0
.end method

.method public static synthetic c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/datafunsdk/k;->c:Lcom/bianfeng/datafunsdk/a;

    return-object p0
.end method


# virtual methods
.method public a()V
    .locals 2

    .line 6
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v1, Lcom/bianfeng/datafunsdk/h;

    invoke-direct {v1}, Lcom/bianfeng/datafunsdk/h;-><init>()V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/a;)V
    .locals 0

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/k;->c:Lcom/bianfeng/datafunsdk/a;

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 2

    .line 3
    const-string v0, "PostDatalib \u5f00\u59cb\u63d2\u5165\u6570\u636e--addDbByteData"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 4
    new-instance v0, Lcom/bianfeng/datafunsdk/i;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/k;->d:Lcom/bianfeng/datafunsdk/e;

    invoke-direct {v0, p1, v1}, Lcom/bianfeng/datafunsdk/i;-><init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/e;)V

    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/i;->run()V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/f;)V
    .locals 1

    .line 5
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 3

    .line 3
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v1, Lcom/bianfeng/datafunsdk/f;

    iget-object v2, p0, Lcom/bianfeng/datafunsdk/k;->d:Lcom/bianfeng/datafunsdk/e;

    invoke-direct {v1, p1, v2}, Lcom/bianfeng/datafunsdk/f;-><init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/e;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public b()Z
    .locals 1

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->isEmpty()Z

    move-result v0

    return v0
.end method

.method public c()V
    .locals 3

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v1, Lcom/bianfeng/datafunsdk/j;

    iget-object v2, p0, Lcom/bianfeng/datafunsdk/k;->d:Lcom/bianfeng/datafunsdk/e;

    invoke-direct {v1, v2}, Lcom/bianfeng/datafunsdk/j;-><init>(Lcom/bianfeng/datafunsdk/e;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final d()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 1
    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Runnable;

    .line 2
    iget-object v1, p0, Lcom/bianfeng/datafunsdk/k;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method
