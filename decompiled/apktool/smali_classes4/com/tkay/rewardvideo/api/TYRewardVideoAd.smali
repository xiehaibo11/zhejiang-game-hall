.class public Lcom/tkay/rewardvideo/api/TYRewardVideoAd;
.super Ljava/lang/Object;


# instance fields
.field final TAG:Ljava/lang/String;

.field adLoadListener:Lcom/tkay/core/common/b/a;

.field mActivityWef:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field mAdLoadManager:Lcom/tkay/rewardvideo/a/a;

.field mAdSourceEventListener:Lcom/tkay/core/common/b/b;

.field mContext:Landroid/content/Context;

.field mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

.field mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

.field private mInterListener:Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

.field mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

.field mPlacementId:Ljava/lang/String;

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


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 247
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->TAG:Ljava/lang/String;

    .line 50
    new-instance v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;

    invoke-direct {v0, p0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$1;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd;)V

    iput-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mInterListener:Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    .line 221
    new-instance v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;

    invoke-direct {v0, p0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd$2;-><init>(Lcom/tkay/rewardvideo/api/TYRewardVideoAd;)V

    iput-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->adLoadListener:Lcom/tkay/core/common/b/a;

    .line 248
    iput-object p2, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mPlacementId:Ljava/lang/String;

    .line 249
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mContext:Landroid/content/Context;

    .line 250
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 251
    new-instance v0, Ljava/lang/ref/WeakReference;

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-direct {v0, v1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mActivityWef:Ljava/lang/ref/WeakReference;

    .line 253
    :cond_0
    invoke-static {p1, p2}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdLoadManager:Lcom/tkay/rewardvideo/a/a;

    return-void
.end method

.method private controlShow(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 6

    .line 364
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->q:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->y:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 365
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 366
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 367
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    if-nez p1, :cond_1

    .line 377
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mContext:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_1

    .line 378
    move-object p1, v0

    check-cast p1, Landroid/app/Activity;

    :cond_1
    move-object v1, p1

    if-nez v1, :cond_2

    .line 382
    iget-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->TAG:Ljava/lang/String;

    const-string v0, "RewardedVideo Show Activity is null."

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 385
    :cond_2
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdLoadManager:Lcom/tkay/rewardvideo/a/a;

    iget-object v3, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mInterListener:Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v4, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    iget-object v5, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mTKExtraMap:Ljava/util/Map;

    move-object v2, p2

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V

    return-void

    :cond_3
    :goto_0
    const-string p1, "9999"

    const-string p2, "sdk init error"

    .line 368
    invoke-static {p1, v4, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    .line 369
    iget-object p2, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz p2, :cond_4

    const/4 v0, 0x0

    .line 370
    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    invoke-interface {p2, p1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    .line 372
    :cond_4
    iget-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->TAG:Ljava/lang/String;

    const-string p2, "SDK init error!"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static entryAdScenario(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 272
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "1"

    const/4 v2, 0x0

    invoke-virtual {v0, p0, p1, v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static entryAdScenario(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 276
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, p0, p1, v1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 3

    .line 333
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 334
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 335
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 339
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdLoadManager:Lcom/tkay/rewardvideo/a/a;

    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    return-object v0

    .line 336
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->TAG:Ljava/lang/String;

    const-string v1, "SDK init error!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    return-object v0
.end method

.method private getRequestContext()Landroid/content/Context;
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mActivityWef:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 282
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    return-object v0

    .line 284
    :cond_1
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method private isPlaceStrategyNeedAutoLoad()Z
    .locals 3

    .line 288
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mPlacementId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 290
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->W()I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    return v2

    :cond_0
    return v1
.end method

.method private load(Landroid/content/Context;I)V
    .locals 12

    .line 267
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->q:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->w:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    const/4 v5, 0x1

    invoke-static/range {v0 .. v5}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 268
    iget-object v6, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdLoadManager:Lcom/tkay/rewardvideo/a/a;

    iget-object v9, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->adLoadListener:Lcom/tkay/core/common/b/a;

    iget-object v10, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    iget-object v11, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mTKExtraMap:Ljava/util/Map;

    move-object v7, p1

    move v8, p2

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    return-void
.end method


# virtual methods
.method public checkAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 6

    .line 324
    invoke-direct {p0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    .line 326
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    return-object v0

    .line 328
    :cond_0
    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->q:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->A:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, ""

    invoke-static {v1, v2, v3, v4, v5}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

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

    .line 344
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdLoadManager:Lcom/tkay/rewardvideo/a/a;

    if-eqz v0, :cond_0

    .line 345
    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 6

    .line 314
    invoke-direct {p0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 318
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->isReady()Z

    move-result v0

    .line 319
    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->q:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->z:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v4

    const-string v5, ""

    invoke-static {v1, v2, v3, v4, v5}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method public load()V
    .locals 2

    .line 257
    invoke-direct {p0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->getRequestContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->load(Landroid/content/Context;I)V

    return-void
.end method

.method public load(Landroid/content/Context;)V
    .locals 1

    if-eqz p1, :cond_0

    goto :goto_0

    .line 262
    :cond_0
    invoke-direct {p0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->getRequestContext()Landroid/content/Context;

    move-result-object p1

    :goto_0
    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->load(Landroid/content/Context;I)V

    return-void
.end method

.method public setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V
    .locals 0

    .line 394
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-void
.end method

.method public setAdListener(Lcom/tkay/rewardvideo/api/TYRewardVideoListener;)V
    .locals 0

    .line 310
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mListener:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    return-void
.end method

.method public setAdSourceStatusListener(Lcom/tkay/core/api/TYAdSourceStatusListener;)V
    .locals 1

    .line 402
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    if-nez v0, :cond_0

    .line 403
    new-instance v0, Lcom/tkay/core/common/b/b;

    invoke-direct {v0}, Lcom/tkay/core/common/b/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    .line 405
    :cond_0
    iput-object p1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

    .line 406
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/b;->a(Lcom/tkay/core/api/TYAdSourceStatusListener;)V

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

    .line 296
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mPlacementId:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/util/Map;)V

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

    .line 302
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mTKExtraMap:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 303
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mTKExtraMap:Ljava/util/Map;

    .line 305
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 306
    iget-object v0, p0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 1

    const-string v0, ""

    .line 359
    invoke-direct {p0, p1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->controlShow(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 352
    invoke-static {p2}, Lcom/tkay/core/common/l/g;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string p2, ""

    .line 355
    :goto_0
    invoke-direct {p0, p1, p2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->controlShow(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method
