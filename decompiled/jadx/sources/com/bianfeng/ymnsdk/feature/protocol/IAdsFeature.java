package com.bianfeng.ymnsdk.feature.protocol;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public interface IAdsFeature {
    void hideAds(JSONObject jSONObject);

    boolean isAdTypeSupported(int i);

    void preloadAds(JSONObject jSONObject);

    float queryPoints();

    void showAds(JSONObject jSONObject);

    void spendPoints(int i);
}
