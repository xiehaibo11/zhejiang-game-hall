.class public Lcom/tkay/splashad/api/TYSplashAd;
.super Ljava/lang/Object;


# instance fields
.field public final DEFAULT_SPLASH_TIMEOUT_TIME:I

.field final TAG:Ljava/lang/String;

.field mActivityWeakRef:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field mAdLoadManager:Lcom/tkay/splashad/a/c;

.field mAdSourceEventListener:Lcom/tkay/core/common/b/b;

.field mContext:Landroid/content/Context;

.field mDefaultAdSourceConfig:Ljava/lang/String;

.field mDefaultRequestInfo:Lcom/tkay/core/api/TYMediationRequestInfo;

.field mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

.field mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

.field mFetchAdTimeout:I

.field mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

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
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;)V
    .locals 6
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    .line 74
    invoke-direct/range {v0 .. v5}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Lcom/tkay/splashad/api/TYSplashAdListener;I)V
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 78
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->TAG:Ljava/lang/String;

    const/16 v0, 0x1388

    .line 50
    iput v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->DEFAULT_SPLASH_TIMEOUT_TIME:I

    .line 79
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mContext:Landroid/content/Context;

    .line 80
    iput-object p2, p0, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

    .line 81
    iput-object p4, p0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    .line 82
    iput-object p3, p0, Lcom/tkay/splashad/api/TYSplashAd;->mDefaultRequestInfo:Lcom/tkay/core/api/TYMediationRequestInfo;

    .line 84
    iput p5, p0, Lcom/tkay/splashad/api/TYSplashAd;->mFetchAdTimeout:I

    .line 86
    instance-of p3, p1, Landroid/app/Activity;

    if-eqz p3, :cond_0

    .line 87
    new-instance p3, Ljava/lang/ref/WeakReference;

    move-object p4, p1

    check-cast p4, Landroid/app/Activity;

    invoke-direct {p3, p4}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p3, p0, Lcom/tkay/splashad/api/TYSplashAd;->mActivityWeakRef:Ljava/lang/ref/WeakReference;

    .line 91
    :cond_0
    iget-object p3, p0, Lcom/tkay/splashad/api/TYSplashAd;->mDefaultRequestInfo:Lcom/tkay/core/api/TYMediationRequestInfo;

    if-eqz p3, :cond_1

    const-string p4, "4"

    .line 92
    invoke-virtual {p3, p4}, Lcom/tkay/core/api/TYMediationRequestInfo;->setFormat(Ljava/lang/String;)V

    .line 95
    :cond_1
    invoke-static {p1, p2}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/splashad/a/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/splashad/api/TYSplashAdListener;)V
    .locals 6

    const/4 v4, 0x0

    const-string v5, ""

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    .line 68
    invoke-direct/range {v0 .. v5}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/splashad/api/TYSplashAdListener;ILjava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/splashad/api/TYSplashAdListener;ILjava/lang/String;)V
    .locals 1

    .line 105
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->TAG:Ljava/lang/String;

    const/16 v0, 0x1388

    .line 50
    iput v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->DEFAULT_SPLASH_TIMEOUT_TIME:I

    .line 106
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mContext:Landroid/content/Context;

    .line 107
    iput-object p2, p0, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

    .line 108
    iput-object p3, p0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    .line 109
    iput-object p5, p0, Lcom/tkay/splashad/api/TYSplashAd;->mDefaultAdSourceConfig:Ljava/lang/String;

    .line 111
    iput p4, p0, Lcom/tkay/splashad/api/TYSplashAd;->mFetchAdTimeout:I

    .line 113
    instance-of p3, p1, Landroid/app/Activity;

    if-eqz p3, :cond_0

    .line 114
    new-instance p3, Ljava/lang/ref/WeakReference;

    move-object p4, p1

    check-cast p4, Landroid/app/Activity;

    invoke-direct {p3, p4}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p3, p0, Lcom/tkay/splashad/api/TYSplashAd;->mActivityWeakRef:Ljava/lang/ref/WeakReference;

    .line 117
    :cond_0
    iget-object p3, p0, Lcom/tkay/splashad/api/TYSplashAd;->mDefaultRequestInfo:Lcom/tkay/core/api/TYMediationRequestInfo;

    if-eqz p3, :cond_1

    const-string p4, "4"

    .line 118
    invoke-virtual {p3, p4}, Lcom/tkay/core/api/TYMediationRequestInfo;->setFormat(Ljava/lang/String;)V

    .line 121
    :cond_1
    invoke-static {p1, p2}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/splashad/a/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/splashad/api/TYSplashAdListener;Ljava/lang/String;)V
    .locals 6

    const/4 v4, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v5, p4

    .line 102
    invoke-direct/range {v0 .. v5}, Lcom/tkay/splashad/api/TYSplashAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/splashad/api/TYSplashAdListener;ILjava/lang/String;)V

    return-void
.end method

