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
    .locals 3
    .param p1, "context"    # Landroid/content/Context;

    .line 32
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;-><init>(Landroid/content/Context;)V

    .line 33
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->httpHelper:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->getHeadersMap()Ljava/util/TreeMap;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    .line 34
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getPayTrace()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    .line 35
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    const-string v1, "Content-Type"

    const-string v2, "application/json"

    invoke-virtual {v0, v1, v2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "X-App-Id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 37
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigIdStr()Ljava/lang/String;

    move-result-object v1

    const-string v2, "X-Package-Id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 38
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->b:Ljava/util/TreeMap;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    const-string v2, "X-Nonce-Str"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 39
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    .line 92
    const-string v0, "v2/trade/order"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 94
    .local v0, "url":Ljava/lang/String;
    const-string v1, "RequestOrderActionV2 getURL"

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 95
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payRequestOrder(Ljava/lang/String;)V

    .line 96
    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 15
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 43
    move-object v1, p0

    const-string v0, "server_name"

    const-string v2, "server_id"

    const-string v3, "product_price"

    const-string v4, "product_count"

    const-string v5, "product_name"

    const-string v6, "product_id"

    const-string v7, "is_test"

    const/4 v8, 0x0

    aget-object v9, p2, v8

    invoke-static {v9}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->getMapFrom(Ljava/lang/Object;)Ljava/util/Map;

    move-result-object v9

    iput-object v9, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    .line 44
    iget-object v9, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v10, "ext"

    invoke-interface {v9, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    .line 45
    .local v9, "ext":Ljava/lang/String;
    invoke-static {v9}, Lcom/bianfeng/ymnsdk/util/YmnSourceFromExtUtils;->getSource(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 46
    .local v10, "source":Ljava/lang/String;
    const/4 v11, 0x1

    aget-object v11, p2, v11

    check-cast v11, Ljava/util/Map;

    iput-object v11, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->c:Ljava/util/Map;

    .line 47
    new-instance v11, Lorg/json/JSONObject;

    invoke-direct {v11}, Lorg/json/JSONObject;-><init>()V

    .line 49
    .local v11, "json":Lorg/json/JSONObject;
    :try_start_0
    iget-object v12, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v13, "role_id"

    invoke-interface {v12, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/lang/String;

    iget-object v13, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v14, "role_name"

    invoke-interface {v13, v14}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    iget-object v14, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    invoke-virtual {p0, v12, v13, v14}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->setPayloadEntity(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    const-string v12, "channel_id"

    invoke-interface/range {p1 .. p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/bianfeng/ymnsdk/util/JsonValueUtils;->string2Int(Ljava/lang/String;)I

    move-result v13

    invoke-virtual {v11, v12, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 51
    const-string v12, "cp_order_id"

    iget-object v13, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v14, "order_id"

    invoke-interface {v13, v14}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    invoke-virtual {v11, v12, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 52
    iget-object v12, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v12, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    invoke-virtual {v11, v6, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 53
    iget-object v6, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v6, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v11, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 54
    const-string v5, "zzx-prder"

    iget-object v6, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 55
    const-string v5, "zzx-ARG_PRODUCT_COUNT"

    iget-object v6, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v6, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-static {v5, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 56
    const-string v5, "product_qty"

    iget-object v6, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v6, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/JsonValueUtils;->string2Int(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v11, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 57
    iget-object v4, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/JsonValueUtils;->price2Int(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v11, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 58
    const-string v3, "source"

    invoke-virtual {v11, v3, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 59
    iget-object v3, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 60
    .local v3, "server_id":Ljava/lang/String;
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 61
    invoke-virtual {v11, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 63
    :cond_0
    iget-object v2, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 64
    .local v2, "server_name":Ljava/lang/String;
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 65
    invoke-virtual {v11, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 67
    :cond_1
    const-string v0, "trade_attach"

    invoke-virtual {v11, v0, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 68
    iget-object v0, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v0, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_2

    :goto_0
    goto :goto_1

    :cond_2
    iget-object v0, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-interface {v0, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v8

    goto :goto_0

    :goto_1
    invoke-virtual {v11, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 69
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 70
    .local v0, "extends_v2":Lorg/json/JSONObject;
    const-string v4, "market_id"

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getChannelIdInt()I

    move-result v5

    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 71
    const-string v4, "trade_sdk_version"

    invoke-interface/range {p1 .. p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v5

    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 72
    const-string v4, "trace"

    iget-object v5, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->d:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 73
    const-string v4, "extend"

    invoke-virtual {v11, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 74
    iget-object v4, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->c:Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v5, "trade_parameters"

    if-eqz v4, :cond_3

    .line 75
    :try_start_1
    new-instance v4, Lorg/json/JSONObject;

    iget-object v6, v1, Lcom/bianfeng/ymnsdk/actionv2/b;->c:Ljava/util/Map;

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {v4, v6}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 76
    .local v4, "data":Lorg/json/JSONObject;
    const-string v6, "ymnLogined"

    invoke-virtual {v4, v6}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    .line 77
    const-string v6, "resExt"

    invoke-virtual {v4, v6}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    .line 78
    const-string v6, "platformLogined"

    invoke-virtual {v4, v6}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    .line 79
    invoke-virtual {v11, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 80
    nop

    .end local v4    # "data":Lorg/json/JSONObject;
    goto :goto_2

    .line 81
    :cond_3
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 82
    .restart local v4    # "data":Lorg/json/JSONObject;
    invoke-virtual {v11, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 86
    .end local v0    # "extends_v2":Lorg/json/JSONObject;
    .end local v2    # "server_name":Ljava/lang/String;
    .end local v3    # "server_id":Ljava/lang/String;
    .end local v4    # "data":Lorg/json/JSONObject;
    :goto_2
    nop

    .line 87
    return-object v11

    .line 84
    :catch_0
    move-exception v0

    .line 85
    .local v0, "e":Ljava/lang/Exception;
    new-instance v2, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v2, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 24
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/b;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/util/Map;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)Ljava/util/Map;
    .locals 13
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;
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

    .line 102
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "order_no"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 103
    .local v0, "orderid":Ljava/lang/String;
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "par_value"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v8

    .line 104
    .local v8, "par_value":D
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "total_fee"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v10

    .line 105
    .local v10, "total_fee":D
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    const-string v2, "trade_code"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 106
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    const/16 v2, 0xc8

    const-string v3, "\u4e0b\u5355\u6210\u529f"

    invoke-virtual {v1, v2, v3, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    .line 107
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "trade_request_content"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "client_callback"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 108
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    new-instance v12, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;

    move-object v2, v12

    move-object v3, v0

    move-wide v4, v8

    move-wide v6, v10

    invoke-direct/range {v2 .. v7}, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;-><init>(Ljava/lang/String;DD)V

    invoke-virtual {v12}, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "platform_callback"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 109
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;->getData()Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "notify_url"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "platform_notify_url"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 110
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/b;->a:Ljava/util/Map;

    return-object v1
.end method
