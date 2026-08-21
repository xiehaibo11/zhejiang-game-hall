.class public abstract Lcom/czhj/volley/Request;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/volley/Request$NetworkRequestCompleteListener;,
        Lcom/czhj/volley/Request$Method;,
        Lcom/czhj/volley/Request$Priority;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/czhj/volley/Request<",
        "TT;>;>;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "UTF-8"


# instance fields
.field private final b:Lcom/czhj/volley/VolleyLog$MarkerLog;

.field private final c:I

.field private final d:Ljava/lang/String;

.field private final e:I

.field private f:Lcom/czhj/volley/Response$ErrorListener;

.field private g:Ljava/lang/Integer;

.field private h:Lcom/czhj/volley/RequestQueue;

.field private i:Z

.field private j:Z

.field private k:Z

.field private l:Z

.field private m:Lcom/czhj/volley/RetryPolicy;

.field protected final mLock:Ljava/lang/Object;

.field private n:Lcom/czhj/volley/Cache$Entry;

.field private o:Ljava/lang/Object;

.field private p:Lcom/czhj/volley/Request$NetworkRequestCompleteListener;

.field private q:Ljava/lang/String;


# direct methods
.method public constructor <init>(ILjava/lang/String;Lcom/czhj/volley/Response$ErrorListener;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-boolean v0, Lcom/czhj/volley/VolleyLog$MarkerLog;->ENABLED:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/czhj/volley/VolleyLog$MarkerLog;

    invoke-direct {v0}, Lcom/czhj/volley/VolleyLog$MarkerLog;-><init>()V

    goto :goto_0

    :cond_0
    move-object v0, v1

    :goto_0
    iput-object v0, p0, Lcom/czhj/volley/Request;->b:Lcom/czhj/volley/VolleyLog$MarkerLog;

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/volley/Request;->i:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/volley/Request;->j:Z

    iput-boolean v0, p0, Lcom/czhj/volley/Request;->k:Z

    iput-boolean v0, p0, Lcom/czhj/volley/Request;->l:Z

    iput-object v1, p0, Lcom/czhj/volley/Request;->n:Lcom/czhj/volley/Cache$Entry;

    iput p1, p0, Lcom/czhj/volley/Request;->c:I

    iput-object p2, p0, Lcom/czhj/volley/Request;->d:Ljava/lang/String;

    iput-object p3, p0, Lcom/czhj/volley/Request;->f:Lcom/czhj/volley/Response$ErrorListener;

    new-instance p1, Lcom/czhj/volley/DefaultRetryPolicy;

    invoke-direct {p1}, Lcom/czhj/volley/DefaultRetryPolicy;-><init>()V

    invoke-virtual {p0, p1}, Lcom/czhj/volley/Request;->setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;

    invoke-static {p2}, Lcom/czhj/volley/Request;->b(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/czhj/volley/Request;->e:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Lcom/czhj/volley/Response$ErrorListener;)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, -0x1

    invoke-direct {p0, v0, p1, p2}, Lcom/czhj/volley/Request;-><init>(ILjava/lang/String;Lcom/czhj/volley/Response$ErrorListener;)V

    return-void
.end method

.method static synthetic a(Lcom/czhj/volley/Request;)Lcom/czhj/volley/VolleyLog$MarkerLog;
    .locals 0

    iget-object p0, p0, Lcom/czhj/volley/Request;->b:Lcom/czhj/volley/VolleyLog$MarkerLog;

    return-object p0
.end method

.method private a(Ljava/util/Map;Ljava/lang/String;)[B
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")[B"
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    :try_start_0
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2, p2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v2, 0x3d

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1, p2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x26

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1, p2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Encoding not supported: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0
.end method

.method private static b(Ljava/lang/String;)I
    .locals 1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result p0

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method a(Lcom/czhj/volley/Request$NetworkRequestCompleteListener;)V
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iput-object p1, p0, Lcom/czhj/volley/Request;->p:Lcom/czhj/volley/Request$NetworkRequestCompleteListener;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method a(Ljava/lang/String;)V
    .locals 4

    iget-object v0, p0, Lcom/czhj/volley/Request;->h:Lcom/czhj/volley/RequestQueue;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Lcom/czhj/volley/RequestQueue;->a(Lcom/czhj/volley/Request;)V

    :cond_0
    sget-boolean v0, Lcom/czhj/volley/VolleyLog$MarkerLog;->ENABLED:Z

    if-eqz v0, :cond_2

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getId()J

    move-result-wide v0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    if-eq v2, v3, :cond_1

    new-instance v2, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v3, Lcom/czhj/volley/Request$1;

    invoke-direct {v3, p0, p1, v0, v1}, Lcom/czhj/volley/Request$1;-><init>(Lcom/czhj/volley/Request;Ljava/lang/String;J)V

    invoke-virtual {v2, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_1
    iget-object v2, p0, Lcom/czhj/volley/Request;->b:Lcom/czhj/volley/VolleyLog$MarkerLog;

    invoke-virtual {v2, p1, v0, v1}, Lcom/czhj/volley/VolleyLog$MarkerLog;->add(Ljava/lang/String;J)V

    iget-object p1, p0, Lcom/czhj/volley/Request;->b:Lcom/czhj/volley/VolleyLog$MarkerLog;

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/czhj/volley/VolleyLog$MarkerLog;->finish(Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public addMarker(Ljava/lang/String;)V
    .locals 3

    sget-boolean v0, Lcom/czhj/volley/VolleyLog$MarkerLog;->ENABLED:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/Request;->b:Lcom/czhj/volley/VolleyLog$MarkerLog;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getId()J

    move-result-wide v1

    invoke-virtual {v0, p1, v1, v2}, Lcom/czhj/volley/VolleyLog$MarkerLog;->add(Ljava/lang/String;J)V

    :cond_0
    return-void
.end method

.method public cancel()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    :try_start_0
    iput-boolean v1, p0, Lcom/czhj/volley/Request;->j:Z

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/czhj/volley/Request;->f:Lcom/czhj/volley/Response$ErrorListener;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public compareTo(Lcom/czhj/volley/Request;)I
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Request<",
            "TT;>;)I"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getPriority()Lcom/czhj/volley/Request$Priority;

    move-result-object v0

    invoke-virtual {p1}, Lcom/czhj/volley/Request;->getPriority()Lcom/czhj/volley/Request$Priority;

    move-result-object v1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/Request;->g:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iget-object p1, p1, Lcom/czhj/volley/Request;->g:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    sub-int/2addr v0, p1

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Lcom/czhj/volley/Request$Priority;->ordinal()I

    move-result p1

    invoke-virtual {v0}, Lcom/czhj/volley/Request$Priority;->ordinal()I

    move-result v0

    sub-int v0, p1, v0

    :goto_0
    return v0
.end method

.method public bridge synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/czhj/volley/Request;

    invoke-virtual {p0, p1}, Lcom/czhj/volley/Request;->compareTo(Lcom/czhj/volley/Request;)I

    move-result p1

    return p1
.end method

.method public deliverError(Lcom/czhj/volley/VolleyError;)V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/Request;->f:Lcom/czhj/volley/Response$ErrorListener;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/volley/Response$ErrorListener;->onErrorResponse(Lcom/czhj/volley/VolleyError;)V

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method protected abstract deliverResponse(Ljava/lang/Object;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation
.end method

.method public getBody()[B
    .locals 2

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getParams()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_0

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getParamsEncoding()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/czhj/volley/Request;->a(Ljava/util/Map;Ljava/lang/String;)[B

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getBodyContentType()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "application/x-www-form-urlencoded; charset="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getParamsEncoding()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCacheEntry()Lcom/czhj/volley/Cache$Entry;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/Request;->n:Lcom/czhj/volley/Cache$Entry;

    return-object v0
.end method

.method public getCacheKey()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getMethod()I

    move-result v1

    if-eqz v1, :cond_1

    const/4 v2, -0x1

    if-ne v1, v2, :cond_0

    goto :goto_0

    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x2d

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_1
    :goto_0
    return-object v0
.end method

.method public final getConnectTimeoutMs()I
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getRetryPolicy()Lcom/czhj/volley/RetryPolicy;

    move-result-object v0

    invoke-interface {v0}, Lcom/czhj/volley/RetryPolicy;->getCurrentConnectTimeoutMs()I

    move-result v0

    return v0
.end method

.method public getErrorListener()Lcom/czhj/volley/Response$ErrorListener;
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/Request;->f:Lcom/czhj/volley/Response$ErrorListener;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public getHeaders()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {}, Ljava/util/Collections;->emptyMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getMaxLength()I
    .locals 1

    const/high16 v0, -0x80000000

    return v0
.end method

.method public getMethod()I
    .locals 1

    iget v0, p0, Lcom/czhj/volley/Request;->c:I

    return v0
.end method

.method protected getParams()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method protected getParamsEncoding()Ljava/lang/String;
    .locals 1

    const-string v0, "UTF-8"

    return-object v0
.end method

.method public getPriority()Lcom/czhj/volley/Request$Priority;
    .locals 1

    sget-object v0, Lcom/czhj/volley/Request$Priority;->NORMAL:Lcom/czhj/volley/Request$Priority;

    return-object v0
.end method

.method public getRetryPolicy()Lcom/czhj/volley/RetryPolicy;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/Request;->m:Lcom/czhj/volley/RetryPolicy;

    return-object v0
.end method

.method public final getSequence()I
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->g:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "getSequence called before setSequence"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public getTag()Ljava/lang/Object;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/Request;->o:Ljava/lang/Object;

    return-object v0
.end method

.method public final getTimeoutMs()I
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getRetryPolicy()Lcom/czhj/volley/RetryPolicy;

    move-result-object v0

    invoke-interface {v0}, Lcom/czhj/volley/RetryPolicy;->getCurrentTimeout()I

    move-result v0

    return v0
.end method

.method public getTrafficStatsTag()I
    .locals 1

    iget v0, p0, Lcom/czhj/volley/Request;->e:I

    return v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/Request;->q:Ljava/lang/String;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/Request;->d:Ljava/lang/String;

    :cond_0
    return-object v0
.end method

.method public hasHadResponseDelivered()Z
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-boolean v1, p0, Lcom/czhj/volley/Request;->k:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public isCanceled()Z
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-boolean v1, p0, Lcom/czhj/volley/Request;->j:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public markDelivered()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    :try_start_0
    iput-boolean v1, p0, Lcom/czhj/volley/Request;->k:Z

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public notifyListenerResponseNotUsable()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/Request;->p:Lcom/czhj/volley/Request$NetworkRequestCompleteListener;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    invoke-interface {v1, p0}, Lcom/czhj/volley/Request$NetworkRequestCompleteListener;->onNoUsableResponseReceived(Lcom/czhj/volley/Request;)V

    :cond_0
    return-void

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public notifyListenerResponseReceived(Lcom/czhj/volley/Response;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Response<",
            "*>;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/volley/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/Request;->p:Lcom/czhj/volley/Request$NetworkRequestCompleteListener;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    invoke-interface {v1, p0, p1}, Lcom/czhj/volley/Request$NetworkRequestCompleteListener;->onResponseReceived(Lcom/czhj/volley/Request;Lcom/czhj/volley/Response;)V

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method protected parseNetworkError(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/VolleyError;
    .locals 0

    return-object p1
.end method

.method protected abstract parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/NetworkResponse;",
            ")",
            "Lcom/czhj/volley/Response<",
            "TT;>;"
        }
    .end annotation
.end method

.method public setCacheEntry(Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/Cache$Entry;",
            ")",
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation

    iput-object p1, p0, Lcom/czhj/volley/Request;->n:Lcom/czhj/volley/Cache$Entry;

    return-object p0
.end method

.method public setRedirectURL(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/Request;->q:Ljava/lang/String;

    return-void
.end method

.method public setRequestQueue(Lcom/czhj/volley/RequestQueue;)Lcom/czhj/volley/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/RequestQueue;",
            ")",
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation

    iput-object p1, p0, Lcom/czhj/volley/Request;->h:Lcom/czhj/volley/RequestQueue;

    return-object p0
.end method

.method public setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/RetryPolicy;",
            ")",
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation

    iput-object p1, p0, Lcom/czhj/volley/Request;->m:Lcom/czhj/volley/RetryPolicy;

    return-object p0
.end method

.method public final setSequence(I)Lcom/czhj/volley/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/volley/Request;->g:Ljava/lang/Integer;

    return-object p0
.end method

.method public final setShouldCache(Z)Lcom/czhj/volley/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z)",
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation

    iput-boolean p1, p0, Lcom/czhj/volley/Request;->i:Z

    return-object p0
.end method

.method public final setShouldRetryServerErrors(Z)Lcom/czhj/volley/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z)",
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation

    iput-boolean p1, p0, Lcom/czhj/volley/Request;->l:Z

    return-object p0
.end method

.method public setTag(Ljava/lang/Object;)Lcom/czhj/volley/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")",
            "Lcom/czhj/volley/Request<",
            "*>;"
        }
    .end annotation

    iput-object p1, p0, Lcom/czhj/volley/Request;->o:Ljava/lang/Object;

    return-object p0
.end method

.method public final shouldCache()Z
    .locals 1

    iget-boolean v0, p0, Lcom/czhj/volley/Request;->i:Z

    return v0
.end method

.method public final shouldRetryServerErrors()Z
    .locals 1

    iget-boolean v0, p0, Lcom/czhj/volley/Request;->l:Z

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "0x"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getTrafficStatsTag()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->isCanceled()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "[X] "

    goto :goto_0

    :cond_0
    const-string v2, "[ ] "

    :goto_0
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/czhj/volley/Request;->getPriority()Lcom/czhj/volley/Request$Priority;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/czhj/volley/Request;->g:Ljava/lang/Integer;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
