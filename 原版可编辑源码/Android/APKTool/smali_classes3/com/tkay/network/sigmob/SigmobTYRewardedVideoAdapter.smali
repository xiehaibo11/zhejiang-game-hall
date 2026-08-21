.class public Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

.field private volatile f:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    const-class v0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 36
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    const-string v0, ""

    .line 40
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    return-void
.end method

.method private a()V
    .locals 4

    .line 99
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 100
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    .line 101
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "{network_placement_id}"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 102
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 104
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "user_custom_data"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 106
    :goto_0
    new-instance v1, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v0}, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    .line 108
    new-instance v0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    invoke-direct {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;-><init>(Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    .line 109
    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setWindRewardVideoAdListener(Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;)V

    .line 204
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->f:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz v0, :cond_2

    const-string v1, "USD"

    .line 205
    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setCurrency(Ljava/lang/String;)V

    .line 206
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd()Z

    return-void

    .line 209
    :cond_2
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 210
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 212
    :cond_3
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd()Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)V
    .locals 4

    .line 1099
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1100
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    .line 1101
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "{network_placement_id}"

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1102
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    .line 1104
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    const-string v2, "user_custom_data"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 1106
    :goto_0
    new-instance v1, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v0}, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    .line 1108
    new-instance v0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    invoke-direct {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;-><init>(Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    .line 1109
    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setWindRewardVideoAdListener(Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;)V

    .line 1204
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->f:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz v0, :cond_2

    const-string v1, "USD"

    .line 1205
    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setCurrency(Ljava/lang/String;)V

    .line 1206
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {p0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd()Z

    return-void

    .line 1209
    :cond_2
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 1210
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d:Ljava/lang/String;

    invoke-virtual {v0, p0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 1212
    :cond_3
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {p0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd()Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 36
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 286
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->f:Z

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-static {p1, p2, v0, v1, v2}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/core/api/TYBiddingListener;Lcom/tkay/core/api/TYCustomLoadListener;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Z
    .locals 0

    .line 36
    iget-boolean p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->f:Z

    return p0
.end method

.method static synthetic d(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 255
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 256
    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->destroy()V

    .line 257
    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    .line 259
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    const-string v0, "placement_id"

    .line 274
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    .line 275
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 250
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 264
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 269
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 241
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz v0, :cond_0

    .line 242
    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->isReady()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 2
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

    const-string p3, "app_id"

    .line 48
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const-string v0, "app_key"

    .line 49
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "placement_id"

    .line 50
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    const-string v1, "payload"

    .line 51
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d:Ljava/lang/String;

    .line 69
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    iget-object p3, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    goto :goto_0

    .line 74
    :cond_0
    new-instance p3, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;

    invoke-direct {p3, p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p0, p3}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->postOnMainThread(Ljava/lang/Runnable;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, ""

    const-string p2, "app_id\u3001app_key\u3001placement_id could not be null."

    .line 70
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 2

    .line 220
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_2

    .line 224
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->isAdReady()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 225
    iget-boolean p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->f:Z

    if-eqz p1, :cond_1

    .line 226
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getEcpmInt(Ljava/lang/Object;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setBidEcpm(I)V

    .line 229
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    invoke-virtual {p1, v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->show(Ljava/util/HashMap;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    nop

    :catch_0
    :cond_2
    return-void
.end method

.method public startBiddingRequest(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBiddingListener;)Z
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
            "Lcom/tkay/core/api/TYBiddingListener;",
            ")Z"
        }
    .end annotation

    const/4 p4, 0x1

    .line 280
    iput-boolean p4, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->f:Z

    .line 281
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
