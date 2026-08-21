package com.bykv.vk.openvk;

public interface TTDownloadEventLogger {
    void onDownloadConfigReady();

    void onEvent(org.json.JSONObject r1);

    void onV3Event(org.json.JSONObject r1);

    boolean shouldFilterOpenSdkLog();
}
