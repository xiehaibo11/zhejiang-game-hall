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

    .line 19
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;-><init>()V

    return-void
.end method

.method private static availableDefault()Z
    .locals 1

    .line 93
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 97
    :cond_0
    const/4 v0, 0x1

    return v0

    .line 94
    :cond_1
    :goto_0
    const-string v0, "not exist available PaymentFeature plugin"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 95
    const/4 v0, 0x0

    return v0
.end method

.method public static callFunction(Ljava/lang/String;)V
    .locals 2
    .param p0, "functionName"    # Ljava/lang/String;

    .line 63
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "init"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 64
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onContextChanged(Landroid/content/Context;)V

    .line 65
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    goto :goto_0

    .line 68
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;)V

    .line 70
    :goto_0
    return-void
.end method

.method public static callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;
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

    .line 81
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 82
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->pay(Ljava/util/Map;)V

    goto :goto_0

    .line 84
    :cond_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    .line 86
    :goto_0
    return-void
.end method

.method public static varargs callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 2
    .param p0, "functionName"    # Ljava/lang/String;
    .param p1, "args"    # [Ljava/lang/String;

    .line 73
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->isJsonParamers([Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 74
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->arrayParamersAsMap([Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->pay(Ljava/util/Map;)V

    goto :goto_0

    .line 76
    :cond_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    .line 78
    :goto_0
    return-void
.end method

.method public static checkOrder(Ljava/lang/String;I)V
    .locals 1
    .param p0, "oderId"    # Ljava/lang/String;
    .param p1, "orderType"    # I

    .line 142
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 143
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a(Ljava/lang/String;I)V

    .line 145
    :cond_0
    return-void
.end method

.method public static getOrderId()Ljava/lang/String;
    .locals 1

    .line 128
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 129
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 131
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getOrderId(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 135
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 136
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->getOrderId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 138
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    .locals 1

    .line 29
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 32
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    return-object v0

    .line 30
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

    .line 25
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    return-object v0
.end method

.method public static isSupportFunction(Ljava/lang/String;)Z
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 55
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 56
    const/4 v0, 0x1

    return v0

    .line 58
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    return v0
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

    .line 101
    .local p0, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 102
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    const-string v0, "compose_pay_mode"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 103
    const/16 v2, 0xc

    new-array v2, v2, [Ljava/lang/String;

    const/4 v3, 0x0

    .line 104
    const-string v4, "order_id"

    invoke-interface {p0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    aput-object v4, v2, v3

    .line 105
    const-string v3, "product_id"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/4 v1, 0x2

    .line 106
    const-string v3, "product_name"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/4 v1, 0x3

    .line 107
    const-string v3, "product_price"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/4 v1, 0x4

    .line 108
    const-string v3, "product_count"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/4 v1, 0x5

    .line 110
    const-string v3, "role_id"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/4 v1, 0x6

    .line 111
    const-string v3, "role_name"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/4 v1, 0x7

    .line 112
    const-string v3, "role_grade"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/16 v1, 0x8

    .line 113
    const-string v3, "role_balance"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/16 v1, 0x9

    .line 114
    const-string v3, "server_id"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/16 v1, 0xa

    .line 116
    const-string v3, "notify_url"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    const/16 v1, 0xb

    .line 117
    const-string v3, "ext"

    invoke-interface {p0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v2, v1

    .line 103
    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_0

    .line 120
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentDefault()Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->pay(Ljava/util/Map;)V

    goto :goto_0

    .line 123
    :cond_1
    const-string v0, "\u652f\u4ed8\u6e20\u9053\u6ca1\u6709\u521d\u59cb\u5316"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 125
    :goto_0
    return-void
.end method

.method private static registPaymentFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V
    .locals 5
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    .line 45
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 46
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    .line 48
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    .line 49
    .local v0, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    .line 50
    .local v1, "name":Ljava/lang/String;
    sget-object v2, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_pay"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 51
    sget-object v2, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->autoFunctions:Ljava/util/Map;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_plugin_init"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 52
    return-void
.end method

.method public static registPaymentFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V
    .locals 1
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    .line 36
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    if-nez v0, :cond_0

    .line 37
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    .line 39
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 41
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->registPaymentFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V

    .line 42
    return-void
.end method
