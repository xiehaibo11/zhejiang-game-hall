.class public Lcom/tkay/network/toutiao/TTTYInitManager;
.super Lcom/tkay/core/api/TYInitMediation;


# static fields
.field public static final TAG:Ljava/lang/String;

.field private static volatile d:Lcom/tkay/network/toutiao/TTTYInitManager;


# instance fields
.field a:Lcom/bykv/vk/openvk/TTCustomController;

.field b:I

.field c:Ljava/lang/String;

.field private e:Landroid/os/Handler;

.field private f:Z

.field private g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference;",
            ">;"
        }
    .end annotation
.end field

.field private h:Z

.field private i:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/api/MediationInitCallback;",
            ">;"
        }
    .end annotation
.end field

.field private final k:Ljava/lang/Object;

.field private final l:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 44
    const-class v0, Lcom/tkay/network/toutiao/TTTYInitManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/toutiao/TTTYInitManager;->TAG:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 3

    .line 61
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitMediation;-><init>()V

    .line 50
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->g:Ljava/util/Map;

    .line 55
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->k:Ljava/lang/Object;

    const-wide/16 v0, 0x64

    .line 58
    iput-wide v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->l:J

    const/4 v0, 0x0

    .line 234
    iput v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->b:I

    const-string v1, "price"

    .line 365
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->c:Ljava/lang/String;

    .line 62
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->e:Landroid/os/Handler;

    const/4 v1, 0x1

    .line 63
    iput-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->f:Z

    .line 64
    new-instance v1, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->i:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInitManager;)Ljava/lang/String;
    .locals 0

    .line 43
    invoke-direct {p0}, Lcom/tkay/network/toutiao/TTTYInitManager;->b()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a()V
    .locals 3

    .line 92
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->g:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 93
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 94
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 95
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 97
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->g:Ljava/util/Map;

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

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYInitManager;ZLjava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 1215
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->k:Ljava/lang/Object;

    monitor-enter v0

    .line 1216
    :try_start_0
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_2

    .line 1219
    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v4, :cond_1

    if-eqz p1, :cond_0

    .line 1222
    invoke-interface {v4}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    goto :goto_1

    .line 1224
    :cond_0
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " | "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v4, v5}, Lcom/tkay/core/api/MediationInitCallback;->onFail(Ljava/lang/String;)V

    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1228
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 1230
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->i:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p0, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 1231
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private a(ZLjava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 215
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->k:Ljava/lang/Object;

    monitor-enter v0

    .line 216
    :try_start_0
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_2

    .line 219
    iget-object v4, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/api/MediationInitCallback;

    if-eqz v4, :cond_1

    if-eqz p1, :cond_0

    .line 222
    invoke-interface {v4}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    goto :goto_1

    .line 224
    :cond_0
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " | "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v4, v5}, Lcom/tkay/core/api/MediationInitCallback;->onFail(Ljava/lang/String;)V

    :cond_1
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 228
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 230
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->i:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {p1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 231
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method private b()Ljava/lang/String;
    .locals 5

    const-string v0, ""

    .line 239
    :try_start_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->getPersionalizedAdStatus()I

    move-result v1

    iput v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 243
    :catchall_0
    :try_start_1
    iget v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->b:I

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    const-string v1, "0"

    goto :goto_0

    :cond_0
    move-object v1, v0

    .line 244
    :goto_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "name"

    const-string v4, "personal_ads_type"

    .line 245
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "value"

    .line 246
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 247
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 248
    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 250
    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    .line 251
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 252
    sget-object v2, Lcom/tkay/network/toutiao/TTTYInitManager;->TAG:Ljava/lang/String;

    const-string v3, "TTPrivateData:"

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_1
    return-object v1

    :catch_0
    move-exception v1

    .line 257
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYInitManager;)Z
    .locals 1

    const/4 v0, 0x1

    .line 43
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->h:Z

    return v0
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYInitManager;)Landroid/os/Handler;
    .locals 0

    .line 43
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->e:Landroid/os/Handler;

    return-object p0
.end method

.method public static getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;
    .locals 2

    .line 68
    sget-object v0, Lcom/tkay/network/toutiao/TTTYInitManager;->d:Lcom/tkay/network/toutiao/TTTYInitManager;

    if-nez v0, :cond_1

    .line 69
    const-class v0, Lcom/tkay/network/toutiao/TTTYInitManager;

    monitor-enter v0

    .line 70
    :try_start_0
    sget-object v1, Lcom/tkay/network/toutiao/TTTYInitManager;->d:Lcom/tkay/network/toutiao/TTTYInitManager;

    if-nez v1, :cond_0

    .line 71
    new-instance v1, Lcom/tkay/network/toutiao/TTTYInitManager;

    invoke-direct {v1}, Lcom/tkay/network/toutiao/TTTYInitManager;-><init>()V

    sput-object v1, Lcom/tkay/network/toutiao/TTTYInitManager;->d:Lcom/tkay/network/toutiao/TTTYInitManager;

    .line 72
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 74
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/network/toutiao/TTTYInitManager;->d:Lcom/tkay/network/toutiao/TTTYInitManager;

    return-object v0
.end method


