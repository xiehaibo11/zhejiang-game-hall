.class public Lcom/tkay/network/mintegral/MintegralTYInitManager;
.super Lcom/tkay/core/api/TYInitMediation;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/network/mintegral/MintegralTYInitManager$InitCallback;
    }
.end annotation


# static fields
.field public static final TAG:Ljava/lang/String;

.field private static volatile g:Lcom/tkay/network/mintegral/MintegralTYInitManager;


# instance fields
.field a:I

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private final f:Landroid/os/Handler;

.field private h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference;",
            ">;"
        }
    .end annotation
.end field

.field private i:Lcom/tkay/network/mintegral/MintegralTYCustomController;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 57
    const-class v0, Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->TAG:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 71
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitMediation;-><init>()V

    .line 67
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->h:Ljava/util/Map;

    const/4 v0, 0x0

    .line 95
    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a:I

    .line 72
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->f:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->d:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->d:Ljava/lang/String;

    return-object p1
.end method

.method private a()V
    .locals 3

    .line 248
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->h:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 249
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 250
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 251
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 253
    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->h:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_1
    return-void
.end method

.method private a(Landroid/content/Context;)V
    .locals 1

    .line 198
    instance-of v0, p1, Landroid/app/Application;

    if-eqz v0, :cond_0

    .line 199
    check-cast p1, Landroid/app/Application;

    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYInitManager$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/mintegral/MintegralTYInitManager$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYInitManager;)V

    invoke-virtual {p1, v0}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/MBridgeSDK;)V
    .locals 2

    .line 188
    iget v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 189
    :goto_0
    invoke-interface {p1, v0}, Lcom/mbridge/msdk/MBridgeSDK;->setDoNotTrackStatus(Z)V

    .line 190
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 191
    sget-object p1, Lcom/tkay/network/mintegral/MintegralTYInitManager;->TAG:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v0

    const-string v1, "setDoNotTrackStatus:"

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Landroid/content/Context;)V
    .locals 1

    .line 1198
    instance-of v0, p1, Landroid/app/Application;

    if-eqz v0, :cond_0

    .line 1199
    check-cast p1, Landroid/app/Application;

    new-instance v0, Lcom/tkay/network/mintegral/MintegralTYInitManager$2;

    invoke-direct {v0, p0}, Lcom/tkay/network/mintegral/MintegralTYInitManager$2;-><init>(Lcom/tkay/network/mintegral/MintegralTYInitManager;)V

    invoke-virtual {p1, v0}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Lcom/mbridge/msdk/MBridgeSDK;)V
    .locals 1

    .line 1188
    iget p0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    .line 1189
    :goto_0
    invoke-interface {p1, p0}, Lcom/mbridge/msdk/MBridgeSDK;->setDoNotTrackStatus(Z)V

    .line 1190
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1191
    sget-object p1, Lcom/tkay/network/mintegral/MintegralTYInitManager;->TAG:Ljava/lang/String;

    invoke-static {p0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p0

    const-string v0, "setDoNotTrackStatus:"

    invoke-virtual {v0, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/Runnable;)V
    .locals 0

    .line 55
    invoke-virtual {p0, p1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->runOnThreadPool(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;Ljava/util/Map;[Ljava/lang/String;)V
    .locals 0

    .line 55
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->checkToSaveInitData(Ljava/lang/String;Ljava/util/Map;[Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->e:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic c(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->b:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic d(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Ljava/lang/String;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->c:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->c:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic e(Lcom/tkay/network/mintegral/MintegralTYInitManager;)Lcom/tkay/network/mintegral/MintegralTYCustomController;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->i:Lcom/tkay/network/mintegral/MintegralTYCustomController;

    return-object p0
.end method

.method public static getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;
    .locals 2

    .line 76
    sget-object v0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->g:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    if-nez v0, :cond_1

    .line 77
    const-class v0, Lcom/tkay/network/mintegral/MintegralTYInitManager;

    monitor-enter v0

    .line 78
    :try_start_0
    sget-object v1, Lcom/tkay/network/mintegral/MintegralTYInitManager;->g:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    if-nez v1, :cond_0

    .line 79
    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYInitManager;

    invoke-direct {v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;-><init>()V

    sput-object v1, Lcom/tkay/network/mintegral/MintegralTYInitManager;->g:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    .line 80
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 82
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->g:Lcom/tkay/network/mintegral/MintegralTYInitManager;

    return-object v0
.end method

.method public static getStringByMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    const-string v0, ""

    if-eqz p0, :cond_2

    .line 471
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 473
    :cond_0
    :try_start_0
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 474
    instance-of p1, p0, Ljava/lang/String;

    if-eqz p1, :cond_1

    .line 475
    check-cast p0, Ljava/lang/String;

    return-object p0

    :cond_1
    if-eqz p0, :cond_2

    .line 477
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :cond_2
    :goto_0
    return-object v0
.end method

.method public static printLog(Ljava/lang/String;)V
    .locals 1

    .line 485
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "MintegralTYInitManager"

    .line 486
    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method


# virtual methods
.method final a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;ILcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 9
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
            ">;I",
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    .line 417
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object v0

    new-instance v8, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;

    move-object v1, v8

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move v5, p4

    move-object v6, p3

    move-object v7, p5

    invoke-direct/range {v1 .. v7}, Lcom/tkay/network/mintegral/MintegralTYInitManager$3;-><init>(Lcom/tkay/network/mintegral/MintegralTYInitManager;Landroid/content/Context;Ljava/util/Map;ILjava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    invoke-virtual {v0, p1, p2, v8}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method protected final a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    .locals 1

    .line 240
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->h:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "Mintegral"

    return-object v0
.end method

.method public getNetworkSDKClass()Ljava/lang/String;
    .locals 1

    const-string v0, "com.mbridge.msdk.MBridgeSDK"

    return-object v0
.end method

.method public getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 274
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYConst;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPluginClassStatus()Ljava/util/Map;
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    .line 284
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 285
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v2, "mbridge_newinterstitial.aar"

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 286
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v3, "mbridge_mbbanner.aar"

    invoke-virtual {v1, v3, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 287
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v4, "mbridge_mbbid.aar"

    invoke-virtual {v1, v4, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 288
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v5, "mbridge_mbjscommon.aar"

    invoke-virtual {v1, v5, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 289
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v6, "mbridge_mbnative.aar"

    invoke-virtual {v1, v6, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 290
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v7, "mbridge_nativeex.aar"

    invoke-virtual {v1, v7, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 291
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v8, "mbridge_playercommon.aar"

    invoke-virtual {v1, v8, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 292
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v9, "mbridge_reward.aar"

    invoke-virtual {v1, v9, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 293
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v10, "mbridge_videocommon.aar"

    invoke-virtual {v1, v10, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 294
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v11, "mbridge_videojs.aar"

    invoke-virtual {v1, v11, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 295
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v12, "mbridge_mbnativeadvanced.aar"

    invoke-virtual {v1, v12, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 296
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v13, "mbridge_mbsplash.aar"

    invoke-virtual {v1, v13, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 298
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v14, "mbridge_chinasame.aar"

    invoke-virtual {v1, v14, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 299
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v15, "recyclerview-*.aar"

    invoke-virtual {v1, v15, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 304
    :try_start_0
    const-class v0, Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    .line 305
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 307
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 311
    :goto_0
    :try_start_1
    const-class v0, Lcom/mbridge/msdk/mbbanner/view/MBBannerWebView;

    .line 312
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v3, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    .line 314
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 318
    :goto_1
    :try_start_2
    const-class v0, Lcom/mbridge/msdk/mbbid/out/BidManager;

    .line 319
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v4, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    .line 321
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 325
    :goto_2
    :try_start_3
    const-class v0, Lcom/mbridge/msdk/mbjscommon/base/BaseWebView;

    .line 326
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v5, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v0

    .line 328
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 332
    :goto_3
    :try_start_4
    const-class v0, Lcom/mbridge/msdk/mbnative/controller/NativeController;

    .line 333
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v6, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    goto :goto_4

    :catchall_4
    move-exception v0

    .line 335
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 339
    :goto_4
    :try_start_5
    const-class v0, Lcom/mbridge/msdk/nativex/view/MBMediaView;

    .line 340
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v7, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    goto :goto_5

    :catchall_5
    move-exception v0

    .line 342
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 346
    :goto_5
    :try_start_6
    const-class v0, Lcom/mbridge/msdk/playercommon/PlayerView;

    .line 347
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v8, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    goto :goto_6

    :catchall_6
    move-exception v0

    .line 349
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 353
    :goto_6
    :try_start_7
    const-class v0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;

    .line 354
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v9, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_7

    goto :goto_7

    :catchall_7
    move-exception v0

    .line 356
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 360
    :goto_7
    :try_start_8
    const-class v0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;

    .line 361
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v10, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_8

    goto :goto_8

    :catchall_8
    move-exception v0

    .line 363
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 367
    :goto_8
    :try_start_9
    const-class v0, Lcom/mbridge/msdk/video/module/MBridgeBaseView;

    .line 368
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v11, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_9

    goto :goto_9

    :catchall_9
    move-exception v0

    .line 370
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 374
    :goto_9
    :try_start_a
    const-class v0, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    .line 375
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v12, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_a

    goto :goto_a

    :catchall_a
    move-exception v0

    .line 377
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 381
    :goto_a
    :try_start_b
    const-class v0, Lcom/mbridge/msdk/splash/view/MBSplashView;

    .line 382
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v13, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_b

    goto :goto_b

    :catchall_b
    move-exception v0

    .line 384
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 389
    :goto_b
    :try_start_c
    const-class v0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    .line 390
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v14, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_c

    goto :goto_c

    :catchall_c
    move-exception v0

    .line 392
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 396
    :goto_c
    :try_start_d
    const-class v0, Landroid/support/v7/widget/RecyclerView;

    .line 397
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v1, v15, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_d

    goto :goto_d

    :catchall_d
    move-exception v0

    .line 399
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_d
    return-object v1
.end method

.method public getResourceStatus()Ljava/util/List;
    .locals 2

    .line 407
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "mbridge_reward_activity_video_templete"

    .line 410
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method public declared-synchronized initSDK(Landroid/content/Context;Ljava/util/Map;)V
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

    monitor-enter p0

    const/4 v0, 0x0

    .line 92
    :try_start_0
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 93
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    .locals 2
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

    monitor-enter p0

    .line 100
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 102
    :try_start_1
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->getPersionalizedAdStatus()I

    move-result v0

    iput v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 107
    :catchall_0
    :try_start_2
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->f:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;

    invoke-direct {v1, p0, p2, p1, p3}, Lcom/tkay/network/mintegral/MintegralTYInitManager$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYInitManager;Ljava/util/Map;Landroid/content/Context;Lcom/tkay/core/api/MediationInitCallback;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 185
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setCustomInfo(ILjava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    :try_start_0
    const-string v0, "unitid"

    .line 459
    invoke-static {p2, v0}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getStringByMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "tp_info"

    .line 460
    invoke-static {p2, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getStringByMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 461
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "setCustomInfo() >>> customData = "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " unitId = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->printLog(Ljava/lang/String;)V

    .line 462
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 465
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/out/CustomInfoManager;->getInstance()Lcom/mbridge/msdk/out/CustomInfoManager;

    move-result-object v1

    invoke-virtual {v1, v0, p1, p2}, Lcom/mbridge/msdk/out/CustomInfoManager;->setCustomInfo(Ljava/lang/String;ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public setMintegralTYCustomerController(Lcom/tkay/network/mintegral/MintegralTYCustomController;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 87
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInitManager;->i:Lcom/tkay/network/mintegral/MintegralTYCustomController;

    :cond_0
    return-void
.end method
