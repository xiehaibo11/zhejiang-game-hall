package com.bianfeng.ymnsdk.feature.protocol;

import org.json.JSONObject;

public interface IAdsFeature {
    void hideAds(JSONObject r1);

    boolean isAdTypeSupported(int r1);

    void preloadAds(JSONObject r1);

    float queryPoints();

    void showAds(JSONObject r1);

    void spendPoints(int r1);
}
