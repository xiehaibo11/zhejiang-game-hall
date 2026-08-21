.class public Lcom/tkay/network/sigmob/SigmobTYInitManager;
.super Lcom/tkay/core/api/TYInitMediation;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/network/sigmob/SigmobTYInitManager$a;
    }
.end annotation


# static fields
.field public static final SIGMOB_CURRENCY:Ljava/lang/String; = "USD"

.field public static final TAG:Ljava/lang/String;

.field private static volatile j:Lcom/tkay/network/sigmob/SigmobTYInitManager;

.field private static final k:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Object;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field final a:I

.field final b:I

.field final c:I

.field d:I

.field private e:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference;",
            ">;"
        }
    .end annotation
.end field

.field private f:Z

.field private final g:Ljava/lang/Object;

.field private h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/api/MediationInitCallback;",
            ">;"
        }
    .end annotation
.end field

.field private i:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 38
    const-class v0, Lcom/tkay/network/sigmob/SigmobTYInitManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->TAG:Ljava/lang/String;

    .line 479
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->k:Ljava/util/Map;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 215
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitMediation;-><init>()V

    const/4 v0, 0x0

    .line 39
    iput v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a:I

    const/4 v1, 0x1

    .line 40
    iput v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->b:I

    const/4 v1, 0x2

    .line 41
    iput v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->c:I

    .line 46
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->e:Ljava/util/concurrent/ConcurrentHashMap;

    .line 49
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->g:Ljava/lang/Object;

    .line 52
    iput v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->i:I

    return-void
.end method

.method private a()V
    .locals 3

    .line 378
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 379
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 380
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 381
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 383
    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_1
    return-void
.end method

