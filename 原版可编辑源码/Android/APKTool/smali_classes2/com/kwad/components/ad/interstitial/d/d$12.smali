.class final Lcom/kwad/components/ad/interstitial/d/d$12;
.super Lcom/kwad/sdk/core/h/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kd:Lcom/kwad/components/ad/interstitial/d/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$12;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Lcom/kwad/sdk/core/h/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 2

    const-string v0, "InterstitialWebViewPresenter"

    const-string v1, "onPageVisible"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$12;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->b(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$12;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->b(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$12;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->b(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_0
    return-void
.end method

.method public final aL()V
    .locals 2

    const-string v0, "InterstitialWebViewPresenter"

    const-string v1, "onPageInvisible"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$12;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->b(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$12;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->b(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$12;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->b(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    return-void
.end method
