.class final Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/rewardvideo/RewardVideoADListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onADClick()V
    .locals 1

    .line 192
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->p(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 193
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->q(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onADClose()V
    .locals 1

    .line 206
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->a()V

    .line 207
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->t(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 208
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->u(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onADExpose()V
    .locals 4

    .line 163
    :try_start_0
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 167
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->j(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 168
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->k(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onADLoad()V
    .locals 3

    .line 107
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->getExtraInfo()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 109
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_0

    .line 110
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    invoke-static {v1, v2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 112
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 115
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 118
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 119
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    new-instance v1, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2$1;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;)V

    invoke-virtual {v0, v1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->setDownloadConfirmListener(Lcom/qq/e/comm/compliance/DownloadConfirmListener;)V

    .line 133
    :cond_2
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->e(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 134
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->f(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_3
    return-void
.end method

.method public final onADShow()V
    .locals 0

    return-void
.end method

.method public final onError(Lcom/qq/e/comm/util/AdError;)V
    .locals 3

    .line 215
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onReward()V
    .locals 1

    .line 185
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->n(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 186
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->o(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_0
    return-void
.end method

.method public final onReward(Ljava/util/Map;)V
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

    .line 174
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v0

    if-nez v0, :cond_0

    .line 175
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-static {v0, v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 177
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v0

    const-string v1, "transId"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    const-string v1, "gdt_trans_id"

    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 178
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->l(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 179
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->m(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_1
    return-void
.end method

.method public final onVideoCached()V
    .locals 7

    .line 140
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 141
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v0, :cond_1

    .line 142
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    if-eqz v0, :cond_1

    .line 143
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->getECPM()I

    move-result v0

    int-to-double v0, v0

    .line 145
    new-instance v2, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a:Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    invoke-direct {v2, v3}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 146
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, v1, v4, v2, v5}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v3, v0, v1}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 150
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->h(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 151
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->i(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_1
    return-void
.end method

.method public final onVideoComplete()V
    .locals 1

    .line 199
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->r(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 200
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->s(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method
