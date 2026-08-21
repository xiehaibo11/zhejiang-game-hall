package com.bykv.vk.openvk.live;

public interface ILiveAdCustomConfig {
    java.lang.String convertToEnterFromMerge(int r1);

    java.lang.String convertToEnterMethod(int r1, boolean r2);

    java.lang.Object invoke(int r1, android.os.Bundle r2);

    void onEventV3(java.lang.String r1, org.json.JSONObject r2);

    int openLR(java.lang.String r1);
}
