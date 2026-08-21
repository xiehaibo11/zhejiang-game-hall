.class final Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;
.super Lcom/kwad/components/ad/reward/k$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->showCloseDialog()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k$b;-><init>()V

    return-void
.end method


# virtual methods
.method public final H(Z)V
    .locals 4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$202(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;Z)Z

    sget-object p1, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    if-eqz p1, :cond_0

    :try_start_0
    sget-object p1, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->mInteractionListener:Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$1600(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;)J

    move-result-wide v2

    sub-long/2addr v0, v2

    invoke-interface {p1, v0, v1}, Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;->onVideoSkipToEnd(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->finish()V

    return-void
.end method

.method public final gg()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$202(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;Z)Z

    return-void
.end method

.method public final gp()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy$9;->rW:Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;->access$202(Lcom/kwad/components/ad/reward/page/AdRewardPreviewActivityProxy;Z)Z

    return-void
.end method
