.class public abstract Lcom/kwad/components/ad/interstitial/d/a/a;
.super Lcom/kwad/components/ad/interstitial/d/b;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;


# instance fields
.field private lp:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/o;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/b/b/m;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/m;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-interface {v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/components/core/webview/b/b/m;->Xa:Z

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/b/a/o;->c(Lcom/kwad/components/core/webview/b/b/m;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    new-instance p2, Lcom/kwad/components/core/webview/b/a/i;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/a/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/a/a$1;-><init>(Lcom/kwad/components/ad/interstitial/d/a/a;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/b/a/i;-><init>(Lcom/kwad/components/core/webview/b/a/i$a;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/components/ad/interstitial/d/c;->ji:Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    return-void
.end method

.method public ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/a;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v2, v2, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, v2, p0}, Lcom/kwad/components/core/webview/b/h;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    return-void
.end method

.method public getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object v0
.end method

.method public onCreate()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onCreate()V

    new-instance v0, Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/a/a;->getContext()Landroid/content/Context;

    move-result-object v1

    const-wide/16 v2, -0x1

    invoke-direct {v0, v2, v3, v1}, Lcom/kwad/components/core/webview/b/h;-><init>(JLandroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    return-void
.end method

.method public onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    return-void
.end method
