.class public Lcom/czhj/volley/CacheDispatcher;
.super Ljava/lang/Thread;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;
    }
.end annotation


# static fields
.field private static final a:Z


# instance fields
.field private final b:Ljava/util/concurrent/BlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/BlockingQueue<",
            "Lcom/czhj/volley/Request<",
            "*>;>;"
        }
    .end annotation
.end field

.field private final c:Ljava/util/concurrent/BlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/BlockingQueue<",
            "Lcom/czhj/volley/Request<",
            "*>;>;"
        }
    .end annotation
.end field

.field private final d:Lcom/czhj/volley/Cache;

.field private final e:Lcom/czhj/volley/ResponseDelivery;

.field private final f:Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;

.field private volatile g:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    sget-boolean v0, Lcom/czhj/volley/VolleyLog;->DEBUG:Z

    sput-boolean v0, Lcom/czhj/volley/CacheDispatcher;->a:Z

    return-void
.end method

.method public constructor <init>(Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/BlockingQueue;Lcom/czhj/volley/Cache;Lcom/czhj/volley/ResponseDelivery;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/BlockingQueue<",
            "Lcom/czhj/volley/Request<",
            "*>;>;",
            "Ljava/util/concurrent/BlockingQueue<",
            "Lcom/czhj/volley/Request<",
            "*>;>;",
            "Lcom/czhj/volley/Cache;",
            "Lcom/czhj/volley/ResponseDelivery;",
            ")V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/volley/CacheDispatcher;->g:Z

    iput-object p1, p0, Lcom/czhj/volley/CacheDispatcher;->b:Ljava/util/concurrent/BlockingQueue;

    iput-object p2, p0, Lcom/czhj/volley/CacheDispatcher;->c:Ljava/util/concurrent/BlockingQueue;

    iput-object p3, p0, Lcom/czhj/volley/CacheDispatcher;->d:Lcom/czhj/volley/Cache;

    iput-object p4, p0, Lcom/czhj/volley/CacheDispatcher;->e:Lcom/czhj/volley/ResponseDelivery;

    new-instance p1, Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;

    invoke-direct {p1, p0}, Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;-><init>(Lcom/czhj/volley/CacheDispatcher;)V

    iput-object p1, p0, Lcom/czhj/volley/CacheDispatcher;->f:Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;

    return-void
.end method

.method static synthetic a(Lcom/czhj/volley/CacheDispatcher;)Ljava/util/concurrent/BlockingQueue;
    .locals 0

    iget-object p0, p0, Lcom/czhj/volley/CacheDispatcher;->c:Ljava/util/concurrent/BlockingQueue;

    return-object p0
.end method

.method private a()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->b:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v0}, Ljava/util/concurrent/BlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/czhj/volley/Request;

    invoke-virtual {p0, v0}, Lcom/czhj/volley/CacheDispatcher;->processRequest(Lcom/czhj/volley/Request;)V

    return-void
.end method

.method static synthetic b(Lcom/czhj/volley/CacheDispatcher;)Lcom/czhj/volley/ResponseDelivery;
    .locals 0

    iget-object p0, p0, Lcom/czhj/volley/CacheDispatcher;->e:Lcom/czhj/volley/ResponseDelivery;

    return-object p0
.end method