.method static synthetic access$000(Lcom/tkay/splashad/api/TYSplashAd;I)V
    .locals 0

    .line 44
    invoke-direct {p0, p1}, Lcom/tkay/splashad/api/TYSplashAd;->loadAd(I)V

    return-void
.end method

.method public static checkSplashDefaultConfigList(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 391
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method public static entryAdScenario(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 130
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "4"

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

    .line 134
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "4"

    invoke-virtual {v0, p0, p1, v1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 3

    .line 260
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 261
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 262
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 266
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    return-object v0

    .line 263
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->TAG:Ljava/lang/String;

    const-string v1, "SDK init error!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    return-object v0
.end method

.method private loadAd(I)V
    .locals 6

    .line 161
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->s:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->w:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    const/4 v5, 0x1

    invoke-static/range {v0 .. v5}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 166
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/api/TYSplashAd$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/splashad/api/TYSplashAd$1;-><init>(Lcom/tkay/splashad/api/TYSplashAd;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public checkAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 6

    .line 251
    invoke-direct {p0}, Lcom/tkay/splashad/api/TYSplashAd;->getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    .line 253
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    return-object v0

    .line 255
    :cond_0
    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->s:Ljava/lang/String;

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

    .line 271
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    if-eqz v0, :cond_0

    .line 272
    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public isAdReady()Z
    .locals 6

    .line 241
    invoke-direct {p0}, Lcom/tkay/splashad/api/TYSplashAd;->getAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 245
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->isReady()Z

    move-result v0

    .line 246
    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->s:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->z:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v4

    const-string v5, ""

    invoke-static {v1, v2, v3, v4, v5}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method public loadAd()V
    .locals 1

    const/4 v0, 0x0

    .line 157
    invoke-direct {p0, v0}, Lcom/tkay/splashad/api/TYSplashAd;->loadAd(I)V

    return-void
.end method

.method public onDestory()V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-void
.end method

.method public setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V
    .locals 0

    .line 400
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-void
.end method

.method public setAdListener(Lcom/tkay/splashad/api/TYSplashAdListener;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mListener:Lcom/tkay/splashad/api/TYSplashAdListener;

    return-void
.end method

.method public setAdSourceStatusListener(Lcom/tkay/core/api/TYAdSourceStatusListener;)V
    .locals 1

    .line 409
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    if-nez v0, :cond_0

    .line 410
    new-instance v0, Lcom/tkay/core/common/b/b;

    invoke-direct {v0}, Lcom/tkay/core/common/b/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    .line 412
    :cond_0
    iput-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

    .line 413
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

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

    .line 143
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

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

    .line 149
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 150
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    .line 152
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 153
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;)V
    .locals 2

    const/4 v0, 0x0

    const-string v1, ""

    .line 278
    invoke-virtual {p0, p1, p2, v0, v1}, Lcom/tkay/splashad/api/TYSplashAd;->show(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/api/TYSplashSkipInfo;)V
    .locals 1

    const-string v0, ""

    .line 291
    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/tkay/splashad/api/TYSplashAd;->show(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;)V

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;)V
    .locals 8

    .line 296
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->s:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->y:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    invoke-static {v0, v1, v2, v3, v4}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 297
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 298
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 299
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
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->TAG:Ljava/lang/String;

    const-string v1, "Splash Activity is null."

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    if-nez p2, :cond_2

    .line 309
    iget-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd;->TAG:Ljava/lang/String;

    const-string p2, "Splash Container is null."

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 314
    :cond_2
    new-instance v3, Lcom/tkay/splashad/api/TYSplashAd$2;

    invoke-direct {v3, p0}, Lcom/tkay/splashad/api/TYSplashAd$2;-><init>(Lcom/tkay/splashad/api/TYSplashAd;)V

    .line 380
    iget-object v0, p0, Lcom/tkay/splashad/api/TYSplashAd;->mAdLoadManager:Lcom/tkay/splashad/a/c;

    iget-object v4, p0, Lcom/tkay/splashad/api/TYSplashAd;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    iget-object v7, p0, Lcom/tkay/splashad/api/TYSplashAd;->mTKExtraMap:Ljava/util/Map;

    move-object v1, p1

    move-object v2, p2

    move-object v5, p3

    move-object v6, p4

    invoke-virtual/range {v0 .. v7}, Lcom/tkay/splashad/a/c;->a(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/a;Lcom/tkay/core/api/TYEventInterface;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;Ljava/util/Map;)V

    return-void

    .line 300
    :cond_3
    :goto_0
    iget-object p1, p0, Lcom/tkay/splashad/api/TYSplashAd;->TAG:Ljava/lang/String;

    const-string p2, "SDK init error!"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public show(Landroid/app/Activity;Landroid/view/ViewGroup;Ljava/lang/String;)V
    .locals 1

    .line 283
    invoke-static {p3}, Lcom/tkay/core/common/l/g;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string p3, ""

    :goto_0
    const/4 v0, 0x0

    .line 286
    invoke-virtual {p0, p1, p2, v0, p3}, Lcom/tkay/splashad/api/TYSplashAd;->show(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;)V

    return-void
.end method
