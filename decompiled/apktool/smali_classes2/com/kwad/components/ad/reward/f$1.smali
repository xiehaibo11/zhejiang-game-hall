.class final Lcom/kwad/components/ad/reward/f$1;
.super Lcom/kwad/components/ad/reward/e/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/f;->setRewardAdInteractionListener(Lcom/kwad/sdk/api/KsRewardVideoAd$RewardAdInteractionListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic oM:Lcom/kwad/components/ad/reward/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/f$1;->oM:Lcom/kwad/components/ad/reward/f;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/g;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageDismiss()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/e/g;->onPageDismiss()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f$1;->oM:Lcom/kwad/components/ad/reward/f;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/f;->a(Lcom/kwad/components/ad/reward/f;)Lcom/kwad/components/core/internal/api/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/f$1;->oM:Lcom/kwad/components/ad/reward/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/internal/api/c;->i(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/e/g;->onVideoPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/f$1;->oM:Lcom/kwad/components/ad/reward/f;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/f;->a(Lcom/kwad/components/ad/reward/f;)Lcom/kwad/components/core/internal/api/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/f$1;->oM:Lcom/kwad/components/ad/reward/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/internal/api/c;->h(Lcom/kwad/components/core/internal/api/a;)V

    return-void
.end method
