.class public Lcom/bianfeng/ymnsdk/action/a;
.super Lcom/bianfeng/ymnsdk/action/ActionSupport;
.source "RequestFeecodesAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/action/ActionSupport<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 17
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 18
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->setMethod(I)V

    .line 19
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 23
    const-string v0, "shop/feecode"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 3
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "app_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 29
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigIdStr()Ljava/lang/String;

    move-result-object v1

    const-string v2, "package_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 30
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 31
    const/4 v0, 0x0

    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 14
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/a;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;
    .locals 2
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 36
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "request feedcodes success : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ymn_ActionSupport"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 37
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    return-object v0
.end method
