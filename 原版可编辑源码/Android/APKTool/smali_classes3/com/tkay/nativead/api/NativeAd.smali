.class public Lcom/tkay/nativead/api/NativeAd;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;,
        Lcom/tkay/nativead/api/NativeAd$DownloadConfirmListener;
    }
.end annotation


# instance fields
.field private final TAG:Ljava/lang/String;

.field private hasSetShowTkDetail:Z

.field isManualImpressionTrack:Z

.field private mAdCacheInfo:Lcom/tkay/core/common/f/a;

.field protected mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

.field mConfirmListener:Lcom/tkay/nativead/api/NativeAd$DownloadConfirmListener;

.field private mContext:Landroid/content/Context;

.field mDefaultCloseViewListener:Landroid/view/View$OnClickListener;

.field private mDislikeListener:Lcom/tkay/nativead/api/TYNativeDislikeListener;

.field mEventInterface:Lcom/tkay/core/api/TYEventInterface;

.field private mIsDestroyed:Z

.field private mNativeEventListener:Lcom/tkay/nativead/api/TYNativeEventListener;

.field mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

.field private mPlacementId:Ljava/lang/String;

.field private mRecordedImpression:Z

.field private mRecordedShow:Z

.field nativeMaterial:Lcom/tkay/nativead/api/TYNativeMaterial;


# direct methods
.method protected constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/a;)V
    .locals 1

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    .line 288
    new-instance v0, Lcom/tkay/nativead/api/NativeAd$4;

    invoke-direct {v0, p0}, Lcom/tkay/nativead/api/NativeAd$4;-><init>(Lcom/tkay/nativead/api/NativeAd;)V

    iput-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mDefaultCloseViewListener:Landroid/view/View$OnClickListener;

    const/4 v0, 0x0

    .line 458
    iput-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->isManualImpressionTrack:Z

    .line 68
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mContext:Landroid/content/Context;

    .line 70
    iput-object p2, p0, Lcom/tkay/nativead/api/NativeAd;->mPlacementId:Ljava/lang/String;

    .line 72
    iput-object p3, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    .line 74
    invoke-virtual {p3}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object p1

    check-cast p1, Lcom/tkay/nativead/unitgroup/a;

    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    .line 75
    new-instance p2, Lcom/tkay/nativead/api/NativeAd$1;

    invoke-direct {p2, p0}, Lcom/tkay/nativead/api/NativeAd$1;-><init>(Lcom/tkay/nativead/api/NativeAd;)V

    invoke-virtual {p1, p2}, Lcom/tkay/nativead/unitgroup/a;->setNativeEventListener(Lcom/tkay/core/common/b/k;)V

    .line 118
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    instance-of p1, p1, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz p1, :cond_0

    .line 119
    new-instance p1, Lcom/tkay/nativead/a/b;

    iget-object p2, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    check-cast p2, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-direct {p1, p2}, Lcom/tkay/nativead/a/b;-><init>(Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;)V

    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->nativeMaterial:Lcom/tkay/nativead/api/TYNativeMaterial;

    :cond_0
    return-void
.end method

.method static synthetic access$000(Lcom/tkay/nativead/api/NativeAd;)Z
    .locals 0

    .line 47
    iget-boolean p0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    return p0
.end method

