.class public Lcom/bianfeng/seppellita/net/PostRequest;
.super Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;
.source "PostRequest.java"


# instance fields
.field private aut:Ljava/lang/String;

.field private callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

.field private data:Ljava/lang/String;

.field private idList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private site:Ljava/lang/String;

.field private time:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bianfeng/seppellita/bean/PostDataBean;)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 32
    invoke-direct {p0}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;-><init>()V

    .line 33
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostDataBean;->getIdList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->idList:Ljava/util/List;

    .line 35
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostDataBean;->getData()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostDataBean;->getEncrypt_key()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bianfeng/seppellita/utils/PostDataSecurityUtils;->rncode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->data:Ljava/lang/String;

    .line 36
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostDataBean;->getTime()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->time:Ljava/lang/String;

    .line 37
    iget-object v1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->data:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostDataBean;->getApihub_secret()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v0, v2}, Lcom/bianfeng/seppellita/utils/AutUtils;->getSign(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->aut:Ljava/lang/String;

    .line 38
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostDataBean;->getSite()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->site:Ljava/lang/String;

    .line 40
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "idList--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->idList:Ljava/util/List;

    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "dataBean--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public addHeaders()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 56
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 57
    iget-object v1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->aut:Ljava/lang/String;

    const-string v2, "Authorization"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 58
    iget-object v1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->time:Ljava/lang/String;

    const-string v2, "RequestTime"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 59
    iget-object v1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->site:Ljava/lang/String;

    const-string v2, "Site"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method public getMethod()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public getRequestBody()Ljava/lang/String;
    .locals 2

    .line 65
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6570\u636e--body-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->data:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    array-length v1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 66
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->data:Ljava/lang/String;

    return-object v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    .line 51
    invoke-static {}, Lcom/bianfeng/seppellita/net/UrlManager;->getInstance()Lcom/bianfeng/seppellita/net/UrlManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlManager;->getPostUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onFail(Ljava/lang/String;)V
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    if-eqz v0, :cond_0

    .line 72
    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onPostFail(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onSuc(Ljava/lang/String;)V
    .locals 3

    .line 78
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    if-eqz v0, :cond_1

    .line 80
    :try_start_0
    const-class v0, Lcom/bianfeng/seppellita/bean/PostResponseBean;

    invoke-static {p1, v0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/seppellita/bean/PostResponseBean;

    .line 81
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostResponseBean;->getCode()I

    move-result v0

    if-nez v0, :cond_0

    .line 83
    iget-object p1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    iget-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->idList:Ljava/util/List;

    invoke-interface {p1, v0}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onPostSuc(Ljava/util/List;)V

    goto :goto_0

    .line 85
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostResponseBean;->getCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/PostResponseBean;->getMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onInitFail(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 88
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 89
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/PostRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "601|\u53c2\u6570\u89e3\u6790\u51fa\u9519 "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getCause()Ljava/lang/Throwable;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onInitFail(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/bianfeng/seppellita/net/PostRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    return-void
.end method
