package com.bianfeng.ymnsdk.feature.protocol;

public interface IAdsFeature {
    void hideAds(org.json.JSONObject r1);

    boolean isAdTypeSupported(int r1);

    void preloadAds(org.json.JSONObject r1);

    float queryPoints();

    void showAds(org.json.JSONObject r1);

    void spendPoints(int r1);
}
