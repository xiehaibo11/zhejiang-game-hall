.class public Lcom/bianfeng/netlibsdk/NetworkDispatcher;
.super Ljava/lang/Thread;
.source "NetworkDispatcher.java"


# instance fields
.field private final mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

.field private final mNetwork:Lcom/bianfeng/netlibsdk/Network;

.field private final mQueue:Ljava/util/concurrent/BlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/BlockingQueue<",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;>;"
        }
    .end annotation
.end field

.field private volatile mQuit:Z


# direct methods
.method public constructor <init>(Ljava/util/concurrent/BlockingQueue;Lcom/bianfeng/netlibsdk/Network;Lcom/bianfeng/netlibsdk/ResponseDelivery;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/BlockingQueue<",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;>;",
            "Lcom/bianfeng/netlibsdk/Network;",
            "Lcom/bianfeng/netlibsdk/ResponseDelivery;",
            ")V"
        }
    .end annotation

    .line 20
    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    const/4 v0, 0x0

    .line 15
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mQuit:Z

    .line 21
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mQueue:Ljava/util/concurrent/BlockingQueue;

    .line 22
    iput-object p2, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mNetwork:Lcom/bianfeng/netlibsdk/Network;

    .line 23
    iput-object p3, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

    return-void
.end method

.method private addTrafficStatsTag(Lcom/bianfeng/netlibsdk/Request;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)V"
        }
    .end annotation

    return-void
.end method

.method private parseAndDeliverNetworkError(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;",
            "Lcom/bianfeng/netlibsdk/utils/NetException;",
            ")V"
        }
    .end annotation

    .line 85
    invoke-virtual {p1, p2}, Lcom/bianfeng/netlibsdk/Request;->parseNetworkError(Lcom/bianfeng/netlibsdk/utils/NetException;)Lcom/bianfeng/netlibsdk/utils/NetException;

    move-result-object p2

    .line 86
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/netlibsdk/ResponseDelivery;->postError(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    return-void
.end method

.method private processRequest()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation

    .line 52
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mQueue:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v0}, Ljava/util/concurrent/BlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/netlibsdk/Request;

    .line 53
    invoke-direct {p0, v0}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->processRequest(Lcom/bianfeng/netlibsdk/Request;)V

    return-void
.end method

.method private processRequest(Lcom/bianfeng/netlibsdk/Request;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;)V"
        }
    .end annotation

    :try_start_0
    const-string v0, "network-queue-take"

    .line 57
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    .line 58
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->isCanceled()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "network-discard-cancelled"

    .line 59
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->finish(Ljava/lang/String;)V

    return-void

    .line 62
    :cond_0
    invoke-direct {p0, p1}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->addTrafficStatsTag(Lcom/bianfeng/netlibsdk/Request;)V

    .line 63
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mNetwork:Lcom/bianfeng/netlibsdk/Network;

    invoke-interface {v0, p1}, Lcom/bianfeng/netlibsdk/Network;->performRequest(Lcom/bianfeng/netlibsdk/Request;)Lcom/bianfeng/netlibsdk/NetworkResponse;

    move-result-object v0

    const-string v1, "network-http-complete"

    .line 64
    invoke-virtual {p1, v1}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    .line 66
    iget-boolean v1, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->notModified:Z

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->hasHadResponseDelivered()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v0, "not-modified"

    .line 67
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->finish(Ljava/lang/String;)V

    return-void

    .line 70
    :cond_1
    invoke-virtual {p1, v0}, Lcom/bianfeng/netlibsdk/Request;->parseNetworkResponse(Lcom/bianfeng/netlibsdk/NetworkResponse;)Lcom/bianfeng/netlibsdk/Response;

    move-result-object v0

    const-string v1, "network-parse-complete"

    .line 71
    invoke-virtual {p1, v1}, Lcom/bianfeng/netlibsdk/Request;->addMarker(Ljava/lang/String;)V

    .line 72
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->markDelivered()V

    .line 73
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

    invoke-interface {v1, p1, v0}, Lcom/bianfeng/netlibsdk/ResponseDelivery;->postResponse(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/Response;)V
    :try_end_0
    .catch Lcom/bianfeng/netlibsdk/utils/NetException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 78
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u6d4b\u8bd5  Unhandled exception %s"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->e(Ljava/lang/String;)V

    .line 79
    new-instance v1, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v1, v0}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    .line 80
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mDelivery:Lcom/bianfeng/netlibsdk/ResponseDelivery;

    invoke-interface {v0, p1, v1}, Lcom/bianfeng/netlibsdk/ResponseDelivery;->postError(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 75
    invoke-virtual {v0}, Lcom/bianfeng/netlibsdk/utils/NetException;->printStackTrace()V

    .line 76
    invoke-direct {p0, p1, v0}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->parseAndDeliverNetworkError(Lcom/bianfeng/netlibsdk/Request;Lcom/bianfeng/netlibsdk/utils/NetException;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public quit()V
    .locals 1

    const/4 v0, 0x1

    .line 27
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mQuit:Z

    .line 28
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->interrupt()V

    return-void
.end method

.method public run()V
    .locals 1

    const/16 v0, 0xa

    .line 37
    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    .line 40
    :goto_0
    :try_start_0
    invoke-direct {p0}, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->processRequest()V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 42
    :catch_0
    iget-boolean v0, p0, Lcom/bianfeng/netlibsdk/NetworkDispatcher;->mQuit:Z

    if-eqz v0, :cond_0

    .line 43
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V

    return-void

    :cond_0
    const-string v0, "Ignoring spurious interrupt of NetworkDispatcher thread; use quit() to terminate it"

    .line 46
    invoke-static {v0}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->e(Ljava/lang/String;)V

    goto :goto_0
.end method
