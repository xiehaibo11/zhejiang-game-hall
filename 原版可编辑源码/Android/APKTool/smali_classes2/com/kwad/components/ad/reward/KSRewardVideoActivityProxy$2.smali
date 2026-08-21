.class final Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;
.super Lcom/kwad/components/ad/reward/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final bE()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$700(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onAdClicked()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$800(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->fz:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$900(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fU()V

    return-void
.end method

.method public final h(Z)V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/a/a/c;->ye()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$1200(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;Z)V

    return-void
.end method

.method public final onRewardVerify()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$1000(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->mCheckExposureResult:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$1100(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Lcom/kwad/components/core/l/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iget v0, v0, Lcom/kwad/components/ad/reward/j;->pr:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$500(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$600(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayEnd()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$700(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$700(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayError(II)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$700(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoPlayStart()V

    :cond_0
    return-void
.end method

.method public final onVideoSkipToEnd(J)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$2;->oA:Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;->access$700(Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/reward/KSRewardVideoActivityProxy$a;->A(Ljava/lang/String;)Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoSkipToEnd(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
