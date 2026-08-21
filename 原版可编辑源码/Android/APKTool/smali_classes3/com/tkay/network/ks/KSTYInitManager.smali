.class public Lcom/tkay/network/ks/KSTYInitManager;
.super Lcom/tkay/core/api/TYInitMediation;


# static fields
.field private static final d:Ljava/lang/String;

.field private static volatile e:Lcom/tkay/network/ks/KSTYInitManager;


# instance fields
.field a:Ljava/lang/Boolean;

.field b:Ljava/lang/Boolean;

.field c:I

.field private f:Landroid/os/Handler;

.field private final g:Ljava/lang/Object;

.field private h:Z

.field private i:Lcom/tkay/network/ks/KSTYCustomController;

.field private j:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 39
    const-class v0, Lcom/tkay/network/ks/KSTYInitManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/ks/KSTYInitManager;->d:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 52
    invoke-direct {p0}, Lcom/tkay/core/api/TYInitMediation;-><init>()V

    .line 43
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->g:Ljava/lang/Object;

    .line 50
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->j:Ljava/util/Map;

    const/4 v0, 0x0

    .line 116
    iput v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->c:I

    .line 53
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->f:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/ks/KSTYInitManager;)Ljava/lang/Object;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInitManager;->g:Ljava/lang/Object;

    return-object p0
.end method

.method private a()V
    .locals 3

    .line 66
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->j:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 67
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 68
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 69
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 71
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager;->j:Ljava/util/Map;

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

.method static synthetic a(Lcom/tkay/network/ks/KSTYInitManager;Ljava/lang/Runnable;)V
    .locals 0

    .line 37
    invoke-virtual {p0, p1}, Lcom/tkay/network/ks/KSTYInitManager;->runOnThreadPool(Ljava/lang/Runnable;)V

    return-void
.end method

.method private b()V
    .locals 5

    .line 216
    iget v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->c:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/4 v3, 0x2

    if-ne v0, v3, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    .line 217
    :goto_0
    iget v4, p0, Lcom/tkay/network/ks/KSTYInitManager;->c:I

    if-ne v4, v3, :cond_1

    goto :goto_1

    :cond_1
    move v1, v2

    .line 218
    :goto_1
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager;->a:Ljava/lang/Boolean;

    if-eqz v2, :cond_2

    .line 219
    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    .line 222
    :cond_2
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager;->b:Ljava/lang/Boolean;

    if-eqz v2, :cond_3

    .line 223
    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 226
    :cond_3
    invoke-static {v0}, Lcom/kwad/sdk/api/KsAdSDK;->setPersonalRecommend(Z)V

    .line 227
    invoke-static {v1}, Lcom/kwad/sdk/api/KsAdSDK;->setProgrammaticRecommend(Z)V

    .line 229
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v2

    if-eqz v2, :cond_4

    .line 230
    sget-object v2, Lcom/tkay/network/ks/KSTYInitManager;->d:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v0

    const-string v3, "PersonalRecommend: "

    invoke-virtual {v3, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 231
    sget-object v0, Lcom/tkay/network/ks/KSTYInitManager;->d:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v1

    const-string v2, "ProgrammaticRecommend: "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return-void
.end method

.method static synthetic b(Lcom/tkay/network/ks/KSTYInitManager;)Z
    .locals 0

    .line 37
    iget-boolean p0, p0, Lcom/tkay/network/ks/KSTYInitManager;->h:Z

    return p0
.end method

.method static synthetic c(Lcom/tkay/network/ks/KSTYInitManager;)Lcom/tkay/network/ks/KSTYCustomController;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/network/ks/KSTYInitManager;->i:Lcom/tkay/network/ks/KSTYCustomController;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/network/ks/KSTYInitManager;)V
    .locals 0

    .line 37
    invoke-direct {p0}, Lcom/tkay/network/ks/KSTYInitManager;->b()V

    return-void
.end method

.method static synthetic e(Lcom/tkay/network/ks/KSTYInitManager;)Z
    .locals 1

    const/4 v0, 0x1

    .line 37
    iput-boolean v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->h:Z

    return v0
.end method

