.class public Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;
.super Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;
.source "YmnSdkUserWrapper.java"


# static fields
.field private static autoFunctions:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;",
            ">;"
        }
    .end annotation
.end field

.field private static pluginName:Ljava/lang/String;

.field private static wrappers:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;-><init>()V

    return-void
.end method

.method private static availableDefault()Z
    .locals 2

    .line 83
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    const/4 v1, 0x1

    if-le v0, v1, :cond_0

    goto :goto_0

    .line 87
    :cond_0
    return v1

    .line 84
    :cond_1
    :goto_0
    const-string v0, "not exist available UserFeature plugin or has more than 1 UserFeature plugin"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 85
    const/4 v0, 0x0

    return v0
.end method

.method public static callFunction(Ljava/lang/String;)V
    .locals 2
    .param p0, "functionName"    # Ljava/lang/String;

    .line 66
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "login"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 67
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->login()V

    .line 69
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_1

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "init"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 70
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onContextChanged(Landroid/content/Context;)V

    .line 71
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    goto :goto_0

    .line 73
    :cond_1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->callFunction(Ljava/lang/String;)V

    .line 75
    :goto_0
    return-void
.end method

.method public static enterPlatform()V
    .locals 1

    .line 165
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 166
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->enterPlatform()V

    .line 168
    :cond_0
    return-void
.end method

.method public static exit()V
    .locals 1

    .line 146
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 147
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->exit()V

    .line 149
    :cond_0
    return-void
.end method

.method public static getAndShowVerifyRealName()V
    .locals 1

    .line 128
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 129
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->getAndShowVerifyRealName()V

    .line 131
    :cond_0
    return-void
.end method

.method public static getPluginName()Ljava/lang/String;
    .locals 1

    .line 54
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    return-object v0
.end method

.method public static getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    .locals 1

    .line 28
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 31
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    return-object v0

    .line 29
    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    .line 158
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 159
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    return-object v0

    .line 161
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getUserWrappers()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;",
            ">;"
        }
    .end annotation

    .line 24
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    return-object v0
.end method

.method public static getVerifyRealNameInfo()V
    .locals 1

    .line 122
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 123
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->getVerifyRealNameInfo()V

    .line 125
    :cond_0
    return-void
.end method

.method public static hideToolBar()V
    .locals 1

    .line 134
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 135
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->hideToolBar()V

    .line 137
    :cond_0
    return-void
.end method

.method public static isLogined()Z
    .locals 1

    .line 97
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 98
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->isLogined()Z

    move-result v0

    return v0

    .line 100
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isSupportFunction(Ljava/lang/String;)Z
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 58
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 59
    const/4 v0, 0x1

    return v0

    .line 61
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static login()V
    .locals 1

    .line 91
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 92
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->login()V

    .line 94
    :cond_0
    return-void
.end method

.method public static logout()V
    .locals 1

    .line 104
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 105
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->logout()V

    .line 107
    :cond_0
    return-void
.end method

.method private static registUserFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V
    .locals 4
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    .line 44
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 45
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    .line 47
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    .line 48
    .local v0, "plugin":Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    .line 49
    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_login"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 50
    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_plugin_init"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 51
    return-void
.end method

.method public static registUserFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V
    .locals 1
    .param p0, "wrapper"    # Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    .line 35
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    if-nez v0, :cond_0

    .line 36
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    .line 38
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 40
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->registUserFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    .line 41
    return-void
.end method

.method public static showToolBar()V
    .locals 1

    .line 110
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 111
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->showToolBar()V

    .line 113
    :cond_0
    return-void
.end method

.method public static showVerifyRealName()V
    .locals 1

    .line 116
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 117
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->showVerifyRealName()V

    .line 119
    :cond_0
    return-void
.end method

.method public static submitUserInfo(Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 152
    .local p0, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 153
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->submitUserInfo(Ljava/util/LinkedHashMap;)V

    .line 155
    :cond_0
    return-void
.end method

.method public static switchAccount()V
    .locals 1

    .line 140
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 141
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->switchAccount()V

    .line 143
    :cond_0
    return-void
.end method
