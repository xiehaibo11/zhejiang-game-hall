.class public Lcom/tkay/network/sigmob/SigmobTYAdapter;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;


# instance fields
.field private a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private volatile d:Z

.field private e:D


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 29
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;-><init>()V

    const-string v0, ""

    .line 32
    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Ljava/lang/String;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    return-object p0
.end method

.method private a(Landroid/content/Context;I)V
    .locals 4

    .line 38
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-nez v0, :cond_0

    .line 39
    new-instance v0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    new-instance v1, Lcom/sigmob/windad/natives/WindNativeAdRequest;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3, p2, v3}, Lcom/sigmob/windad/natives/WindNativeAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V

    invoke-direct {v0, v1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;-><init>(Lcom/sigmob/windad/natives/WindNativeAdRequest;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    .line 42
    :cond_0
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    new-instance v0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYAdapter;Landroid/content/Context;)V

    invoke-virtual {p2, v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->setNativeAdLoadListener(Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;)V

    .line 84
    iget-boolean p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->d:Z

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-eqz p1, :cond_2

    .line 85
    iget-wide v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->e:D

    const-wide/16 v2, 0x0

    cmpl-double p2, v0, v2

    if-lez p2, :cond_1

    double-to-int p2, v0

    .line 86
    invoke-virtual {p1, p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->setBidFloor(I)V

    .line 88
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    const-string p2, "USD"

    invoke-virtual {p1, p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->setCurrency(Ljava/lang/String;)V

    .line 89
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-virtual {p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->loadAd()Z

    return-void

    .line 93
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->c:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 94
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->c:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 96
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-virtual {p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->loadAd()Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYAdapter;Landroid/content/Context;I)V
    .locals 4

    .line 1038
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-nez v0, :cond_0

    .line 1039
    new-instance v0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    new-instance v1, Lcom/sigmob/windad/natives/WindNativeAdRequest;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-direct {v1, v2, v3, p2, v3}, Lcom/sigmob/windad/natives/WindNativeAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V

    invoke-direct {v0, v1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;-><init>(Lcom/sigmob/windad/natives/WindNativeAdRequest;)V

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    .line 1042
    :cond_0
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    new-instance v0, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/network/sigmob/SigmobTYAdapter$1;-><init>(Lcom/tkay/network/sigmob/SigmobTYAdapter;Landroid/content/Context;)V

    invoke-virtual {p2, v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->setNativeAdLoadListener(Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;)V

    .line 1084
    iget-boolean p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->d:Z

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-eqz p1, :cond_2

    .line 1085
    iget-wide v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->e:D

    const-wide/16 v2, 0x0

    cmpl-double p2, v0, v2

    if-lez p2, :cond_1

    double-to-int p2, v0

    .line 1086
    invoke-virtual {p1, p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->setBidFloor(I)V

    .line 1088
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    const-string p2, "USD"

    invoke-virtual {p1, p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->setCurrency(Ljava/lang/String;)V

    .line 1089
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->loadAd()Z

    return-void

    .line 1093
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->c:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 1094
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->c:Ljava/lang/String;

    invoke-virtual {p1, p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->loadAd(Ljava/lang/String;)Z

    return-void

    .line 1096
    :cond_3
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->loadAd()Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/network/sigmob/SigmobTYAdapter;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 192
    iget-boolean v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->d:Z

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-static {p1, p2, v0, v1, v2}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/core/api/TYBiddingListener;Lcom/tkay/core/api/TYCustomLoadListener;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Z
    .locals 0

    .line 29
    iget-boolean p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->d:Z

    return p0
.end method

.method static synthetic d(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/network/sigmob/SigmobTYAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-object p0
.end method


# virtual methods
.method public destory()V
    .locals 1

    .line 157
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a:Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-eqz v0, :cond_0

    .line 158
    invoke-virtual {v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->destroy()V

    :cond_0
    return-void
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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

    const-string v0, "placement_id"

    .line 179
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    .line 180
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    return-void
.end method

.method public getNetworkName()Ljava/lang/String;
    .locals 1

    .line 152
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getNetworkSDKVersion()Ljava/lang/String;
    .locals 1

    .line 169
    invoke-static {}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getInstance()Lcom/tkay/network/sigmob/SigmobTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getNetworkVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 3
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

    const-string p3, "app_id"

    .line 102
    invoke-static {p2, p3}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const-string v0, "app_key"

    .line 103
    invoke-static {p2, v0}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "placement_id"

    .line 104
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    const-string v1, "payload"

    .line 105
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getStringFromMap(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->c:Ljava/lang/String;

    const-string v1, "bid_floor"

    .line 106
    invoke-static {p2, v1}, Lcom/tkay/core/api/TYInitMediation;->getDoubleFromMap(Ljava/util/Map;Ljava/lang/String;)D

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->e:D

    .line 111
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    iget-object p3, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->b:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    goto :goto_0

    .line 116
    :cond_0
    iget p3, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mRequestNum:I

    const/4 v0, 0x3

    if-le p3, v0, :cond_1

    .line 117
    iput v0, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mRequestNum:I

    .line 120
    :cond_1
    iget p3, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->mRequestNum:I

    .line 121
    new-instance v0, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/tkay/network/sigmob/SigmobTYAdapter$2;-><init>(Lcom/tkay/network/sigmob/SigmobTYAdapter;Landroid/content/Context;Ljava/util/Map;I)V

    invoke-virtual {p0, v0}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->postOnMainThread(Ljava/lang/Runnable;)V

    return-void

    :cond_2
    :goto_0
    const-string p1, ""

    const-string p2, "app_id\u3001app_key\u3001placement_id could not be null."

    .line 112
    invoke-direct {p0, p1, p2}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->a(Ljava/lang/String;Ljava/lang/String;)V

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

    .line 185
    iput-boolean p4, p0, Lcom/tkay/network/sigmob/SigmobTYAdapter;->d:Z

    .line 186
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/network/sigmob/SigmobTYAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return p4
.end method
