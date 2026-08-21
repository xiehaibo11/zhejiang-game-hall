.class public Lcom/bianfeng/ymnsdk/action/e;
.super Lcom/bianfeng/ymnsdk/action/ActionSupport;
.source "RequestOrderAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/action/ActionSupport<",
        "Ljava/util/Map<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;>;"
    }
.end annotation


# instance fields
.field private a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private b:Ljava/util/Map;
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
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 22
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 23
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    .line 57
    const-string v0, "pay"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 58
    .local v0, "url":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payRequestOrder(Ljava/lang/String;)V

    .line 59
    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 5
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 27
    const/4 v0, 0x0

    aget-object v1, p2, v0

    check-cast v1, Ljava/util/Map;

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/action/e;->a:Ljava/util/Map;

    .line 28
    const/4 v1, 0x1

    aget-object v2, p2, v1

    check-cast v2, Ljava/util/Map;

    iput-object v2, p0, Lcom/bianfeng/ymnsdk/action/e;->b:Ljava/util/Map;

    .line 30
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 32
    .local v2, "json":Lorg/json/JSONObject;
    :try_start_0
    const-string v3, "platform_id"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 33
    const-string v3, "platform_name"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 34
    const-string v3, "platform_ver"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 35
    const-string v3, "isDebug"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->isDebugMode()Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v0, 0x1

    :cond_0
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 37
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 38
    .local v0, "gson":Lcom/google/gson/Gson;
    new-instance v1, Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/action/e;->a:Ljava/util/Map;

    invoke-virtual {v0, v3}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 39
    .local v1, "data":Lorg/json/JSONObject;
    const-string v3, "data"

    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 42
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/action/e;->b:Ljava/util/Map;

    if-eqz v3, :cond_1

    .line 43
    new-instance v3, Lorg/json/JSONObject;

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/action/e;->b:Ljava/util/Map;

    invoke-virtual {v0, v4}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 44
    .local v3, "ext":Lorg/json/JSONObject;
    const-string v4, "ext"

    invoke-virtual {v2, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 46
    .end local v3    # "ext":Lorg/json/JSONObject;
    :cond_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getPayTrace()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->setTransactionId(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 49
    .end local v0    # "gson":Lcom/google/gson/Gson;
    .end local v1    # "data":Lorg/json/JSONObject;
    nop

    .line 52
    return-object v2

    .line 47
    :catch_0
    move-exception v0

    .line 48
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 16
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/e;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/util/Map;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/util/Map;
    .locals 5
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 64
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    const-string v2, "trade_code"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/16 v3, 0xc8

    const-string v4, "\u4e0b\u5355\u6210\u529f"

    invoke-virtual {v0, v3, v4, v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    .line 65
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/e;->a:Ljava/util/Map;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/e;->a:Ljava/util/Map;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    const-string v2, "client_callback"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 67
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/e;->a:Ljava/util/Map;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    const-string v2, "platform_callback"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 68
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/e;->a:Ljava/util/Map;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    const-string v2, "platform_notify_url"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/e;->a:Ljava/util/Map;

    return-object v0
.end method
