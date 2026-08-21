.class final Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/mbridge/msdk/out/RewardVideoListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClose(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    .locals 0

    .line 160
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->k(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 161
    invoke-virtual {p2}, Lcom/mbridge/msdk/out/RewardInfo;->isCompleteView()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 162
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->l(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    .line 164
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->m(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_1
    return-void
.end method

.method public final onAdShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 143
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    if-eqz p1, :cond_0

    .line 144
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V

    .line 147
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    if-eqz p1, :cond_1

    .line 148
    invoke-static {}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->getInstance()Lcom/tkay/network/mintegral/MintegralTYInitManager;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/ref/WeakReference;

    iget-object v2, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object v2, v2, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    invoke-direct {v1, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/mintegral/MintegralTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 153
    :catch_0
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->i(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 154
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->j(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_2
    return-void
.end method

.method public final onEndcardShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    return-void
.end method

.method public final onLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 128
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->e(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 129
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->f(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.method public final onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 1

    .line 171
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->n(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 172
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->o(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p1, v0, p2}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoAdClicked(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 179
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->p(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 180
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->q(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onVideoComplete(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 186
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->r(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 187
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->s(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 1

    .line 135
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->g(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 136
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->h(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 2

    .line 109
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->g:Ljava/util/Map;

    if-nez p1, :cond_0

    .line 110
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    iput-object v0, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->g:Ljava/util/Map;

    .line 113
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    const-string v0, "request_id"

    if-eqz p1, :cond_1

    .line 114
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->g:Ljava/util/Map;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object v1, v1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->a:Lcom/mbridge/msdk/out/MBRewardVideoHandler;

    invoke-virtual {v1}, Lcom/mbridge/msdk/out/MBRewardVideoHandler;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 117
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    if-eqz p1, :cond_2

    .line 118
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->g:Ljava/util/Map;

    iget-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    iget-object v1, v1, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->b:Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;

    invoke-virtual {v1}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 121
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->c(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 122
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;->d(Lcom/tkay/network/mintegral/MintegralTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_3
    return-void
.end method
