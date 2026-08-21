.class public final Lcom/bianfeng/datafunsdk/t;
.super Ljava/lang/Object;
.source "RequestQueueManager.java"


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

.field public d:Lcom/bianfeng/datafunsdk/r;


# direct methods
.method public constructor <init>()V
    .locals 9

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/t;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    .line 3
    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v0}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/t;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    .line 28
    new-instance v0, Lcom/bianfeng/datafunsdk/t$c;

    invoke-direct {v0, p0}, Lcom/bianfeng/datafunsdk/t$c;-><init>(Lcom/bianfeng/datafunsdk/t;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/t;->d:Lcom/bianfeng/datafunsdk/r;

    .line 29
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v0

    add-int/lit8 v2, v0, 0x1

    .line 30
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->availableProcessors()I

    move-result v0

    mul-int/lit8 v0, v0, 0x2

    add-int/lit8 v3, v0, 0x1

    .line 32
    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    int-to-long v4, v3

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    iget-object v7, p0, Lcom/bianfeng/datafunsdk/t;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v8, Lcom/bianfeng/datafunsdk/t$a;

    invoke-direct {v8, p0}, Lcom/bianfeng/datafunsdk/t$a;-><init>(Lcom/bianfeng/datafunsdk/t;)V

    move-object v1, v0

    invoke-direct/range {v1 .. v8}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/t;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    .line 38
    new-instance v1, Lcom/bianfeng/datafunsdk/t$b;

    invoke-direct {v1, p0}, Lcom/bianfeng/datafunsdk/t$b;-><init>(Lcom/bianfeng/datafunsdk/t;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static synthetic a(Lcom/bianfeng/datafunsdk/t;)Ljava/util/concurrent/LinkedBlockingQueue;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/datafunsdk/t;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    return-object p0
.end method

.method public static synthetic b(Lcom/bianfeng/datafunsdk/t;)V
    .locals 0

    .line 1
    invoke-virtual {p0}, Lcom/bianfeng/datafunsdk/t;->a()V

    const/4 p0, 0x0

    throw p0
.end method

.method public static synthetic c(Lcom/bianfeng/datafunsdk/t;)Lcom/bianfeng/datafunsdk/a;
    .locals 0

    .line 1
    iget-object p0, p0, Lcom/bianfeng/datafunsdk/t;->c:Lcom/bianfeng/datafunsdk/a;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 7
    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/t;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v1}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 9
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 10
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6d4b\u8bd5---"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    goto :goto_0
.end method

.method public a(Lcom/bianfeng/datafunsdk/a;)V
    .locals 0

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/t;->c:Lcom/bianfeng/datafunsdk/a;

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 3

    .line 3
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    new-instance v1, Lcom/bianfeng/datafunsdk/o;

    iget-object v2, p0, Lcom/bianfeng/datafunsdk/t;->d:Lcom/bianfeng/datafunsdk/r;

    invoke-direct {v1, p1, v2}, Lcom/bianfeng/datafunsdk/o;-><init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/r;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 5
    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/o;)V
    .locals 1

    .line 6
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public b()Z
    .locals 1

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->isEmpty()Z

    move-result v0

    return v0
.end method
