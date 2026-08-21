.class public Lcom/tkay/network/toutiao/TTTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;

.field c:Ljava/lang/String;

.field d:I

.field e:Ljava/lang/String;

.field f:Z

.field private final g:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 36
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    .line 37
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->g:Ljava/lang/String;

    const/4 v0, 0x0

    .line 46
    iput v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->d:I

    const-string v1, ""

    .line 48
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->e:Ljava/lang/String;

    .line 50
    iput-boolean v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->f:Z

    return-void
.end method

.method static synthetic a(Landroid/content/Context;F)I
    .locals 1

    .line 1388
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

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYAdapter;)I
    .locals 0

    .line 36
    iget p0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mRequestNum:I

    return p0
.end method

.method private a(Landroid/content/Context;Ljava/util/List;ZZ)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;ZZ)V"
        }
    .end annotation

    .line 394
    new-instance v0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    invoke-direct {v0, p2}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;-><init>(Ljava/util/List;)V

    .line 395
    new-instance p2, Lcom/tkay/network/toutiao/TTTYAdapter$3;

    invoke-direct {p2, p0, p1, p3, p4}, Lcom/tkay/network/toutiao/TTTYAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;ZZ)V

    invoke-virtual {v0, p2}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->startRender(Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;)V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;I)V
    .locals 6
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
            ">;I)V"
        }
    .end annotation

    .line 92
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    .line 94
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->c:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, ""

    const-string p2, "nativeType is empty"

    .line 95
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 99
    :cond_0
    new-instance p1, Lcom/tkay/network/toutiao/TTTYAdapter$2;

    move-object v0, p1

    move-object v1, p0

    move-object v3, p3

    move-object v4, p2

    move v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/tkay/network/toutiao/TTTYAdapter$2;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;I)V

    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/List;ZZ)V
    .locals 1

    .line 1394
    new-instance v0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    invoke-direct {v0, p2}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;-><init>(Ljava/util/List;)V

    .line 1395
    new-instance p2, Lcom/tkay/network/toutiao/TTTYAdapter$3;

    invoke-direct {p2, p0, p1, p3, p4}, Lcom/tkay/network/toutiao/TTTYAdapter$3;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;ZZ)V

    invoke-virtual {v0, p2}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->startRender(Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;I)V
    .locals 6

    .line 1092
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    .line 1094
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->c:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, ""

    const-string p2, "nativeType is empty"

    .line 1095
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1099
    :cond_0
    new-instance p1, Lcom/tkay/network/toutiao/TTTYAdapter$2;

    move-object v0, p1

    move-object v1, p0

    move-object v3, p3

    move-object v4, p2

    move v5, p4

    invoke-direct/range {v0 .. v5}, Lcom/tkay/network/toutiao/TTTYAdapter$2;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;I)V

    invoke-virtual {p0, p1}, Lcom/tkay/network/toutiao/TTTYAdapter;->runOnNetworkRequestThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/toutiao/TTTYAdapter;Ljava/util/List;[Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;)V
    .locals 4

    .line 1439
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-eqz v0, :cond_5

    array-length v0, p2

    if-nez v0, :cond_0

    goto :goto_2

    :cond_0
    const/4 v0, 0x0

    .line 1443
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    .line 1444
    new-instance v2, Ljava/util/HashMap;

    const/4 v3, 0x3

    invoke-direct {v2, v3}, Ljava/util/HashMap;-><init>(I)V

    .line 1445
    instance-of v3, v1, Lcom/bykv/vk/openvk/TTVfObject;

    if-eqz v3, :cond_1

    .line 1447
    :try_start_0
    move-object v3, v1

    check-cast v3, Lcom/bykv/vk/openvk/TTVfObject;

    invoke-interface {v3}, Lcom/bykv/vk/openvk/TTVfObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 1449
    invoke-interface {v2, v3}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v3

    .line 1452
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1456
    :cond_1
    :goto_0
    instance-of v3, v1, Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v3, :cond_2

    .line 1458
    :try_start_1
    check-cast v1, Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 1460
    invoke-interface {v2, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    .line 1463
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1467
    :cond_2
    :goto_1
    iget-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->f:Z

    if-eqz v1, :cond_3

    .line 1468
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v1, :cond_4

    .line 1469
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v1

    aget-object p2, p2, v0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bykv/vk/openvk/TTClientBidding;

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    invoke-virtual {v1, v2, p2, p1, v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/util/Map;Lcom/tkay/core/api/BaseAd;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V

    const/4 p1, 0x0

    .line 1470
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    return-void

    .line 1473
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_4

    .line 1474
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-interface {p0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_4
    return-void

    :cond_5
    :goto_2
    const-string p1, ""

    const-string p2, "Ad list is empty."

    .line 1440
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private varargs a(Ljava/util/List;[Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "+",
            "Lcom/bykv/vk/openvk/TTClientBidding;",
            ">;[",
            "Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;",
            ")V"
        }
    .end annotation

    .line 439
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-eqz v0, :cond_5

    array-length v0, p2

    if-nez v0, :cond_0

    goto :goto_2

    :cond_0
    const/4 v0, 0x0

    .line 443
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    .line 444
    new-instance v2, Ljava/util/HashMap;

    const/4 v3, 0x3

    invoke-direct {v2, v3}, Ljava/util/HashMap;-><init>(I)V

    .line 445
    instance-of v3, v1, Lcom/bykv/vk/openvk/TTVfObject;

    if-eqz v3, :cond_1

    .line 447
    :try_start_0
    move-object v3, v1

    check-cast v3, Lcom/bykv/vk/openvk/TTVfObject;

    invoke-interface {v3}, Lcom/bykv/vk/openvk/TTVfObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 449
    invoke-interface {v2, v3}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v3

    .line 452
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    .line 456
    :cond_1
    :goto_0
    instance-of v3, v1, Lcom/bykv/vk/openvk/TTNtExpressObject;

    if-eqz v3, :cond_2

    .line 458
    :try_start_1
    check-cast v1, Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {v1}, Lcom/bykv/vk/openvk/TTNtExpressObject;->getMediaExtraInfo()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 460
    invoke-interface {v2, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    .line 463
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 467
    :cond_2
    :goto_1
    iget-boolean v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->f:Z

    if-eqz v1, :cond_3

    .line 468
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v1, :cond_4

    .line 469
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v1

    aget-object p2, p2, v0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bykv/vk/openvk/TTClientBidding;

    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    invoke-virtual {v1, v2, p2, p1, v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Ljava/util/Map;Lcom/tkay/core/api/BaseAd;Lcom/bykv/vk/openvk/TTClientBidding;Lcom/tkay/core/api/TYBiddingListener;)V

    const/4 p1, 0x0

    .line 470
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    return-void

    .line 473
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz p1, :cond_4

    .line 474
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-interface {p1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_4
    return-void

    :cond_5
    :goto_2
    const-string p1, ""

    const-string p2, "Ad list is empty."

    .line 440
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

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

    const-string v0, "media_size"

    const-string v1, "app_id"

    .line 489
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "slot_id"

    .line 490
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->a:Ljava/lang/String;

    .line 492
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    const-string v1, "1"

    .line 496
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->b:Ljava/lang/String;

    const-string v1, "layout_type"

    .line 498
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 499
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->b:Ljava/lang/String;

    goto :goto_0

    :cond_1
    const-string v1, "0"

    .line 502
    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->b:Ljava/lang/String;

    :goto_0
    const-string v1, "is_video"

    .line 506
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 507
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->c:Ljava/lang/String;

    .line 511
    :cond_2
    :try_start_0
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 512
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->d:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_3
    const-string v0, "payload"

    .line 517
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 518
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->e:Ljava/lang/String;

    :cond_4
    const/4 p1, 0x1

    return p1

    :cond_5
    :goto_1
    const/4 p1, 0x0

    return p1
.end method

.method private static b(Landroid/content/Context;F)I
    .locals 1

    .line 388
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

.method static synthetic b(Lcom/tkay/network/toutiao/TTTYAdapter;)Ljava/lang/String;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->g:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/toutiao/TTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/toutiao/TTTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 0

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 419
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 429
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 434
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

    .line 55
    invoke-direct {p0, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Ljava/util/Map;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p1, ""

    const-string p2, "app_id or slot_id is empty!"

    .line 56
    invoke-virtual {p0, p1, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 77
    :cond_0
    invoke-static {}, Lcom/tkay/network/toutiao/TTTYInitManager;->getInstance()Lcom/tkay/network/toutiao/TTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/toutiao/TTTYAdapter$1;

    invoke-direct {v1, p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYAdapter$1;-><init>(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

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

    .line 483
    iput-boolean p4, p0, Lcom/tkay/network/toutiao/TTTYAdapter;->f:Z

    .line 484
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
