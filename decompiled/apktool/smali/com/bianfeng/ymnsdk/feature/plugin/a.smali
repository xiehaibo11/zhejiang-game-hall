.class public Lcom/bianfeng/ymnsdk/feature/plugin/a;
.super Ljava/lang/Object;
.source "PaymentFeatureFactory.java"


# static fields
.field private static volatile a:Z

.field private static volatile b:Lcom/bianfeng/ymnsdk/actionv2/b;

.field private static volatile c:Lcom/bianfeng/ymnsdk/action/e;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 25
    const/4 v0, 0x0

    sput-boolean v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    .line 26
    const/4 v0, 0x0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    .line 27
    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    return-void
.end method

.method static synthetic a()V
    .locals 0

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->f()V

    return-void
.end method

.method public static a(Ljava/util/Map;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;)V
    .locals 7
    .param p1, "pluginWrapper"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
    .param p2, "paymentFeature"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;
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

    .line 29
    .local p0, "order":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->getYmnsdkPayNeedLogininfo()Z

    move-result v0

    const/16 v1, 0xc9

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    .line 30
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    const/16 v2, 0xd4

    const-string v3, "\u767b\u5f55\u65f6\u7684\u6570\u636e\u6ca1\u6709"

    const-string v4, "0"

    invoke-virtual {v0, v2, v3, v4}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->payResponseOrder(ILjava/lang/String;Ljava/lang/String;)V

    .line 31
    const-string v0, "212"

    invoke-virtual {p1, v1, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 32
    return-void

    .line 34
    :cond_0
    sget-boolean v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    if-eqz v0, :cond_1

    .line 35
    return-void

    .line 37
    :cond_1
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    .line 38
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/util/Map;)V

    .line 39
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnsdkTypeUtils;->isNewTrade()Z

    move-result v2

    const/4 v3, 0x2

    const/4 v4, 0x0

    if-eqz v2, :cond_2

    .line 41
    :try_start_0
    const-string v2, "PaymentFeatureFactory payAction new"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 42
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v2

    .line 43
    .local v2, "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v5, Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v5, v6}, Lcom/bianfeng/ymnsdk/actionv2/b;-><init>(Landroid/content/Context;)V

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;)Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;

    check-cast v5, Lcom/bianfeng/ymnsdk/actionv2/b;

    sput-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    .line 44
    sget-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v4

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object v6

    aput-object v6, v3, v0

    invoke-virtual {v5, p1, v3}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 45
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    new-instance v3, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;

    invoke-direct {v3, p2, v2, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/a$a;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    invoke-virtual {v0, v3}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 64
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onStartAttachment()V

    .line 65
    const-string v0, "PaymentFeatureFactory pay"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 66
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .end local v2    # "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    goto :goto_0

    .line 67
    :catch_0
    move-exception v0

    .line 68
    .local v0, "e":Ljava/lang/Exception;
    sput-boolean v4, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    .line 69
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->f()V

    .line 70
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 71
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    goto :goto_1

    .line 74
    :cond_2
    :try_start_1
    const-string v2, "PaymentFeatureFactory payAction old"

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 75
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;

    move-result-object v2

    .line 76
    .restart local v2    # "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    new-instance v5, Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v5, v6}, Lcom/bianfeng/ymnsdk/action/e;-><init>(Landroid/content/Context;)V

    invoke-static {v5}, Lcom/bianfeng/ymnsdk/feature/d;->a(Lcom/bianfeng/ymnsdk/action/ActionSupport;)Lcom/bianfeng/ymnsdk/action/ActionSupport;

    check-cast v5, Lcom/bianfeng/ymnsdk/action/e;

    sput-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    .line 77
    sget-object v5, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v4

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object v6

    aput-object v6, v3, v0

    invoke-virtual {v5, p1, v3}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V

    .line 78
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    new-instance v3, Lcom/bianfeng/ymnsdk/feature/plugin/a$b;

    invoke-direct {v3, p2, v2, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/a$b;-><init>(Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    invoke-virtual {v0, v3}, Ljava/util/Observable;->addObserver(Ljava/util/Observer;)V

    .line 97
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onStartAttachment()V

    .line 98
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->actionStart()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 103
    .end local v2    # "retryUtils":Lcom/bianfeng/ymnsdk/util/RequestRetryUtils;
    goto :goto_1

    .line 99
    :catch_1
    move-exception v0

    .line 100
    .restart local v0    # "e":Ljava/lang/Exception;
    sput-boolean v4, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    .line 101
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->e()V

    .line 102
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 106
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method static synthetic a(Z)Z
    .locals 0
    .param p0, "x0"    # Z

    .line 24
    sput-boolean p0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->a:Z

    return p0
.end method

.method static synthetic b()Lcom/bianfeng/ymnsdk/actionv2/b;
    .locals 1

    .line 24
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    return-object v0
.end method

.method static synthetic c()V
    .locals 0

    .line 24
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/plugin/a;->e()V

    return-void
.end method

.method static synthetic d()Lcom/bianfeng/ymnsdk/action/e;
    .locals 1

    .line 24
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    return-object v0
.end method

.method private static e()V
    .locals 1

    .line 117
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    if-eqz v0, :cond_0

    .line 118
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->onEndAttachment()V

    .line 119
    const/4 v0, 0x0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->c:Lcom/bianfeng/ymnsdk/action/e;

    .line 121
    :cond_0
    return-void
.end method

.method private static f()V
    .locals 1

    .line 110
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    if-eqz v0, :cond_0

    .line 111
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->onEndAttachment()V

    .line 112
    const/4 v0, 0x0

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/plugin/a;->b:Lcom/bianfeng/ymnsdk/actionv2/b;

    .line 114
    :cond_0
    return-void
.end method
