.class public Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# instance fields
.field a:Lcom/tkay/core/common/f/i;

.field b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/lang/String;

.field private d:Lcom/tkay/basead/f/f;

.field private e:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 30
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    const-string v0, ""

    .line 32
    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->c:Ljava/lang/String;

    const/4 v0, 0x0

    .line 34
    iput-boolean v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->e:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/basead/f/f;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    return-object p0
.end method

.method private a(Landroid/content/Context;)V
    .locals 4

    .line 81
    new-instance v0, Lcom/tkay/basead/f/f;

    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->c:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->e:Z

    invoke-direct {v0, p1, v1, v2, v3}, Lcom/tkay/basead/f/f;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    iput-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 193
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 194
    invoke-virtual {v0, v1}, Lcom/tkay/basead/f/f;->a(Lcom/tkay/basead/e/g;)V

    .line 195
    iput-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    :cond_0
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

    .line 211
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->b:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "MyOffer"

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 188
    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z
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
            ">;)Z"
        }
    .end annotation

    const-string p3, "my_oid"

    .line 92
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 93
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->c:Ljava/lang/String;

    :cond_0
    const-string p3, "basead_params"

    .line 95
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 96
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    :cond_1
    const-string p3, "isDefaultOffer"

    .line 98
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 99
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    iput-boolean p2, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->e:Z

    .line 102
    :cond_2
    invoke-direct {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->a(Landroid/content/Context;)V

    const/4 p1, 0x1

    return p1
.end method

.method public isAdReady()Z
    .locals 2

    .line 179
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/f/f;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 180
    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->b:Ljava/util/Map;

    if-nez v1, :cond_1

    .line 181
    iget-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/f/c;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->b:Ljava/util/Map;

    :cond_1
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

    .line 48
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 49
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->c:Ljava/lang/String;

    :cond_0
    const-string p3, "basead_params"

    .line 51
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 52
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    .line 55
    :cond_1
    invoke-direct {p0, p1}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->a(Landroid/content/Context;)V

    .line 57
    iget-object p1, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    new-instance p2, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;

    invoke-direct {p2, p0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/f/f;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 4

    .line 108
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->g(Landroid/content/Context;)I

    move-result v0

    .line 109
    invoke-virtual {p0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->isAdReady()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 110
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x1

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    .line 111
    iget-object v2, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v3, "extra_request_id"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 112
    iget-object v2, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->mScenario:Ljava/lang/String;

    const-string v3, "extra_scenario"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 113
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "extra_orientation"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 115
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    new-instance v2, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;

    invoke-direct {v2, p0}, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;)V

    invoke-virtual {v0, v2}, Lcom/tkay/basead/f/f;->a(Lcom/tkay/basead/e/g;)V

    .line 173
    iget-object v0, p0, Lcom/tkay/network/myoffer/MyOfferTYRewardedVideoAdapter;->d:Lcom/tkay/basead/f/f;

    invoke-virtual {v0, p1, v1}, Lcom/tkay/basead/f/f;->a(Landroid/app/Activity;Ljava/util/Map;)V

    :cond_0
    return-void
.end method
