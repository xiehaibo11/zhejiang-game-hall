.class public Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:Lcom/tkay/basead/f/g;

.field c:Lcom/tkay/core/common/f/i;

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

    .line 28
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;)V
    .locals 3

    .line 103
    new-instance v0, Lcom/tkay/basead/f/g;

    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->a:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v2}, Lcom/tkay/basead/f/g;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    .line 104
    new-instance p1, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;

    invoke-direct {p1, p0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;-><init>(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)V

    invoke-virtual {v0, p1}, Lcom/tkay/basead/f/g;->a(Lcom/tkay/basead/e/a;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 94
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 95
    invoke-virtual {v0}, Lcom/tkay/basead/f/g;->f()V

    .line 96
    iput-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    .line 99
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->c:Lcom/tkay/core/common/f/i;

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

    .line 168
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->d:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "MyOffer"

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 158
    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 2

    .line 73
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/f/g;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 74
    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->d:Ljava/util/Map;

    if-nez v1, :cond_1

    .line 75
    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/f/c;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->d:Ljava/util/Map;

    :cond_1
    return v0
.end method

.method public isSupportCustomSkipView()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 1
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

    const-string p3, "my_oid"

    .line 39
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 40
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->a:Ljava/lang/String;

    :cond_0
    const-string p3, "basead_params"

    .line 43
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 44
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->c:Lcom/tkay/core/common/f/i;

    .line 1103
    :cond_1
    new-instance p2, Lcom/tkay/basead/f/g;

    iget-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->a:Ljava/lang/String;

    invoke-direct {p2, p1, p3, v0}, Lcom/tkay/basead/f/g;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    .line 1104
    new-instance p1, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;

    invoke-direct {p1, p0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$2;-><init>(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)V

    invoke-virtual {p2, p1}, Lcom/tkay/basead/f/g;->a(Lcom/tkay/basead/e/a;)V

    .line 49
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    new-instance p2, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter$1;-><init>(Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/f/g;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 0

    .line 82
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    if-eqz p1, :cond_1

    .line 84
    invoke-virtual {p0}, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->isCustomSkipView()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 85
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    invoke-virtual {p1}, Lcom/tkay/basead/f/g;->b()V

    .line 88
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYSplashAdapter;->b:Lcom/tkay/basead/f/g;

    invoke-virtual {p1, p2}, Lcom/tkay/basead/f/g;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method
