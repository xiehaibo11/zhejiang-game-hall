.class final Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRewardAdClicked(Ljava/lang/String;)V
    .locals 1

    .line 161
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 162
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->k(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 163
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->l(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onRewardAdClosed(Ljava/lang/String;)V
    .locals 1

    .line 170
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 171
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->m(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 172
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->n(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onRewardAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    .line 188
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    if-eqz p1, :cond_0

    .line 190
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v0, p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onRewardAdLoadSuccess(Ljava/lang/String;)V
    .locals 4

    .line 112
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 113
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->c(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 114
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    .line 115
    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->getEcpm()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    .line 116
    invoke-static {v2}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->d(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    move-result-object v2

    const/4 v3, 0x0

    .line 114
    invoke-static {p1, v0, v1, v2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onC2SBiddingResultWithCache(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYBiddingListener;Ljava/lang/Object;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 120
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->e(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 121
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->f(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_1
    return-void
.end method

.method public final onRewardAdPlayEnd(Ljava/lang/String;)V
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 153
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->i(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 154
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->j(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onRewardAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 2

    .line 197
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 198
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->q(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 199
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->r(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayFailed(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onRewardAdPlayStart(Ljava/lang/String;)V
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 144
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->g(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 145
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->h(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onRewardAdPreLoadFail(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRewardAdPreLoadSuccess(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRewardAdRewarded(Lcom/sigmob/windad/rewardVideo/WindRewardInfo;Ljava/lang/String;)V
    .locals 0

    .line 179
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 180
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->o(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 181
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter$2;->a:Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;->p(Lcom/tkay/network/sigmob/SigmobTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onReward()V

    :cond_0
    return-void
.end method
