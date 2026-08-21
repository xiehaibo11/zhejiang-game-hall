package com.kwad.components.ad.f;

import android.content.Context;
import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

public final class a extends com.kwad.sdk.components.d implements com.kwad.components.ad.b.f {
    @Override
    public final Class getComponentsType() {
        return com.kwad.components.ad.b.f.class;
    }

    @Override
    public final void init(Context context) {
    }

    @Override
    public final void loadNativeAd(KsScene ksScene, KsLoadManager.NativeAdListener nativeAdListener) {
        c.loadNativeAd(ksScene, nativeAdListener);
    }

    @Override
    public final void loadNativeAd(String str, KsLoadManager.NativeAdListener nativeAdListener) {
        c.loadNativeAd(str, nativeAdListener);
    }
}