.method public static getInstance()Lcom/tkay/network/ks/KSTYInitManager;
    .locals 2

    .line 80
    sget-object v0, Lcom/tkay/network/ks/KSTYInitManager;->e:Lcom/tkay/network/ks/KSTYInitManager;

    if-nez v0, :cond_1

    .line 81
    const-class v0, Lcom/tkay/network/ks/KSTYInitManager;

    monitor-enter v0

    .line 82
    :try_start_0
    sget-object v1, Lcom/tkay/network/ks/KSTYInitManager;->e:Lcom/tkay/network/ks/KSTYInitManager;

    if-nez v1, :cond_0

    .line 83
    new-instance v1, Lcom/tkay/network/ks/KSTYInitManager;

    invoke-direct {v1}, Lcom/tkay/network/ks/KSTYInitManager;-><init>()V

    sput-object v1, Lcom/tkay/network/ks/KSTYInitManager;->e:Lcom/tkay/network/ks/KSTYInitManager;

    .line 84
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 86
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/network/ks/KSTYInitManager;->e:Lcom/tkay/network/ks/KSTYInitManager;

    return-object v0
.end method


# virtual methods
.method final a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
    .locals 1
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

    .line 183
    new-instance v0, Lcom/tkay/network/ks/KSTYInitManager$2;

    invoke-direct {v0, p0, p2, p3, p4}, Lcom/tkay/network/ks/KSTYInitManager$2;-><init>(Lcom/tkay/network/ks/KSTYInitManager;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/network/ks/KSTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

.method protected final a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    .locals 1

    .line 58
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->j:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "Kuaishou"

    return-object v0
.end method

.method public getNetworkSDKClass()Ljava/lang/String;
    .locals 1

    const-string v0, "com.kwad.sdk.api.KsAdSDK"

    return-object v0
.end method

.method public getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 258
    invoke-static {}, Lcom/tkay/network/ks/KSTYConst;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPayloadInfo(Ljava/lang/String;D)Ljava/lang/String;
    .locals 3

    .line 238
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "adBids"

    .line 239
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    const/4 v2, 0x0

    .line 240
    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "bidEcpm"

    .line 241
    invoke-virtual {v1, v2, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 242
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 243
    sget-object p2, Lcom/tkay/network/ks/KSTYInitManager;->d:Ljava/lang/String;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object p1
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

    .line 268
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 269
    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    const-string v2, "recyclerview-*.aar"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 273
    :try_start_0
    const-class v1, Landroid/support/v7/widget/RecyclerView;

    .line 274
    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 276
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public getResourceStatus()Ljava/util/List;
    .locals 2

    .line 284
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const-string v1, "ksad_reward_order_end_dialog"

    .line 287
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

    .line 96
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/network/ks/KSTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

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

    .line 1066
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->j:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 1067
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1068
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 1069
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ref/WeakReference;

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    .line 1071
    iget-object v2, p0, Lcom/tkay/network/ks/KSTYInitManager;->j:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 122
    :catchall_0
    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 125
    :try_start_1
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->getPersionalizedAdStatus()I

    move-result v0

    iput v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->c:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 130
    :catchall_1
    iget-boolean v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->h:Z

    if-eqz v0, :cond_3

    .line 131
    invoke-direct {p0}, Lcom/tkay/network/ks/KSTYInitManager;->b()V

    if-eqz p3, :cond_2

    .line 133
    invoke-interface {p3}, Lcom/tkay/core/api/MediationInitCallback;->onSuccess()V

    :cond_2
    return-void

    :cond_3
    const-string v0, "app_id"

    .line 139
    invoke-static {p2, v0}, Lcom/tkay/network/ks/KSTYInitManager;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 141
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 142
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInitManager;->f:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/network/ks/KSTYInitManager$1;

    invoke-direct {v1, p0, p3, p2, p1}, Lcom/tkay/network/ks/KSTYInitManager$1;-><init>(Lcom/tkay/network/ks/KSTYInitManager;Lcom/tkay/core/api/MediationInitCallback;Ljava/lang/String;Landroid/content/Context;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_4
    return-void
.end method

.method public setKSTYCustomController(Lcom/tkay/network/ks/KSTYCustomController;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 91
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInitManager;->i:Lcom/tkay/network/ks/KSTYCustomController;

    :cond_0
    return-void
.end method

.method public setPersonalRecommend(Z)V
    .locals 0

    .line 106
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInitManager;->a:Ljava/lang/Boolean;

    return-void
.end method

.method public setProgrammaticRecommend(Z)V
    .locals 0

    .line 113
    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInitManager;->b:Ljava/lang/Boolean;

    return-void
.end method
