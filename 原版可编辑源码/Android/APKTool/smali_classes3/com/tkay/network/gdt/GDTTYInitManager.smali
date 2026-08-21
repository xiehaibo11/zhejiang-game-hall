.class public Lcom/tkay/network/gdt/GDTTYInitManager;
.super Lcom/tkay/core/api/TYInitMediation;


# static fields
.field public static final TAG:Ljava/lang/String;

.field private static volatile b:Lcom/tkay/network/gdt/GDTTYInitManager;


# instance fields
.field a:I

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qq/e/ads/rewardvideo/RewardVideoAD;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;",
            ">;"
        }
    .end annotation
.end field

.field private f:Z

.field private g:Ljava/lang/String;

.field private final h:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 37
    const-class v0, Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/gdt/GDTTYInitManager;->TAG:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 52
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitMediation;-><init>()V

    .line 41
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->c:Ljava/util/Map;

    .line 43
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->d:Ljava/util/Map;

    .line 44
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->e:Ljava/util/Map;

    .line 50
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->h:Ljava/lang/Object;

    const/4 v0, 0x0

    .line 117
    iput v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->a:I

    return-void
.end method

.method protected static a(Landroid/content/Context;F)I
    .locals 1

    .line 201
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

.method protected static a(Ljava/util/Map;)Lcom/qq/e/comm/constants/LoadAdParams;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/qq/e/comm/constants/LoadAdParams;"
        }
    .end annotation

    .line 266
    new-instance v0, Lcom/qq/e/comm/constants/LoadAdParams;

    invoke-direct {v0}, Lcom/qq/e/comm/constants/LoadAdParams;-><init>()V

    .line 267
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 268
    invoke-static {v1, p0}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/util/Map;Ljava/util/Map;)V

    .line 269
    invoke-virtual {v0, v1}, Lcom/qq/e/comm/constants/LoadAdParams;->setDevExtra(Ljava/util/Map;)V

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYInitManager;)Ljava/lang/Object;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->h:Ljava/lang/Object;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/network/gdt/GDTTYInitManager;Ljava/lang/Runnable;)V
    .locals 0

    .line 35
    invoke-virtual {p0, p1}, Lcom/tkay/network/gdt/GDTTYInitManager;->runOnThreadPool(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected static a(Ljava/util/Map;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    :try_start_0
    const-string v0, "tkay_stk_info"

    .line 275
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    const-string v1, "staIn"
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, ""

    if-eqz v0, :cond_0

    .line 276
    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    invoke-interface {p0, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "meSrc"

    const-string v1, "299"

    .line 277
    invoke-interface {p0, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "tkay_mediation_wf_id"

    .line 279
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    const-string v0, "thrmei"

    if-eqz p1, :cond_1

    .line 280
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    :cond_1
    invoke-interface {p0, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    return-void
.end method

.method private c()V
    .locals 3

    .line 100
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 101
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 102
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 103
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 105
    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->c:Ljava/util/Map;

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

.method public static getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;
    .locals 2

    .line 57
    sget-object v0, Lcom/tkay/network/gdt/GDTTYInitManager;->b:Lcom/tkay/network/gdt/GDTTYInitManager;

    if-nez v0, :cond_1

    .line 58
    const-class v0, Lcom/tkay/network/gdt/GDTTYInitManager;

    monitor-enter v0

    .line 59
    :try_start_0
    sget-object v1, Lcom/tkay/network/gdt/GDTTYInitManager;->b:Lcom/tkay/network/gdt/GDTTYInitManager;

    if-nez v1, :cond_0

    .line 60
    new-instance v1, Lcom/tkay/network/gdt/GDTTYInitManager;

    invoke-direct {v1}, Lcom/tkay/network/gdt/GDTTYInitManager;-><init>()V

    sput-object v1, Lcom/tkay/network/gdt/GDTTYInitManager;->b:Lcom/tkay/network/gdt/GDTTYInitManager;

    .line 61
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 63
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/network/gdt/GDTTYInitManager;->b:Lcom/tkay/network/gdt/GDTTYInitManager;

    return-object v0
.end method


# virtual methods
.method protected final a()V
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->d:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    return-void
.end method

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

    .line 229
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/gdt/GDTTYInitManager$1;

    invoke-direct {v1, p0, p2, p3, p4}, Lcom/tkay/network/gdt/GDTTYInitManager$1;-><init>(Lcom/tkay/network/gdt/GDTTYInitManager;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/network/gdt/GDTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method protected final a(Ljava/lang/String;Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;)V
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 91
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->e:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method protected final a(Ljava/lang/String;Lcom/qq/e/ads/rewardvideo/RewardVideoAD;)V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->d:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 82
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->d:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method protected final a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    .locals 1

    .line 74
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->c:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method protected final b()V
    .locals 1

    .line 95
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    return-void
.end method

.method public getActivityStatus()Ljava/util/List;
    .locals 2

    .line 183
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "com.qq.e.ads.ADActivity"

    .line 184
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v1, "com.qq.e.ads.PortraitADActivity"

    .line 185
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v1, "com.qq.e.ads.LandscapeADActivity"

    .line 186
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v1, "com.qq.e.ads.RewardvideoPortraitADActivity"

    .line 187
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v1, "com.qq.e.ads.RewardvideoLandscapeADActivity"

    .line 188
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "Tencent"

    return-object v0
.end method

.method public getNetworkSDKClass()Ljava/lang/String;
    .locals 1

    const-string v0, "com.qq.e.ads.ADActivity"

    return-object v0
.end method

.method public getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 173
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYConst;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getServiceStatus()Ljava/util/List;
    .locals 2

    .line 194
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "com.qq.e.comm.DownloadService"

    .line 195
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

    .line 114
    :try_start_0
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 115
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
    .locals 6
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

    .line 122
    :try_start_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->getPersionalizedAdStatus()I

    move-result v0

    iput v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->a:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 126
    :catchall_0
    :try_start_1
    iget v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->a:I

    const/4 v1, 0x2

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v0, v1, :cond_0

    .line 127
    invoke-static {v3}, Lcom/qq/e/comm/managers/setting/GlobalSetting;->setPersonalizedState(I)V

    goto :goto_0

    .line 129
    :cond_0
    invoke-static {v2}, Lcom/qq/e/comm/managers/setting/GlobalSetting;->setPersonalizedState(I)V

    .line 132
    :goto_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 133
    sget-object v0, Lcom/tkay/network/gdt/GDTTYInitManager;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v4, "GlobalSetting.getPersonalizedState():"

    invoke-direct {v1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/qq/e/comm/managers/setting/GlobalSetting;->getPersonalizedState()Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 136
    :cond_1
    invoke-direct {p0}, Lcom/tkay/network/gdt/GDTTYInitManager;->c()V

    const-string v0, "app_id"

    .line 140
    invoke-static {p2, v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "tkay_local"

    .line 142
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 143
    iput-object v0, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->g:Ljava/lang/String;

    goto :goto_1

    .line 144
    :cond_2
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->g:Ljava/lang/String;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->g:Ljava/lang/String;

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 145
    invoke-virtual {p0}, Lcom/tkay/network/gdt/GDTTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v1

    new-array v4, v3, [Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->g:Ljava/lang/String;

    aput-object v5, v4, v2

    invoke-virtual {p0, v1, p2, v4}, Lcom/tkay/network/gdt/GDTTYInitManager;->checkToSaveInitData(Ljava/lang/String;Ljava/util/Map;[Ljava/lang/String;)V

    const/4 p2, 0x0

    .line 146
    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->g:Ljava/lang/String;

    .line 149
    :cond_3
    :goto_1
    iget-boolean p2, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->f:Z

    if-nez p2, :cond_4

    .line 150
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, v0}, Lcom/qq/e/comm/managers/GDTAdSdk;->init(Landroid/content/Context;Ljava/lang/String;)V

    .line 151
    iput-boolean v3, p0, Lcom/tkay/network/gdt/GDTTYInitManager;->f:Z

    :cond_4
    if-eqz p3, :cond_5

    .line 159
    invoke-interface {p3}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 164
    :cond_5
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setGDTTYCustomController(Lcom/tkay/network/gdt/GDTTYCustomController;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 68
    invoke-virtual {p1}, Lcom/tkay/network/gdt/GDTTYCustomController;->getAgreePrivacyStrategy()Z

    move-result p1

    invoke-static {p1}, Lcom/qq/e/comm/managers/setting/GlobalSetting;->setAgreePrivacyStrategy(Z)V

    :cond_0
    return-void
.end method