# virtual methods
.method protected final a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    .locals 1

    .line 83
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->g:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method protected final declared-synchronized a(Ljava/util/Map;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/bykv/vk/openvk/TTClientBidding;",
            "Lcom/tkay/core/api/TYBiddingListener;",
            ")V"
        }
    .end annotation

    monitor-enter p0

    const/4 v0, 0x0

    .line 370
    :try_start_0
    invoke-virtual {p0, p1, v0, p2, p3}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/util/Map;Lcom/tkay/core/api/BaseAd;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 371
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method protected final declared-synchronized a(Ljava/util/Map;Lcom/tkay/core/api/BaseAd;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/api/BaseAd;",
            "Lcom/bykv/vk/openvk/TTClientBidding;",
            "Lcom/tkay/core/api/TYBiddingListener;",
            ")V"
        }
    .end annotation

    monitor-enter p0

    if-eqz p4, :cond_1

    const-wide/16 v0, 0x0

    .line 376
    :try_start_0
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->c:Ljava/lang/String;

    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v2, :cond_0

    .line 378
    :try_start_1
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->c:Ljava/lang/String;

    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 380
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 394
    :cond_0
    :goto_0
    new-instance p1, Lcom/tkay/network/toutiao/TTTYBiddingNotify;

    invoke-direct {p1, p3}, Lcom/tkay/network/toutiao/TTTYBiddingNotify;-><init>(Lcom/bykv/vk/openvk/TTClientBidding;)V

    .line 395
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {p3, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    sget-object v2, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, v1, p3, p1, v2}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p1

    invoke-interface {p4, p1, p2}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1

    .line 397
    :cond_1
    :goto_1
    monitor-exit p0

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "CSJ"

    return-object v0
.end method

.method public getNetworkSDKClass()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bykv.vk.openvk.TTVfSdk"

    return-object v0
.end method

.method public getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 277
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYConst;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPermissionStatus()Ljava/util/List;
    .locals 2

    .line 320
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "android.permission.WAKE_LOCK"

    .line 321
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method public getProviderStatus()Ljava/util/List;
    .locals 2

    .line 312
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "com.bykv.vk.openvk.TTFileProvider"

    .line 313
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v1, "com.bykv.vk.openvk.multipro.TTMultiProvider"

    .line 314
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

    .line 106
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method public initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    .locals 9
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

    .line 1092
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->g:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 1093
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1094
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 1095
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 1097
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->g:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 114
    :catchall_0
    :cond_1
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->isInitSuccess()Z

    move-result v0

    if-nez v0, :cond_8

    iget-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->h:Z

    if-eqz v0, :cond_2

    goto :goto_2

    .line 123
    :cond_2
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->k:Ljava/lang/Object;

    monitor-enter v0

    .line 125
    :try_start_1
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->i:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    if-eqz v1, :cond_4

    if-eqz p3, :cond_3

    .line 127
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {p1, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 129
    :cond_3
    monitor-exit v0

    return-void

    .line 132
    :cond_4
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    if-nez v1, :cond_5

    .line 133
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    .line 136
    :cond_5
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->i:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 137
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const-string v0, "app_id"

    .line 139
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    move-object v5, p2

    check-cast v5, Ljava/lang/String;

    if-eqz p3, :cond_6

    .line 142
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->j:Ljava/util/List;

    invoke-interface {p2, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 146
    :cond_6
    iget-boolean p2, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->f:Z

    if-eqz p2, :cond_7

    const/4 p2, 0x5

    new-array p2, p2, [I

    .line 147
    fill-array-data p2, :array_0

    goto :goto_1

    :cond_7
    new-array p2, v2, [I

    const/4 p3, 0x0

    const/4 v0, 0x2

    aput v0, p2, p3

    :goto_1
    move-object v7, p2

    .line 157
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v8

    .line 158
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p2

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/content/pm/PackageManager;->getApplicationLabel(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;

    move-result-object p1

    invoke-interface {p1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v6

    .line 160
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->e:Landroid/os/Handler;

    new-instance p2, Lcom/tkay/network/toutiao/TTTYInitManager$1;

    move-object v3, p2

    move-object v4, p0

    invoke-direct/range {v3 .. v8}, Lcom/tkay/network/toutiao/TTTYInitManager$1;-><init>(Lcom/tkay/network/toutiao/TTTYInitManager;Ljava/lang/String;Ljava/lang/String;[ILandroid/content/Context;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    :catchall_1
    move-exception p1

    .line 137
    monitor-exit v0

    throw p1

    .line 115
    :cond_8
    :goto_2
    new-instance p1, Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    invoke-direct {p1}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;-><init>()V

    invoke-direct {p0}, Lcom/tkay/network/toutiao/TTTYInitManager;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->data(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->build()Lcom/bykv/vk/openvk/TTVfConfig;

    move-result-object p1

    .line 116
    invoke-static {p1}, Lcom/bykv/vk/openvk/TTVfSdk;->updateAdConfig(Lcom/bykv/vk/openvk/TTVfConfig;)V

    if-eqz p3, :cond_9

    .line 118
    invoke-interface {p3}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    :cond_9
    return-void

    nop

    :array_0
    .array-data 4
        0x1
        0x2
        0x3
        0x4
        0x5
    .end array-data
.end method

.method public setIsOpenDirectDownload(Z)V
    .locals 0

    .line 266
    iput-boolean p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->f:Z

    return-void
.end method

.method public setTtCustomController(Lcom/bykv/vk/openvk/TTCustomController;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager;->a:Lcom/bykv/vk/openvk/TTCustomController;

    return-void
.end method
