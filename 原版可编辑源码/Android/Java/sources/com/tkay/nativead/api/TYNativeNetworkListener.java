package com.tkay.nativead.api;

import com.tkay.core.api.AdError;

public interface TYNativeNetworkListener {
    void onNativeAdLoadFail(AdError adError);

    void onNativeAdLoaded();
}
