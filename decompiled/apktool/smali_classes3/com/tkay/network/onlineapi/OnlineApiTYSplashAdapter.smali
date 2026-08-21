.class public Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;


# instance fields
.field a:Lcom/tkay/basead/d/g;

.field b:Lcom/tkay/core/common/f/i;

.field c:Ljava/lang/String;

.field d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "unit_id"

    .line 99
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, ""

    :goto_0
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->c:Ljava/lang/String;

    const/4 v0, 0x5

    const-string v1, "orientation"

    .line 105
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    .line 106
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 108
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v3

    :goto_1
    const-string v2, "countdown"

    .line 112
    invoke-interface {p2, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 113
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 115
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    :cond_2
    const-string v2, "allows_skip"

    .line 119
    invoke-interface {p2, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 120
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_5

    .line 122
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    if-nez v2, :cond_3

    goto :goto_2

    :cond_3
    if-ne v2, v3, :cond_4

    const/4 v3, 0x0

    goto :goto_2

    :cond_4
    move v3, v2

    :cond_5
    :goto_2
    const-string v2, "basead_params"

    .line 132
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 133
    new-instance p2, Lcom/tkay/basead/d/g;

    sget-object v2, Lcom/tkay/basead/d/b$a;->b:Lcom/tkay/basead/d/b$a;

    iget-object v4, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v2, v4}, Lcom/tkay/basead/d/g;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    .line 134
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 135
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->d(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 136
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->e(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 137
    invoke-virtual {p1, v3}, Lcom/tkay/basead/d/c$a;->f(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 138
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 134
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/d/c;)V

    .line 141
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    new-instance p2, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;

    invoke-direct {p2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/e/a;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 90
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 91
    invoke-virtual {v0}, Lcom/tkay/basead/d/g;->b()V

    .line 92
    iput-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    .line 95
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    return-void
.end method

.method public getNetworkInfoMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 204
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->d:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 192
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public isAdReady()Z
    .locals 2

    .line 69
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/d/g;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 70
    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->d:Ljava/util/Map;

    if-nez v1, :cond_1

    .line 71
    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/d/b;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->d:Ljava/util/Map;

    :cond_1
    return v0
.end method

.method public isSupportCustomSkipView()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string p3, "unit_id"

    .line 1099
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    goto :goto_0

    :cond_0
    const-string p3, ""

    :goto_0
    iput-object p3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->c:Ljava/lang/String;

    const/4 p3, 0x5

    const-string v0, "orientation"

    .line 1105
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    .line 1106
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1108
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_1

    :cond_1
    move v0, v2

    :goto_1
    const-string v1, "countdown"

    .line 1112
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 1113
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 1115
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p3

    mul-int/lit16 p3, p3, 0x3e8

    :cond_2
    const-string v1, "allows_skip"

    .line 1119
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 1120
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_5

    .line 1122
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_3

    goto :goto_2

    :cond_3
    if-ne v1, v2, :cond_4

    const/4 v2, 0x0

    goto :goto_2

    :cond_4
    move v2, v1

    :cond_5
    :goto_2
    const-string v1, "basead_params"

    .line 1132
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    .line 1133
    new-instance p2, Lcom/tkay/basead/d/g;

    sget-object v1, Lcom/tkay/basead/d/b$a;->b:Lcom/tkay/basead/d/b$a;

    iget-object v3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->b:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v1, v3}, Lcom/tkay/basead/d/g;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    .line 1134
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 1135
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->d(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1136
    invoke-virtual {p1, p3}, Lcom/tkay/basead/d/c$a;->e(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1137
    invoke-virtual {p1, v2}, Lcom/tkay/basead/d/c$a;->f(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 1138
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 1134
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/d/c;)V

    .line 1141
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    new-instance p2, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;

    invoke-direct {p2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$2;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/e/a;)V

    .line 42
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    new-instance p2, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter$1;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 0

    .line 78
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    if-eqz p1, :cond_1

    .line 80
    invoke-virtual {p0}, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->isCustomSkipView()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 81
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    invoke-virtual {p1}, Lcom/tkay/basead/d/g;->a()V

    .line 84
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYSplashAdapter;->a:Lcom/tkay/basead/d/g;

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/g;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method
