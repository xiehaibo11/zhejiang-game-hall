package com.tkay.nativead.api;

import com.tkay.core.api.AdError;

/* JADX INFO: loaded from: classes3.dex */
public interface TYNativeNetworkListener {
    void onNativeAdLoadFail(AdError adError);

    void onNativeAdLoaded();
}
