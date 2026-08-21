.class public abstract Lcom/tkay/core/api/TYBaseAdAdapter;
.super Lcom/tkay/core/common/b/n;


# instance fields
.field public mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

.field protected mDismissType:I

.field protected mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

.field protected mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

.field protected mMixedFormatAdType:I

.field protected mScenario:Ljava/lang/String;

.field protected mUserData:Ljava/lang/String;

.field protected mUserId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 20
    invoke-direct {p0}, Lcom/tkay/core/common/b/n;-><init>()V

    const-string v0, ""

    .line 25
    iput-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mUserId:Ljava/lang/String;

    .line 26
    iput-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mUserData:Ljava/lang/String;

    .line 28
    iput-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mScenario:Ljava/lang/String;

    const/4 v0, -0x1

    .line 30
    iput v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mMixedFormatAdType:I

    const/4 v0, 0x0

    .line 34
    iput v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mDismissType:I

    return-void
.end method

.method private cleanLoadListener()V
    .locals 1

    const/4 v0, 0x0

    .line 80
    iput-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    .line 81
    iput-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    return-void
.end method

.method private fillParams(Ljava/util/Map;)V
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

    .line 94
    invoke-virtual {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 95
    invoke-virtual {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/core/common/l/g;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    :cond_0
    return-void
.end method

.method private parseGloableParams(Ljava/util/Map;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
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

    if-eqz p2, :cond_2

    const-string v0, "user_id"

    .line 101
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v2, ""

    if-eqz v1, :cond_0

    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    iput-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mUserId:Ljava/lang/String;

    const-string v0, "user_custom_data"

    .line 102
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    :cond_1
    iput-object v2, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mUserData:Ljava/lang/String;

    :cond_2
    if-eqz p1, :cond_3

    const-string p2, "ad_type"

    .line 106
    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 107
    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mMixedFormatAdType:I

    :cond_3
    return-void
.end method


# virtual methods
.method public abstract destory()V
.end method

.method public getBaseAdObject(Landroid/content/Context;)Lcom/tkay/core/api/BaseAd;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public getBidManager()Lcom/tkay/core/api/MediationBidManager;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V
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
            "Lcom/tkay/core/api/TYBidRequestInfoListener;",
            ")V"
        }
    .end annotation

    if-eqz p4, :cond_0

    const-string p1, "This network don\'t support header bidding in current TY\'s version."

    .line 175
    invoke-interface {p4, p1}, Lcom/tkay/core/api/TYBidRequestInfoListener;->onFailed(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final getDismissType()I
    .locals 1

    .line 198
    iget v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mDismissType:I

    return v0
.end method

.method public getILRD()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getMediationInitManager()Lcom/tkay/core/api/TYInitMediation;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final getMixedFormatAdType()I
    .locals 1

    .line 166
    iget v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mMixedFormatAdType:I

    return v0
.end method

.method public getNetworkInfoMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method public abstract getNetworkName()Ljava/lang/String;
.end method

.method public abstract getNetworkPlacementId()Ljava/lang/String;
.end method

.method public abstract getNetworkSDKVersion()Ljava/lang/String;
.end method

.method public final getUserCustomData()Ljava/lang/String;
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mUserData:Ljava/lang/String;

    return-object v0
.end method

.method public final getUserId()Ljava/lang/String;
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mUserId:Ljava/lang/String;

    return-object v0
.end method

.method public initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z
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
            ">;)Z"
        }
    .end annotation

    const/4 p1, 0x0

    return p1
.end method

.method public final internalInitNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z
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
            ">;)Z"
        }
    .end annotation

    .line 73
    invoke-direct {p0, p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->fillParams(Ljava/util/Map;)V

    .line 74
    invoke-direct {p0, p2, p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->parseGloableParams(Ljava/util/Map;Ljava/util/Map;)V

    .line 75
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z

    move-result p1

    return p1
.end method

.method public final internalLoad(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYCustomLoadListener;)V
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
            "Lcom/tkay/core/api/TYCustomLoadListener;",
            ")V"
        }
    .end annotation

    .line 85
    iput-object p4, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    .line 86
    invoke-direct {p0, p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->fillParams(Ljava/util/Map;)V

    .line 87
    invoke-direct {p0, p2, p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->parseGloableParams(Ljava/util/Map;Ljava/util/Map;)V

    .line 89
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void
.end method

.method public final internalStartBiddingRequest(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBiddingListener;)Z
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

    .line 117
    invoke-direct {p0, p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->fillParams(Ljava/util/Map;)V

    .line 118
    invoke-direct {p0, p2, p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->parseGloableParams(Ljava/util/Map;Ljava/util/Map;)V

    .line 119
    iput-object p4, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    .line 120
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/tkay/core/api/TYBaseAdAdapter;->startBiddingRequest(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBiddingListener;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p2, 0x0

    .line 122
    iput-object p2, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    :cond_0
    return p1
.end method

.method public abstract isAdReady()Z
.end method

.method public abstract loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
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
.end method

.method public final notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 184
    iget-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v0, :cond_1

    .line 186
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 187
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, p2

    .line 189
    :goto_0
    iget-object v1, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    invoke-static {v0}, Lcom/tkay/core/api/TYBiddingResult;->fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v0

    const/4 v2, 0x0

    invoke-interface {v1, v0, v2}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    .line 192
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    if-eqz v0, :cond_2

    .line 193
    invoke-interface {v0, p1, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public releaseLoadResource()V
    .locals 0

    .line 113
    invoke-direct {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->cleanLoadListener()V

    return-void
.end method

.method public setAdDownloadListener(Lcom/tkay/core/api/TYEventInterface;)V
    .locals 0

    .line 158
    iput-object p1, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mDownloadListener:Lcom/tkay/core/api/TYEventInterface;

    return-void
.end method

.method public final setScenario(Ljava/lang/String;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mScenario:Ljava/lang/String;

    return-void
.end method

.method public setUserDataConsent(Landroid/content/Context;ZZ)Z
    .locals 0

    const/4 p1, 0x0

    return p1
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

    const/4 p1, 0x0

    return p1
.end method

.method public supportImpressionCallback()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final thirdPartyLoad(Lcom/tkay/core/api/TYBaseAdAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/api/TYBaseAdAdapter;",
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

    .line 180
    new-instance v0, Lcom/tkay/core/common/b/o;

    iget-object v1, p0, Lcom/tkay/core/api/TYBaseAdAdapter;->mLoadListener:Lcom/tkay/core/api/TYCustomLoadListener;

    invoke-direct {v0, v1, p3}, Lcom/tkay/core/common/b/o;-><init>(Lcom/tkay/core/api/TYCustomLoadListener;Ljava/util/Map;)V

    invoke-virtual {p1, p2, p3, p4, v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->internalLoad(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYCustomLoadListener;)V

    return-void
.end method
