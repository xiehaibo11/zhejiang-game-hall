package com.bianfeng.ymnsdk.feature.protocol;

import java.util.Map;

public interface IAdTrackingFeature {
    void onRegister(String r1);

    void trackEvent(String r1);

    void trackEvent(String r1, Map<String, String> r2);
}
