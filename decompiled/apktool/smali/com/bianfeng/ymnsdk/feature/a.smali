.class public Lcom/bianfeng/ymnsdk/feature/a;
.super Ljava/lang/Object;
.source "YmnPluginInjector.java"


# direct methods
.method private static a()V
    .locals 5

    .line 64
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserWrappers()Ljava/util/Set;

    move-result-object v0

    .line 65
    .local v0, "userSet":Ljava/util/Set;, "Ljava/util/Set<Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;>;"
    const/4 v1, 0x1

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v2

    if-le v2, v1, :cond_2

    .line 66
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    .line 67
    .local v3, "item":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Z

    move-result v4

    if-eqz v4, :cond_0

    goto :goto_1

    .line 71
    .end local v3    # "item":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    :cond_0
    goto :goto_0

    .line 68
    .restart local v3    # "item":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    :cond_1
    :goto_1
    invoke-interface {v0, v3}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 73
    .end local v3    # "item":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    :cond_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->getPaymentWrappers()Ljava/util/Set;

    move-result-object v2

    .line 74
    .local v2, "paymentSet":Ljava/util/Set;, "Ljava/util/Set<Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;>;"
    if-eqz v2, :cond_5

    invoke-interface {v2}, Ljava/util/Set;->size()I

    move-result v3

    if-le v3, v1, :cond_5

    .line 75
    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    .line 76
    .local v3, "item":Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)Z

    move-result v4

    if-nez v4, :cond_4

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/feature/a;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Z

    move-result v4

    if-eqz v4, :cond_3

    goto :goto_3

    .line 80
    .end local v3    # "item":Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    :cond_3
    goto :goto_2

    .line 77
    .restart local v3    # "item":Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    :cond_4
    :goto_3
    invoke-interface {v2, v3}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 82
    .end local v3    # "item":Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    :cond_5
    return-void
.end method

.method private static a(Landroid/app/Activity;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 3
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 43
    instance-of v0, p1, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 44
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "registUserFeatureWrapper "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 45
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-object v2, p1

    check-cast v2, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    invoke-direct {v0, v2}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;)V

    .line 46
    .local v0, "wrapper":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->registUserFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    .line 47
    invoke-virtual {p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInjected(Z)V

    .line 49
    .end local v0    # "wrapper":Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    :cond_0
    instance-of v0, p1, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    if-eqz v0, :cond_1

    .line 50
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "registPaymentFeatureWrapper "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 51
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    move-object v2, p1

    check-cast v2, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    invoke-direct {v0, v2}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V

    .line 52
    .local v0, "wrapper":Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->registPaymentFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)V

    .line 53
    invoke-virtual {p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInjected(Z)V

    .line 55
    .end local v0    # "wrapper":Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;
    :cond_1
    instance-of v0, p1, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;

    if-nez v0, :cond_2

    instance-of v0, p1, Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;

    if-nez v0, :cond_2

    .line 57
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->registPluginFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 58
    invoke-virtual {p1, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInjected(Z)V

    .line 61
    :cond_2
    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/util/HashMap;)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;
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

    .line 27
    .local p1, "plugins":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;>;"
    invoke-virtual {p1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 28
    .local v1, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->isInjected()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    .line 30
    :cond_0
    instance-of v2, p0, Landroid/app/Activity;

    if-eqz v2, :cond_1

    .line 31
    move-object v2, p0

    check-cast v2, Landroid/app/Activity;

    invoke-static {v2, v1}, Lcom/bianfeng/ymnsdk/feature/a;->a(Landroid/app/Activity;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    .line 33
    :cond_1
    :goto_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isInitAlone()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 34
    instance-of v2, p0, Landroid/app/Activity;

    if-nez v2, :cond_3

    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->updateContext(Landroid/content/Context;)V

    goto :goto_2

    .line 36
    :cond_2
    invoke-virtual {v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->updateContext(Landroid/content/Context;)V

    .line 38
    .end local v1    # "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    :cond_3
    :goto_2
    goto :goto_0

    .line 39
    :cond_4
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/a;->a()V

    .line 40
    return-void
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Z
    .locals 1
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 85
    instance-of v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;

    if-eqz v0, :cond_0

    .line 86
    move-object v0, p0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->available()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0

    .line 88
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;)Z
    .locals 2
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;

    .line 102
    :try_start_0
    const-string v0, "template"

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/PaymentFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v1

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 103
    :catch_0
    move-exception v0

    .line 104
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 105
    const/4 v1, 0x0

    return v1
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)Z
    .locals 2
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    .line 93
    :try_start_0
    const-string v0, "template"

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v1

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 94
    :catch_0
    move-exception v0

    .line 95
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 96
    const/4 v1, 0x0

    return v1
.end method
