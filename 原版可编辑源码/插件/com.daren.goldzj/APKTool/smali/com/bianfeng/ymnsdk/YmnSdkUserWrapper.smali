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

    .line 1
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;-><init>()V

    return-void
.end method

.method private static availableDefault()Z
    .locals 2

    .line 1
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

    :cond_0
    return v1

    :cond_1
    :goto_0
    const-string v0, "not exist available UserFeature plugin or has more than 1 UserFeature plugin"

    .line 2
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/4 v0, 0x0

    return v0
.end method

.method public static callFunction(Ljava/lang/String;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "login"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->login()V

    .line 4
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

    .line 5
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->inited()Ljava/lang/String;

    goto :goto_0

    .line 7
    :cond_1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callFunction(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static enterPlatform()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->enterPlatform()V

    :cond_0
    return-void
.end method

.method public static exit()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->exit()V

    :cond_0
    return-void
.end method

.method public static getAndShowVerifyRealName()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->getAndShowVerifyRealName()V

    :cond_0
    return-void
.end method

.method public static getPluginName()Ljava/lang/String;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    return-object v0
.end method

.method public static getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    return-object v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object v0

    return-object v0

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

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    return-object v0
.end method

.method public static getVerifyRealNameInfo()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->getVerifyRealNameInfo()V

    :cond_0
    return-void
.end method

.method public static hideToolBar()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->hideToolBar()V

    :cond_0
    return-void
.end method

.method public static isLogined()Z
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->isLogined()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static isSupportFunction(Ljava/lang/String;)Z
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 4
    :cond_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkPaymentWrapper;->isSupportFunction(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static login()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->login()V

    :cond_0
    return-void
.end method

.method public static logout()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->logout()V

    :cond_0
    return-void
.end method

.method private static registUserFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V
    .locals 3

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    .line 4
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->a()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    move-result-object v0

    .line 5
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    .line 6
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_login"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 7
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->autoFunctions:Ljava/util/Map;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->pluginName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_plugin_init"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static registUserFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    if-nez v0, :cond_0

    .line 2
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->wrappers:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 6
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->registUserFeatureAutoFunctions(Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;)V

    return-void
.end method

.method public static showToolBar()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->showToolBar()V

    :cond_0
    return-void
.end method

.method public static showVerifyRealName()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->showVerifyRealName()V

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

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->submitUserInfo(Ljava/util/LinkedHashMap;)V

    :cond_0
    return-void
.end method

.method public static switchAccount()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->availableDefault()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;->getUserDefault()Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/UserFeatureWrapper;->switchAccount()V

    :cond_0
    return-void
.end method
