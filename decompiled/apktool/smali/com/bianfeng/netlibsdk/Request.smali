.class public abstract Lcom/bianfeng/netlibsdk/Request;
.super Ljava/lang/Object;
.source "Request.java"

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/netlibsdk/Request$Priority;,
        Lcom/bianfeng/netlibsdk/Request$Method;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/bianfeng/netlibsdk/Request<",
        "TT;>;>;"
    }
.end annotation


# instance fields
.field protected headersMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mCanceled:Z

.field private final mLock:Ljava/lang/Object;

.field private mRequestQueue:Lcom/bianfeng/netlibsdk/RequestQueue;

.field private mResponseDelivered:Z

.field private mRetryPolicy:Lcom/bianfeng/netlibsdk/RetryPolicy;

.field private mSequence:Ljava/lang/Integer;

.field private mShouldRetryConnectionErrors:Z

.field private mShouldRetryServerErrors:Z

.field private mTag:Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->headersMap:Ljava/util/Map;

    .line 40
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mLock:Ljava/lang/Object;

    const/4 v0, 0x0

    .line 43
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/Request;->mCanceled:Z

    .line 44
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/Request;->mResponseDelivered:Z

    .line 46
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/Request;->mShouldRetryConnectionErrors:Z

    .line 48
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/Request;->mShouldRetryServerErrors:Z

    .line 50
    new-instance v0, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;

    invoke-direct {v0}, Lcom/bianfeng/netlibsdk/DefaultRetryPolicy;-><init>()V

    invoke-virtual {p0, v0}, Lcom/bianfeng/netlibsdk/Request;->setRetryPolicy(Lcom/bianfeng/netlibsdk/RetryPolicy;)Lcom/bianfeng/netlibsdk/Request;

    return-void
.end method


# virtual methods
.method protected addHeader(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->headersMap:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public abstract addHeaders()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method public addMarker(Ljava/lang/String;)V
    .locals 3

    .line 62
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "---"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Thread;->getId()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->i(Ljava/lang/String;)V

    return-void
.end method

.method public cancel()V
    .locals 2

    .line 104
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    .line 105
    :try_start_0
    iput-boolean v1, p0, Lcom/bianfeng/netlibsdk/Request;->mCanceled:Z

    .line 106
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/Request;->headersMap:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    .line 107
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public compareTo(Lcom/bianfeng/netlibsdk/Request;)I
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/Request<",
            "TT;>;)I"
        }
    .end annotation

    .line 148
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->getPriority()Lcom/bianfeng/netlibsdk/Request$Priority;

    move-result-object v0

    .line 149
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/Request;->getPriority()Lcom/bianfeng/netlibsdk/Request$Priority;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 151
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mSequence:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iget-object p1, p1, Lcom/bianfeng/netlibsdk/Request;->mSequence:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    sub-int/2addr v0, p1

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Lcom/bianfeng/netlibsdk/Request$Priority;->ordinal()I

    move-result p1

    invoke-virtual {v0}, Lcom/bianfeng/netlibsdk/Request$Priority;->ordinal()I

    move-result v0

    sub-int v0, p1, v0

    :goto_0
    return v0
.end method

.method public bridge synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    .line 15
    check-cast p1, Lcom/bianfeng/netlibsdk/Request;

    invoke-virtual {p0, p1}, Lcom/bianfeng/netlibsdk/Request;->compareTo(Lcom/bianfeng/netlibsdk/Request;)I

    move-result p1

    return p1
.end method

.method public abstract deliverError(Lcom/bianfeng/netlibsdk/utils/NetException;)V
.end method

