.class public abstract Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "YmnChannelInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;
.implements Lcom/bianfeng/ymnsdk/YmnCode;


# instance fields
.field private cpOrderId:Ljava/lang/String;

.field private ymnOrderId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public checkOrder()V
    .locals 2

    .line 224
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->ymnOrderId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 225
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->ymnOrderId:Ljava/lang/String;

    const/4 v1, 0x1

    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    goto :goto_0

    .line 226
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->cpOrderId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 227
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->cpOrderId:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-static {p0, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    goto :goto_0

    .line 229
    :cond_1
    const-string v0, "checkOrder cpOrderId is null and ymnOrderId is null "

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 231
    :goto_0
    return-void
.end method

.method public enterPlatform()V
    .locals 0

    .line 124
    return-void
.end method

.method public exit()V
    .locals 0

    .line 106
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getActivity()Landroid/app/Activity;

    .line 108
    return-void
.end method

.method public getAndShowVerifyRealName()V
    .locals 0

    .line 97
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

    .line 215
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "platform_callback"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 216
    .local v0, "message":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 217
    new-instance v1, Lcom/google/gson/Gson;

    invoke-direct {v1}, Lcom/google/gson/Gson;-><init>()V

    .line 218
    .local v1, "gson":Lcom/google/gson/Gson;
    invoke-virtual {v1, p1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 220
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

    .line 201
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "platform_callback"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 202
    .local v0, "extArg":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 203
    const-string v1, "ext"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 205
    :cond_0
    return-object v0
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 2

    .line 139
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->ymnOrderId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 140
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnChannelInterface ymnOrderId : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->ymnOrderId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 141
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->ymnOrderId:Ljava/lang/String;

    return-object v0

    .line 143
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnChannelInterface cpOrderId : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->cpOrderId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 144
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->cpOrderId:Ljava/lang/String;

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

    .line 187
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "platform_notify_url"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 188
    .local v0, "notifyUrl":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 189
    const-string v1, "notify_url"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Ljava/lang/String;

    .line 191
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

    .line 157
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const/high16 v0, 0x42c80000    # 100.0f

    :try_start_0
    const-string v1, "platform_callback"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 158
    .local v1, "platform_callback":Ljava/lang/String;
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->isJsonObject(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 159
    const-class v2, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;

    invoke-static {v1, v2}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;

    .line 160
    .local v2, "callbackEntity":Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;->getTotal_fee()F

    move-result v3
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    .line 161
    .local v3, "total_fee":F
    const/4 v4, 0x0

    cmpl-float v4, v3, v4

    if-eqz v4, :cond_0

    .line 162
    div-float v0, v3, v0

    return v0

    .line 167
    .end local v1    # "platform_callback":Ljava/lang/String;
    .end local v2    # "callbackEntity":Lcom/bianfeng/ymnsdk/entity/PlatformCallbackEntity;
    .end local v3    # "total_fee":F
    :cond_0
    goto :goto_0

    .line 165
    :catch_0
    move-exception v1

    .line 166
    .local v1, "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 169
    .end local v1    # "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    :goto_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewTrade()Z

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    const-string v2, "product_price"

    if-eqz v1, :cond_1

    .line 170
    :try_start_2
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1

    .line 171
    .local v1, "price":F
    const-string v2, "product_qty"

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v2

    .line 172
    .local v2, "count":F
    mul-float v3, v1, v2

    .line 173
    .restart local v3    # "total_fee":F
    div-float v0, v3, v0

    return v0

    .line 175
    .end local v1    # "price":F
    .end local v2    # "count":F
    .end local v3    # "total_fee":F
    :cond_1
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v0

    .line 176
    .local v0, "price":F
    const-string v1, "product_count"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    .line 177
    .local v1, "count":F
    mul-float v2, v0, v1

    .line 178
    .local v2, "total_fee":F
    return v2

    .line 180
    .end local v0    # "price":F
    .end local v1    # "count":F
    .end local v2    # "total_fee":F
    :catch_1
    move-exception v0

    .line 181
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 182
    const v1, 0x4e6e6b28    # 1.0E9f

    return v1
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 3

    .line 117
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    .line 118
    .local v0, "gson":Lcom/google/gson/Gson;
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    return-object v1
.end method

.method public getVerifyRealNameInfo()V
    .locals 0

    .line 93
    return-void
.end method

.method public hideToolBar()V
    .locals 0

    .line 84
    return-void
.end method

.method public isLogined()Z
    .locals 1

    .line 68
    const/4 v0, 0x0

    return v0
.end method

.method public logout()V
    .locals 0

    .line 74
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 33
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 34
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 35
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

    .line 133
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "order_id"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->cpOrderId:Ljava/lang/String;

    .line 134
    const-string v0, "trade_code"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->ymnOrderId:Ljava/lang/String;

    .line 135
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

    .line 129
    .local p1, "order":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public requestFeedcodes(Lcom/bianfeng/ymnsdk/action/ActionObserver;)V
    .locals 2
    .param p1, "observer"    # Lcom/bianfeng/ymnsdk/action/ActionObserver;

    .line 242
    new-instance v0, Lcom/bianfeng/ymnsdk/action/a;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/action/a;-><init>(Landroid/content/Context;)V

    .line 243
    .local v0, "action":Lcom/bianfeng/ymnsdk/action/a;
    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 244
    invoke-virtual {v0, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 245
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 246
    return-void
.end method

.method public requestProducts(Lcom/bianfeng/ymnsdk/action/ActionObserver;)V
    .locals 2
    .param p1, "observer"    # Lcom/bianfeng/ymnsdk/action/ActionObserver;

    .line 235
    new-instance v0, Lcom/bianfeng/ymnsdk/action/g;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/action/g;-><init>(Landroid/content/Context;)V

    .line 236
    .local v0, "action":Lcom/bianfeng/ymnsdk/action/g;
    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 237
    invoke-virtual {v0, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 238
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 239
    return-void
.end method

.method public sendResult(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 39
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->setInitFlagsByReturnCode(I)V

    .line 40
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 41
    return-void
.end method

.method public sendResultWithoutInterceptors(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 45
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->setInitFlagsByReturnCode(I)V

    .line 46
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResultWithoutInterceptors(ILjava/lang/String;)V

    .line 47
    return-void
.end method

.method protected setInitFlagsByReturnCode(I)V
    .locals 2
    .param p1, "code"    # I

    .line 55
    const/4 v0, 0x0

    const/16 v1, 0x64

    if-ne p1, v1, :cond_0

    .line 56
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 57
    const/4 v1, 0x1

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    .line 59
    :cond_0
    const/16 v1, 0x65

    if-ne p1, v1, :cond_1

    .line 60
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 61
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    .line 63
    :cond_1
    return-void
.end method

.method public showToolBar()V
    .locals 0

    .line 79
    return-void
.end method

.method public showVerifyRealName()V
    .locals 0

    .line 89
    return-void
.end method

.method public submitUserInfo(Ljava/util/LinkedHashMap;)V
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

    .line 113
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public switchAccount()V
    .locals 0

    .line 101
    return-void
.end method