# virtual methods
.method public processRequest(Lcom/czhj/volley/Request;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation

    const-string v0, "cache-queue-take"

    invoke-virtual {p1, v0}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->isCanceled()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "cache-discard-canceled"

    invoke-virtual {p1, v0}, Lcom/czhj/volley/Request;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->d:Lcom/czhj/volley/Cache;

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->getCacheKey()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/czhj/volley/Cache;->get(Ljava/lang/String;)Lcom/czhj/volley/Cache$Entry;

    move-result-object v0

    if-nez v0, :cond_2

    const-string v0, "cache-miss"

    invoke-virtual {p1, v0}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->f:Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;

    invoke-static {v0, p1}, Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;->a(Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;Lcom/czhj/volley/Request;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->c:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v0, p1}, Ljava/util/concurrent/BlockingQueue;->put(Ljava/lang/Object;)V

    :cond_1
    return-void

    :cond_2
    invoke-virtual {v0}, Lcom/czhj/volley/Cache$Entry;->isExpired()Z

    move-result v1

    if-eqz v1, :cond_4

    const-string v1, "cache-hit-expired"

    invoke-virtual {p1, v1}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/czhj/volley/Request;->setCacheEntry(Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Request;

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->f:Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;

    invoke-static {v0, p1}, Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;->a(Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;Lcom/czhj/volley/Request;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->c:Ljava/util/concurrent/BlockingQueue;

    invoke-interface {v0, p1}, Ljava/util/concurrent/BlockingQueue;->put(Ljava/lang/Object;)V

    :cond_3
    return-void

    :cond_4
    const-string v1, "cache-hit"

    invoke-virtual {p1, v1}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    new-instance v1, Lcom/czhj/volley/NetworkResponse;

    iget-object v2, v0, Lcom/czhj/volley/Cache$Entry;->data:[B

    iget-object v3, v0, Lcom/czhj/volley/Cache$Entry;->responseHeaders:Ljava/util/Map;

    invoke-direct {v1, v2, v3}, Lcom/czhj/volley/NetworkResponse;-><init>([BLjava/util/Map;)V

    invoke-virtual {p1, v1}, Lcom/czhj/volley/Request;->parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;

    move-result-object v1

    const-string v2, "cache-hit-parsed"

    invoke-virtual {p1, v2}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/czhj/volley/Cache$Entry;->refreshNeeded()Z

    move-result v2

    if-nez v2, :cond_6

    :cond_5
    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->e:Lcom/czhj/volley/ResponseDelivery;

    invoke-interface {v0, p1, v1}, Lcom/czhj/volley/ResponseDelivery;->postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;)V

    goto :goto_0

    :cond_6
    const-string v2, "cache-hit-refresh-needed"

    invoke-virtual {p1, v2}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/czhj/volley/Request;->setCacheEntry(Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Request;

    const/4 v0, 0x1

    iput-boolean v0, v1, Lcom/czhj/volley/Response;->intermediate:Z

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->f:Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;

    invoke-static {v0, p1}, Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;->a(Lcom/czhj/volley/CacheDispatcher$WaitingRequestManager;Lcom/czhj/volley/Request;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->e:Lcom/czhj/volley/ResponseDelivery;

    new-instance v2, Lcom/czhj/volley/CacheDispatcher$1;

    invoke-direct {v2, p0, p1}, Lcom/czhj/volley/CacheDispatcher$1;-><init>(Lcom/czhj/volley/CacheDispatcher;Lcom/czhj/volley/Request;)V

    invoke-interface {v0, p1, v1, v2}, Lcom/czhj/volley/ResponseDelivery;->postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;Ljava/lang/Runnable;)V

    :goto_0
    return-void
.end method

.method public quit()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/volley/CacheDispatcher;->g:Z

    invoke-virtual {p0}, Lcom/czhj/volley/CacheDispatcher;->interrupt()V

    return-void
.end method

.method public run()V
    .locals 3

    sget-boolean v0, Lcom/czhj/volley/CacheDispatcher;->a:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-array v0, v1, [Ljava/lang/Object;

    const-string v2, "start new dispatcher"

    invoke-static {v2, v0}, Lcom/czhj/volley/VolleyLog;->v(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    const/16 v0, 0xa

    invoke-static {v0}, Landroid/os/Process;->setThreadPriority(I)V

    iget-object v0, p0, Lcom/czhj/volley/CacheDispatcher;->d:Lcom/czhj/volley/Cache;

    invoke-interface {v0}, Lcom/czhj/volley/Cache;->initialize()V

    :goto_0
    :try_start_0
    invoke-direct {p0}, Lcom/czhj/volley/CacheDispatcher;->a()V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    iget-boolean v0, p0, Lcom/czhj/volley/CacheDispatcher;->g:Z

    if-eqz v0, :cond_1

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V

    return-void

    :cond_1
    new-array v0, v1, [Ljava/lang/Object;

    const-string v2, "Ignoring spurious interrupt of CacheDispatcher thread; use quit() to terminate it"

    invoke-static {v2, v0}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0
.end method
