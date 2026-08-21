.class final Lcom/kwad/components/ad/interstitial/d/f$4;
.super Lcom/kwad/sdk/core/h/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kM:Lcom/kwad/components/ad/interstitial/d/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-direct {p0}, Lcom/kwad/sdk/core/h/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->d(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdShow()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/f;->b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v1

    iget v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->ju:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cp(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/core/t/b;->qj()Lcom/kwad/components/core/t/b;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v2}, Lcom/kwad/components/ad/interstitial/d/f;->d(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3, v0}, Lcom/kwad/components/core/t/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->e(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/core/widget/KsAutoCloseView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->setCountDownPaused(Z)V

    return-void
.end method

.method public final aL()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f$4;->kM:Lcom/kwad/components/ad/interstitial/d/f;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->e(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/core/widget/KsAutoCloseView;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->setCountDownPaused(Z)V

    return-void
.end method
