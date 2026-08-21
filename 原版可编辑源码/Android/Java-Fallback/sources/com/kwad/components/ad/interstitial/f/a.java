package com.kwad.components.ad.interstitial.f;

public abstract class a extends android.widget.FrameLayout {
    public android.content.Context mContext;

    public a(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.mContext = r1
            return
    }

    public abstract void a(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.components.ad.interstitial.d r2, com.kwad.sdk.api.KsAdVideoPlayConfig r3, com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r4);

    public abstract void cn();

    public abstract void co();

    public abstract void setAdInteractionListener(com.kwad.sdk.api.KsInterstitialAd.AdInteractionListener r1);
}
