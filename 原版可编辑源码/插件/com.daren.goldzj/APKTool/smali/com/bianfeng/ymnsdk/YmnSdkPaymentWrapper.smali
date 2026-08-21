.class public Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;
.super Lcom/bianfeng/ymnsdk/YmnSdkWrapper;
.source "YmnSdkPaymentWrapper.java"


# static fields
.field private static autoFunctions:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;",
            ">;"
        }
    .end annotation
.end field

.field private static wrappers:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;-><init>()V

    return-void
.end method

.method private static availableDefault()Z
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    :goto_0
    const-string v0, "not exist available PaymentFeature plugin"

    .line 2
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/4 v0, 0x0

    return v0
.end method

.method public static callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 5
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 6
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->pay(Ljava/util/Map;)V

    goto :goto_0

    .line 8
    :cond_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    :goto_0
    return-void
.end method

.method public static varargs callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->isJsonParamers([Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->arrayParamersAsMap([Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->pay(Ljava/util/Map;)V

    goto :goto_0

    .line 4
    :cond_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static checkOrder(Ljava/lang/String;I)V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method public static getOrderId()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getOrderId(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 4
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->getOrderId()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    return-object v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getPaymentWrappers()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;",
            ">;"
        }
    .end annotation

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    return-object v0
.end method

.method public static isSupportFunction(Ljava/lang/String;)Z
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 4
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static pay(Ljava/util/Map;)V
    .locals 5
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
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    const-string v0, "compose_pay_mode"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    const/16 v2, 0xc

    .line 3
    new-array v2, v2, [Ljava/lang/String;

    const-string v3, "order_id"

    .line 4
    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const-string v3, "product_id"

    .line 5
    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const-string v1, "product_name"

    .line 6
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v3, 0x2

    aput-object v1, v2, v3

    const-string v1, "product_price"

    .line 7
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v3, 0x3

    aput-object v1, v2, v3

    const-string v1, "product_count"

    .line 8
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v3, 0x4

    aput-object v1, v2, v3

    const-string v1, "role_id"

    .line 10
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v3, 0x5

    aput-object v1, v2, v3

    const-string v1, "role_name"

    .line 11
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v3, 0x6

    aput-object v1, v2, v3

    const-string v1, "role_grade"

    .line 12
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v3, 0x7

    aput-object v1, v2, v3

    const-string v1, "role_balance"

    .line 13
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/16 v3, 0x8

    aput-object v1, v2, v3

    const-string v1, "server_id"

    .line 14
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/16 v3, 0x9

    aput-object v1, v2, v3

    const-string v1, "notify_url"

    .line 16
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/16 v3, 0xa

    aput-object v1, v2, v3

    const-string v1, "ext"

    .line 17
    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    const/16 v1, 0xb

    aput-object p0, v2, v1

    .line 18
    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_0

    .line 35
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->pay(Ljava/util/Map;)V

    goto :goto_0

    :cond_1
    const-string p0, "\u652f\u4ed8\u6e20\u9053\u6ca1\u6709\u521d\u59cb\u5316"

    .line 38
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method private static registPaymentFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    .line 4
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    .line 5
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    .line 6
    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_pay"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static registPaymentFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 6
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->registPaymentFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V

    return-void
.end method
