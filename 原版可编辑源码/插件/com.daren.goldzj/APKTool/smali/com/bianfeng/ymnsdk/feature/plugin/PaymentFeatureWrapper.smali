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
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 30
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$b;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$b;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 31
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    .line 32
    check-cast p1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 33
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->c:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V

    return-void
.end method

.method public static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
    .locals 1

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewTrade()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 4
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    goto :goto_0

    .line 6
    :cond_0
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->c(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    :goto_0
    return-void
.end method

.method private static b(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
    .locals 3

    :try_start_0
    const-string p2, "checkOrderFromNew"

    .line 1
    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object p2

    .line 3
    new-instance v0, Lcom/bianfeng/ymnsdk/actionv2/c;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/actionv2/c;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x1

    .line 4
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 5
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;

    invoke-direct {v1, p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$c;-><init>(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/actionv2/c;)V

    invoke-virtual {v0, v1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 29
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    .line 30
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 32
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "201|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0xc9

    invoke-virtual {p0, p2, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method private static c(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V
    .locals 4

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 2
    new-instance v1, Lcom/bianfeng/ymnsdk/action/f;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/f;-><init>(Landroid/content/Context;)V

    const/4 v2, 0x2

    .line 3
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 p2, 0x1

    aput-object p1, v2, p2

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 4
    new-instance p1, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;

    invoke-direct {p1, v1, p0, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$d;-><init>(Lcom/bianfeng/ymnsdk/action/f;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 23
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 24
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    return-object v0
.end method

.method public a(Ljava/lang/String;I)V
    .locals 1

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-static {v0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/String;I)V

    return-void
.end method

.method public getOrderId()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a:Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    if-eqz v0, :cond_0

    .line 2
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0

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

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->b:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper$a;-><init>(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;Ljava/util/Map;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

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

    return-void
.end method
