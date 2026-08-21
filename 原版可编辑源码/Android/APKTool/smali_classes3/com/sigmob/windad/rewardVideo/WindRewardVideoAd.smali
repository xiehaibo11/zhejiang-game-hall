.class public Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;
.super Lcom/sigmob/sdk/base/j;

# interfaces
.implements Lcom/sigmob/sdk/rewardVideoAd/f;
.implements Lcom/sigmob/sdk/rewardVideoAd/g;


# instance fields
.field protected b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;


# direct methods
.method public constructor <init>(Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/base/j;-><init>(Lcom/sigmob/windad/WindAdRequest;Z)V

    invoke-virtual {p0, p0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->setAdLoadListener(Lcom/sigmob/sdk/rewardVideoAd/f;)V

    return-void
.end method


# virtual methods
.method public loadAd()Z
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/base/j;->loadAd()Z

    move-result v0

    return v0
.end method

.method public loadAd(Ljava/lang/String;)Z
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/j;->loadAd(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public onVideoAdClicked(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdClicked(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdClosed(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdClosed(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdLoadSuccess(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdLoadSuccess(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdPlayComplete(Lcom/sigmob/windad/rewardVideo/WindRewardInfo;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdRewarded(Lcom/sigmob/windad/rewardVideo/WindRewardInfo;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdPlayEnd(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdPlayEnd(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdPlayStart(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdPlayStart(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdPreLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz p1, :cond_0

    invoke-interface {p1, p2}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdPreLoadFail(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onVideoAdPreLoadSuccess(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;->onRewardAdPreLoadSuccess(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setWindRewardVideoAdListener(Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->b:Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;

    return-void
.end method

.method public show(Ljava/util/HashMap;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    invoke-super {p0, p1, p0}, Lcom/sigmob/sdk/base/j;->show(Ljava/util/HashMap;Lcom/sigmob/sdk/rewardVideoAd/g;)Z

    move-result p1

    return p1
.end method
