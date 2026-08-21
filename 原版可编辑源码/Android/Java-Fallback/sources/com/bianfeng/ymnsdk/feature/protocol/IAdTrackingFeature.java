package com.bianfeng.ymnsdk.feature.protocol;

public interface IAdTrackingFeature {
    void onRegister(java.lang.String r1);

    void trackEvent(java.lang.String r1);

    void trackEvent(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2);
}
