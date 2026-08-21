.class public abstract Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;
.super Lcom/bianfeng/netlibsdk/Request;
.source "BaseSeppellitaRequest.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/netlibsdk/Request<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Lcom/bianfeng/netlibsdk/Request;-><init>()V

    return-void
.end method


# virtual methods
.method public addHeaders()Ljava/util/Map;
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

.method public deliverError(Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 3

    .line 54
    invoke-static {}, Lcom/bianfeng/seppellita/net/UrlManager;->getInstance()Lcom/bianfeng/seppellita/net/UrlManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlManager;->onFail()V

    .line 55
    iget-object v0, p1, Lcom/bianfeng/netlibsdk/utils/NetException;->response:Lcom/bianfeng/netlibsdk/NetworkResponse;

    if-eqz v0, :cond_0

    .line 57
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->statusCode:I

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->data:[B

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->allHeaders:Ljava/util/List;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v0, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->notModified:Z

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;->onFail(Ljava/lang/String;)V

    goto :goto_0

    .line 59
    :cond_0
    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/utils/NetException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;->onFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method protected bridge synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    .line 16
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;->deliverResponse(Ljava/lang/String;)V

    return-void
.end method

.method protected deliverResponse(Ljava/lang/String;)V
    .locals 1

    .line 41
    invoke-static {}, Lcom/bianfeng/seppellita/net/UrlManager;->getInstance()Lcom/bianfeng/seppellita/net/UrlManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlManager;->onSuc()V

    .line 42
    invoke-virtual {p0, p1}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;->log(Ljava/lang/String;)V

    .line 43
    invoke-virtual {p0, p1}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;->onSuc(Ljava/lang/String;)V

    return-void
.end method

.method public getRequestBody()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected log(Ljava/lang/String;)V
    .locals 2

    .line 47
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BaseSeppellitaRequest url:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 48
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BaseSeppellitaRequest body:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;->getRequestBody()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 49
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BaseSeppellitaRequest data:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    return-void
.end method

.method public abstract onFail(Ljava/lang/String;)V
.end method

.method public abstract onSuc(Ljava/lang/String;)V
.end method

.method public parseNetworkResponse(Lcom/bianfeng/netlibsdk/NetworkResponse;)Lcom/bianfeng/netlibsdk/Response;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/netlibsdk/NetworkResponse;",
            ")",
            "Lcom/bianfeng/netlibsdk/Response<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/netlibsdk/utils/NetException;
        }
    .end annotation

    .line 32
    :try_start_0
    new-instance v0, Ljava/lang/String;

    iget-object v1, p1, Lcom/bianfeng/netlibsdk/NetworkResponse;->data:[B

    iget-object p1, p1, Lcom/bianfeng/netlibsdk/NetworkResponse;->headers:Ljava/util/Map;

    const-string v2, "utf-8"

    invoke-static {p1, v2}, Lcom/bianfeng/netlibsdk/HttpHeaderParser;->parseCharset(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v1, p1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 33
    invoke-static {v0}, Lcom/bianfeng/netlibsdk/Response;->success(Ljava/lang/Object;)Lcom/bianfeng/netlibsdk/Response;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 35
    new-instance v0, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v0, p1}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method
