.class final Lcom/kwad/components/ad/interstitial/d/d$15;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/d/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->ds()Lcom/kwad/components/core/webview/jshandler/o;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 3

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/components/ad/interstitial/d/c;->ji:Z

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d/c;->ck()V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cG()Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    const/4 v0, 0x0

    const/4 v1, -0x1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v2}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$15;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d;->dismiss()V

    :cond_2
    return-void
.end method
