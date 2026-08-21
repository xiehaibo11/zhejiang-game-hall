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

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->e()V

    return-void
.end method

.method private static a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 4

    .line 15
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 16
    new-instance v1, Lcom/bianfeng/ymnsdk/action/d;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/action/d;-><init>(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Lcom/bianfeng/ymnsdk/action/ActionSupport;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/action/d;

    const/4 v2, 0x2

    .line 17
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 p1, 0x1

    aput-object p2, v2, p1

    invoke-virtual {v1, p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 18
    new-instance p1, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;

    invoke-direct {p1, v1, p0, v0}, Lcom/bianfeng/ymnsdk/feature/plugin/b$a;-><init>(Lcom/bianfeng/ymnsdk/action/d;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;)V

    invoke-virtual {v1, p1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 38
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 39
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    return-void
.end method

.method private static a(Ljava/lang/Object;)V
    .locals 4

    .line 40
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    .line 41
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getAppId()I

    move-result v0

    .line 42
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigId()I

    move-result v1

    .line 43
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-interface {v2}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 44
    new-instance v3, Lcom/bianfeng/ymnsdk/entity/LoginEntity;

    invoke-direct {v3, v0, v1, v2, p0}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;-><init>(IIILjava/lang/String;)V

    .line 45
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->toString()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d:Ljava/lang/String;

    .line 46
    new-instance p0, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;

    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/entity/LoginDataEntity;->toString()Ljava/lang/String;

    move-result-object p0

    .line 47
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    const/16 v1, 0x66

    invoke-virtual {v0, v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    .line 48
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkPayNeedLogininfo()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 49
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d()V

    goto :goto_0

    .line 51
    :cond_0
    new-instance p0, Ljava/util/HashMap;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/Map;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 54
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const/16 v1, 0x69

    invoke-virtual {v0, v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V
    .locals 2

    .line 2
    sput-object p1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 3
    sput-object p2, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    .line 6
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 7
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;

    move-result-object p0

    .line 8
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->a()Ljava/lang/Object;

    move-result-object p2

    .line 9
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnCallback$a;->b()Ljava/lang/Object;

    move-result-object p0

    move-object v1, p2

    move-object p2, p0

    move-object p0, v1

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    .line 11
    :goto_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewLogin()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 12
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a(Ljava/lang/Object;)V

    goto :goto_1

    .line 14
    :cond_1
    invoke-static {p1, p0, p2}, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Ljava/lang/Object;Ljava/lang/Object;)V

    :goto_1
    return-void
.end method

.method static synthetic b()Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    return-object v0
.end method

.method static synthetic c()Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    return-object v0
.end method

.method protected static d()V
    .locals 6

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    if-nez v0, :cond_0

    const-string v0, "pluginWrapper is null"

    .line 2
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 3
    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->b:Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;

    const/16 v2, 0x77

    invoke-virtual {v1, v2, v0}, Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;->dispatchNext(ILjava/lang/String;)V

    return-void

    .line 7
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v0

    .line 8
    new-instance v1, Lcom/bianfeng/ymnsdk/actionv2/a;

    sget-object v2, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/ymnsdk/actionv2/a;-><init>(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;)Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/ymnsdk/actionv2/a;

    .line 9
    sget-object v2, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    sget-object v4, Lcom/bianfeng/ymnsdk/feature/plugin/b;->d:Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 10
    new-instance v2, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;

    invoke-direct {v2, v0, v1}, Lcom/bianfeng/ymnsdk/feature/plugin/b$b;-><init>(Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/actionv2/a;)V

    invoke-virtual {v1, v2}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 27
    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->actionStart()V

    return-void
.end method

.method private static e()V
    .locals 5

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/action/h;

    sget-object v1, Lcom/bianfeng/ymnsdk/feature/plugin/b;->a:Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/action/h;-><init>(Landroid/content/Context;)V

    .line 2
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

    .line 3
    new-instance v1, Lcom/bianfeng/ymnsdk/feature/plugin/b$c;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/feature/plugin/b$c;-><init>()V

    invoke-virtual {v0, v1}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 16
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V

    return-void
.end method
