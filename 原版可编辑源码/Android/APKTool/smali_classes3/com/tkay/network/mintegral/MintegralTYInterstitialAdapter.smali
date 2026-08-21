.class public Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;
.super Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;


# instance fields
.field a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

.field b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

.field c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field f:Z

.field g:Z

.field h:Ljava/lang/String;

.field i:Ljava/lang/String;

.field j:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

.field private final k:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;-><init>()V

    .line 39
    const-class v0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->k:Ljava/lang/String;

    const-string v0, ""

    .line 46
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    .line 47
    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    .line 55
    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->j:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method private a(Landroid/content/Context;)V
    .locals 3

    .line 201
    iget-boolean v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->f:Z

    if-eqz v0, :cond_1

    .line 203
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 204
    new-instance v0, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v2}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    .line 205
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->j:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->setInterstitialVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V

    return-void

    .line 207
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v2}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    .line 208
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->j:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->setInterstitialVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V

    return-void

    .line 214
    :cond_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 215
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    const-string v2, "unit_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 216
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 217
    new-instance v1, Lcom/mbridge/msdk/out/MBInterstitialHandler;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v1, p1, v0}, Lcom/mbridge/msdk/out/MBInterstitialHandler;-><init>(Landroid/content/Context;Ljava/util/Map;)V

    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    .line 218
    new-instance p1, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;

    invoke-direct {p1, p0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;-><init>(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)V

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/out/MBInterstitialHandler;->setInterstitialListener(Lcom/mbridge/msdk/out/InterstitialListener;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;Landroid/content/Context;)V
    .locals 3

    .line 1201
    iget-boolean v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->f:Z

    if-eqz v0, :cond_1

    .line 1203
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1204
    new-instance v0, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v2}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    .line 1205
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->j:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->setInterstitialVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V

    return-void

    .line 1207
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-direct {v0, p1, v1, v2}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    .line 1208
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->j:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->setInterstitialVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V

    return-void

    .line 1214
    :cond_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 1215
    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    const-string v2, "unit_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1216
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1217
    new-instance v1, Lcom/mbridge/msdk/out/MBInterstitialHandler;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v1, p1, v0}, Lcom/mbridge/msdk/out/MBInterstitialHandler;-><init>(Landroid/content/Context;Ljava/util/Map;)V

    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    .line 1218
    new-instance p1, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;

    invoke-direct {p1, p0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$3;-><init>(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)V

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/out/MBInterstitialHandler;->setInterstitialListener(Lcom/mbridge/msdk/out/InterstitialListener;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Ljava/lang/String;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)I
    .locals 1

    const/16 v0, 0x63

    .line 38
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mDismissType:I

    return v0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 355
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 356
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBInterstitialHandler;->setInterstitialListener(Lcom/mbridge/msdk/out/InterstitialListener;)V

    .line 357
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    .line 360
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    if-eqz v0, :cond_1

    .line 361
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->setInterstitialVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V

    .line 362
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    .line 365
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    if-eqz v0, :cond_2

    .line 366
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->setInterstitialVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V

    .line 367
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    :cond_2
    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 7
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

    const-string v0, "unitid"

    .line 394
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    .line 395
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v1

    const/4 v5, 0x3

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v6, p4

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;ILcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    .line 384
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 349
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 374
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 379
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 318
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    if-eqz v0, :cond_0

    .line 319
    invoke-virtual {v0}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->isReady()Z

    move-result v0

    return v0

    .line 322
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    if-eqz v0, :cond_1

    .line 323
    invoke-virtual {v0}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->isBidReady()Z

    move-result v0

    return v0

    .line 326
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->g:Z

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

    const/4 p3, 0x0

    .line 135
    iput-boolean p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->g:Z

    .line 136
    iput-boolean p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->f:Z

    const-string p3, "appid"

    .line 141
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const-string v0, "appkey"

    .line 142
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "unitid"

    .line 144
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    .line 146
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    iget-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    goto :goto_0

    :cond_0
    const-string p3, "is_video"

    .line 154
    invoke-interface {p2, p3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 155
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const-string v0, "0"

    .line 156
    invoke-virtual {p3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    xor-int/lit8 p3, p3, 0x1

    iput-boolean p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->f:Z

    :cond_1
    const-string p3, "payload"

    .line 162
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->h:Ljava/lang/String;

    const-string p3, "placement_id"

    .line 168
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d:Ljava/lang/String;

    const-string p3, "video_muted"

    .line 172
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->i:Ljava/lang/String;

    .line 177
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p3

    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p3, p1, p2, v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void

    .line 147
    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_3

    .line 148
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    const-string p2, ""

    const-string p3, "mintegral appid, appkey or unitid is empty!"

    invoke-interface {p1, p2, p3}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 2

    .line 332
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    if-eqz v0, :cond_0

    .line 333
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBInterstitialHandler;->show()V

    .line 336
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    if-eqz v0, :cond_1

    .line 337
    invoke-static {}, Lcom/mbridge/msdk/out/MBridgeSDKFactory;->getMBridgeSDK()Lcom/mbridge/msdk/system/a;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/system/a;->updateDialogWeakActivity(Ljava/lang/ref/WeakReference;)V

    .line 338
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->show()V

    .line 341
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    if-eqz v0, :cond_2

    .line 342
    invoke-static {}, Lcom/mbridge/msdk/out/MBridgeSDKFactory;->getMBridgeSDK()Lcom/mbridge/msdk/system/a;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/system/a;->updateDialogWeakActivity(Ljava/lang/ref/WeakReference;)V

    .line 343
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->showFromBid()V

    :cond_2
    return-void
.end method

.method public startLoad(Ljava/util/Map;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 277
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    const/16 v1, 0x8

    if-eqz v0, :cond_0

    .line 278
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 280
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a:Lcom/mbridge/msdk/out/MBInterstitialHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBInterstitialHandler;->preload()V

    .line 282
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    const/4 v2, 0x0

    const/4 v3, 0x2

    const-string v4, "1"

    const-string v5, "0"

    const/16 v6, 0x31

    const/16 v7, 0x30

    const/4 v8, -0x1

    const/4 v9, 0x1

    if-eqz v0, :cond_7

    .line 283
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 285
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 286
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->i:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v1

    if-eq v1, v7, :cond_2

    if-eq v1, v6, :cond_1

    goto :goto_0

    :cond_1
    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v9

    goto :goto_1

    :cond_2
    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    move v0, v2

    goto :goto_1

    :cond_3
    :goto_0
    move v0, v8

    :goto_1
    if-eqz v0, :cond_5

    if-eq v0, v9, :cond_4

    goto :goto_2

    .line 291
    :cond_4
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->playVideoMute(I)V

    goto :goto_2

    .line 288
    :cond_5
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->playVideoMute(I)V

    .line 296
    :cond_6
    :goto_2
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    invoke-virtual {v0}, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;->load()V

    .line 298
    :cond_7
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    if-eqz v0, :cond_e

    .line 299
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    const/4 v1, 0x7

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->setCustomInfo(ILjava/util/Map;)V

    .line 301
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->i:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_d

    .line 302
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->i:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v0

    if-eq v0, v7, :cond_9

    if-eq v0, v6, :cond_8

    goto :goto_3

    :cond_8
    invoke-virtual {p1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_a

    move v2, v9

    goto :goto_4

    :cond_9
    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_a

    goto :goto_4

    :cond_a
    :goto_3
    move v2, v8

    :goto_4
    if-eqz v2, :cond_c

    if-eq v2, v9, :cond_b

    goto :goto_5

    .line 307
    :cond_b
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->playVideoMute(I)V

    goto :goto_5

    .line 304
    :cond_c
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    invoke-virtual {p1, v9}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->playVideoMute(I)V

    .line 312
    :cond_d
    :goto_5
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->h:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;->loadFromBid(Ljava/lang/String;)V

    :cond_e
    return-void
.end method
