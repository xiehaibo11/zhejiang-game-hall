.class public Lcom/tkay/network/ks/KSTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;


# instance fields
.field a:J

.field b:Lcom/kwad/sdk/api/KsSplashScreenAd;

.field c:Landroid/view/View;

.field d:Z

.field e:Landroid/content/Context;

.field f:Ljava/lang/String;

.field g:D

.field h:Z

.field private final i:Ljava/lang/String;

.field private j:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 39
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    .line 40
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->i:Ljava/lang/String;

    const/4 v0, 0x0

    .line 45
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->j:Z

    .line 55
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->h:Z

    return-void
.end method

.method private a()V
    .locals 4

    .line 86
    new-instance v0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYSplashAdapter$2;-><init>(Lcom/tkay/network/ks/KSTYSplashAdapter;)V

    .line 124
    new-instance v1, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->a:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    const/4 v2, 0x1

    .line 126
    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v1

    .line 128
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->f:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 129
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->f:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 132
    :cond_0
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object v2

    invoke-virtual {v1}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object v1

    invoke-interface {v2, v1, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/ks/KSTYSplashAdapter;)V
    .locals 4

    .line 1086
    new-instance v0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/ks/KSTYSplashAdapter$2;-><init>(Lcom/tkay/network/ks/KSTYSplashAdapter;)V

    .line 1124
    new-instance v1, Lcom/kwad/sdk/api/KsScene$Builder;

    iget-wide v2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->a:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/sdk/api/KsScene$Builder;-><init>(J)V

    const/4 v2, 0x1

    .line 1126
    invoke-virtual {v1, v2}, Lcom/kwad/sdk/api/KsScene$Builder;->adNum(I)Lcom/kwad/sdk/api/KsScene$Builder;

    move-result-object v1

    .line 1128
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->f:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 1129
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->f:Ljava/lang/String;

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/api/KsScene$Builder;->setBidResponseV2(Ljava/lang/String;)Lcom/kwad/sdk/api/KsScene$Builder;

    .line 1132
    :cond_0
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getLoadManager()Lcom/kwad/sdk/api/KsLoadManager;

    move-result-object p0

    invoke-virtual {v1}, Lcom/kwad/sdk/api/KsScene$Builder;->build()Lcom/kwad/sdk/api/KsScene;

    move-result-object v1

    invoke-interface {p0, v1, v0}, Lcom/kwad/sdk/api/KsLoadManager;->loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V

    return-void
.end method

.method private a(Ljava/util/Map;)Z
    .locals 3
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

    .line 278
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "position_id"

    .line 279
    invoke-static {p1, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 281
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 285
    :cond_0
    :try_start_0
    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->a:J
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v0, "zoomoutad_sw"

    .line 289
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 291
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->j:Z

    :cond_1
    const-string v0, "tkay_gsp"

    .line 294
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 296
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->g:D

    :cond_2
    const-string v0, "payload"

    .line 299
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 302
    invoke-static {p1, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 303
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-wide v1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->g:D

    invoke-virtual {v0, p1, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->getPayloadInfo(Ljava/lang/String;D)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->f:Ljava/lang/String;

    :cond_3
    const/4 p1, 0x1

    return p1

    :cond_4
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic b(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private b()V
    .locals 1

    .line 270
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    if-eqz v0, :cond_0

    .line 271
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    invoke-interface {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onSplashAdClicked()V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/ks/KSTYSplashAdapter;)Ljava/lang/String;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->i:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/ks/KSTYSplashAdapter;)I
    .locals 1

    const/16 v0, 0x63

    .line 39
    iput v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic h(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/ks/KSTYSplashAdapter;)I
    .locals 1

    const/4 v0, 0x3

    .line 39
    iput v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic l(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/ks/KSTYSplashAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 39
    iput v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic q(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    const/4 v0, 0x0

    .line 239
    iput-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->b:Lcom/kwad/sdk/api/KsSplashScreenAd;

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

    .line 317
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getLongFromMap(Ljava/util/Map;Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->a:J

    .line 319
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/ks/KSTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 260
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 2

    .line 245
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->a:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 247
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 255
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/ks/KSTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->b:Lcom/kwad/sdk/api/KsSplashScreenAd;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsSplashScreenAd;->isAdEnable()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

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

    .line 59
    invoke-direct {p0, p2}, Lcom/tkay/network/ks/KSTYSplashAdapter;->a(Ljava/util/Map;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "kuaishou app_id or position_id is empty."

    .line 60
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/ks/KSTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 64
    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->e:Landroid/content/Context;

    .line 65
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->e:Landroid/content/Context;

    new-instance v1, Lcom/tkay/network/ks/KSTYSplashAdapter$1;

    invoke-direct {v1, p0, p2, p3}, Lcom/tkay/network/ks/KSTYSplashAdapter$1;-><init>(Lcom/tkay/network/ks/KSTYSplashAdapter;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {p1, v0, p2, v1}, Lcom/tkay/network/ks/KSTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 2

    .line 142
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->b:Lcom/kwad/sdk/api/KsSplashScreenAd;

    if-eqz p1, :cond_1

    .line 144
    :try_start_0
    invoke-virtual {p2}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/ks/KSTYSplashAdapter$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/ks/KSTYSplashAdapter$3;-><init>(Lcom/tkay/network/ks/KSTYSplashAdapter;)V

    invoke-interface {p1, v0, v1}, Lcom/kwad/sdk/api/KsSplashScreenAd;->getView(Landroid/content/Context;Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;)Landroid/view/View;

    move-result-object p1

    .line 210
    iget-boolean v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->j:Z

    const/4 v1, -0x1

    if-eqz v0, :cond_0

    .line 211
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->c:Landroid/view/View;

    .line 215
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p2, p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    .line 217
    :cond_0
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p2, p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 220
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->i:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 221
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method

.method public startBiddingRequest(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBiddingListener;)Z
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
            "Lcom/tkay/core/api/TYBiddingListener;",
            ")Z"
        }
    .end annotation

    const/4 p4, 0x1

    .line 228
    iput-boolean p4, p0, Lcom/tkay/network/ks/KSTYSplashAdapter;->h:Z

    .line 229
    invoke-virtual {p0}, Lcom/tkay/network/ks/KSTYSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 233
    :cond_0
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/ks/KSTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
