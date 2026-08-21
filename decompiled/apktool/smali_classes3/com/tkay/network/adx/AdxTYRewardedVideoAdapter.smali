.class public Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# instance fields
.field a:Lcom/tkay/core/common/f/i;

.field b:Lcom/tkay/basead/d/f;

.field c:Ljava/util/Map;
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

    .line 31
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

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

    const-string v0, "v_m"

    .line 150
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 151
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 153
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const-string v1, "s_c_t"

    .line 157
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 158
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 160
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    goto :goto_1

    :cond_1
    const/4 v1, -0x1

    :goto_1
    const-string v2, "basead_params"

    .line 164
    invoke-interface {p2, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    .line 165
    new-instance p2, Lcom/tkay/basead/d/f;

    sget-object v2, Lcom/tkay/basead/d/b$a;->a:Lcom/tkay/basead/d/b$a;

    iget-object v3, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    invoke-direct {p2, p1, v2, v3}, Lcom/tkay/basead/d/f;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    iput-object p2, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    .line 166
    new-instance p1, Lcom/tkay/basead/d/c$a;

    invoke-direct {p1}, Lcom/tkay/basead/d/c$a;-><init>()V

    .line 167
    invoke-virtual {p1, v0}, Lcom/tkay/basead/d/c$a;->a(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 168
    invoke-virtual {p1, v1}, Lcom/tkay/basead/d/c$a;->b(I)Lcom/tkay/basead/d/c$a;

    move-result-object p1

    .line 169
    invoke-virtual {p1}, Lcom/tkay/basead/d/c$a;->a()Lcom/tkay/basead/d/c;

    move-result-object p1

    .line 166
    invoke-virtual {p2, p1}, Lcom/tkay/basead/d/f;->a(Lcom/tkay/basead/d/c;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 31
    iget-object p0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    if-eqz v0, :cond_0

    .line 177
    invoke-virtual {v0}, Lcom/tkay/basead/d/f;->b()V

    const/4 v0, 0x0

    .line 178
    iput-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    :cond_0
    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    const-string p3, "basead_params"

    .line 213
    invoke-interface {p2, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/i;

    .line 214
    new-instance p3, Lcom/tkay/network/adx/AdxBidRequestInfo;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-direct {p3, p1, p2}, Lcom/tkay/network/adx/AdxBidRequestInfo;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 215
    invoke-virtual {p3}, Lcom/tkay/network/adx/AdxBidRequestInfo;->fillAdAcceptType()V

    if-eqz p4, :cond_0

    .line 217
    invoke-interface {p4, p3}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onSuccess(Lcom/tkay/core/api/TYBidRequestInfo;)V

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

    .line 208
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->c:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 194
    invoke-static {}, Lcom/tkay/network/adx/AdxTYInitManager;->getInstance()Lcom/tkay/network/adx/AdxTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 184
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->a:Lcom/tkay/core/common/f/i;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, ""

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
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V

    const/4 p1, 0x1

    return p1
.end method

.method public isAdReady()Z
    .locals 2

    .line 199
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

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

    .line 200
    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->c:Ljava/util/Map;

    if-nez v1, :cond_1

    .line 201
    iget-object v1, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    invoke-static {v1}, Lcom/tkay/basead/b;->a(Lcom/tkay/basead/d/b;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->c:Ljava/util/Map;

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
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V

    .line 115
    iget-object p1, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    new-instance p2, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$2;

    invoke-direct {p2, p0}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;)V

    invoke-virtual {p1, p2}, Lcom/tkay/basead/d/f;->a(Lcom/tkay/basead/e/c;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 4

    .line 39
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->g(Landroid/content/Context;)I

    move-result v0

    .line 40
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x1

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    .line 41
    iget-object v2, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->mScenario:Ljava/lang/String;

    const-string v3, "extra_scenario"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 42
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v2, "extra_orientation"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 44
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    new-instance v2, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;

    invoke-virtual {v0}, Lcom/tkay/basead/d/f;->e()Lcom/tkay/core/common/f/h;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;Lcom/tkay/core/common/f/h;)V

    invoke-virtual {v0, v2}, Lcom/tkay/basead/d/f;->a(Lcom/tkay/basead/e/a;)V

    .line 105
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYRewardedVideoAdapter;->b:Lcom/tkay/basead/d/f;

    if-eqz v0, :cond_0

    .line 106
    invoke-virtual {v0, p1, v1}, Lcom/tkay/basead/d/f;->a(Landroid/app/Activity;Ljava/util/Map;)V

    :cond_0
    return-void
.end method
