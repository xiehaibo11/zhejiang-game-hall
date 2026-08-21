.class public Lcom/czhj/volley/NetworkDispatcher;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Comparable;
.implements Ljava/lang/Runnable;


# instance fields
.field private final a:Lcom/czhj/volley/Network;

.field private final b:Lcom/czhj/volley/ResponseDelivery;

.field private final c:Lcom/czhj/volley/Request;

.field private volatile d:Z


# direct methods
.method public constructor <init>(Lcom/czhj/volley/Network;Lcom/czhj/volley/Request;Lcom/czhj/volley/ResponseDelivery;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/volley/NetworkDispatcher;->d:Z

    iput-object p2, p0, Lcom/czhj/volley/NetworkDispatcher;->c:Lcom/czhj/volley/Request;

    iput-object p1, p0, Lcom/czhj/volley/NetworkDispatcher;->a:Lcom/czhj/volley/Network;

    iput-object p3, p0, Lcom/czhj/volley/NetworkDispatcher;->b:Lcom/czhj/volley/ResponseDelivery;

    return-void
.end method

.method private a(Lcom/czhj/volley/Request;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)V"
        }
    .end annotation

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->getTrafficStatsTag()I

    move-result p1

    invoke-static {p1}, Landroid/net/TrafficStats;->setThreadStatsTag(I)V

    return-void
.end method

.method private a(Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;",
            "Lcom/czhj/volley/VolleyError;",
            ")V"
        }
    .end annotation

    invoke-virtual {p1, p2}, Lcom/czhj/volley/Request;->parseNetworkError(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/VolleyError;

    move-result-object p2

    iget-object v0, p0, Lcom/czhj/volley/NetworkDispatcher;->b:Lcom/czhj/volley/ResponseDelivery;

    invoke-interface {v0, p1, p2}, Lcom/czhj/volley/ResponseDelivery;->postError(Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V

    return-void
.end method


# virtual methods
.method public compareTo(Ljava/lang/Object;)I
    .locals 2

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    if-eq v1, p1, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public processRequest(Lcom/czhj/volley/Request;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "*>;)V"
        }
    .end annotation

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    :try_start_0
    const-string v2, "network-queue-take"

    invoke-virtual {p1, v2}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->isCanceled()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "network-discard-cancelled"

    invoke-virtual {p1, v2}, Lcom/czhj/volley/Request;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->notifyListenerResponseNotUsable()V

    return-void

    :cond_0
    invoke-direct {p0, p1}, Lcom/czhj/volley/NetworkDispatcher;->a(Lcom/czhj/volley/Request;)V

    iget-object v2, p0, Lcom/czhj/volley/NetworkDispatcher;->a:Lcom/czhj/volley/Network;

    invoke-interface {v2, p1}, Lcom/czhj/volley/Network;->performRequest(Lcom/czhj/volley/Request;)Lcom/czhj/volley/NetworkResponse;

    move-result-object v2

    const-string v3, "network-http-complete"

    invoke-virtual {p1, v3}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    iget-boolean v3, v2, Lcom/czhj/volley/NetworkResponse;->notModified:Z

    if-eqz v3, :cond_1

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->hasHadResponseDelivered()Z

    move-result v3

    if-eqz v3, :cond_1

    const-string v2, "not-modified"

    invoke-virtual {p1, v2}, Lcom/czhj/volley/Request;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->notifyListenerResponseNotUsable()V

    return-void

    :cond_1
    invoke-virtual {p1, v2}, Lcom/czhj/volley/Request;->parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;

    move-result-object v2

    const-string v3, "network-parse-complete"

    invoke-virtual {p1, v3}, Lcom/czhj/volley/Request;->addMarker(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->markDelivered()V

    iget-object v3, p0, Lcom/czhj/volley/NetworkDispatcher;->b:Lcom/czhj/volley/ResponseDelivery;

    invoke-interface {v3, p1, v2}, Lcom/czhj/volley/ResponseDelivery;->postResponse(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;)V

    invoke-virtual {p1, v2}, Lcom/czhj/volley/Request;->notifyListenerResponseReceived(Lcom/czhj/volley/Response;)V
    :try_end_0
    .catch Lcom/czhj/volley/VolleyError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v2

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    invoke-virtual {v2}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v3, v4

    const-string v4, "Unhandled exception %s"

    invoke-static {v2, v4, v3}, Lcom/czhj/volley/VolleyLog;->e(Ljava/lang/Throwable;Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v3, Lcom/czhj/volley/VolleyError;

    invoke-direct {v3, v2}, Lcom/czhj/volley/VolleyError;-><init>(Ljava/lang/Throwable;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    sub-long/2addr v4, v0

    invoke-virtual {v3, v4, v5}, Lcom/czhj/volley/VolleyError;->a(J)V

    iget-object v0, p0, Lcom/czhj/volley/NetworkDispatcher;->b:Lcom/czhj/volley/ResponseDelivery;

    invoke-interface {v0, p1, v3}, Lcom/czhj/volley/ResponseDelivery;->postError(Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V

    goto :goto_0

    :catch_0
    move-exception v2

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    sub-long/2addr v3, v0

    invoke-virtual {v2, v3, v4}, Lcom/czhj/volley/VolleyError;->a(J)V

    invoke-direct {p0, p1, v2}, Lcom/czhj/volley/NetworkDispatcher;->a(Lcom/czhj/volley/Request;Lcom/czhj/volley/VolleyError;)V

    :goto_0
    invoke-virtual {p1}, Lcom/czhj/volley/Request;->notifyListenerResponseNotUsable()V

    :goto_1
    return-void
.end method

.method public quit()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/volley/NetworkDispatcher;->d:Z

    return-void
.end method

.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/NetworkDispatcher;->c:Lcom/czhj/volley/Request;

    invoke-virtual {p0, v0}, Lcom/czhj/volley/NetworkDispatcher;->processRequest(Lcom/czhj/volley/Request;)V

    return-void
.end method
