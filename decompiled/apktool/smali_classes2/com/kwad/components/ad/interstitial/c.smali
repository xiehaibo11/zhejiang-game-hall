.class public Lcom/kwad/components/ad/interstitial/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;


# instance fields
.field private hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    return-void
.end method

.method public onAdClicked()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    return-void
.end method

.method public onAdClosed()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClosed()V

    :cond_0
    return-void
.end method

.method public onAdShow()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdShow()V

    :cond_0
    return-void
.end method

.method public onPageDismiss()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onPageDismiss()V

    :cond_0
    return-void
.end method

.method public onSkippedAd()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onSkippedAd()V

    :cond_0
    return-void
.end method

.method public onVideoPlayEnd()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayEnd()V

    :cond_0
    return-void
.end method

.method public onVideoPlayError(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayError(II)V

    :cond_0
    return-void
.end method

.method public onVideoPlayStart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/c;->hu:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onVideoPlayStart()V

    :cond_0
    return-void
.end method