.method protected abstract deliverResponse(Ljava/lang/Object;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation
.end method

.method finish(Ljava/lang/String;)V
    .locals 3

    .line 94
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mRequestQueue:Lcom/bianfeng/netlibsdk/RequestQueue;

    if-eqz v0, :cond_0

    .line 95
    invoke-virtual {v0, p0}, Lcom/bianfeng/netlibsdk/RequestQueue;->finish(Lcom/bianfeng/netlibsdk/Request;)V

    .line 97
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->headersMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 98
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getId()J

    move-result-wide v0

    .line 99
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ";threadId="

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->i(Ljava/lang/String;)V

    .line 100
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/netlibsdk/utils/NetLogger;->i(Ljava/lang/String;)V

    return-void
.end method

.method public getBody()[B
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/UnsupportedEncodingException;
        }
    .end annotation

    .line 54
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->getRequestBody()Ljava/lang/String;

    move-result-object v0

    const-string v1, "utf-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method protected getHeaders()Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 30
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->addHeaders()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 32
    iget-object v1, p0, Lcom/bianfeng/netlibsdk/Request;->headersMap:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 34
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->headersMap:Ljava/util/Map;

    return-object v0
.end method

.method public abstract getMethod()I
.end method

.method public getPriority()Lcom/bianfeng/netlibsdk/Request$Priority;
    .locals 1

    .line 137
    sget-object v0, Lcom/bianfeng/netlibsdk/Request$Priority;->NORMAL:Lcom/bianfeng/netlibsdk/Request$Priority;

    return-object v0
.end method

.method public abstract getRequestBody()Ljava/lang/String;
.end method

.method public getRetryPolicy()Lcom/bianfeng/netlibsdk/RetryPolicy;
    .locals 1

    .line 165
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mRetryPolicy:Lcom/bianfeng/netlibsdk/RetryPolicy;

    return-object v0
.end method

.method public final getSequence()I
    .locals 2

    .line 116
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mSequence:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    .line 119
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0

    .line 117
    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "getSequence called before setSequence"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public getTag()Ljava/lang/Object;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mTag:Ljava/lang/Object;

    return-object v0
.end method

.method public final getTimeoutMs()I
    .locals 1

    .line 161
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->getRetryPolicy()Lcom/bianfeng/netlibsdk/RetryPolicy;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/netlibsdk/RetryPolicy;->getCurrentTimeout()I

    move-result v0

    return v0
.end method

.method public abstract getUrl()Ljava/lang/String;
.end method

.method public hasHadResponseDelivered()Z
    .locals 2

    .line 123
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    .line 124
    :try_start_0
    iget-boolean v1, p0, Lcom/bianfeng/netlibsdk/Request;->mResponseDelivered:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 125
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public isCanceled()Z
    .locals 2

    .line 75
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    .line 76
    :try_start_0
    iget-boolean v1, p0, Lcom/bianfeng/netlibsdk/Request;->mCanceled:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 77
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public markDelivered()V
    .locals 2

    .line 81
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Request;->mLock:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    .line 82
    :try_start_0
    iput-boolean v1, p0, Lcom/bianfeng/netlibsdk/Request;->mResponseDelivered:Z

    .line 83
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method protected parseNetworkError(Lcom/bianfeng/netlibsdk/utils/NetException;)Lcom/bianfeng/netlibsdk/utils/NetException;
    .locals 0

    return-object p1
.end method

.method protected abstract parseNetworkResponse(Lcom/bianfeng/netlibsdk/NetworkResponse;)Lcom/bianfeng/netlibsdk/Response;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/NetworkResponse;",
            ")",
            "Lcom/bianfeng/netlibsdk/Response<",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation
.end method

.method public setRequestQueue(Lcom/bianfeng/netlibsdk/RequestQueue;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/Request;->mRequestQueue:Lcom/bianfeng/netlibsdk/RequestQueue;

    return-void
.end method

.method public setRetryPolicy(Lcom/bianfeng/netlibsdk/RetryPolicy;)Lcom/bianfeng/netlibsdk/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/RetryPolicy;",
            ")",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;"
        }
    .end annotation

    .line 87
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/Request;->mRetryPolicy:Lcom/bianfeng/netlibsdk/RetryPolicy;

    return-object p0
.end method

.method public final setSequence(I)Lcom/bianfeng/netlibsdk/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;"
        }
    .end annotation

    .line 111
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/netlibsdk/Request;->mSequence:Ljava/lang/Integer;

    return-object p0
.end method

.method public final setShouldRetryConnectionErrors(Z)Lcom/bianfeng/netlibsdk/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z)",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;"
        }
    .end annotation

    .line 156
    iput-boolean p1, p0, Lcom/bianfeng/netlibsdk/Request;->mShouldRetryConnectionErrors:Z

    return-object p0
.end method

.method public final setShouldRetryServerErrors(Z)Lcom/bianfeng/netlibsdk/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z)",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;"
        }
    .end annotation

    .line 140
    iput-boolean p1, p0, Lcom/bianfeng/netlibsdk/Request;->mShouldRetryServerErrors:Z

    return-object p0
.end method

.method public setTag(Ljava/lang/Object;)Lcom/bianfeng/netlibsdk/Request;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            ")",
            "Lcom/bianfeng/netlibsdk/Request<",
            "*>;"
        }
    .end annotation

    .line 66
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/Request;->mTag:Ljava/lang/Object;

    return-object p0
.end method

.method public final shouldRetryConnectionErrors()Z
    .locals 1

    .line 169
    iget-boolean v0, p0, Lcom/bianfeng/netlibsdk/Request;->mShouldRetryConnectionErrors:Z

    return v0
.end method

.method public final shouldRetryServerErrors()Z
    .locals 1

    .line 144
    iget-boolean v0, p0, Lcom/bianfeng/netlibsdk/Request;->mShouldRetryServerErrors:Z

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 175
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->isCanceled()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "[X] "

    goto :goto_0

    :cond_0
    const-string v1, "[\u6d4b\u8bd5] "

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "url: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 177
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\uff1b\u8bf7\u6c42\u7b56\u7565\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 179
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->getPriority()Lcom/bianfeng/netlibsdk/Request$Priority;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " header: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 180
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/netlibsdk/Request;->headersMap:Ljava/util/Map;

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " body: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 181
    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/Request;->getRequestBody()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\uff1b\u5e8f\u5217\u53f7\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/netlibsdk/Request;->mSequence:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
