.class public Lcom/tkay/network/toutiao/TTTYBannerAdapter;
.super Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:Landroid/content/Context;

.field c:Landroid/view/View;

.field d:I

.field e:I

.field f:I

.field g:Ljava/lang/String;

.field h:Z

.field i:Z

.field j:Lcom/bykv/vk/openvk/TTBnObject;

.field k:Lcom/bykv/vk/openvk/TTVfNative$BnVfListener;

.field l:Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;

.field m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

.field n:Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;

.field o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

.field private final p:Ljava/lang/String;

.field private q:Lcom/bykv/vk/openvk/TTNtExpressObject;

.field private r:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private s:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 35
    invoke-direct {p0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;-><init>()V

    .line 36
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->p:Ljava/lang/String;

    const-string v0, ""

    .line 38
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 51
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->i:Z

    .line 54
    new-instance v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$1;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->k:Lcom/bykv/vk/openvk/TTVfNative$BnVfListener;

    .line 113
    new-instance v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$2;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->l:Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;

    .line 133
    new-instance v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

    .line 158
    new-instance v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$4;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->n:Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;

    .line 465
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->s:Z

    .line 466
    new-instance v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$8;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    return-void
.end method

.method static synthetic A(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic C(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic D(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic E(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic F(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic G(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic H(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic I(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic J(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic K(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic L(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic M(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Lcom/bykv/vk/openvk/TTNtExpressObject;)Lcom/bykv/vk/openvk/TTNtExpressObject;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Ljava/util/Map;)Ljava/util/Map;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->r:Ljava/util/Map;

    return-object p1
.end method

.method private a()V
    .locals 3

    .line 549
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v0, :cond_0

    .line 550
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->n:Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;)V

    .line 553
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 555
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->b:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 556
    check-cast v0, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 1360
    new-instance v2, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;

    invoke-direct {v2, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDislikeCallback(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTNtExpressObject;)V
    .locals 1

    .line 360
    new-instance v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;

    invoke-direct {v0, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    invoke-interface {p2, p1, v0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDislikeCallback(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V

    return-void
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

    .line 210
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 212
    new-instance v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;

    invoke-direct {v0, p0, p2, p3, p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Ljava/util/Map;Ljava/util/Map;Landroid/content/Context;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 1

    .line 3210
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 3212
    new-instance v0, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;

    invoke-direct {v0, p0, p2, p3, p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$5;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Ljava/util/Map;Ljava/util/Map;Landroid/content/Context;)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

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

    const-string v0, "nw_rft"

    const-string v1, "app_id"

    .line 569
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "slot_id"

    .line 570
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a:Ljava/lang/String;

    .line 572
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    .line 576
    :cond_0
    iput v2, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->f:I

    .line 578
    :try_start_0
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 579
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->f:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 582
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    const-string v0, "payload"

    .line 585
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 586
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->g:Ljava/lang/String;

    :cond_2
    const/4 p1, 0x1

    return p1

    :cond_3
    :goto_1
    return v2
.end method

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/bykv/vk/openvk/TTNtExpressObject;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    return-object p0
.end method

.method static synthetic h(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V
    .locals 3

    .line 1549
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v0, :cond_0

    .line 1550
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->n:Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;)V

    .line 1553
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->o:Lcom/bykv/vk/openvk/TTAppDownloadListener;

    invoke-interface {v0, v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDownloadListener(Lcom/bykv/vk/openvk/TTAppDownloadListener;)V

    .line 1555
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->b:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 1556
    check-cast v0, Landroid/app/Activity;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 2360
    new-instance v2, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;

    invoke-direct {v2, p0}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$6;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)V

    invoke-interface {v1, v0, v2}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setDislikeCallback(Landroid/app/Activity;Lcom/bykv/vk/openvk/TTVfDislike$DislikeInteractionCallback;)V

    :cond_0
    return-void
.end method

.method static synthetic i(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic k(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Ljava/util/Map;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->r:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic o(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic p(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic q(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic r(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mImpressionEventListener:Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Z
    .locals 0

    .line 35
    iget-boolean p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->s:Z

    return p0
.end method

.method static synthetic u(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Z
    .locals 1

    const/4 v0, 0x1

    .line 35
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->s:Z

    return v0
.end method

.method static synthetic v(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic w(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic x(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/network/toutiao/TTTYBannerAdapter;)Lcom/tkay/core/api/TYEventInterface;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 2

    const/4 v0, 0x0

    .line 518
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->c:Landroid/view/View;

    .line 520
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v1, :cond_0

    .line 521
    invoke-interface {v1, v0}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$NtInteractionListener;)V

    .line 522
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->destroy()V

    .line 523
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->q:Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 526
    :cond_0
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->l:Lcom/bykv/vk/openvk/TTBnObject$AdInteractionListener;

    .line 527
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->k:Lcom/bykv/vk/openvk/TTVfNative$BnVfListener;

    .line 528
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->n:Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;

    .line 529
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->m:Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;

    .line 530
    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->b:Landroid/content/Context;

    return-void
.end method

.method public getBannerView()Landroid/view/View;
    .locals 1

    .line 394
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->c:Landroid/view/View;

    return-object v0
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

    .line 545
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->r:Ljava/util/Map;

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 409
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 535
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 540
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
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

    .line 415
    invoke-direct {p0, p2}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->a(Ljava/util/Map;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_0

    const-string p1, "app_id or slot_id is empty!"

    .line 416
    invoke-virtual {p0, v1, p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 420
    :cond_0
    instance-of v0, p1, Landroid/app/Activity;

    if-nez v0, :cond_1

    const-string p1, "Context must be activity."

    .line 421
    invoke-virtual {p0, v1, p1}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 425
    :cond_1
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->b:Landroid/content/Context;

    .line 447
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/toutiao/TTTYBannerAdapter$7;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYBannerAdapter$7;-><init>(Lcom/tkay/network/toutiao/TTTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

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

    .line 563
    iput-boolean p4, p0, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->i:Z

    .line 564
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYBannerAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
