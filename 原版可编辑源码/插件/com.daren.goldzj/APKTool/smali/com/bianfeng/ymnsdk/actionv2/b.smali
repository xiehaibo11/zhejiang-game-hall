.class public Lcom/bianfeng/ymnsdk/actionv2/b;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;
.source "RequestOrderActionV2.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2<",
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

.field private b:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;-><init>(Landroid/content/Context;)V

    .line 2
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getHeadersMap()Ljava/util/TreeMap;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getPayTrace()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    .line 4
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    const-string v0, "Content-Type"

    const-string v1, "application/json"

    invoke-virtual {p1, v0, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "X-App-Id"

    invoke-virtual {p1, v1, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigIdStr()Ljava/lang/String;

    move-result-object v0

    const-string v1, "X-Package-Id"

    invoke-virtual {p1, v1, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 7
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    const-string v1, "X-Nonce-Str"

    invoke-virtual {p1, v1, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    const-string v0, "v2/trade/order"

    .line 1
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "RequestOrderActionV2 getURL"

    .line 3
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payRequestOrder(Ljava/lang/String;)V

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 12
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    const-string v0, "server_name"

    const-string v1, "server_id"

    const-string v2, "product_price"

    const-string v3, "product_name"

    const-string v4, "product_id"

    const-string v5, "is_test"

    const/4 v6, 0x0

    .line 1
    aget-object v7, p2, v6

    invoke-static {v7}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getMapFrom(Ljava/lang/Object;)Ljava/util/Map;

    move-result-object v7

    iput-object v7, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    .line 2
    iget-object v7, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v8, "ext"

    invoke-interface {v7, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 3
    invoke-static {v7}, Lcom/bianfeng/ymnsdk/util/YmnSourceFromExtUtils;->getSource(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x1

    .line 4
    aget-object p2, p2, v9

    check-cast p2, Ljava/util/Map;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->c:Ljava/util/Map;

    .line 5
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 7
    :try_start_0
    iget-object v9, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v10, "role_id"

    invoke-interface {v9, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    iget-object v10, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v11, "role_name"

    invoke-interface {v10, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/lang/String;

    iget-object v11, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    invoke-virtual {p0, v9, v10, v11}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->setPayloadEntity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v9, "channel_id"

    .line 8
    :try_start_1
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Lcom/bianfeng/ymnsdk/util/JsonValueUtils;->string2Int(Ljava/lang/String;)I

    move-result v10

    invoke-virtual {p2, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v9, "cp_order_id"

    .line 9
    :try_start_2
    iget-object v10, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v11, "order_id"

    invoke-interface {v10, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    invoke-virtual {p2, v9, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 10
    iget-object v9, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v9, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    invoke-virtual {p2, v4, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 11
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {p2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string v3, "product_qty"

    .line 12
    :try_start_3
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v9, "product_count"

    invoke-interface {v4, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/JsonValueUtils;->string2Int(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 13
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/JsonValueUtils;->price2Int(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p2, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "source"

    .line 14
    invoke-virtual {p2, v2, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 15
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 16
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 17
    invoke-virtual {p2, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 19
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 20
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 21
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v0, "trade_attach"

    .line 23
    invoke-virtual {p2, v0, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 24
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v0, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_2

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v0, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    :goto_0
    invoke-virtual {p2, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 25
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    const-string v1, "market_id"

    .line 26
    :try_start_4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelIdInt()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    const-string v1, "trade_sdk_version"

    .line 27
    :try_start_5
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result p1

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0

    const-string p1, "trace"

    .line 28
    :try_start_6
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "extend"

    .line 29
    invoke-virtual {p2, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 30
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->c:Ljava/util/Map;
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0

    const-string v0, "trade_parameters"

    if-eqz p1, :cond_3

    .line 31
    :try_start_7
    new-instance p1, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->c:Ljava/util/Map;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p1, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "ymnLogined"

    .line 32
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    const-string v1, "resExt"

    .line 33
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    const-string v1, "platformLogined"

    .line 34
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    .line 35
    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 37
    :cond_3
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 38
    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_0

    :goto_1
    return-object p2

    :catch_0
    move-exception p1

    .line 41
    new-instance p2, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {p2, p1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw p2
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/b;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/util/Map;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/util/Map;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "order_no"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 3
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "par_value"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v4

    .line 4
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "total_fee"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v6

    .line 5
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v1, "trade_code"

    invoke-interface {v0, v1, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 6
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    const/16 v1, 0xc8

    const-string v2, "\u4e0b\u5355\u6210\u529f"

    invoke-virtual {v0, v1, v2, v3}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    .line 7
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "trade_request_content"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "client_callback"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 8
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    new-instance v1, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;

    move-object v2, v1

    invoke-direct/range {v2 .. v7}, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;-><init>(Ljava/lang/String;DD)V

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_callback"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 9
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "notify_url"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "platform_notify_url"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 10
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    return-object p1
.end method
