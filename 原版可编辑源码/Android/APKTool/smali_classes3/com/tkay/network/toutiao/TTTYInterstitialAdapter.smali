.class public Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;
.super Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:I

.field c:I

.field d:Ljava/lang/String;

.field e:Ljava/lang/String;

.field f:I

.field g:Ljava/lang/String;

.field h:Z

.field i:Lcom/bykv/vk/openvk/TTVfNative$InteractionViListener;

.field j:Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;

.field k:Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;

.field l:Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;

.field m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

.field n:Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;

.field o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

.field private final p:Ljava/lang/String;

.field private q:Lcom/bykv/vk/openvk/TTInteractionVi;

.field private r:Lcom/bykv/vk/openvk/TTFullVideoObject;

.field private s:Lcom/bykv/vk/openvk/TTNtExpressObject;

.field private t:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private u:Z


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 35
    invoke-direct {p0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;-><init>()V

    .line 36
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->p:Ljava/lang/String;

    const-string v0, ""

    .line 38
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a:Ljava/lang/String;

    const/4 v1, 0x0

    .line 39
    iput v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b:I

    .line 40
    iput v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->c:I

    .line 41
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->d:Ljava/lang/String;

    const-string v2, "1:1"

    .line 42
    iput-object v2, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->e:Ljava/lang/String;

    const/4 v2, 0x1

    .line 43
    iput v2, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->f:I

    .line 44
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->g:Ljava/lang/String;

    .line 52
    iput-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->h:Z

    .line 55
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$1;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$1;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->i:Lcom/bykv/vk/openvk/TTVfNative$InteractionViListener;

    .line 95
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$2;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->j:Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;

    .line 121
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$3;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->k:Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;

    .line 177
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$4;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->l:Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;

    .line 221
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$5;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

    .line 262
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$6;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->n:Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;

    .line 549
    iput-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->u:Z

    .line 550
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$9;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$9;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic E(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic F(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic G(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic H(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic I(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic J(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/lang/String;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->p:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic K(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Z
    .locals 0

    .line 35
    iget-boolean p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->u:Z

    return p0
.end method

.method static synthetic L(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Z
    .locals 1

    const/4 v0, 0x1

    .line 35
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->u:Z

    return v0
.end method

.method static synthetic M(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic N(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic O(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic P(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic Q(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic R(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic S(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic T(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic U(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic V(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic W(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic X(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic Y(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic Z(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic a(Landroid/content/Context;F)I
    .locals 1

    .line 1545
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    const/4 v0, 0x0

    cmpg-float v0, p0, v0

    if-gtz v0, :cond_0

    const/high16 p0, 0x3f800000    # 1.0f

    :cond_0
    div-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Lcom/bykv/vk/openvk/TTFullVideoObject;)Lcom/bykv/vk/openvk/TTFullVideoObject;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTInteractionVi;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Lcom/bykv/vk/openvk/TTInteractionVi;)Lcom/bykv/vk/openvk/TTInteractionVi;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Lcom/bykv/vk/openvk/TTNtExpressObject;)Lcom/bykv/vk/openvk/TTNtExpressObject;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Ljava/util/Map;)Ljava/util/Map;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->t:Ljava/util/Map;

    return-object p1
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
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

    .line 299
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 301
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;

    invoke-direct {v0, p0, p3, p1, p2}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Ljava/util/Map;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 1

    .line 2299
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 2301
    new-instance v0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;

    invoke-direct {v0, p0, p3, p1, p2}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$7;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Ljava/util/Map;Landroid/content/Context;Ljava/util/Map;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Ljava/util/Map;Ljava/util/Map;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
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

    const-string v0, "app_id"

    .line 613
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "slot_id"

    .line 614
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a:Ljava/lang/String;

    .line 616
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_1

    :cond_0
    const-string v0, "is_video"

    .line 620
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 621
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->b:I

    :cond_1
    const-string v0, "layout_type"

    .line 624
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 625
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->c:I

    :cond_2
    const-string v0, "size"

    .line 629
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 630
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->e:Ljava/lang/String;

    :cond_3
    const-string v0, "personalized_template"

    .line 633
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->d:Ljava/lang/String;

    const/4 v0, 0x1

    :try_start_0
    const-string v1, "ad_orientation"

    .line 637
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    const/4 v1, 0x2

    if-eq p2, v0, :cond_5

    if-eq p2, v1, :cond_4

    goto :goto_0

    .line 640
    :cond_4
    iput v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->f:I

    goto :goto_0

    .line 643
    :cond_5
    iput v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->f:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :goto_0
    const-string p2, "payload"

    .line 649
    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 650
    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->g:Ljava/lang/String;

    :cond_6
    return v0

    :cond_7
    :goto_1
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic aa(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic ab(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic ac(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic ad(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method private static b(Landroid/content/Context;F)I
    .locals 1

    .line 545
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    const/4 v0, 0x0

    cmpg-float v0, p0, v0

    if-gtz v0, :cond_0

    const/high16 p0, 0x3f800000    # 1.0f

    :cond_0
    div-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Ljava/util/Map;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->t:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/bykv/vk/openvk/TTFullVideoObject;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mImpressListener:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 35
    iput v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->mDismissType:I

    return v0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 509
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 510
    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTFullVideoObject;->setFullScreenVideoAdInteractionListener(Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;)V

    .line 511
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    .line 514
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    if-eqz v0, :cond_1

    .line 515
    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTInteractionVi;->setViInteractionListener(Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;)V

    .line 516
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTInteractionVi;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 517
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    .line 520
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v0, :cond_2

    .line 521
    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;)V

    .line 522
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->destroy()V

    .line 523
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 526
    :cond_2
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->j:Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;

    .line 527
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->i:Lcom/bykv/vk/openvk/TTVfNative$InteractionViListener;

    .line 528
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->l:Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;

    .line 529
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->k:Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;

    .line 530
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

    .line 531
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->n:Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;

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

    .line 602
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->t:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 447
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 536
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 541
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 415
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

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

    .line 453
    invoke-direct {p0, p2, p3}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->a(Ljava/util/Map;Ljava/util/Map;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "app_id or slot_id is empty!"

    .line 454
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 490
    :cond_0
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$8;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter$8;-><init>(Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 2

    .line 421
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 422
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->j:Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTInteractionVi;->setViInteractionListener(Lcom/bykv/vk/openvk/TTInteractionVi$AdInteractionListener;)V

    .line 423
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTInteractionVi;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 424
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->q:Lcom/bykv/vk/openvk/TTInteractionVi;

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTInteractionVi;->showInteractionVi(Landroid/app/Activity;)V

    .line 427
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 428
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->l:Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTFullVideoObject;->setFullScreenVideoAdInteractionListener(Lcom/bykv/vk/openvk/TTFullVideoObject$FullVideoVsInteractionListener;)V

    .line 429
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTFullVideoObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 430
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->r:Lcom/bykv/vk/openvk/TTFullVideoObject;

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTFullVideoObject;->showFullVideoVs(Landroid/app/Activity;)V

    .line 433
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v0, :cond_2

    if-eqz p1, :cond_2

    .line 434
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->n:Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;)V

    .line 435
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 436
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->s:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->showInteractionExpressAd(Landroid/app/Activity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p1

    .line 440
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

    .line 607
    iput-boolean p4, p0, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->h:Z

    .line 608
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
