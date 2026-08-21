.class final Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;


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

    .line 240
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 1

    .line 243
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->v(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 244
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->w(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onAdClosed()V
    .locals 0

    return-void
.end method

.method public final onAdShow()V
    .locals 4

    .line 251
    :try_start_0
    invoke-static {}, Lcom/tkay/network/ks/KSTYInitManager;->getInstance()Lcom/tkay/network/ks/KSTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    iget-object v3, v3, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->g:Lcom/kwad/sdk/api/KsInterstitialAd;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/ks/KSTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 255
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->x(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 256
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->y(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    :cond_0
    return-void
.end method

.method public final onPageDismiss()V
    .locals 1

    .line 266
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->z(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 267
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->A(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onSkippedAd()V
    .locals 1

    .line 294
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->H(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)I

    return-void
.end method

.method public final onVideoPlayEnd()V
    .locals 1

    .line 280
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->D(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 281
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->E(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final onVideoPlayError(II)V
    .locals 1

    .line 273
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->B(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 274
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->C(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 1

    .line 287
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->F(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 288
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYInterstitialAdapter$5;->a:Lcom/tkay/network/ks/KSTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/ks/KSTYInterstitialAdapter;->G(Lcom/tkay/network/ks/KSTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method
