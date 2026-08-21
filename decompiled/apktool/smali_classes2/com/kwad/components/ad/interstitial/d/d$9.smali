.class final Lcom/kwad/components/ad/interstitial/d/d$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dn()Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onVideoSetPosition hadRollBackToNative: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v1}, Lcom/kwad/components/ad/interstitial/d/d;->q(Lcom/kwad/components/ad/interstitial/d/d;)Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "InterstitialWebViewPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->q(Lcom/kwad/components/ad/interstitial/d/d;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->d(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v2, v1, Lcom/kwad/components/ad/interstitial/d/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v3}, Lcom/kwad/components/ad/interstitial/d/d;->g(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object v3

    invoke-static {v1, v2, p1, v3, v0}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/ad/interstitial/d/d;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;Lcom/kwad/sdk/widget/KSFrameLayout;Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->g(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/widget/KSFrameLayout;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$9;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/d/d;->f(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setVisibility(I)V

    :cond_1
    return-void
.end method
