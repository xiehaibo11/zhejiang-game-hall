.class public Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# instance fields
.field a:Lcom/tkay/core/common/f/i;

.field b:Lcom/tkay/basead/d/f;

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

    .line 30
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;)V
    .locals 4
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

    .line 148
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
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->c:Ljava/lang/String;

    const/4 v0, 0x0

    const/4 v1, -0x1

    const-string v2, "v_m"

    .line 153
    invoke-interface {p2, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 154
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 156
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    :cond_1
    const-string v2, "s_c_t"

    .line 160
    invoke-interface {p2, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 161
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 163
    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    :cond_2
    const-string v2, "basead_params"

    .line 167
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    .line 168
    new-instance p2, Lcom/tkay/basead/d/f;

    sget-object v2, Lcom/tkay/basead/d/b$a;->b:Lcom/tkay/basead/d/b$a;

    iget-object v3, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v2, v3}, Lcom/tkay/basead/d/f;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    .line 169
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 170
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->a(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 171
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->b(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 172
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 169
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/f;->a(Lcom/tkay/basead/d/c;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    .line 178
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    if-eqz v0, :cond_0

    .line 179
    invoke-virtual {v0}, Lcom/tkay/basead/d/f;->b()V

    const/4 v0, 0x0

    .line 180
    iput-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

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

    .line 210
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->d:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 186
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z
    .locals 0
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

    .line 142
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V

    const/4 p1, 0x1

    return p1
.end method

.method public isAdReady()Z
    .locals 2

    .line 201
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/d/f;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    .line 202
    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->d:Ljava/util/Map;

    if-nez v1, :cond_1

    .line 203
    iget-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/d/b;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->d:Ljava/util/Map;

    :cond_1
    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0
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

    .line 113
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V

    .line 115
    iget-object p1, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    new-instance p2, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$2;

    invoke-direct {p2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/f;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 4

    .line 40
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->g(Landroid/content/Context;)I

    move-result v0

    .line 41
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x1

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    .line 42
    iget-object v2, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->mScenario:Ljava/lang/String;

    const-string v3, "extra_scenario"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 43
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "extra_orientation"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 45
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    new-instance v2, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;

    invoke-direct {v2, p0}, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;)V

    invoke-virtual {v0, v2}, Lcom/tkay/basead/d/f;->a(Lcom/tkay/basead/e/a;)V

    .line 105
    iget-object v0, p0, Lcom/tkay/network/onlineapi/OnlineApiTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    if-eqz v0, :cond_0

    .line 106
    invoke-virtual {v0, p1, v1}, Lcom/tkay/basead/d/f;->a(Landroid/app/Activity;Ljava/util/Map;)V

    :cond_0
    return-void
.end method
