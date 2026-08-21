package com.kwad.components.ad.b;

import com.kwad.sdk.api.KsLoadManager;
import com.kwad.sdk.api.KsScene;

/* JADX INFO: loaded from: classes2.dex */
public interface f extends com.kwad.sdk.components.a {
    void loadNativeAd(KsScene ksScene, KsLoadManager.NativeAdListener nativeAdListener);

    void loadNativeAd(String str, KsLoadManager.NativeAdListener nativeAdListener);
}
