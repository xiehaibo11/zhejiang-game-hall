package com.bianfeng.ymnsdk.feature.protocol;

import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface IAdTrackingFeature {
    void onRegister(String str);

    void trackEvent(String str);

    void trackEvent(String str, Map<String, String> map);
}
