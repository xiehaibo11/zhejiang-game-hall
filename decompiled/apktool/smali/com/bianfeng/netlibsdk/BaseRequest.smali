.class public abstract Lcom/bianfeng/netlibsdk/BaseRequest;
.super Lcom/bianfeng/netlibsdk/Request;
.source "BaseRequest.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/netlibsdk/BaseRequest$Listener;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/netlibsdk/Request<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field protected static final PROTOCOL_CHARSET:Ljava/lang/String; = "utf-8"


# instance fields
.field private listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Lcom/bianfeng/netlibsdk/Request;-><init>()V

    return-void
.end method


# virtual methods
.method public deliverError(Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 4

    .line 48
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    if-nez v0, :cond_0

    return-void

    .line 51
    :cond_0
    iget-object v0, p1, Lcom/bianfeng/netlibsdk/utils/NetException;->response:Lcom/bianfeng/netlibsdk/NetworkResponse;

    if-eqz v0, :cond_1

    .line 53
    iget-object p1, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->statusCode:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->data:[B

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->allHeaders:Ljava/util/List;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v0, v0, Lcom/bianfeng/netlibsdk/NetworkResponse;->notModified:Z

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/bianfeng/netlibsdk/BaseRequest$Listener;->onFail(Ljava/lang/String;)V

    goto :goto_0

    .line 55
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    invoke-virtual {p1}, Lcom/bianfeng/netlibsdk/utils/NetException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/netlibsdk/BaseRequest$Listener;->onFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method protected bridge synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    .line 10
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bianfeng/netlibsdk/BaseRequest;->deliverResponse(Ljava/lang/String;)V

    return-void
.end method

.method protected deliverResponse(Ljava/lang/String;)V
    .locals 3

    .line 21
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    if-nez v0, :cond_0

    return-void

    .line 24
    :cond_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/netlibsdk/BaseRequest;->log(Ljava/lang/String;)V

    .line 25
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->isJsonArrayObject(Ljava/lang/String;)Z

    move-result v0

    .line 26
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->isJsonObject(Ljava/lang/String;)Z

    move-result v1

    if-nez v0, :cond_2

    if-eqz v1, :cond_1

    goto :goto_0

    .line 35
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "601|\u5b57\u7b26\u4e32\u4e0d\u662fjson\u5bf9\u8c61\u6216json\u6570\u7ec4"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/netlibsdk/BaseRequest$Listener;->onFail(Ljava/lang/String;)V

    goto :goto_1

    .line 29
    :cond_2
    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    invoke-virtual {v1, p1, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/netlibsdk/BaseRequest$Listener;->onSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 31
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 32
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "601|\u53c2\u6570\u89e3\u6790\u51fa\u9519 "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getCause()Ljava/lang/Throwable;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/netlibsdk/BaseRequest$Listener;->onFail(Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method protected log(Ljava/lang/String;)V
    .locals 3

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BaseRequest url:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/BaseRequest;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 42
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/bianfeng/netlibsdk/BaseRequest;->getRequestBody()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 43
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "BaseRequest data:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    return-void
.end method

.method protected parseNetworkResponse(Lcom/bianfeng/netlibsdk/NetworkResponse;)Lcom/bianfeng/netlibsdk/Response;
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

    .line 62
    :try_start_0
    new-instance v0, Ljava/lang/String;

    iget-object v1, p1, Lcom/bianfeng/netlibsdk/NetworkResponse;->data:[B

    iget-object p1, p1, Lcom/bianfeng/netlibsdk/NetworkResponse;->headers:Ljava/util/Map;

    const-string v2, "utf-8"

    invoke-static {p1, v2}, Lcom/bianfeng/netlibsdk/HttpHeaderParser;->parseCharset(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, v1, p1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 63
    invoke-static {v0}, Lcom/bianfeng/netlibsdk/Response;->success(Ljava/lang/Object;)Lcom/bianfeng/netlibsdk/Response;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 65
    new-instance v0, Lcom/bianfeng/netlibsdk/utils/NetException;

    invoke-direct {v0, p1}, Lcom/bianfeng/netlibsdk/utils/NetException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public setListener(Lcom/bianfeng/netlibsdk/BaseRequest$Listener;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/bianfeng/netlibsdk/BaseRequest$Listener<",
            "TT;>;)V"
        }
    .end annotation

    .line 16
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/BaseRequest;->listener:Lcom/bianfeng/netlibsdk/BaseRequest$Listener;

    return-void
.end method
