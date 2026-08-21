.class public Lcom/bianfeng/ymnsdk/feature/plugin/a;
.super Ljava/lang/Object;
.source "PaymentFeatureFactory.java"


# static fields
.field private static volatile a:Z = false

.field private static volatile b:Lcom/bianfeng/ymnsdk/actionv2/b;

.field private static volatile c:Lcom/bianfeng/ymnsdk/action/e;


# direct methods
.method static synthetic a()V
    .locals 0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->f()V

    return-void
.end method

.method public static a(Ljava/util/Map;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            "Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;",
            ")V"
        }
    .end annotation

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkPayNeedLogininfo()Z

    move-result v0

    const/16 v1, 0xc9

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object p0

    const/16 p2, 0xd4

    const-string v0, "\u767b\u5f55\u65f6\u7684\u6570\u636e\u6ca1\u6709"

    const-string v2, "0"

    invoke-virtual {p0, p2, v0, v2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    const-string p0, "212"

    .line 5
    invoke-virtual {p1, v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    return-void

    .line 8
    :cond_0
    sget-boolean v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 11
    sput-boolean v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    .line 12
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/Map;)V

    .line 13
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewTrade()Z

    move-result v2

    const/4 v3, 0x2

    const/4 v4, 0x0

    if-eqz v2, :cond_2

    :try_start_0
    const-string v2, "PaymentFeatureFactory payAction new"

    .line 15
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 16
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v2

    .line 17
    new-instance v5, Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v5, v6}, Lcom/bianfeng/ymnsdk/actionv2/b;-><init>(Landroid/content/Context;)V

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/actionv2/b;

    sput-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    .line 18
    sget-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v4

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object p0

    aput-object p0, v3, v0

    invoke-virtual {v5, p1, v3}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 19
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;

    invoke-direct {v0, p2, v2, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    invoke-virtual {p0, v0}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 38
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    const-string p0, "PaymentFeatureFactory pay"

    .line 39
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 40
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 42
    sput-boolean v4, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    .line 43
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->f()V

    .line 44
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    :cond_2
    :try_start_1
    const-string v2, "PaymentFeatureFactory payAction old"

    .line 48
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 49
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v2

    .line 50
    new-instance v5, Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v5, v6}, Lcom/bianfeng/ymnsdk/action/e;-><init>(Landroid/content/Context;)V

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Lcom/bianfeng/ymnsdk/action/ActionSupport;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/action/e;

    sput-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    .line 51
    sget-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v4

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object p0

    aput-object p0, v3, v0

    invoke-virtual {v5, p1, v3}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 52
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    new-instance v0, Lcom/bianfeng/ymnsdk/feature/plugin/a$b;

    invoke-direct {v0, p2, v2, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/a$b;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    invoke-virtual {p0, v0}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 71
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 72
    sget-object p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception p0

    .line 74
    sput-boolean v4, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    .line 75
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->e()V

    .line 76
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, v1, p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Z)Z
    .locals 0

    .line 1
    sput-boolean p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    return p0
.end method

.method static synthetic b()Lcom/bianfeng/ymnsdk/actionv2/b;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    return-object v0
.end method

.method static synthetic c()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->e()V

    return-void
.end method

.method static synthetic d()Lcom/bianfeng/ymnsdk/action/e;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    return-object v0
.end method

.method private static e()V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    if-eqz v0, :cond_0

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onEndAttachment()V

    const/4 v0, 0x0

    .line 3
    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    :cond_0
    return-void
.end method

.method private static f()V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    if-eqz v0, :cond_0

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onEndAttachment()V

    const/4 v0, 0x0

    .line 3
    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    :cond_0
    return-void
.end method
