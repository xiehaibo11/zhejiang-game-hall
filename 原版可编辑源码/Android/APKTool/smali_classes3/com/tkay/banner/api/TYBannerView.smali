.class public Lcom/tkay/banner/api/TYBannerView;
.super Landroid/widget/FrameLayout;

# interfaces
.implements Lcom/tkay/banner/a/d;


# instance fields
.field private final TAG:Ljava/lang/String;

.field adLoadListener:Lcom/tkay/core/common/b/a;

.field private canRenderBanner:Z

.field hasTouchWindow:Z

.field impressionTracker:Lcom/tkay/core/common/l/a/c;

.field private mAdLoadManager:Lcom/tkay/banner/a/a;

.field mAdSourceEventListener:Lcom/tkay/core/common/b/b;

.field private mBannerRefreshTimer:Lcom/tkay/banner/b/a;

.field mCustomBannerAd:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

.field mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

.field mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

.field private mInnerBannerListener:Lcom/tkay/banner/a/e;

.field mIsRefresh:Z

.field private mListener:Lcom/tkay/banner/api/TYBannerListener;

.field private mPlacementId:Ljava/lang/String;

.field private mScenario:Ljava/lang/String;

.field mTKExtraMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field visibilityChecker:Lcom/tkay/core/common/l/a/f$b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 194
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    .line 64
    const-class p1, Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    const-string p1, ""

    .line 68
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mScenario:Ljava/lang/String;

    const/4 p1, 0x0

    .line 72
    iput-boolean p1, p0, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    .line 84
    iput-boolean p1, p0, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    .line 86
    new-instance p1, Lcom/tkay/banner/api/TYBannerView$1;

    invoke-direct {p1, p0}, Lcom/tkay/banner/api/TYBannerView$1;-><init>(Lcom/tkay/banner/api/TYBannerView;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mInnerBannerListener:Lcom/tkay/banner/a/e;

    .line 157
    new-instance p1, Lcom/tkay/banner/api/TYBannerView$2;

    invoke-direct {p1, p0}, Lcom/tkay/banner/api/TYBannerView$2;-><init>(Lcom/tkay/banner/api/TYBannerView;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->adLoadListener:Lcom/tkay/core/common/b/a;

    .line 195
    new-instance p1, Lcom/tkay/banner/b/a;

    invoke-direct {p1, p0}, Lcom/tkay/banner/b/a;-><init>(Lcom/tkay/banner/a/d;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mBannerRefreshTimer:Lcom/tkay/banner/b/a;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 199
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 64
    const-class p1, Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    const-string p1, ""

    .line 68
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mScenario:Ljava/lang/String;

    const/4 p1, 0x0

    .line 72
    iput-boolean p1, p0, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    .line 84
    iput-boolean p1, p0, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    .line 86
    new-instance p1, Lcom/tkay/banner/api/TYBannerView$1;

    invoke-direct {p1, p0}, Lcom/tkay/banner/api/TYBannerView$1;-><init>(Lcom/tkay/banner/api/TYBannerView;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mInnerBannerListener:Lcom/tkay/banner/a/e;

    .line 157
    new-instance p1, Lcom/tkay/banner/api/TYBannerView$2;

    invoke-direct {p1, p0}, Lcom/tkay/banner/api/TYBannerView$2;-><init>(Lcom/tkay/banner/api/TYBannerView;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->adLoadListener:Lcom/tkay/core/common/b/a;

    .line 200
    new-instance p1, Lcom/tkay/banner/b/a;

    invoke-direct {p1, p0}, Lcom/tkay/banner/b/a;-><init>(Lcom/tkay/banner/a/d;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mBannerRefreshTimer:Lcom/tkay/banner/b/a;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 204
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 64
    const-class p1, Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    const-string p1, ""

    .line 68
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mScenario:Ljava/lang/String;

    const/4 p1, 0x0

    .line 72
    iput-boolean p1, p0, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    .line 84
    iput-boolean p1, p0, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    .line 86
    new-instance p1, Lcom/tkay/banner/api/TYBannerView$1;

    invoke-direct {p1, p0}, Lcom/tkay/banner/api/TYBannerView$1;-><init>(Lcom/tkay/banner/api/TYBannerView;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mInnerBannerListener:Lcom/tkay/banner/a/e;

    .line 157
    new-instance p1, Lcom/tkay/banner/api/TYBannerView$2;

    invoke-direct {p1, p0}, Lcom/tkay/banner/api/TYBannerView$2;-><init>(Lcom/tkay/banner/api/TYBannerView;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->adLoadListener:Lcom/tkay/core/common/b/a;

    .line 205
    new-instance p1, Lcom/tkay/banner/b/a;

    invoke-direct {p1, p0}, Lcom/tkay/banner/b/a;-><init>(Lcom/tkay/banner/a/d;)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mBannerRefreshTimer:Lcom/tkay/banner/b/a;

    return-void
.end method

.method static synthetic access$000(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/api/TYBannerListener;
    .locals 0

    .line 62
    iget-object p0, p0, Lcom/tkay/banner/api/TYBannerView;->mListener:Lcom/tkay/banner/api/TYBannerListener;

    return-object p0
.end method

.method static synthetic access$100(Lcom/tkay/banner/api/TYBannerView;)Z
    .locals 0

    .line 62
    iget-boolean p0, p0, Lcom/tkay/banner/api/TYBannerView;->canRenderBanner:Z

    return p0
.end method

.method static synthetic access$1000(Lcom/tkay/banner/api/TYBannerView;)Z
    .locals 0

    .line 62
    invoke-direct {p0}, Lcom/tkay/banner/api/TYBannerView;->isRefreshOpen()Z

    move-result p0

    return p0
.end method

.method static synthetic access$102(Lcom/tkay/banner/api/TYBannerView;Z)Z
    .locals 0

    .line 62
    iput-boolean p1, p0, Lcom/tkay/banner/api/TYBannerView;->canRenderBanner:Z

    return p1
.end method

.method static synthetic access$1100(Lcom/tkay/banner/api/TYBannerView;Landroid/content/Context;Lcom/tkay/core/api/TYBaseAdAdapter;Z)V
    .locals 0

    .line 62
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/banner/api/TYBannerView;->notifyBannerImpression(Landroid/content/Context;Lcom/tkay/core/api/TYBaseAdAdapter;Z)V

    return-void
.end method

.method static synthetic access$200(Lcom/tkay/banner/api/TYBannerView;I)V
    .locals 0

    .line 62
    invoke-direct {p0, p1}, Lcom/tkay/banner/api/TYBannerView;->loadAd(I)V

    return-void
.end method

.method static synthetic access$300(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/a/a;
    .locals 0

    .line 62
    iget-object p0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdLoadManager:Lcom/tkay/banner/a/a;

    return-object p0
.end method

.method static synthetic access$400(Lcom/tkay/banner/api/TYBannerView;)Z
    .locals 0

    .line 62
    invoke-direct {p0}, Lcom/tkay/banner/api/TYBannerView;->isInView()Z

    move-result p0

    return p0
.end method

.method static synthetic access$500(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/banner/b/a;
    .locals 0

    .line 62
    iget-object p0, p0, Lcom/tkay/banner/api/TYBannerView;->mBannerRefreshTimer:Lcom/tkay/banner/b/a;

    return-object p0
.end method

.method static synthetic access$600(Lcom/tkay/banner/api/TYBannerView;)Ljava/lang/String;
    .locals 0

    .line 62
    iget-object p0, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$700(Lcom/tkay/banner/api/TYBannerView;Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V
    .locals 0

    .line 62
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/banner/api/TYBannerView;->notifyBannerShow(Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V

    return-void
.end method

.method static synthetic access$800(Lcom/tkay/banner/api/TYBannerView;)Lcom/tkay/core/common/f/a;
    .locals 0

    .line 62
    invoke-direct {p0}, Lcom/tkay/banner/api/TYBannerView;->getBannerCache()Lcom/tkay/core/common/f/a;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$900(Lcom/tkay/banner/api/TYBannerView;Lcom/tkay/core/common/f/a;Z)V
    .locals 0

    .line 62
    invoke-direct {p0, p1, p2}, Lcom/tkay/banner/api/TYBannerView;->renderBannerView(Lcom/tkay/core/common/f/a;Z)V

    return-void
.end method

.method private checkVisibilityPercent()Z
    .locals 4

    .line 444
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->visibilityChecker:Lcom/tkay/core/common/l/a/f$b;

    if-nez v0, :cond_0

    .line 445
    new-instance v0, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v0}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    iput-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->visibilityChecker:Lcom/tkay/core/common/l/a/f$b;

    .line 447
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 448
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->visibilityChecker:Lcom/tkay/core/common/l/a/f$b;

    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    const/16 v3, 0x50

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v2, p0, v3, v1}, Lcom/tkay/core/common/l/a/f$b;->a(Landroid/view/View;Landroid/view/View;ILjava/lang/Integer;)Z

    move-result v0

    return v0

    :cond_1
    return v1
.end method

.method private getBannerCache()Lcom/tkay/core/common/f/a;
    .locals 3

    .line 311
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView;->mPlacementId:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    return-object v0
.end method

.method private isInView()Z
    .locals 1

    .line 437
    iget-boolean v0, p0, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->isShown()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mCustomBannerAd:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/tkay/banner/api/TYBannerView;->checkVisibilityPercent()Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method private isRefreshOpen()Z
    .locals 2

    .line 513
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView;->mPlacementId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 514
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->W()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private loadAd(I)V
    .locals 8

    .line 278
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->o:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->w:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    const/4 v5, 0x1

    invoke-static/range {v0 .. v5}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    move v1, v0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 280
    :goto_0
    iput-boolean v1, p0, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    if-nez p1, :cond_1

    .line 282
    iput-boolean v0, p0, Lcom/tkay/banner/api/TYBannerView;->canRenderBanner:Z

    .line 284
    :cond_1
    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView;->mAdLoadManager:Lcom/tkay/banner/a/a;

    if-eqz v2, :cond_2

    .line 285
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v3

    iget-object v5, p0, Lcom/tkay/banner/api/TYBannerView;->adLoadListener:Lcom/tkay/core/common/b/a;

    iget-object v6, p0, Lcom/tkay/banner/api/TYBannerView;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    iget-object v7, p0, Lcom/tkay/banner/api/TYBannerView;->mTKExtraMap:Ljava/util/Map;

    move v4, p1

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/banner/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    return-void

    .line 287
    :cond_2
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->adLoadListener:Lcom/tkay/core/common/b/a;

    const-string v0, ""

    const-string v1, "3001"

    invoke-static {v1, v0, v0}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tkay/core/common/b/a;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V

    return-void
.end method

.method private notifyBannerImpression(Landroid/content/Context;Lcom/tkay/core/api/TYBaseAdAdapter;Z)V
    .locals 8

    .line 557
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v2

    .line 558
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v6

    new-instance v7, Lcom/tkay/banner/api/TYBannerView$6;

    move-object v0, v7

    move-object v1, p0

    move-object v3, p1

    move-object v4, p2

    move v5, p3

    invoke-direct/range {v0 .. v5}, Lcom/tkay/banner/api/TYBannerView$6;-><init>(Lcom/tkay/banner/api/TYBannerView;Lcom/tkay/core/common/f/d;Landroid/content/Context;Lcom/tkay/core/api/TYBaseAdAdapter;Z)V

    invoke-virtual {v6, v7}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private notifyBannerShow(Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V
    .locals 11

    .line 522
    invoke-virtual {p2}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v5

    .line 523
    invoke-virtual {v5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v2

    .line 525
    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    .line 526
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1578
    iput-object v0, v2, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    .line 530
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    if-eqz v2, :cond_0

    .line 531
    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 532
    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, v6, v7}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/core/common/f/d;->h(Ljava/lang/String;)V

    .line 535
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v9

    new-instance v10, Lcom/tkay/banner/api/TYBannerView$5;

    move-object v0, v10

    move-object v1, p0

    move-object v3, p1

    move-object v4, p2

    move v8, p3

    invoke-direct/range {v0 .. v8}, Lcom/tkay/banner/api/TYBannerView$5;-><init>(Lcom/tkay/banner/api/TYBannerView;Lcom/tkay/core/common/f/d;Landroid/content/Context;Lcom/tkay/core/common/f/a;Lcom/tkay/core/api/TYBaseAdAdapter;JZ)V

    invoke-virtual {v9, v10}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private registerDelayShow(Landroid/content/Context;Lcom/tkay/core/common/f/a;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V
    .locals 2

    .line 344
    invoke-virtual {p3}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getBannerView()Landroid/view/View;

    move-result-object p3

    if-nez p3, :cond_0

    move-object p3, p0

    .line 348
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->impressionTracker:Lcom/tkay/core/common/l/a/c;

    if-eqz v0, :cond_1

    .line 349
    new-instance v1, Lcom/tkay/banner/api/TYBannerView$3;

    invoke-direct {v1, p0, p1, p2, p4}, Lcom/tkay/banner/api/TYBannerView$3;-><init>(Lcom/tkay/banner/api/TYBannerView;Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V

    invoke-virtual {v0, p3, v1}, Lcom/tkay/core/common/l/a/c;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/b;)V

    :cond_1
    return-void
.end method

.method private renderBannerView(Lcom/tkay/core/common/f/a;Z)V
    .locals 5

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    .line 371
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    instance-of v1, v1, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v1, :cond_0

    .line 372
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    check-cast v1, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    goto :goto_0

    :cond_0
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_b

    .line 376
    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView;->mCustomBannerAd:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v2, :cond_1

    .line 377
    invoke-virtual {v2}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->destory()V

    .line 380
    :cond_1
    invoke-virtual {v1}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getBannerView()Landroid/view/View;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 381
    invoke-virtual {v2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_2

    invoke-virtual {v2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eq v3, p0, :cond_2

    .line 382
    invoke-virtual {v2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    invoke-virtual {v3, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 384
    :cond_2
    iput-object v1, p0, Lcom/tkay/banner/api/TYBannerView;->mCustomBannerAd:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v2, :cond_a

    .line 387
    invoke-virtual {v1}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v3

    .line 388
    iget-object v4, p0, Lcom/tkay/banner/api/TYBannerView;->mScenario:Ljava/lang/String;

    .line 1406
    iput-object v4, v3, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 389
    iget-object v4, p0, Lcom/tkay/banner/api/TYBannerView;->mTKExtraMap:Ljava/util/Map;

    invoke-static {v4, v3}, Lcom/tkay/core/common/l/s;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    .line 392
    new-instance v3, Lcom/tkay/banner/a/b;

    iget-object v4, p0, Lcom/tkay/banner/api/TYBannerView;->mInnerBannerListener:Lcom/tkay/banner/a/e;

    invoke-direct {v3, v4, v1, p2}, Lcom/tkay/banner/a/b;-><init>(Lcom/tkay/banner/a/e;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V

    invoke-virtual {v1, v3}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->setAdEventListener(Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;)V

    .line 394
    invoke-direct {p0}, Lcom/tkay/banner/api/TYBannerView;->isInView()Z

    move-result v3

    if-nez v3, :cond_3

    .line 395
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {p0, v3, p1, v1, p2}, Lcom/tkay/banner/api/TYBannerView;->registerDelayShow(Landroid/content/Context;Lcom/tkay/core/common/f/a;Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;Z)V

    goto :goto_1

    .line 397
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {p0, v3, p1, p2}, Lcom/tkay/banner/api/TYBannerView;->notifyBannerShow(Landroid/content/Context;Lcom/tkay/core/common/f/a;Z)V

    .line 401
    :goto_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object p2

    if-eqz p2, :cond_4

    .line 403
    iget-object v3, p0, Lcom/tkay/banner/api/TYBannerView;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    invoke-interface {p2, v1, v0, v3}, Lcom/tkay/core/api/IExHandler;->createDownloadListener(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object p2

    invoke-virtual {v1, p2}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    .line 406
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->removeAllViews()V

    .line 407
    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    const/4 v0, 0x0

    if-eqz p2, :cond_5

    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    iget p2, p2, Landroid/view/ViewGroup$LayoutParams;->width:I

    goto :goto_2

    :cond_5
    move p2, v0

    :goto_2
    const/4 v1, -0x2

    if-nez p2, :cond_6

    move p2, v1

    .line 411
    :cond_6
    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    if-eqz v3, :cond_7

    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    :cond_7
    if-gtz v0, :cond_8

    goto :goto_3

    :cond_8
    move v1, v0

    .line 415
    :goto_3
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v0, p2, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const/16 p2, 0x11

    .line 416
    iput p2, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 417
    invoke-virtual {v2, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 418
    invoke-virtual {v2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p2

    instance-of p2, p2, Landroid/view/ViewGroup;

    if-eqz p2, :cond_9

    .line 419
    invoke-virtual {v2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p2

    check-cast p2, Landroid/view/ViewGroup;

    invoke-virtual {p2, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 421
    :cond_9
    invoke-virtual {p0, v2, v0}, Lcom/tkay/banner/api/TYBannerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_4

    .line 423
    :cond_a
    iget-object p2, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    const-string v0, "Network\'s banner view = null. Did you call destroy()?"

    invoke-static {p2, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 426
    :goto_4
    iget-object p2, p0, Lcom/tkay/banner/api/TYBannerView;->mAdLoadManager:Lcom/tkay/banner/a/a;

    invoke-virtual {p2, p1}, Lcom/tkay/banner/a/a;->a(Lcom/tkay/core/common/f/a;)V

    .line 428
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mBannerRefreshTimer:Lcom/tkay/banner/b/a;

    invoke-virtual {p1}, Lcom/tkay/banner/b/a;->b()V

    .line 430
    invoke-direct {p0}, Lcom/tkay/banner/api/TYBannerView;->isRefreshOpen()Z

    move-result p1

    if-eqz p1, :cond_b

    const/4 p1, 0x1

    .line 431
    invoke-direct {p0, p1}, Lcom/tkay/banner/api/TYBannerView;->loadAd(I)V

    :cond_b
    return-void
.end method


# virtual methods
.method public checkAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 6

    .line 224
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    .line 225
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 226
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 231
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdLoadManager:Lcom/tkay/banner/a/a;

    if-nez v0, :cond_1

    .line 232
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    const-string v3, "PlacementId is empty!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 233
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    return-object v0

    .line 236
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/banner/a/a;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    .line 237
    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->o:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->A:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, ""

    invoke-static {v1, v2, v3, v4, v5}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    .line 227
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    const-string v3, "SDK init error!"

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 228
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    return-object v0
.end method

.method public checkValidAdCaches()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/api/TYAdInfo;",
            ">;"
        }
    .end annotation

    .line 254
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdLoadManager:Lcom/tkay/banner/a/a;

    if-eqz v0, :cond_0

    .line 255
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/banner/a/a;->a(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method protected controlShow()V
    .locals 3

    .line 455
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdLoadManager:Lcom/tkay/banner/a/a;

    if-nez v0, :cond_0

    return-void

    .line 458
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/banner/api/TYBannerView;->mIsRefresh:Z

    .line 459
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/banner/api/TYBannerView$4;

    invoke-direct {v2, p0, v0}, Lcom/tkay/banner/api/TYBannerView$4;-><init>(Lcom/tkay/banner/api/TYBannerView;Z)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public destroy()V
    .locals 1

    .line 296
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->removeAllViews()V

    .line 298
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mCustomBannerAd:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz v0, :cond_0

    .line 299
    invoke-virtual {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->destory()V

    .line 301
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mBannerRefreshTimer:Lcom/tkay/banner/b/a;

    if-eqz v0, :cond_1

    .line 302
    invoke-virtual {v0}, Lcom/tkay/banner/b/a;->d()V

    .line 305
    :cond_1
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->impressionTracker:Lcom/tkay/core/common/l/a/c;

    if-eqz v0, :cond_2

    .line 306
    invoke-virtual {v0}, Lcom/tkay/core/common/l/a/c;->a()V

    :cond_2
    return-void
.end method

.method public loadAd()V
    .locals 1

    const/4 v0, 0x0

    .line 274
    invoke-direct {p0, v0}, Lcom/tkay/banner/api/TYBannerView;->loadAd(I)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 1

    .line 317
    invoke-super {p0}, Landroid/widget/FrameLayout;->onAttachedToWindow()V

    const/4 v0, 0x1

    .line 318
    iput-boolean v0, p0, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 323
    invoke-super {p0}, Landroid/widget/FrameLayout;->onDetachedFromWindow()V

    const/4 v0, 0x0

    .line 324
    iput-boolean v0, p0, Lcom/tkay/banner/api/TYBannerView;->hasTouchWindow:Z

    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    .line 329
    invoke-super {p0, p1, p2}, Landroid/widget/FrameLayout;->onVisibilityChanged(Landroid/view/View;I)V

    if-nez p2, :cond_0

    .line 331
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->controlShow()V

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 0

    .line 337
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->onWindowFocusChanged(Z)V

    if-eqz p1, :cond_0

    .line 339
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->controlShow()V

    :cond_0
    return-void
.end method

.method public setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V
    .locals 3

    .line 590
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    .line 591
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mCustomBannerAd:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    if-eqz p1, :cond_0

    .line 593
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 595
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mCustomBannerAd:Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/tkay/banner/api/TYBannerView;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    invoke-interface {p1, v0, v1, v2}, Lcom/tkay/core/api/IExHandler;->createDownloadListener(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/banner/unitgroup/api/CustomBannerAdapter;->setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    :cond_0
    return-void
.end method

.method public setAdSourceStatusListener(Lcom/tkay/core/api/TYAdSourceStatusListener;)V
    .locals 1

    .line 605
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    if-nez v0, :cond_0

    .line 606
    new-instance v0, Lcom/tkay/core/common/b/b;

    invoke-direct {v0}, Lcom/tkay/core/common/b/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    .line 608
    :cond_0
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

    .line 609
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/b;->a(Lcom/tkay/core/api/TYAdSourceStatusListener;)V

    return-void
.end method

.method public setBannerAdListener(Lcom/tkay/banner/api/TYBannerListener;)V
    .locals 0

    .line 292
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mListener:Lcom/tkay/banner/api/TYBannerListener;

    return-void
.end method

.method public setLocalExtra(Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 266
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mPlacementId:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 267
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->TAG:Ljava/lang/String;

    const-string v0, "You must set unit Id first."

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 270
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/banner/api/TYBannerView;->mPlacementId:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public setPlacementId(Ljava/lang/String;)V
    .locals 1

    .line 209
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/tkay/banner/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/banner/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mAdLoadManager:Lcom/tkay/banner/a/a;

    .line 210
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mPlacementId:Ljava/lang/String;

    .line 211
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mBannerRefreshTimer:Lcom/tkay/banner/b/a;

    invoke-virtual {v0, p1}, Lcom/tkay/banner/b/a;->a(Ljava/lang/String;)V

    .line 212
    iget-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->impressionTracker:Lcom/tkay/core/common/l/a/c;

    if-nez p1, :cond_0

    .line 213
    new-instance p1, Lcom/tkay/core/common/l/a/c;

    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->getContext()Landroid/content/Context;

    const/16 v0, 0x32

    invoke-direct {p1, v0}, Lcom/tkay/core/common/l/a/c;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->impressionTracker:Lcom/tkay/core/common/l/a/c;

    :cond_0
    return-void
.end method

.method public setScenario(Ljava/lang/String;)V
    .locals 1

    .line 218
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 219
    iput-object p1, p0, Lcom/tkay/banner/api/TYBannerView;->mScenario:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public setTKExtra(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 245
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mTKExtraMap:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 246
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mTKExtraMap:Ljava/util/Map;

    .line 248
    :cond_0
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 249
    iget-object v0, p0, Lcom/tkay/banner/api/TYBannerView;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    return-void
.end method

.method public timeUpRefreshView()V
    .locals 1

    const/4 v0, 0x1

    .line 615
    iput-boolean v0, p0, Lcom/tkay/banner/api/TYBannerView;->canRenderBanner:Z

    .line 616
    invoke-virtual {p0}, Lcom/tkay/banner/api/TYBannerView;->controlShow()V

    return-void
.end method
