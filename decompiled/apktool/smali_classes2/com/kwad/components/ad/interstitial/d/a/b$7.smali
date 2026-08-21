.class final Lcom/kwad/components/ad/interstitial/d/a/b$7;
.super Lcom/kwad/components/core/webview/jshandler/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a/b;->el()Lcom/kwad/components/core/webview/jshandler/m;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/jshandler/m;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->a(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->V(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->W(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->X(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayStart()V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->b(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/a/b;->Y(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget p1, p1, Lcom/kwad/components/core/webview/b/b/x;->nM:I

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    return-void
.end method

.method public final c(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->c(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->Z(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->aa(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/b$7;->lv:Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/a/b;->ab(Lcom/kwad/components/ad/interstitial/d/a/b;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayEnd()V

    :cond_0
    return-void
.end method
