.class public Lcom/tkay/nativead/api/TYNative;
.super Ljava/lang/Object;


# instance fields
.field private final TAG:Ljava/lang/String;

.field adLoadListener:Lcom/tkay/core/common/b/a;

.field mActivityRef:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field mAdLoadManager:Lcom/tkay/nativead/a/a;

.field mAdSourceEventListener:Lcom/tkay/core/common/b/b;

.field mContext:Landroid/content/Context;

.field mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

.field mListener:Lcom/tkay/nativead/api/TYNativeNetworkListener;

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
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/nativead/api/TYNativeNetworkListener;)V
    .locals 2

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    const-class v0, Lcom/tkay/nativead/api/TYNative;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/nativead/api/TYNative;->TAG:Ljava/lang/String;

    .line 73
    new-instance v0, Lcom/tkay/nativead/api/TYNative$1;

    invoke-direct {v0, p0}, Lcom/tkay/nativead/api/TYNative$1;-><init>(Lcom/tkay/nativead/api/TYNative;)V

    iput-object v0, p0, Lcom/tkay/nativead/api/TYNative;->adLoadListener:Lcom/tkay/core/common/b/a;

    .line 57
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mContext:Landroid/content/Context;

    if-eqz p1, :cond_0

    .line 59
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 60
    new-instance v0, Ljava/lang/ref/WeakReference;

    move-object v1, p1

    check-cast v1, Landroid/app/Activity;

    invoke-direct {v0, v1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mActivityRef:Ljava/lang/ref/WeakReference;

    .line 63
    :cond_0
    iput-object p2, p0, Lcom/tkay/nativead/api/TYNative;->mPlacementId:Ljava/lang/String;

    .line 64
    iput-object p3, p0, Lcom/tkay/nativead/api/TYNative;->mListener:Lcom/tkay/nativead/api/TYNativeNetworkListener;

    .line 66
    invoke-static {p1, p2}, Lcom/tkay/nativead/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/nativead/a/a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/nativead/api/TYNative;->mAdLoadManager:Lcom/tkay/nativead/a/a;

    return-void
.end method

.method public static entryAdScenario(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 100
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "0"

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

    .line 104
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "0"

    invoke-virtual {v0, p0, p1, v1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-void
.end method

.method private getContext()Landroid/content/Context;
    .locals 1

    .line 185
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mActivityRef:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    .line 186
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    if-eqz v0, :cond_0

    return-object v0

    .line 192
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mContext:Landroid/content/Context;

    return-object v0
.end method


# virtual methods
.method public checkAdStatus()Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 6

    .line 163
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 164
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 165
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 170
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdLoadManager:Lcom/tkay/nativead/a/a;

    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNative;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/nativead/a/a;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    .line 171
    iget-object v1, p0, Lcom/tkay/nativead/api/TYNative;->mPlacementId:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->r:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->A:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdStatusInfo;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, ""

    invoke-static {v1, v2, v3, v4, v5}, Lcom/tkay/core/common/l/n;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    .line 166
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->TAG:Ljava/lang/String;

    const-string v1, "SDK init error!"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 167
    new-instance v0, Lcom/tkay/core/api/TYAdStatusInfo;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-direct {v0, v2, v2, v1}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

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

    .line 177
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdLoadManager:Lcom/tkay/nativead/a/a;

    if-eqz v0, :cond_0

    .line 178
    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNative;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/a/a;->a(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getNativeAd()Lcom/tkay/nativead/api/NativeAd;
    .locals 4

    .line 141
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdLoadManager:Lcom/tkay/nativead/a/a;

    iget-object v1, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    const-string v2, ""

    invoke-virtual {v0, v2, v1}, Lcom/tkay/nativead/a/a;->a(Ljava/lang/String;Ljava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 143
    new-instance v1, Lcom/tkay/nativead/api/NativeAd;

    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNative;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/nativead/api/TYNative;->mPlacementId:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v0}, Lcom/tkay/nativead/api/NativeAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    return-object v1

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getNativeAd(Ljava/lang/String;)Lcom/tkay/nativead/api/NativeAd;
    .locals 3

    .line 151
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 154
    :goto_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdLoadManager:Lcom/tkay/nativead/a/a;

    iget-object v1, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual {v0, p1, v1}, Lcom/tkay/nativead/a/a;->a(Ljava/lang/String;Ljava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 156
    new-instance v0, Lcom/tkay/nativead/api/NativeAd;

    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNative;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/nativead/api/TYNative;->mPlacementId:Ljava/lang/String;

    invoke-direct {v0, v1, v2, p1}, Lcom/tkay/nativead/api/NativeAd;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    return-object v0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public makeAdRequest()V
    .locals 6

    .line 111
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mPlacementId:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->r:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->w:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v4, ""

    const/4 v5, 0x1

    invoke-static/range {v0 .. v5}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 112
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdLoadManager:Lcom/tkay/nativead/a/a;

    invoke-direct {p0}, Lcom/tkay/nativead/api/TYNative;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/nativead/api/TYNative;->adLoadListener:Lcom/tkay/core/common/b/a;

    iget-object v3, p0, Lcom/tkay/nativead/api/TYNative;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    iget-object v4, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/nativead/a/a;->a(Landroid/content/Context;Lcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    return-void
.end method

.method public setAdListener(Lcom/tkay/nativead/api/TYNativeNetworkListener;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNative;->mListener:Lcom/tkay/nativead/api/TYNativeNetworkListener;

    return-void
.end method

.method public setAdSourceStatusListener(Lcom/tkay/core/api/TYAdSourceStatusListener;)V
    .locals 1

    .line 200
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    if-nez v0, :cond_0

    .line 201
    new-instance v0, Lcom/tkay/core/common/b/b;

    invoke-direct {v0}, Lcom/tkay/core/common/b/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

    .line 203
    :cond_0
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNative;->mDeveloperStatusListener:Lcom/tkay/core/api/TYAdSourceStatusListener;

    .line 204
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mAdSourceEventListener:Lcom/tkay/core/common/b/b;

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

    .line 121
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/nativead/api/TYNative;->mPlacementId:Ljava/lang/String;

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

    .line 127
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 128
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    .line 130
    :cond_0
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    .line 131
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNative;->mTKExtraMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    return-void
.end method
