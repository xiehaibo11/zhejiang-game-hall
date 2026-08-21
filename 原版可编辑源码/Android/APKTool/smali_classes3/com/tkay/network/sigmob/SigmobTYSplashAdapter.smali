.class public Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;
.super Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/lang/String;

.field private c:Lcom/sigmob/windad/Splash/WindSplashAD;

.field private d:Lcom/sigmob/windad/Splash/WindSplashAdRequest;

.field private e:Lcom/sigmob/windad/Splash/WindSplashADListener;

.field private f:Ljava/lang/String;

.field private volatile g:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    const-class v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 34
    invoke-direct {p0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;-><init>()V

    const-string v0, ""

    .line 37
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Lcom/sigmob/windad/Splash/WindSplashAD;)Lcom/sigmob/windad/Splash/WindSplashAD;
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c:Lcom/sigmob/windad/Splash/WindSplashAD;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Lcom/sigmob/windad/Splash/WindSplashADListener;)Lcom/sigmob/windad/Splash/WindSplashADListener;
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Lcom/sigmob/windad/Splash/WindSplashAdRequest;)Lcom/sigmob/windad/Splash/WindSplashAdRequest;
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->d:Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    return-object p1
.end method

.method private a()V
    .locals 1

    .line 101
    new-instance v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->postOnMainThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)V
    .locals 1

    .line 1101
    new-instance v0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->postOnMainThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 34
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 240
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->g:Z

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-static {p1, p2, v0, v1, v2}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/core/api/TYBiddingListener;Lcom/tkay/core/api/TYCustomLoadListener;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)I
    .locals 0

    .line 34
    iget p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mFetchAdTimeout:I

    return p0
.end method

.method static synthetic d(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAdRequest;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->d:Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Z
    .locals 0

    .line 34
    iget-boolean p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->g:Z

    return p0
.end method

.method static synthetic h(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashAD;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c:Lcom/sigmob/windad/Splash/WindSplashAD;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)I
    .locals 1

    const/4 v0, 0x3

    .line 34
    iput v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic n(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 34
    iput v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic q(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->mImpressionListener:Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Lcom/sigmob/windad/Splash/WindSplashADListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;)Ljava/lang/String;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->f:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    const/4 v0, 0x0

    .line 195
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c:Lcom/sigmob/windad/Splash/WindSplashAD;

    .line 196
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->d:Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    .line 197
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->e:Lcom/sigmob/windad/Splash/WindSplashADListener;

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

    .line 228
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b:Ljava/lang/String;

    .line 229
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 46
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 202
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 207
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 51
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c:Lcom/sigmob/windad/Splash/WindSplashAD;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->isReady()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
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

    iput-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b:Ljava/lang/String;

    const-string v2, "payload"

    .line 59
    invoke-static {p2, v2}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->f:Ljava/lang/String;

    .line 75
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 80
    :cond_0
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    :cond_1
    :goto_0
    const-string p1, ""

    const-string p2, "app_id\u3001app_key\u3001placement_id could not be null."

    .line 76
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 1

    .line 212
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c:Lcom/sigmob/windad/Splash/WindSplashAD;

    if-nez p1, :cond_0

    return-void

    .line 213
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->isAdReady()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 214
    iget-boolean p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->g:Z

    if-eqz p1, :cond_1

    .line 215
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c:Lcom/sigmob/windad/Splash/WindSplashAD;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getEcpmInt(Ljava/lang/Object;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->setBidEcpm(I)V

    .line 217
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->c:Lcom/sigmob/windad/Splash/WindSplashAD;

    invoke-virtual {p1, p2}, Lcom/sigmob/windad/Splash/WindSplashAD;->show(Landroid/view/ViewGroup;)V

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

    .line 234
    iput-boolean p4, p0, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->g:Z

    .line 235
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/sigmob/SigmobTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
