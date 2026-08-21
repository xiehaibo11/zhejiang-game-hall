package com.kwad.components.ad.interstitial;

import android.content.Context;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.e {
    @Override
    public final Class getComponentsType() {
        return com.kwad.components.ad.b.e.class;
    }

    @Override
    public final void init(Context context) {
    }

    @Override
    public final void loadInterstitialAd(KsScene ksScene, KsLoadManager.InterstitialAdListener interstitialAdListener) {
        e.loadInterstitialAd(ksScene, interstitialAdListener);
    }
}