.method private a(Lcom/sigmob/windad/WindAds;)V
    .locals 2

    .line 304
    iget v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->d:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 305
    :goto_0
    invoke-virtual {p1, v0}, Lcom/sigmob/windad/WindAds;->setPersonalizedAdvertisingOn(Z)V

    .line 306
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 307
    sget-object p1, Lcom/tkay/network/sigmob/SigmobTYInitManager;->TAG:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v0

    const-string v1, "setPersonalizedAdvertisingOn:"

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYInitManager;Ljava/lang/Runnable;)V
    .locals 0

    .line 36
    invoke-virtual {p0, p1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->runOnThreadPool(Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    .locals 1

    .line 370
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private a(ZLjava/lang/String;)V
    .locals 5

    .line 321
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->g:Ljava/lang/Object;

    monitor-enter v0

    .line 322
    :try_start_0
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->h:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_2

    .line 325
    iget-object v4, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->h:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v4, :cond_1

    if-eqz p1, :cond_0

    .line 328
    invoke-interface {v4}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    goto :goto_1

    .line 330
    :cond_0
    invoke-interface {v4, p2}, Lcom/tkay/core/api/MediationInitCallback;->onFail(Ljava/lang/String;)V

    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 334
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->h:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 336
    iput-boolean v2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->f:Z

    .line 337
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method private b(Lcom/sigmob/windad/WindAds;)V
    .locals 4

    .line 312
    iget v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->i:I

    if-eqz v0, :cond_2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    .line 313
    :goto_0
    invoke-virtual {p1, v0}, Lcom/sigmob/windad/WindAds;->setAdult(Z)V

    .line 314
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 315
    sget-object p1, Lcom/tkay/network/sigmob/SigmobTYInitManager;->TAG:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "setIsAdult:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v3, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->i:I

    if-ne v3, v2, :cond_1

    move v1, v2

    :cond_1
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method public static getEcpmInt(Ljava/lang/Object;)I
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 521
    :cond_0
    sget-object v1, Lcom/tkay/network/sigmob/SigmobTYInitManager;->k:Ljava/util/Map;

    invoke-interface {v1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 522
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return v0

    .line 527
    :cond_1
    :try_start_0
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    return v0
.end method

.method public static getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;
    .locals 2

    .line 221
    sget-object v0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->j:Lcom/tkay/network/sigmob/SigmobTYInitManager;

    if-nez v0, :cond_1

    .line 222
    const-class v0, Lcom/tkay/network/sigmob/SigmobTYInitManager;

    monitor-enter v0

    .line 223
    :try_start_0
    sget-object v1, Lcom/tkay/network/sigmob/SigmobTYInitManager;->j:Lcom/tkay/network/sigmob/SigmobTYInitManager;

    if-nez v1, :cond_0

    .line 224
    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYInitManager;

    invoke-direct {v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;-><init>()V

    sput-object v1, Lcom/tkay/network/sigmob/SigmobTYInitManager;->j:Lcom/tkay/network/sigmob/SigmobTYInitManager;

    .line 225
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 227
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->j:Lcom/tkay/network/sigmob/SigmobTYInitManager;

    return-object v0
.end method

.method public static onAdLoadError(Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/core/api/TYBiddingListener;Lcom/tkay/core/api/TYCustomLoadListener;)V
    .locals 0

    if-eqz p2, :cond_1

    if-eqz p3, :cond_0

    .line 509
    invoke-static {p1}, Lcom/tkay/core/api/TYBiddingResult;->fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p0

    const/4 p1, 0x0

    invoke-interface {p3, p0, p1}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void

    :cond_1
    if-eqz p4, :cond_2

    .line 513
    invoke-interface {p4, p0, p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static onC2SBiddingResultWithCache(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYBiddingListener;Ljava/lang/Object;Lcom/tkay/core/api/BaseAd;)V
    .locals 6

    const-string p1, "ecpm is null"

    const-string v0, ""

    if-eqz p3, :cond_0

    .line 485
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 486
    sget-object v1, Lcom/tkay/network/sigmob/SigmobTYInitManager;->k:Ljava/util/Map;

    invoke-interface {v1, p3, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    const-wide/16 v1, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x1

    .line 490
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    .line 491
    invoke-static {p0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide p0

    const-wide/high16 v0, 0x4059000000000000L    # 100.0

    div-double v1, p0, v0

    goto :goto_0

    .line 493
    :cond_1
    invoke-static {v0, p1, v4, p2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/core/api/TYBiddingListener;Lcom/tkay/core/api/TYCustomLoadListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 496
    :catch_0
    invoke-static {v0, p1, v4, p2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/core/api/TYBiddingListener;Lcom/tkay/core/api/TYCustomLoadListener;)V

    .line 499
    :goto_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 500
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {p0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-instance p1, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;

    invoke-direct {p1, p3}, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    sget-object p3, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    .line 499
    invoke-static {v1, v2, p0, p1, p3}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p0

    invoke-interface {p2, p0, p4}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    return-void
.end method


# virtual methods
.method final a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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
            ">;",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    .line 446
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;

    invoke-direct {v1, p0, p2, p3, p4}, Lcom/tkay/network/sigmob/SigmobTYInitManager$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYInitManager;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public getActivityStatus()Ljava/util/List;
    .locals 2

    .line 433
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "com.sigmob.sdk.base.common.AdActivity"

    .line 434
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "Sigmob"

    return-object v0
.end method

.method public getNetworkSDKClass()Ljava/lang/String;
    .locals 1

    const-string v0, "com.sigmob.windad.WindAds"

    return-object v0
.end method

.method public getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 405
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYConst;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPluginClassStatus()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    .line 410
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 412
    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v2, "implementation \'com.android.support:localbroadcastmanager:+\'"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 416
    :try_start_0
    const-class v1, Landroid/support/v4/content/LocalBroadcastManager;

    .line 417
    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 419
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public getProviderStatus()Ljava/util/List;
    .locals 2

    .line 440
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "com.sigmob.sdk.SigmobFileProvider"

    .line 441
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method public initSDK(Landroid/content/Context;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 231
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/api/MediationInitCallback;",
            ")V"
        }
    .end annotation

    .line 1378
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 1379
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1380
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 1381
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 1383
    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 248
    :catchall_0
    :cond_1
    :try_start_1
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->getPersionalizedAdStatus()I

    move-result v0

    iput v0, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->d:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 253
    :catchall_1
    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 254
    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->isInit()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 256
    invoke-direct {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Lcom/sigmob/windad/WindAds;)V

    .line 257
    invoke-direct {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->b(Lcom/sigmob/windad/WindAds;)V

    if-eqz p3, :cond_2

    .line 259
    invoke-interface {p3}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    :cond_2
    return-void

    .line 264
    :cond_3
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->g:Ljava/lang/Object;

    monitor-enter v1

    .line 265
    :try_start_2
    iget-boolean v2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->f:Z

    if-eqz v2, :cond_5

    if-eqz p3, :cond_4

    .line 267
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->h:Ljava/util/List;

    invoke-interface {p1, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 269
    :cond_4
    monitor-exit v1

    return-void

    .line 272
    :cond_5
    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->h:Ljava/util/List;

    if-nez v2, :cond_6

    .line 273
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    iput-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->h:Ljava/util/List;

    :cond_6
    const/4 v2, 0x1

    .line 276
    iput-boolean v2, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->f:Z

    .line 277
    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 279
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->h:Ljava/util/List;

    if-eqz v1, :cond_7

    .line 280
    invoke-interface {v1, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_7
    const-string p3, "app_id"

    .line 283
    invoke-static {p2, p3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const-string v1, "app_key"

    .line 284
    invoke-static {p2, v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 288
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/windad/WindAds;->setDebugEnable(Z)V

    .line 291
    new-instance v1, Lcom/sigmob/windad/WindAdOptions;

    invoke-direct {v1, p3, p2}, Lcom/sigmob/windad/WindAdOptions;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/windad/WindAds;->startWithOptions(Landroid/content/Context;Lcom/sigmob/windad/WindAdOptions;)Z

    move-result p1

    if-eqz p1, :cond_8

    .line 292
    invoke-direct {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Lcom/sigmob/windad/WindAds;)V

    .line 293
    invoke-direct {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->b(Lcom/sigmob/windad/WindAds;)V

    const/4 p1, 0x0

    .line 297
    invoke-direct {p0, v2, p1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(ZLjava/lang/String;)V

    return-void

    :cond_8
    const/4 p1, 0x0

    const-string p2, "Sigmob init failed"

    .line 299
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(ZLjava/lang/String;)V

    return-void

    :catchall_2
    move-exception p1

    .line 277
    monitor-exit v1

    throw p1
.end method

.method public setIsAdult(Z)V
    .locals 0

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    .line 241
    :goto_0
    iput p1, p0, Lcom/tkay/network/sigmob/SigmobTYInitManager;->i:I

    return-void
.end method
