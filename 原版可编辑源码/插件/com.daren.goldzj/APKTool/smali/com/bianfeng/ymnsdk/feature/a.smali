.class public Lcom/bianfeng/ymnsdk/feature/a;
.super Ljava/lang/Object;
.source "YmnPluginInjector.java"


# direct methods
.method private static a()V
    .locals 5

    .line 21
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserWrappers()Ljava/util/Set;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_2

    .line 22
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v2

    if-le v2, v1, :cond_2

    .line 23
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    .line 24
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 25
    :cond_1
    invoke-interface {v0, v3}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 30
    :cond_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentWrappers()Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 31
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v2

    if-le v2, v1, :cond_5

    .line 32
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    .line 33
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)Z

    move-result v3

    if-nez v3, :cond_4

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 34
    :cond_4
    invoke-interface {v0, v2}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    :cond_5
    return-void
.end method

.method private static a(Landroid/app/Activity;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 2

    .line 10
    instance-of p0, p1, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    const/4 v0, 0x1

    if-eqz p0, :cond_0

    .line 11
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "registUserFeatureWrapper "

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 12
    new-instance p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-object v1, p1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;)V

    .line 13
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->registUserFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    .line 14
    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInjected(Z)V

    .line 16
    :cond_0
    instance-of p0, p1, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    if-eqz p0, :cond_1

    .line 17
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "registPaymentFeatureWrapper "

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 18
    new-instance p0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-object v1, p1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    invoke-direct {p0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V

    .line 19
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->registPaymentFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V

    .line 20
    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInjected(Z)V

    :cond_1
    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/util/HashMap;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;)V"
        }
    .end annotation

    .line 1
    invoke-virtual {p1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 2
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isInjected()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 4
    :cond_0
    instance-of v1, p0, Landroid/app/Activity;

    if-eqz v1, :cond_1

    .line 5
    move-object v1, p0

    check-cast v1, Landroid/app/Activity;

    invoke-static {v1, v0}, Lcom/bianfeng/ymnsdk/feature/a;->a(Landroid/app/Activity;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 7
    :cond_1
    :goto_1
    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->updateContext(Landroid/content/Context;)V

    goto :goto_0

    .line 9
    :cond_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/a;->a()V

    return-void
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Z
    .locals 1

    .line 35
    instance-of v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;

    if-eqz v0, :cond_0

    .line 36
    check-cast p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->available()Z

    move-result p0

    xor-int/lit8 p0, p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)Z
    .locals 1

    const-string v0, "template"

    .line 40
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object p0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 42
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)Z
    .locals 1

    const-string v0, "template"

    .line 37
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object p0

    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 39
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method
