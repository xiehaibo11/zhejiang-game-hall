.class public Lcom/czhj/sdk/common/network/JsonRequest;
.super Lcom/czhj/sdk/common/network/SigmobRequest;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/network/JsonRequest$Listener;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/sdk/common/network/SigmobRequest<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# static fields
.field protected static final PROTOCOL_CHARSET:Ljava/lang/String; = "utf-8"

.field private static final a:I


# instance fields
.field private final b:Lcom/czhj/sdk/common/network/JsonRequest$Listener;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/czhj/sdk/common/network/JsonRequest$Listener;I)V
    .locals 2

    const/4 p3, 0x0

    invoke-direct {p0, p1, p3, p2}, Lcom/czhj/sdk/common/network/SigmobRequest;-><init>(Ljava/lang/String;ILcom/czhj/volley/Response$ErrorListener;)V

    iput-object p2, p0, Lcom/czhj/sdk/common/network/JsonRequest;->b:Lcom/czhj/sdk/common/network/JsonRequest$Listener;

    new-instance p1, Lcom/czhj/volley/DefaultRetryPolicy;

    const/16 p2, 0x2710

    const/4 v0, 0x2

    const/4 v1, 0x0

    invoke-direct {p1, p2, v0, v1}, Lcom/czhj/volley/DefaultRetryPolicy;-><init>(IIF)V

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/network/JsonRequest;->setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;

    invoke-virtual {p0, p3}, Lcom/czhj/sdk/common/network/JsonRequest;->setShouldCache(Z)Lcom/czhj/volley/Request;

    return-void
.end method


# virtual methods
.method public deliverError(Lcom/czhj/volley/VolleyError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "send tracking: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/network/JsonRequest;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " fail"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-super {p0, p1}, Lcom/czhj/sdk/common/network/SigmobRequest;->deliverError(Lcom/czhj/volley/VolleyError;)V

    return-void
.end method

.method protected bridge synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lorg/json/JSONObject;

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/network/JsonRequest;->deliverResponse(Lorg/json/JSONObject;)V

    return-void
.end method

.method protected deliverResponse(Lorg/json/JSONObject;)V
    .locals 3

    iget-object v0, p0, Lcom/czhj/sdk/common/network/JsonRequest;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/sdk/common/network/JsonRequest;->b:Lcom/czhj/sdk/common/network/JsonRequest$Listener;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "send tracking: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/czhj/sdk/common/network/JsonRequest;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " success"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/network/JsonRequest$Listener;->onSuccess(Lorg/json/JSONObject;)V

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

.method protected parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/NetworkResponse;",
            ")",
            "Lcom/czhj/volley/Response<",
            "Lorg/json/JSONObject;",
            ">;"
        }
    .end annotation

    :try_start_0
    new-instance v0, Ljava/lang/String;

    iget-object v1, p1, Lcom/czhj/volley/NetworkResponse;->data:[B

    iget-object v2, p1, Lcom/czhj/volley/NetworkResponse;->headers:Ljava/util/Map;

    const-string v3, "utf-8"

    invoke-static {v2, v3}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->parseCharset(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->parseCacheHeaders(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Cache$Entry;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/volley/ParseError;

    invoke-direct {v0, p1}, Lcom/czhj/volley/ParseError;-><init>(Ljava/lang/Throwable;)V

    invoke-static {v0}, Lcom/czhj/volley/Response;->error(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1
.end method
