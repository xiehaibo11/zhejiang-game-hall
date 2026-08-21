.class public Lcom/bianfeng/seppellita/net/InitRequest;
.super Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;
.source "InitRequest.java"


# instance fields
.field private callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

.field private map:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/Map;Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/bianfeng/seppellita/SepperllitaCallback;",
            ")V"
        }
    .end annotation

    .line 16
    invoke-direct {p0}, Lcom/bianfeng/seppellita/net/BaseSeppellitaRequest;-><init>()V

    .line 17
    iput-object p2, p0, Lcom/bianfeng/seppellita/net/InitRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    .line 18
    iput-object p1, p0, Lcom/bianfeng/seppellita/net/InitRequest;->map:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public getMethod()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 2

    .line 29
    invoke-static {}, Lcom/bianfeng/seppellita/net/UrlManager;->getInstance()Lcom/bianfeng/seppellita/net/UrlManager;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/seppellita/net/InitRequest;->map:Ljava/util/Map;

    invoke-virtual {v0, v1}, Lcom/bianfeng/seppellita/net/UrlManager;->getInitUrl(Ljava/util/Map;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onFail(Ljava/lang/String;)V
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/InitRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    if-eqz v0, :cond_0

    .line 35
    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onInitFail(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onSuc(Ljava/lang/String;)V
    .locals 3

    .line 41
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/InitRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    if-eqz v0, :cond_0

    .line 43
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    const-class v1, Lcom/bianfeng/seppellita/bean/InitBean;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/seppellita/bean/InitBean;

    .line 44
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean;->getCode()I

    move-result v0

    if-nez v0, :cond_0

    .line 45
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/InitRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean;->getData()Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    move-result-object p1

    const-class v2, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    invoke-virtual {v1, p1, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onInitSuc(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 49
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 50
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/InitRequest;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

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

    :cond_0
    :goto_0
    return-void
.end method
