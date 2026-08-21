.class final Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsFullScreenVideoAd$FullScreenVideoAdInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYInterstitialAdapter;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)V
    .locals 0

    .line 185
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 188
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->j(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 189
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->k(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onPageDismiss()V
    .locals 1

    .line 195
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->l(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 196
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->m(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onSkippedVideo()V
    .locals 1

    .line 230
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->u(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)I

    return-void
.end method

.method public final onVideoPlayEnd()V
    .locals 1

    .line 209
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->p(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 210
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->q(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 1

    .line 202
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {p2}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->n(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 203
    iget-object p2, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {p2}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->o(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p2

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, ""

    invoke-interface {p2, p1, v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 4

    .line 217
    :try_start_0
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    iget-object v3, v3, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->f:Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 222
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->r(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 223
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->s(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    .line 224
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$4;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->t(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method
