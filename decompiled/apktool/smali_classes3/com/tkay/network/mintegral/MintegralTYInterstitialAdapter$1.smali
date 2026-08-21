.class final Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 111
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->m(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 112
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->n(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onAdClose(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    .locals 0

    .line 97
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->i(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 98
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->j(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onAdCloseWithNIReward(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    .locals 0

    return-void
.end method

.method public final onAdShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 80
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    if-eqz p1, :cond_0

    .line 81
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b:Lcom/mbridge/msdk/newinterstitial/out/MBNewInterstitialHandler;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V

    .line 83
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    if-eqz p1, :cond_1

    .line 84
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c:Lcom/mbridge/msdk/newinterstitial/out/MBBidInterstitialVideoHandler;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 89
    :catchall_0
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->g(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 90
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->h(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_2
    return-void
.end method

.method public final onEndcardShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onLoadCampaignSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 58
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->a(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 59
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->b(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final onResourceLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 1

    .line 72
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->e(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 73
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->f(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onResourceLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 65
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->c(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 66
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->d(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 1

    .line 104
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->k(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 105
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->l(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p1, v0, p2}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoComplete(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 118
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->o(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 119
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter$1;->a:Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;->p(Lcom/tkay/network/mintegral/MintegralTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method
