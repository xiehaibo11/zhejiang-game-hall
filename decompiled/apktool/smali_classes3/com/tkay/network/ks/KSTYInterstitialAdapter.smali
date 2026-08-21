.class public Lcom/tkay/network/ks/KSTYInterstitialAdapter;
.super Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;


# instance fields
.field a:J

.field b:I

.field c:Z

.field d:I

.field e:Ljava/lang/String;

.field f:Lcom/kwad/sdk/api/KsFullScreenVideoAd;

.field g:Lcom/kwad/sdk/api/KsInterstitialAd;

.field h:Z

.field i:D


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 39
    invoke-direct {p0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;-><init>()V

    const/4 v0, 0x1

    .line 44
    iput v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->d:I

    const/4 v0, 0x0

    .line 52
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->h:Z

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic E(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic F(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic G(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic H(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 39
    iput v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mDismissType:I

    return v0
.end method

.method private a()V
    .locals 4

    .line 77
    new-instance v0, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->a:J

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    const/4 v1, 0x1

    .line 78
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v0

    .line 79
    iget v2, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->b:I

    const/4 v3, 0x2

    if-ne v2, v3, :cond_0

    move v1, v3

    :cond_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->screenOrientation(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v0

    .line 81
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 82
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 85
    :cond_1
    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object v0

    .line 87
    iget v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->d:I

    if-nez v1, :cond_2

    .line 88
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v1

    new-instance v2, Lcom/tkay/network/ks/KSTYInterstitialAdapter$2;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter$2;-><init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/kwad/sdk/api/KsLoadManager;->loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V

    return-void

    .line 133
    :cond_2
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v1

    new-instance v2, Lcom/tkay/network/ks/KSTYInterstitialAdapter$3;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter$3;-><init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/kwad/sdk/api/KsLoadManager;->loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V
    .locals 4

    .line 1077
    new-instance v0, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->a:J

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    const/4 v1, 0x1

    .line 1078
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v0

    .line 1079
    iget v2, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->b:I

    const/4 v3, 0x2

    if-ne v2, v3, :cond_0

    move v1, v3

    :cond_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->screenOrientation(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v0

    .line 1081
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1082
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 1085
    :cond_1
    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object v0

    .line 1087
    iget v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->d:I

    if-nez v1, :cond_2

    .line 1088
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v1

    new-instance v2, Lcom/tkay/network/ks/KSTYInterstitialAdapter$2;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter$2;-><init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/kwad/sdk/api/KsLoadManager;->loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V

    return-void

    .line 1133
    :cond_2
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v1

    new-instance v2, Lcom/tkay/network/ks/KSTYInterstitialAdapter$3;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter$3;-><init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/kwad/sdk/api/KsLoadManager;->loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V

    return-void
.end method

.method private a(Ljava/util/Map;)Z
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)Z"
        }
    .end annotation

    const-string v0, "app_id"

    .line 350
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "position_id"

    .line 351
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 354
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 359
    :cond_0
    :try_start_0
    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->a:J
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const/4 v0, 0x1

    .line 363
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->c:Z

    const-string v1, "video_muted"

    .line 364
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 365
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "0"

    invoke-static {v2, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    iput-boolean v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->c:Z

    :cond_1
    const-string v1, "orientation"

    .line 368
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 369
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->b:I

    :cond_2
    const-string v1, "is_video"

    .line 372
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 374
    invoke-static {p1, v1, v0}, Lcom/tkay/core/api/TYInitMediation;->getIntFromMap(Ljava/util/Map;Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->d:I

    :cond_3
    const-string v1, "tkay_gsp"

    .line 377
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 379
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;)D

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->i:D

    :cond_4
    const-string v1, "payload"

    .line 382
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 385
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 386
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v1

    iget-wide v2, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->i:D

    invoke-virtual {v1, p1, v2, v3}, Lcom/tkay/network/ks/KSTYInitManager;->getPayloadInfo(Ljava/lang/String;D)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->e:Ljava/lang/String;

    :cond_5
    return v0

    :cond_6
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic b(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 39
    iput v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic v(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 318
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->f:Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 319
    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsFullScreenVideoAd;->setFullScreenVideoAdInteractionListener(Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;)V

    .line 320
    iput-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->f:Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    :cond_0
    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    const-string v0, "position_id"

    .line 399
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getLongFromMap(Ljava/util/Map;Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->a:J

    .line 401
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/ks/KSTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 313
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 2

    .line 327
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->a:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 329
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 336
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 3

    .line 305
    iget v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->d:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_1

    .line 306
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->g:Lcom/kwad/sdk/api/KsInterstitialAd;

    if-eqz v0, :cond_0

    return v1

    :cond_0
    return v2

    .line 308
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->f:Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd;->isAdEnable()Z

    move-result v0

    if-eqz v0, :cond_2

    return v1

    :cond_2
    return v2
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

    .line 58
    invoke-direct {p0, p2}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->a(Ljava/util/Map;)Z

    move-result p3

    if-nez p3, :cond_0

    const-string p1, ""

    const-string p2, "kuaishou app_id or position_id is empty."

    .line 59
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 63
    :cond_0
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter$1;-><init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    invoke-virtual {p3, p1, p2, v0}, Lcom/tkay/network/ks/KSTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 4

    .line 178
    new-instance v0, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    invoke-direct {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;-><init>()V

    iget v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->b:I

    const/4 v2, 0x0

    const/4 v3, 0x2

    if-ne v1, v3, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v2

    .line 179
    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->showLandscape(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    .line 180
    invoke-virtual {v0, v2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->skipThirtySecond(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    iget-boolean v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->c:Z

    .line 181
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v0

    .line 182
    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object v0

    .line 184
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->f:Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    if-eqz v1, :cond_1

    if-eqz p1, :cond_1

    .line 185
    new-instance v2, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;-><init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    invoke-interface {v1, v2}, Lcom/kwad/sdk/api/KsFullScreenVideoAd;->setFullScreenVideoAdInteractionListener(Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;)V

    .line 235
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->f:Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    invoke-interface {v1, p1, v0}, Lcom/kwad/sdk/api/KsFullScreenVideoAd;->showFullScreenVideoAd(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V

    .line 238
    :cond_1
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->g:Lcom/kwad/sdk/api/KsInterstitialAd;

    if-eqz v1, :cond_2

    if-eqz p1, :cond_2

    .line 239
    new-instance v2, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;

    invoke-direct {v2, p0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;-><init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V

    .line 240
    invoke-interface {v1, v2}, Lcom/kwad/sdk/api/KsInterstitialAd;->setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    .line 298
    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->g:Lcom/kwad/sdk/api/KsInterstitialAd;

    invoke-interface {v1, p1, v0}, Lcom/kwad/sdk/api/KsInterstitialAd;->showInterstitialAd(Landroid/app/Activity;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V

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

    .line 341
    iput-boolean p4, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->h:Z

    .line 342
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