.method static synthetic access$100(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/core/common/f/a;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    return-object p0
.end method

.method static synthetic access$200(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/core/common/f/d;)V
    .locals 0

    .line 47
    invoke-direct {p0, p1}, Lcom/tkay/nativead/api/NativeAd;->fillShowTrackingInfo(Lcom/tkay/core/common/f/d;)V

    return-void
.end method

.method static synthetic access$300(Lcom/tkay/nativead/api/NativeAd;)Landroid/content/Context;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/nativead/api/NativeAd;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic access$400(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeEventListener;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeEventListener:Lcom/tkay/nativead/api/TYNativeEventListener;

    return-object p0
.end method

.method static synthetic access$500(Lcom/tkay/nativead/api/NativeAd;)Lcom/tkay/nativead/api/TYNativeDislikeListener;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/nativead/api/NativeAd;->mDislikeListener:Lcom/tkay/nativead/api/TYNativeDislikeListener;

    return-object p0
.end method

.method private bindListener()V
    .locals 2

    .line 298
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_1

    .line 299
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    .line 301
    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->checkHasCloseViewListener()Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 305
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getNativePrepareInfo()Lcom/tkay/nativead/api/TYNativePrepareInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 307
    invoke-virtual {v0}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getCloseView()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 309
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mDefaultCloseViewListener:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1
    return-void
.end method

.method private checkBindView(Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 267
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getTitleView()Landroid/view/View;

    move-result-object v0

    if-nez v0, :cond_1

    const-string v0, "titleView"

    .line 268
    invoke-direct {p0, v0}, Lcom/tkay/nativead/api/NativeAd;->printNotSetViewLog(Ljava/lang/String;)V

    .line 270
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getCtaView()Landroid/view/View;

    move-result-object v0

    if-nez v0, :cond_2

    const-string v0, "ctaView"

    .line 271
    invoke-direct {p0, v0}, Lcom/tkay/nativead/api/NativeAd;->printNotSetViewLog(Ljava/lang/String;)V

    .line 273
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getDescView()Landroid/view/View;

    move-result-object v0

    if-nez v0, :cond_3

    const-string v0, "descView"

    .line 274
    invoke-direct {p0, v0}, Lcom/tkay/nativead/api/NativeAd;->printNotSetViewLog(Ljava/lang/String;)V

    .line 276
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getIconView()Landroid/view/View;

    move-result-object v0

    if-nez v0, :cond_4

    const-string v0, "iconView"

    .line 277
    invoke-direct {p0, v0}, Lcom/tkay/nativead/api/NativeAd;->printNotSetViewLog(Ljava/lang/String;)V

    .line 279
    :cond_4
    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativePrepareInfo;->getMainImageView()Landroid/view/View;

    move-result-object p1

    if-nez p1, :cond_5

    const-string p1, "mainImageView"

    .line 280
    invoke-direct {p0, p1}, Lcom/tkay/nativead/api/NativeAd;->printNotSetViewLog(Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method private declared-synchronized fillShowTrackingInfo(Lcom/tkay/core/common/f/d;)V
    .locals 2

    monitor-enter p0

    .line 386
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->hasSetShowTkDetail:Z

    if-nez v0, :cond_0

    .line 387
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mPlacementId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    .line 388
    iput-boolean v1, p0, Lcom/tkay/nativead/api/NativeAd;->hasSetShowTkDetail:Z

    if-eqz p1, :cond_0

    .line 1578
    iput-object v0, p1, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    .line 392
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mContext:Landroid/content/Context;

    invoke-static {v0, p1}, Lcom/tkay/core/common/l/s;->a(Landroid/content/Context;Lcom/tkay/core/common/f/d;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 396
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private printNotSetViewLog(Ljava/lang/String;)V
    .locals 3

    .line 285
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "The "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " is not set, it may cause the ad to not be clicked normally."

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private renderViewToWindow(Landroid/view/View;)V
    .locals 5

    .line 197
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->r:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->y:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 209
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object v0

    .line 211
    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    .line 213
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 214
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    invoke-virtual {v2, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    if-eqz v0, :cond_2

    .line 219
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 220
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 223
    :cond_1
    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    :cond_2
    if-nez v0, :cond_3

    goto :goto_0

    :cond_3
    move-object p1, v0

    .line 229
    :goto_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    new-instance v2, Lcom/tkay/nativead/api/NativeAd$3;

    invoke-direct {v2, p0}, Lcom/tkay/nativead/api/NativeAd$3;-><init>(Lcom/tkay/nativead/api/NativeAd;)V

    invoke-virtual {v0, v1, p1, v2}, Lcom/tkay/nativead/api/TYNativeAdView;->renderView(ILandroid/view/View;Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;)V

    return-void
.end method


# virtual methods
.method public declared-synchronized clear(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 1

    monitor-enter p0

    .line 347
    :try_start_0
    iget-boolean p1, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz p1, :cond_0

    .line 348
    monitor-exit p0

    return-void

    .line 352
    :cond_0
    :try_start_1
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz p1, :cond_1

    .line 353
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {p1, v0}, Lcom/tkay/nativead/unitgroup/a;->clear(Landroid/view/View;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 361
    :catchall_0
    :cond_1
    :try_start_2
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    if-eqz p1, :cond_2

    .line 362
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/tkay/nativead/api/TYNativeAdView;->clearImpressionListener(I)V

    const/4 p1, 0x0

    .line 363
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 366
    :cond_2
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized destory()V
    .locals 1

    monitor-enter p0

    .line 369
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 370
    monitor-exit p0

    return-void

    .line 372
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {p0, v0}, Lcom/tkay/nativead/api/NativeAd;->clear(Lcom/tkay/nativead/api/TYNativeAdView;)V

    const/4 v0, 0x1

    .line 373
    iput-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    const/4 v0, 0x0

    .line 374
    iput-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeEventListener:Lcom/tkay/nativead/api/TYNativeEventListener;

    .line 375
    iput-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mDislikeListener:Lcom/tkay/nativead/api/TYNativeDislikeListener;

    .line 376
    iput-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mDefaultCloseViewListener:Landroid/view/View$OnClickListener;

    .line 377
    iput-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    .line 379
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 380
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->destroy()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 383
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public getAdInfo()Lcom/tkay/core/api/TYAdInfo;
    .locals 1

    .line 808
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    return-object v0
.end method

.method public getAdInteractionType()I
    .locals 2

    .line 190
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_0

    .line 191
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getNativeAdInteractionType()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getAdMaterial()Lcom/tkay/nativead/api/TYNativeMaterial;
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->nativeMaterial:Lcom/tkay/nativead/api/TYNativeMaterial;

    return-object v0
.end method

.method public getCustomVideo()Lcom/tkay/core/api/TYCustomVideo;
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 801
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_0

    .line 802
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getNativeCustomVideo()Lcom/tkay/core/api/TYCustomVideo;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getNativeType()I
    .locals 2

    .line 793
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_0

    .line 794
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getNativeType()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getVideoDuration()D
    .locals 2

    .line 769
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_0

    .line 770
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getVideoDuration()D

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public getVideoProgress()D
    .locals 2

    .line 777
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_0

    .line 778
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->getVideoProgress()D

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method declared-synchronized handleAdDislikeButtonClick(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 2

    monitor-enter p0

    .line 630
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 631
    monitor-exit p0

    return-void

    .line 634
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/NativeAd$9;

    invoke-direct {v1, p0, p1}, Lcom/tkay/nativead/api/NativeAd$9;-><init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 644
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized handleClick(Lcom/tkay/nativead/api/TYNativeAdView;Landroid/view/View;)V
    .locals 3

    monitor-enter p0

    .line 583
    :try_start_0
    iget-boolean p2, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p2, :cond_0

    .line 584
    monitor-exit p0

    return-void

    .line 587
    :cond_0
    :try_start_1
    iget-object p2, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz p2, :cond_1

    .line 588
    iget-object p2, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {p2}, Lcom/tkay/nativead/unitgroup/a;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object p2

    .line 590
    sget-object v0, Lcom/tkay/core/common/b/f$i;->d:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v2, ""

    invoke-static {p2, v0, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 592
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/4 v1, 0x6

    invoke-virtual {v0, v1, p2}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 595
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    new-instance v0, Lcom/tkay/nativead/api/NativeAd$7;

    invoke-direct {v0, p0, p1}, Lcom/tkay/nativead/api/NativeAd$7;-><init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;)V

    invoke-virtual {p2, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 604
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized handleDeeplinkCallback(Lcom/tkay/nativead/api/TYNativeAdView;Z)V
    .locals 2

    monitor-enter p0

    .line 571
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 572
    monitor-exit p0

    return-void

    .line 575
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeEventListener:Lcom/tkay/nativead/api/TYNativeEventListener;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeEventListener:Lcom/tkay/nativead/api/TYNativeEventListener;

    instance-of v0, v0, Lcom/tkay/nativead/api/TYNativeEventExListener;

    if-eqz v0, :cond_1

    .line 576
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeEventListener:Lcom/tkay/nativead/api/TYNativeEventListener;

    check-cast v0, Lcom/tkay/nativead/api/TYNativeEventExListener;

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, p1, v1, p2}, Lcom/tkay/nativead/api/TYNativeEventExListener;->onDeeplinkCallback(Lcom/tkay/nativead/api/TYNativeAdView;Lcom/tkay/core/api/TYAdInfo;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 579
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized handleDownloadConfirm(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    monitor-enter p0

    .line 686
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 687
    monitor-exit p0

    return-void

    .line 690
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mConfirmListener:Lcom/tkay/nativead/api/NativeAd$DownloadConfirmListener;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_2

    .line 691
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mConfirmListener:Lcom/tkay/nativead/api/NativeAd$DownloadConfirmListener;

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mContext:Landroid/content/Context;

    :goto_0
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, p1, v1, p2, p3}, Lcom/tkay/nativead/api/NativeAd$DownloadConfirmListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 693
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized handleImpression(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 2

    monitor-enter p0

    .line 527
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mRecordedImpression:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    .line 531
    iput-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mRecordedImpression:Z

    .line 533
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/NativeAd$6;

    invoke-direct {v1, p0, p1}, Lcom/tkay/nativead/api/NativeAd$6;-><init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 568
    monitor-exit p0

    return-void

    .line 528
    :cond_1
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized handleVideoEnd(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 3

    monitor-enter p0

    .line 647
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 648
    monitor-exit p0

    return-void

    .line 651
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 652
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    const/16 v1, 0x64

    .line 2637
    iput v1, v0, Lcom/tkay/core/common/f/d;->t:I

    .line 654
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0x9

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 657
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/NativeAd$10;

    invoke-direct {v1, p0, p1}, Lcom/tkay/nativead/api/NativeAd$10;-><init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 666
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized handleVideoProgress(Lcom/tkay/nativead/api/TYNativeAdView;I)V
    .locals 2

    monitor-enter p0

    .line 669
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 670
    monitor-exit p0

    return-void

    .line 673
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/NativeAd$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/nativead/api/NativeAd$2;-><init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 682
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized handleVideoStart(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 3

    monitor-enter p0

    .line 608
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 609
    monitor-exit p0

    return-void

    .line 612
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 613
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    const/4 v1, 0x0

    .line 1637
    iput v1, v0, Lcom/tkay/core/common/f/d;->t:I

    .line 615
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mContext:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0x8

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 618
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/NativeAd$8;

    invoke-direct {v1, p0, p1}, Lcom/tkay/nativead/api/NativeAd$8;-><init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/nativead/api/TYNativeAdView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 627
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public isNativeExpress()Z
    .locals 2

    .line 785
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_0

    .line 786
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->isNativeExpress()Z

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public manualImpressionTrack()V
    .locals 4

    .line 465
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    .line 466
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    const-string v1, "NativeAd had been destroyed."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 470
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->isManualImpressionTrack:Z

    if-nez v0, :cond_2

    .line 471
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 472
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    const-string v1, "Must call \"setManualImpressionTrack(true);\" first."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void

    .line 477
    :cond_2
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    .line 478
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    goto :goto_0

    :cond_3
    const/4 v1, 0x0

    :goto_0
    if-eqz v1, :cond_5

    .line 480
    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->supportImpressionCallback()Z

    move-result v1

    if-eqz v1, :cond_5

    .line 481
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 482
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    const-string v1, "This NativeAd don\'t support tracking impressions manually."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return-void

    :cond_5
    if-nez v0, :cond_7

    .line 488
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 489
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    const-string v1, "NativeAd don\'t call render."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    return-void

    .line 494
    :cond_7
    invoke-virtual {v0}, Lcom/tkay/nativead/api/TYNativeAdView;->isShown()Z

    move-result v1

    if-nez v1, :cond_9

    .line 495
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 496
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    const-string v1, "TYNativeAdView isn\'t visible."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_8
    return-void

    .line 501
    :cond_9
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    const-string v3, "TYNativeAdView don\'t attach window."

    if-lt v1, v2, :cond_b

    .line 502
    invoke-virtual {v0}, Lcom/tkay/nativead/api/TYNativeAdView;->isAttachedToWindow()Z

    move-result v1

    if-nez v1, :cond_d

    .line 503
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_a

    .line 504
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return-void

    .line 509
    :cond_b
    invoke-virtual {v0}, Lcom/tkay/nativead/api/TYNativeAdView;->isAttachInWindow()Z

    move-result v1

    if-nez v1, :cond_d

    .line 510
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_c

    .line 511
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    invoke-static {v0, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_c
    return-void

    .line 517
    :cond_d
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v1

    if-eqz v1, :cond_e

    .line 518
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    const-string v2, "try to track impression manually."

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 521
    :cond_e
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    instance-of v2, v1, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v2, :cond_f

    .line 522
    check-cast v1, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v1, v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->impressionTrack(Landroid/view/View;)V

    :cond_f
    return-void
.end method

.method public onPause()V
    .locals 1

    .line 724
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    return-void

    .line 727
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 728
    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->onPause()V

    :cond_1
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 733
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    return-void

    .line 736
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 737
    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->onResume()V

    :cond_1
    return-void
.end method

.method public pauseVideo()V
    .locals 1

    .line 751
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    return-void

    .line 754
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 755
    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->pauseVideo()V

    :cond_1
    return-void
.end method

.method public declared-synchronized prepare(Lcom/tkay/nativead/api/TYNativeAdView;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 1

    monitor-enter p0

    .line 247
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 248
    monitor-exit p0

    return-void

    :cond_0
    if-eqz p1, :cond_2

    if-nez p2, :cond_1

    .line 252
    :try_start_1
    new-instance p2, Lcom/tkay/nativead/api/TYNativePrepareInfo;

    invoke-direct {p2}, Lcom/tkay/nativead/api/TYNativePrepareInfo;-><init>()V

    .line 255
    :cond_1
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0, p2}, Lcom/tkay/nativead/unitgroup/a;->setNativePrepareInfo(Lcom/tkay/nativead/api/TYNativePrepareInfo;)V

    .line 257
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/nativead/unitgroup/a;->prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V

    .line 258
    invoke-direct {p0}, Lcom/tkay/nativead/api/NativeAd;->bindListener()V

    .line 260
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {p1}, Lcom/tkay/nativead/unitgroup/a;->isNativeExpress()Z

    move-result p1

    if-nez p1, :cond_2

    .line 261
    invoke-direct {p0, p2}, Lcom/tkay/nativead/api/NativeAd;->checkBindView(Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 263
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method declared-synchronized recordShow(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 3

    monitor-enter p0

    .line 400
    :try_start_0
    iget-boolean p1, p0, Lcom/tkay/nativead/api/NativeAd;->mRecordedShow:Z

    if-nez p1, :cond_1

    .line 401
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {p1}, Lcom/tkay/nativead/unitgroup/a;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object p1

    const/4 v0, 0x1

    .line 402
    iput-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mRecordedShow:Z

    .line 403
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    if-eqz v1, :cond_0

    .line 405
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->d()I

    move-result v2

    add-int/2addr v2, v0

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/a;->a(I)V

    .line 407
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mPlacementId:Ljava/lang/String;

    const-string v2, "0"

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 409
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f/a;)V

    .line 410
    invoke-virtual {v0}, Lcom/tkay/core/common/f;->f()V

    .line 415
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/nativead/api/NativeAd$5;

    invoke-direct {v1, p0, p1}, Lcom/tkay/nativead/api/NativeAd$5;-><init>(Lcom/tkay/nativead/api/NativeAd;Lcom/tkay/core/common/f/d;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 456
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized renderAdContainer(Lcom/tkay/nativead/api/TYNativeAdView;Landroid/view/View;)V
    .locals 4

    monitor-enter p0

    .line 133
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 134
    monitor-exit p0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    .line 138
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativeAdView;->clear()V

    :cond_1
    const/4 v0, 0x0

    .line 148
    invoke-virtual {p0}, Lcom/tkay/nativead/api/NativeAd;->isNativeExpress()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_4

    .line 149
    iget-object p2, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz p2, :cond_3

    if-nez p1, :cond_2

    const-string p1, "tkay"

    const-string p2, "renderAdContainer: TYNativeAdView cannot be null for template-rendering ads!"

    .line 152
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 153
    monitor-exit p0

    return-void

    .line 156
    :cond_2
    :try_start_2
    iget-object p2, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    aput-object p1, v0, v2

    const/4 v1, 0x1

    invoke-virtual {p1}, Lcom/tkay/nativead/api/TYNativeAdView;->getWidth()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v0, v1

    invoke-virtual {p2, v0}, Lcom/tkay/nativead/unitgroup/a;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;

    move-result-object p2

    if-nez p2, :cond_5

    const-string p1, "tkay"

    const-string p2, "renderAdContainer: getAdMediaView() cannot be null for template-rendering ads!"

    .line 159
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 160
    monitor-exit p0

    return-void

    :cond_3
    move-object p2, v0

    goto :goto_0

    :cond_4
    if-nez p2, :cond_5

    :try_start_3
    const-string p1, "tkay"

    const-string p2, "renderAdContainer: selfRenderView cannot be null for self-rendering ads!"

    .line 165
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 166
    monitor-exit p0

    return-void

    .line 172
    :cond_5
    :goto_0
    :try_start_4
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    if-eqz p1, :cond_6

    .line 174
    invoke-virtual {p1, p0}, Lcom/tkay/nativead/api/TYNativeAdView;->attachNativeAd(Lcom/tkay/nativead/api/NativeAd;)V

    :cond_6
    if-eqz p2, :cond_7

    .line 178
    invoke-virtual {p2, v2}, Landroid/view/View;->setVisibility(I)V

    .line 179
    invoke-direct {p0, p2}, Lcom/tkay/nativead/api/NativeAd;->renderViewToWindow(Landroid/view/View;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 181
    :cond_7
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public resumeVideo()V
    .locals 1

    .line 742
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    return-void

    .line 745
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 746
    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/a;->resumeVideo()V

    :cond_1
    return-void
.end method

.method public setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V
    .locals 4

    .line 699
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mEventInterface:Lcom/tkay/core/api/TYEventInterface;

    .line 700
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 703
    iget-object v1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd;->mAdCacheInfo:Lcom/tkay/core/common/f/a;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-interface {v0, v2, v3, p1}, Lcom/tkay/core/api/IExHandler;->createDownloadListener(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)Lcom/tkay/core/api/TYEventInterface;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/tkay/nativead/unitgroup/a;->setDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    return-void

    .line 705
    :cond_0
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {p1, v1}, Lcom/tkay/nativead/unitgroup/a;->setDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    return-void

    .line 708
    :cond_1
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {p1, v1}, Lcom/tkay/nativead/unitgroup/a;->setDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V

    .line 709
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->TAG:Ljava/lang/String;

    const-string v0, "This method is not supported in this version"

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public setDislikeCallbackListener(Lcom/tkay/nativead/api/TYNativeDislikeListener;)V
    .locals 1

    .line 324
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    return-void

    .line 327
    :cond_0
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mDislikeListener:Lcom/tkay/nativead/api/TYNativeDislikeListener;

    return-void
.end method

.method public setDownloadConfirmListener(Lcom/tkay/nativead/api/NativeAd$DownloadConfirmListener;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 335
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_1

    .line 336
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->registerDownloadConfirmListener()V

    goto :goto_0

    .line 339
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    instance-of v1, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v1, :cond_1

    .line 340
    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->unregeisterDownloadConfirmListener()V

    .line 343
    :cond_1
    :goto_0
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mConfirmListener:Lcom/tkay/nativead/api/NativeAd$DownloadConfirmListener;

    return-void
.end method

.method public setManualImpressionTrack(Z)V
    .locals 0

    .line 461
    iput-boolean p1, p0, Lcom/tkay/nativead/api/NativeAd;->isManualImpressionTrack:Z

    return-void
.end method

.method public setNativeEventListener(Lcom/tkay/nativead/api/TYNativeEventListener;)V
    .locals 1

    .line 317
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    return-void

    .line 320
    :cond_0
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd;->mNativeEventListener:Lcom/tkay/nativead/api/TYNativeEventListener;

    return-void
.end method

.method public setVideoMute(Z)V
    .locals 1

    .line 760
    iget-boolean v0, p0, Lcom/tkay/nativead/api/NativeAd;->mIsDestroyed:Z

    if-eqz v0, :cond_0

    return-void

    .line 763
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v0, :cond_1

    .line 764
    invoke-virtual {v0, p1}, Lcom/tkay/nativead/unitgroup/a;->setVideoMute(Z)V

    :cond_1
    return-void
.end method
