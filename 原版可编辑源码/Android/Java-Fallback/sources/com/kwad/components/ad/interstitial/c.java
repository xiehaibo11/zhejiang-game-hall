package com.kwad.components.ad.interstitial;

public class c implements com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener {
    private com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener hu;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r1) {
            r0 = this;
            r0.hu = r1
            return
    }

    @Override
    public void onAdClicked() {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onAdClicked()
        L7:
            return
    }

    @Override
    public void onAdClosed() {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onAdClosed()
        L7:
            return
    }

    @Override
    public void onAdShow() {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onAdShow()
        L7:
            return
    }

    @Override
    public void onPageDismiss() {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onPageDismiss()
        L7:
            return
    }

    @Override
    public void onSkippedAd() {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onSkippedAd()
        L7:
            return
    }

    @Override
    public void onVideoPlayEnd() {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onVideoPlayEnd()
        L7:
            return
    }

    @Override
    public void onVideoPlayError(int r2, int r3) {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onVideoPlayError(r2, r3)
        L7:
            return
    }

    @Override
    public void onVideoPlayStart() {
            r1 = this;
            com.kwad.sdk.api.KsInterstitialAd$AdInteractionListener r0 = r1.hu
            if (r0 == 0) goto L7
            r0.onVideoPlayStart()
        L7:
            return
    }
}
