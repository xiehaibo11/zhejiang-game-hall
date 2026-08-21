.class public Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
.super Ljava/lang/Object;
.source "PaymentFeatureWrapper.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;
.implements Lcom/bianfeng/platform/PaymentWrapper;


# instance fields
.field a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

.field b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

.field c:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V
    .locals 2
    .param p1, "paymentFeature"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 66
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$b;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 38
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    .line 39
    move-object v0, p1

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 40
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V

    .line 41
    return-void
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
    .locals 1
    .param p0, "pluginWrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "oderId"    # Ljava/lang/String;
    .param p2, "orderType"    # I

    .line 154
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewTrade()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 155
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    goto :goto_0

    .line 157
    :cond_0
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->c(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    .line 159
    :goto_0
    return-void
.end method

.method private static b(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
    .locals 4
    .param p0, "pluginWrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "oderId"    # Ljava/lang/String;
    .param p2, "orderType"    # I

    .line 90
    :try_start_0
    const-string v0, "checkOrderFromNew"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 91
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 92
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/actionv2/c;-><init>(Landroid/content/Context;)V

    .line 93
    .local v1, "action":Lcom/bianfeng/ymnsdk/actionv2/c;
    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 94
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;

    invoke-direct {v2, p0, p1, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;-><init>(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/actionv2/c;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 118
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    .line 119
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 122
    .end local v0    # "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    .end local v1    # "action":Lcom/bianfeng/ymnsdk/actionv2/c;
    goto :goto_0

    .line 120
    :catch_0
    move-exception v0

    .line 121
    .local v0, "e":Ljava/lang/Exception;
    const/16 v1, 0xc9

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "201|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 124
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method private static c(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
    .locals 5
    .param p0, "pluginWrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "oderId"    # Ljava/lang/String;
    .param p2, "orderType"    # I

    .line 127
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 128
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/action/f;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/f;-><init>(Landroid/content/Context;)V

    .line 129
    .local v1, "action":Lcom/bianfeng/ymnsdk/action/f;
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v2, v4

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 130
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;

    invoke-direct {v2, v1, p0, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;-><init>(Lcom/bianfeng/ymnsdk/action/f;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 149
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 150
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 151
    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    return-object v0
.end method

.method public a(Ljava/lang/String;I)V
    .locals 1
    .param p1, "oderId"    # Ljava/lang/String;
    .param p2, "orderType"    # I

    .line 84
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-static {v0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    .line 86
    return-void
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    if-eqz v0, :cond_0

    .line 78
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 80
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public pay(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 50
    .local p1, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;Ljava/util/Map;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    .line 64
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

    .line 46
    .local p1, "order":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method
