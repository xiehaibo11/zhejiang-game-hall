.class public Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;
.super Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;


# static fields
.field private static final c:Ljava/lang/String;


# instance fields
.field a:Z

.field b:Ljava/lang/String;

.field private d:Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

.field private e:Ljava/lang/String;

.field private f:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

.field private g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

.field private h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

.field private volatile i:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 40
    const-class v0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->c:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;-><init>()V

    const-string v0, ""

    .line 42
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    const/4 v0, 0x0

    .line 46
    iput-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a:Z

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic E(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method private a()V
    .locals 4

    .line 116
    new-instance v0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    const-string v2, ""

    const/4 v3, 0x0

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d:Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    .line 118
    new-instance v0, Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d:Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    invoke-direct {v0, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;-><init>(Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    .line 119
    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->setWindInterstitialAdListener(Lcom/sigmob/windad/interstitial/WindInterstitialAdListener;)V

    .line 204
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    if-eqz v0, :cond_0

    const-string v1, "USD"

    .line 205
    invoke-virtual {v0, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->setCurrency(Ljava/lang/String;)V

    .line 206
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    invoke-virtual {v0}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->loadAd()Z

    return-void

    .line 209
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 210
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 212
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    invoke-virtual {v0}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->loadAd()Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)V
    .locals 4

    .line 1116
    new-instance v0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    const-string v2, ""

    const/4 v3, 0x0

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d:Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    .line 1118
    new-instance v0, Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d:Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    invoke-direct {v0, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;-><init>(Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    .line 1119
    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->setWindInterstitialAdListener(Lcom/sigmob/windad/interstitial/WindInterstitialAdListener;)V

    .line 1204
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    if-eqz v0, :cond_0

    const-string v1, "USD"

    .line 1205
    invoke-virtual {v0, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->setCurrency(Ljava/lang/String;)V

    .line 1206
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    invoke-virtual {p0}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->loadAd()Z

    return-void

    .line 1209
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1210
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b:Ljava/lang/String;

    invoke-virtual {v0, p0}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 1212
    :cond_1
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    invoke-virtual {p0}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->loadAd()Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 38
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 411
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-static {p1, p2, v0, v1, v2}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/core/api/TYBiddingListener;Lcom/tkay/core/api/TYCustomLoadListener;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Z
    .locals 0

    .line 38
    iget-boolean p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    return p0
.end method

.method static synthetic d(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/interstitial/WindInterstitialAd;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    const/4 v0, 0x0

    .line 373
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->f:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    .line 374
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->d:Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    .line 376
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz v1, :cond_0

    .line 377
    invoke-virtual {v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->destroy()V

    .line 378
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    .line 381
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    if-eqz v1, :cond_1

    .line 382
    invoke-virtual {v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->destroy()V

    .line 383
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    :cond_1
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

    .line 399
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    .line 400
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 368
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 389
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 394
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 2

    .line 353
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 354
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz v0, :cond_0

    .line 355
    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->isReady()Z

    move-result v0

    return v0

    :cond_0
    return v1

    .line 359
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    if-eqz v0, :cond_2

    .line 360
    invoke-virtual {v0}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->isReady()Z

    move-result v0

    return v0

    :cond_2
    return v1
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 3
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

    const-string v0, "app_id"

    .line 56
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "app_key"

    .line 57
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "placement_id"

    .line 58
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    const-string v2, "payload"

    .line 59
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b:Ljava/lang/String;

    .line 76
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    const-string v1, "is_use_rewarded_video_as_interstitial"

    .line 85
    invoke-static {p3, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getBooleanFromMap(Ljava/util/Map;Ljava/lang/String;Z)Z

    move-result p3

    iput-boolean p3, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a:Z

    .line 87
    new-instance p3, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;

    invoke-direct {p3, p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p0, p3}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->postOnMainThread(Ljava/lang/Runnable;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, ""

    const-string p2, "app_id\u3001app_key\u3001placement_id could not be null."

    .line 77
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 2

    .line 329
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->isAdReady()Z

    move-result p1

    if-eqz p1, :cond_3

    .line 331
    iget-boolean p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a:Z

    const/4 v0, 0x1

    if-eqz p1, :cond_1

    .line 332
    iget-boolean p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    if-eqz p1, :cond_0

    .line 334
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-static {v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getEcpmInt(Ljava/lang/Object;)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setBidEcpm(I)V

    .line 336
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1, v0}, Ljava/util/HashMap;-><init>(I)V

    invoke-virtual {p1, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->show(Ljava/util/HashMap;)Z

    return-void

    .line 338
    :cond_1
    iget-boolean p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    if-eqz p1, :cond_2

    .line 340
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    invoke-static {v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getEcpmInt(Ljava/lang/Object;)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->setBidEcpm(I)V

    .line 342
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->g:Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1, v0}, Ljava/util/HashMap;-><init>(I)V

    invoke-virtual {p1, v1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->show(Ljava/util/HashMap;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception p1

    .line 347
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

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

    .line 405
    iput-boolean p4, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    .line 406
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method

.method public startLoadAdForReward()V
    .locals 4

    .line 217
    new-instance v0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->e:Ljava/lang/String;

    const-string v2, ""

    const/4 v3, 0x0

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->f:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    .line 219
    new-instance v0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->f:Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    invoke-direct {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;-><init>(Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    .line 220
    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;-><init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setWindRewardVideoAdListener(Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;)V

    .line 311
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->i:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz v0, :cond_0

    const-string v1, "USD"

    .line 312
    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setCurrency(Ljava/lang/String;)V

    .line 313
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd()Z

    return-void

    .line 317
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 318
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 320
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->h:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->loadAd()Z

    return-void
.end method
