.class final Lcom/kwad/components/ad/interstitial/d/a/b$11;
.super Lcom/kwad/sdk/core/h/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic lv:Lcom/kwad/components/ad/interstitial/d/a/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/a/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {p0}, Lcom/kwad/sdk/core/h/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->e(Lcom/kwad/components/ad/interstitial/d/a/b;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->a(Lcom/kwad/components/ad/interstitial/d/a/b;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->f(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->f(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/g/a/a/b;->eZ()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->g(Lcom/kwad/components/ad/interstitial/d/a/b;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->h(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getTimerHelper()Lcom/kwad/sdk/utils/bi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bi;->startTiming()V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->g(Lcom/kwad/components/ad/interstitial/d/a/b;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->i(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->j(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->k(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdShow()V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->l(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x3

    invoke-static {v0, v2}, Lcom/kwad/components/ad/interstitial/monitor/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/a/b;->b(Lcom/kwad/components/ad/interstitial/d/a/b;Z)Z

    :cond_4
    return-void
.end method

.method public final aL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->d(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->f(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$11;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->f(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/g/a/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/g/a/a/b;->eY()V

    :cond_1
    return-void
.end method
