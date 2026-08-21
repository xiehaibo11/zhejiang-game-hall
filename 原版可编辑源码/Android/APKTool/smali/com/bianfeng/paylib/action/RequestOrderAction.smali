.class public Lcom/bianfeng/paylib/action/RequestOrderAction;
.super Lcom/bianfeng/paylib/action/ActionSupport;
.source "RequestOrderAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/paylib/action/ActionSupport<",
        "Ljava/util/Map<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;>;"
    }
.end annotation


# instance fields
.field private order:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private treeMap:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    .line 25
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 26
    iget-object p1, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->httpHelper:Lcom/bianfeng/paylib/action/HttpHelper;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/HttpHelper;->getHeadersMap()Ljava/util/TreeMap;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->treeMap:Ljava/util/TreeMap;

    .line 27
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getWebPayAppId()Ljava/lang/String;

    move-result-object p1

    .line 28
    iget-object v0, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->treeMap:Ljava/util/TreeMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "Gcp-Id"

    invoke-virtual {v0, v1, p1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    const-string v0, "/trade/shop/order"

    return-object v0
.end method

.method public onPrepareData(Ljava/util/Map;)Lorg/json/JSONObject;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lorg/json/JSONObject;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 34
    iput-object p1, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    const-string v0, "thirdGame_ext"

    .line 36
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/paylib/utils/JsonValueUtils;->updataExt(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 37
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 38
    iget-object v2, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    const-string v3, "product_id"

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "shop_id"

    .line 39
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Lcom/bianfeng/paylib/utils/JsonValueUtils;->string2Int(Ljava/lang/String;)I

    move-result v3

    const-string v4, "store_id"

    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 40
    iget-object v3, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    const-string v4, "role_name"

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    const-string v4, "user_name"

    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 41
    iget-object v3, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    const-string v4, "role_id"

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    const-string v4, "user_id"

    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "plugin_id"

    .line 43
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Lcom/bianfeng/paylib/utils/JsonValueUtils;->string2Int(Ljava/lang/String;)I

    move-result v3

    const-string v4, "channel_id"

    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "goods_id"

    .line 44
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 45
    iget-object v2, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    const-string v3, "product_name"

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v3, "goods_name"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 46
    iget-object v2, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    const-string v3, "product_count"

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Lcom/bianfeng/paylib/utils/JsonValueUtils;->string2Int(Ljava/lang/String;)I

    move-result v2

    const-string v3, "quantity"

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 47
    iget-object v2, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    const-string v3, "product_price"

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Lcom/bianfeng/paylib/utils/JsonValueUtils;->string2Double(Ljava/lang/String;)D

    move-result-wide v2

    const-wide/high16 v4, 0x4059000000000000L    # 100.0

    mul-double v2, v2, v4

    const-string v4, "price"

    invoke-virtual {v1, v4, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v2, "origin"

    const-string v3, "BFH5GameSdk"

    .line 48
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "trade_attach"

    .line 50
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 51
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "market_id"

    .line 52
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "extends"

    .line 53
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 55
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "trade_parameter"

    .line 56
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 57
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "client_ip"

    .line 58
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "device_os"

    const-string v2, "android"

    .line 59
    invoke-virtual {v0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "client_info"

    .line 60
    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 61
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/paylib/utils/PaySignUtils;->sign(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "sign"

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    return-object v1
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 19
    invoke-virtual {p0, p1}, Lcom/bianfeng/paylib/action/RequestOrderAction;->onSuccess(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)Ljava/util/Map;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;)Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;",
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

    .line 72
    iget-object v0, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "order_no"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v3, "trade_code"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    iget-object v0, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v1

    const-string v3, "trade_request_content"

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v3, "client_callback"

    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 74
    iget-object v0, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_callback"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 75
    iget-object v0, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/action/ActionSupport$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "notify_url"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "platform_notify_url"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    iget-object p1, p0, Lcom/bianfeng/paylib/action/RequestOrderAction;->order:Ljava/util/Map;

    return-object p1
.end method
