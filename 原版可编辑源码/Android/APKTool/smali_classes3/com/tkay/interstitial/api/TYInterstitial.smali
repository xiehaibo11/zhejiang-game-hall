.class public Lcom/tkay/interstitial/api/TYInterstitial;
.super Ljava/lang/Object;


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
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

.field mAdLoadManager:Lcom/tkay/interstitial/a/a;

.field mAdSourceEventListener:Lcom/tkay/core/common/b/b;

.field public mContext:Landroid/content/Context;

.field mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

.field mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

.field private mInterListener:Lcom/tkay/interstitial/api/TYInterstitialExListener;

.field public mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

.field public mPlacementId:Ljava/lang/String;

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
.method static constructor <clinit>()V
    .locals 1

    .line 38
    const-class v0, Lcom/tkay/interstitial/api/TYInterstitial;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/interstitial/api/TYInterstitial;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 186
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    new-instance v0, Lcom/tkay/interstitial/api/TYInterstitial$1;

    invoke-direct {v0, p0}, Lcom/tkay/interstitial/api/TYInterstitial$1;-><init>(Lcom/tkay/interstitial/api/TYInterstitial;)V

    iput-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterListener:Lcom/tkay/interstitial/api/TYInterstitialExListener;

    .line 160
    new-instance v0, Lcom/tkay/interstitial/api/TYInterstitial$2;

    invoke-direct {v0, p0}, Lcom/tkay/interstitial/api/TYInterstitial$2;-><init>(Lcom/tkay/interstitial/api/TYInterstitial;)V

    iput-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->adLoadListener:Lcom/tkay/core/common/b/a;

    .line 187
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mContext:Landroid/content/Context;

    .line 188
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 189
    new-instance v0, Ljava/lang/ref/WeakReference;

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-direct {v0, v1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mActivityWef:Ljava/lang/ref/WeakReference;

    .line 191
    :cond_0
    iput-object p2, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mPlacementId:Ljava/lang/String;

    .line 192
    invoke-static {p1, p2}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdLoadManager:Lcom/tkay/interstitial/a/a;

    return-void
.end method

.method private controlShow(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 6

    .line 294
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->p:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->y:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 296
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 297
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

    .line 305
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mContext:Landroid/content/Context;

    instance-of v1, v0, Landroid/app/Activity;

    if-eqz v1, :cond_1

    .line 306
    move-object p1, v0

    check-cast p1, Landroid/app/Activity;

    :cond_1
    move-object v1, p1

    if-nez v1, :cond_2

    .line 310
    sget-object p1, Lcom/tkay/interstitial/api/TYInterstitial;->TAG:Ljava/lang/String;

    const-string v0, "Interstitial Show Activity is null."

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 321
    :cond_2
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdLoadManager:Lcom/tkay/interstitial/a/a;

    iget-object v3, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterListener:Lcom/tkay/interstitial/api/TYInterstitialExListener;

    iget-object v4, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    iget-object v5, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mTKExtraMap:Ljava/util/Map;

    move-object v2, p2

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/interstitial/a/a;->a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V

    return-void

    .line 298
    :cond_3
    :goto_0
    sget-object p1, Lcom/tkay/interstitial/api/TYInterstitial;->TAG:Ljava/lang/String;

    const-string p2, "Show error: SDK init error!"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static entryAdScenario(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 246
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "3"

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

    .line 250
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "3"

    invoke-virtual {v0, p0, p1, v1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 3

    .line 263
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 264
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 265
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 269
    :cond_0
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdLoadManager:Lcom/tkay/interstitial/a/a;

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    return-object v0

    .line 266
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/interstitial/api/TYInterstitial;->TAG:Ljava/lang/String;

    const-string v1, "SDK init error!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    return-object v0
.end method

.method private getRequestContext()Landroid/content/Context;
    .locals 1

    .line 198
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mActivityWef:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 199
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    return-object v0

    .line 201
    :cond_1
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method private load(Landroid/content/Context;I)V
    .locals 12

    .line 217
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->p:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->w:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    const/4 v5, 0x1

    invoke-static/range {v0 .. v5}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 218
    iget-object v6, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdLoadManager:Lcom/tkay/interstitial/a/a;

    iget-object v9, p0, Lcom/tkay/interstitial/api/TYInterstitial;->adLoadListener:Lcom/tkay/core/common/b/a;

    iget-object v10, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    iget-object v11, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mTKExtraMap:Ljava/util/Map;

    move-object v7, p1

    move v8, p2

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    return-void
.end method


# virtual methods
.method public checkAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 6

    .line 254
    invoke-direct {p0}, Lcom/tkay/interstitial/api/TYInterstitial;->getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    .line 256
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    return-object v0

    .line 258
    :cond_0
    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->p:Ljava/lang/String;

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

    .line 274
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdLoadManager:Lcom/tkay/interstitial/a/a;

    if-eqz v0, :cond_0

    .line 275
    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 6

    .line 236
    invoke-direct {p0}, Lcom/tkay/interstitial/api/TYInterstitial;->getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 240
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->isReady()Z

    move-result v0

    .line 241
    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->p:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->z:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v4

    const-string v5, ""

    invoke-static {v1, v2, v3, v4, v5}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method public load()V
    .locals 2

    .line 209
    invoke-direct {p0}, Lcom/tkay/interstitial/api/TYInterstitial;->getRequestContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/tkay/interstitial/api/TYInterstitial;->load(Landroid/content/Context;I)V

    return-void
.end method

.method public load(Landroid/content/Context;)V
    .locals 1

    if-eqz p1, :cond_0

    goto :goto_0

    .line 213
    :cond_0
    invoke-direct {p0}, Lcom/tkay/interstitial/api/TYInterstitial;->getRequestContext()Landroid/content/Context;

    move-result-object p1

    :goto_0
    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/tkay/interstitial/api/TYInterstitial;->load(Landroid/content/Context;I)V

    return-void
.end method

.method public setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V
    .locals 0

    .line 340
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-void
.end method

.method public setAdListener(Lcom/tkay/interstitial/api/TYInterstitialListener;)V
    .locals 0

    .line 231
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mInterstitialListener:Lcom/tkay/interstitial/api/TYInterstitialListener;

    return-void
.end method

.method public setAdSourceStatusListener(Lcom/tkay/core/api/TYAdSourceStatusListener;)V
    .locals 1

    .line 348
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    if-nez v0, :cond_0

    .line 349
    new-instance v0, Lcom/tkay/core/common/b/b;

    invoke-direct {v0}, Lcom/tkay/core/common/b/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    .line 351
    :cond_0
    iput-object p1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

    .line 352
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

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

    .line 205
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mPlacementId:Ljava/lang/String;

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

    .line 327
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mTKExtraMap:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 328
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mTKExtraMap:Ljava/util/Map;

    .line 330
    :cond_0
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 331
    iget-object v0, p0, Lcom/tkay/interstitial/api/TYInterstitial;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    return-void
.end method

.method public show(Landroid/app/Activity;)V
    .locals 1

    const-string v0, ""

    .line 289
    invoke-direct {p0, p1, v0}, Lcom/tkay/interstitial/api/TYInterstitial;->controlShow(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 282
    invoke-static {p2}, Lcom/tkay/core/common/l/g;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string p2, ""

    .line 285
    :goto_0
    invoke-direct {p0, p1, p2}, Lcom/tkay/interstitial/api/TYInterstitial;->controlShow(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method
