.class public Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;
.super Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:Z

.field c:Ljava/lang/String;

.field d:Z

.field e:Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;

.field f:Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;

.field g:Lcom/bykv/vk/openvk/TTAppDownloadListener;

.field private final h:Ljava/lang/String;

.field private i:Lcom/bykv/vk/openvk/TTRdVideoObject;

.field private j:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private k:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 33
    invoke-direct {p0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;-><init>()V

    .line 34
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->h:Ljava/lang/String;

    const-string v0, ""

    .line 36
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    .line 43
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->c:Ljava/lang/String;

    const/4 v0, 0x0

    .line 45
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->d:Z

    .line 48
    new-instance v1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$1;-><init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->e:Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;

    .line 105
    new-instance v1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$2;-><init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->f:Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;

    .line 403
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->k:Z

    .line 404
    new-instance v0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$6;-><init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->g:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic E(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic F(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic G(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic H(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic I(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic J(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic K(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Z
    .locals 0

    .line 33
    iget-boolean p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->k:Z

    return p0
.end method

.method static synthetic L(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Z
    .locals 1

    const/4 v0, 0x1

    .line 33
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->k:Z

    return v0
.end method

.method static synthetic M(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic N(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic O(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic P(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic Q(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic R(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic S(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic T(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic U(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic V(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic W(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic X(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic Y(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic Z(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic a(Landroid/content/Context;F)I
    .locals 1

    .line 2399
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

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/bykv/vk/openvk/TTRdVideoObject;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Lcom/bykv/vk/openvk/TTRdVideoObject;)Lcom/bykv/vk/openvk/TTRdVideoObject;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->j:Ljava/util/Map;

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

    .line 164
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 166
    new-instance v0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 1

    .line 3164
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 3166
    new-instance v0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Ljava/util/Map;)Z
    .locals 2
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

    .line 467
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "slot_id"

    .line 468
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    .line 470
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "payload"

    .line 474
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 475
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->c:Ljava/lang/String;

    :cond_1
    const/4 p1, 0x1

    return p1

    :cond_2
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic aa(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic ab(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic ac(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic ad(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method private static b(Landroid/content/Context;F)I
    .locals 1

    .line 399
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

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/util/Map;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->j:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)I
    .locals 1

    const/4 v0, 0x2

    .line 33
    iput v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mDismissType:I

    return v0
.end method

.method static synthetic p(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->h:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mImpressionListener:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic v(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mUserId:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)Ljava/lang/String;
    .locals 0

    .line 33
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->mUserData:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    .line 378
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 379
    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTRdVideoObject;->setRdVrInteractionListener(Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;)V

    .line 380
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTRdVideoObject;->setRewardPlayAgainInteractionListener(Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;)V

    .line 381
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    .line 384
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->e:Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;

    .line 385
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->f:Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;

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

    .line 456
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->j:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 332
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 390
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 395
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 1

    .line 252
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

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

    const-string v0, "app_id"

    .line 1467
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "slot_id"

    .line 1468
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    .line 1470
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "payload"

    .line 1474
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1475
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->c:Ljava/lang/String;

    :cond_1
    const/4 v0, 0x1

    goto :goto_1

    :cond_2
    :goto_0
    const/4 v0, 0x0

    :goto_1
    if-nez v0, :cond_3

    const-string p1, ""

    const-string p2, "app_id or slot_id is empty!"

    .line 339
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 359
    :cond_3
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$5;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$5;-><init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 257
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    if-eqz v0, :cond_0

    .line 258
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->f:Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTRdVideoObject;->setRdVrInteractionListener(Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;)V

    .line 259
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->g:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTRdVideoObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 260
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    new-instance v1, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter$4;-><init>(Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;)V

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTRdVideoObject;->setRewardPlayAgainInteractionListener(Lcom/bykv/vk/openvk/TTRdVideoObject$RdVrInteractionListener;)V

    .line 326
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->i:Lcom/bykv/vk/openvk/TTRdVideoObject;

    invoke-interface {v0, p1}, Lcom/bykv/vk/openvk/TTRdVideoObject;->showRdVideoVr(Landroid/app/Activity;)V

    :cond_0
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

    .line 461
    iput-boolean p4, p0, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->d:Z

    .line 462
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
