package com.tkay.nativead.api;

import com.tkay.core.api.TYAdInfo;

public interface TYNativeEventExListener extends TYNativeEventListener {
    void onDeeplinkCallback(TYNativeAdView tYNativeAdView, TYAdInfo tYAdInfo, boolean z);
}
