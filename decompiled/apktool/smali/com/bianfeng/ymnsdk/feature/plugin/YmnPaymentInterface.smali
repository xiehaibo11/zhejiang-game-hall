.class public abstract Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "YmnPaymentInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;
.implements Lcom/bianfeng/ymnsdk/YmnCode;


# instance fields
.field private cpOrderId:Ljava/lang/String;

.field private ymnOrderId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public checkOrder()V
    .locals 2

    .line 160
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->ymnOrderId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 161
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->ymnOrderId:Ljava/lang/String;

    const/4 v1, 0x1

    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    goto :goto_0

    .line 163
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->cpOrderId:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    .line 165
    :goto_0
    return-void
.end method

.method public getOrdeCallbackMessage(Ljava/util/Map;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 151
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "platform_callback"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 152
    .local v0, "message":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 153
    new-instance v1, Lcom/google/gson/Gson;

    invoke-direct {v1}, Lcom/google/gson/Gson;-><init>()V

    .line 154
    .local v1, "gson":Lcom/google/gson/Gson;
    invoke-virtual {v1, p1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 156
    .end local v1    # "gson":Lcom/google/gson/Gson;
    :cond_0
    return-object v0
.end method

.method public getOrderExtArg(Ljava/util/Map;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 137
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "platform_callback"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 138
    .local v0, "extArg":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 139
    const-string v1, "ext"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 141
    :cond_0
    return-object v0
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->ymnOrderId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 78
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->ymnOrderId:Ljava/lang/String;

    return-object v0

    .line 80
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->cpOrderId:Ljava/lang/String;

    return-object v0
.end method

.method public getOrderNotifyUrl(Ljava/util/Map;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 123
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "platform_notify_url"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 124
    .local v0, "notifyUrl":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 125
    const-string v1, "notify_url"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 127
    :cond_0
    return-object v0
.end method

.method public getOrderTotalPrice(Ljava/util/Map;)F
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)F"
        }
    .end annotation

    .line 94
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "platform_callback"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 96
    .local v0, "platform_callback":Ljava/lang/String;
    const/high16 v1, 0x42c80000    # 100.0f

    :try_start_0
    const-class v2, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;

    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;

    .line 97
    .local v2, "callbackEntity":Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->getTotal_fee()F

    move-result v3
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    .line 98
    .local v3, "total_fee":F
    const/4 v4, 0x0

    cmpl-float v4, v3, v4

    if-eqz v4, :cond_0

    .line 99
    div-float v1, v3, v1

    return v1

    .line 103
    .end local v2    # "callbackEntity":Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;
    .end local v3    # "total_fee":F
    :cond_0
    goto :goto_0

    .line 101
    :catch_0
    move-exception v2

    .line 102
    .local v2, "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 105
    .end local v2    # "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    :goto_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewTrade()Z

    move-result v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    const-string v3, "product_price"

    if-eqz v2, :cond_1

    .line 106
    :try_start_2
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v2

    .line 107
    .local v2, "price":F
    const-string v3, "product_qty"

    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v3

    .line 108
    .local v3, "count":F
    mul-float v4, v2, v3

    .line 109
    .local v4, "total_fee":F
    div-float v1, v4, v1

    return v1

    .line 111
    .end local v2    # "price":F
    .end local v3    # "count":F
    .end local v4    # "total_fee":F
    :cond_1
    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1

    .line 112
    .local v1, "price":F
    const-string v2, "product_count"

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 113
    .local v2, "count":F
    mul-float v3, v1, v2

    .line 114
    .local v3, "total_fee":F
    return v3

    .line 116
    .end local v1    # "price":F
    .end local v2    # "count":F
    .end local v3    # "total_fee":F
    :catch_1
    move-exception v1

    .line 117
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 118
    const v2, 0x4e6e6b28    # 1.0E9f

    return v2
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 32
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 33
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 34
    return-void
.end method

.method public pay(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 71
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "order_id"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->cpOrderId:Ljava/lang/String;

    .line 72
    const-string v0, "trade_code"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->ymnOrderId:Ljava/lang/String;

    .line 73
    return-void
.end method

.method public prePay(Ljava/util/LinkedHashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 39
    .local p1, "order":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public requestFeedcodes(Lcom/bianfeng/ymnsdk/action/ActionObserver;)V
    .locals 2
    .param p1, "observer"    # Lcom/bianfeng/ymnsdk/action/ActionObserver;

    .line 175
    new-instance v0, Lcom/bianfeng/ymnsdk/action/a;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/action/a;-><init>(Landroid/content/Context;)V

    .line 176
    .local v0, "action":Lcom/bianfeng/ymnsdk/action/a;
    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 177
    invoke-virtual {v0, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 178
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 179
    return-void
.end method

.method public requestProducts(Lcom/bianfeng/ymnsdk/action/ActionObserver;)V
    .locals 2
    .param p1, "observer"    # Lcom/bianfeng/ymnsdk/action/ActionObserver;

    .line 168
    new-instance v0, Lcom/bianfeng/ymnsdk/action/g;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/action/g;-><init>(Landroid/content/Context;)V

    .line 169
    .local v0, "action":Lcom/bianfeng/ymnsdk/action/g;
    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 170
    invoke-virtual {v0, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 171
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 172
    return-void
.end method

.method public sendResult(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 43
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->setInitFlagsByReturnCode(I)V

    .line 44
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 45
    return-void
.end method

.method public sendResultWithoutInterceptors(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 49
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnPaymentInterface;->setInitFlagsByReturnCode(I)V

    .line 50
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResultWithoutInterceptors(ILjava/lang/String;)V

    .line 51
    return-void
.end method

.method protected setInitFlagsByReturnCode(I)V
    .locals 3
    .param p1, "code"    # I

    .line 59
    const/16 v0, 0xcd

    const/4 v1, 0x0

    if-ne p1, v0, :cond_0

    .line 60
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 61
    const/4 v2, 0x1

    invoke-virtual {p0, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    .line 63
    :cond_0
    if-ne p1, v0, :cond_1

    .line 64
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 65
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    .line 67
    :cond_1
    return-void
.end method
