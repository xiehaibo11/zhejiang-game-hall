.class public Lcom/kwad/components/ad/reward/e/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;


# instance fields
.field private rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    return-void
.end method

.method public onAdClicked()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onAdClicked()V

    :cond_0
    return-void
.end method

.method public onExtraRewardVerify(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onExtraRewardVerify(I)V

    :cond_0
    return-void
.end method

.method public onPageDismiss()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onPageDismiss()V

    :cond_0
    return-void
.end method

.method public onRewardStepVerify(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onRewardStepVerify(II)V

    :cond_0
    return-void
.end method

.method public onRewardVerify()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onRewardVerify()V

    :cond_0
    return-void
.end method

.method public onVideoPlayEnd()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayEnd()V

    :cond_0
    return-void
.end method

.method public onVideoPlayError(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayError(II)V

    :cond_0
    return-void
.end method

.method public onVideoPlayStart()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayStart()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    return-void
.end method

.method public onVideoSkipToEnd(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/e/g;->rB:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoSkipToEnd(J)V

    :cond_0
    return-void
.end method
