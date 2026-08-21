.class public Lcom/bianfeng/ymnsdk/feature/plugin/b;
.super Ljava/lang/Object;
.source "UserFeatureFactory.java"


# static fields
.field private static a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

.field private static b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

.field public static c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

.field private static d:Ljava/lang/String;


# direct methods
.method static synthetic a()V
    .locals 0

    .line 33
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->e()V

    return-void
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 4
    .param p0, "pluginWrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p1, "data"    # Ljava/lang/Object;
    .param p2, "ext"    # Ljava/lang/Object;

    .line 56
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 57
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/action/d;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/d;-><init>(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Lcom/bianfeng/ymnsdk/action/ActionSupport;

    check-cast v1, Lcom/bianfeng/ymnsdk/action/d;

    .line 58
    .local v1, "action":Lcom/bianfeng/ymnsdk/action/d;
    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 v3, 0x1

    aput-object p2, v2, v3

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 59
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;

    invoke-direct {v2, v1, p0, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;-><init>(Lcom/bianfeng/ymnsdk/action/d;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 79
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 80
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 81
    return-void
.end method

.method private static a(Ljava/lang/Object;)V
    .locals 8
    .param p0, "msg"    # Ljava/lang/Object;

    .line 87
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 88
    .local v0, "data":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getAppId()I

    move-result v1

    .line 89
    .local v1, "app_id":I
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigId()I

    move-result v2

    .line 90
    .local v2, "package_id":I
    sget-object v3, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-interface {v3}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 91
    .local v3, "platform_id":I
    new-instance v4, Lcom/bianfeng/ymnsdk/entity/LoginEntity;

    invoke-direct {v4, v1, v2, v3, v0}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;-><init>(IIILjava/lang/String;)V

    .line 92
    .local v4, "entity":Lcom/bianfeng/ymnsdk/entity/LoginEntity;
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->toString()Ljava/lang/String;

    move-result-object v5

    sput-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d:Ljava/lang/String;

    .line 93
    new-instance v5, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;

    sget-object v6, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d:Ljava/lang/String;

    invoke-direct {v5, v6}, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->toString()Ljava/lang/String;

    move-result-object v5

    .line 94
    .local v5, "dataLoginStr":Ljava/lang/String;
    sget-object v6, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    const/16 v7, 0x66

    invoke-virtual {v6, v7, v5}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    .line 95
    const-string v6, "ymn_login_data"

    sget-object v7, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d:Ljava/lang/String;

    invoke-static {v6, v7}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\u4f20\u5165\u7684session\u662f:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 97
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkPayNeedLogininfo()Z

    move-result v6

    if-eqz v6, :cond_0

    .line 98
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d()V

    goto :goto_0

    .line 100
    :cond_0
    new-instance v6, Ljava/util/HashMap;

    invoke-direct {v6}, Ljava/util/HashMap;-><init>()V

    sget-object v7, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-interface {v7}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/Map;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 104
    .end local v0    # "data":Ljava/lang/String;
    .end local v1    # "app_id":I
    .end local v2    # "package_id":I
    .end local v3    # "platform_id":I
    .end local v4    # "entity":Lcom/bianfeng/ymnsdk/entity/LoginEntity;
    .end local v5    # "dataLoginStr":Ljava/lang/String;
    :goto_0
    goto :goto_1

    .line 102
    :catch_0
    move-exception v0

    .line 103
    .local v0, "e":Ljava/lang/Exception;
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    const/16 v2, 0x69

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    .line 105
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V
    .locals 3
    .param p0, "msg"    # Ljava/lang/String;
    .param p1, "pluginWrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p2, "interceptor"    # Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 39
    sput-object p1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 40
    sput-object p2, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 41
    move-object v0, p0

    .line 42
    .local v0, "data":Ljava/lang/Object;
    const/4 v1, 0x0

    .line 43
    .local v1, "ext":Ljava/lang/Object;
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 44
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;

    move-result-object v2

    .line 45
    .local v2, "messageObj":Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a()Ljava/lang/Object;

    move-result-object v0

    .line 46
    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b()Ljava/lang/Object;

    move-result-object v1

    .line 48
    .end local v2    # "messageObj":Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewLogin()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 49
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a(Ljava/lang/Object;)V

    goto :goto_0

    .line 51
    :cond_1
    invoke-static {p1, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/Object;Ljava/lang/Object;)V

    .line 53
    :goto_0
    return-void
.end method

.method static synthetic b()Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    .locals 1

    .line 33
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    return-object v0
.end method

.method static synthetic c()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .locals 1

    .line 33
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    return-object v0
.end method

.method protected static d()V
    .locals 6

    .line 113
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    if-nez v0, :cond_0

    .line 114
    const-string v0, "pluginWrapper is null"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 115
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    const/16 v2, 0x77

    invoke-virtual {v1, v2, v0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    .line 116
    return-void

    .line 119
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 120
    .local v0, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/a;

    sget-object v2, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/actionv2/a;-><init>(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;)Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;

    check-cast v1, Lcom/bianfeng/ymnsdk/actionv2/a;

    .line 121
    .local v1, "action":Lcom/bianfeng/ymnsdk/actionv2/a;
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    sget-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d:Ljava/lang/String;

    aput-object v5, v3, v4

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 122
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;

    invoke-direct {v2, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;-><init>(Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/actionv2/a;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 139
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->actionStart()V

    .line 140
    return-void
.end method

.method private static e()V
    .locals 5

    .line 143
    new-instance v0, Lcom/bianfeng/ymnsdk/action/h;

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/action/h;-><init>(Landroid/content/Context;)V

    .line 144
    .local v0, "action":Lcom/bianfeng/ymnsdk/action/h;
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    sget-object v3, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getYmnUserIdInt()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    sget-object v3, Lcom/bianfeng/ymnsdk/feature/plugin/b;->c:Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->getPlatformUserId()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x1

    aput-object v3, v2, v4

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 145
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/b$c;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/feature/plugin/b$c;-><init>()V

    invoke-virtual {v0, v1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 158
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    .line 159
    return-void
.end method
