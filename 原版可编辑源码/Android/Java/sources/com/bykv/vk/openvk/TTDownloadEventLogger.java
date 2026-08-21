package com.bykv.vk.openvk;

import org.json.JSONObject;

public interface TTDownloadEventLogger {
    void onDownloadConfigReady();

    void onEvent(JSONObject jSONObject);

    void onV3Event(JSONObject jSONObject);

    boolean shouldFilterOpenSdkLog();
}
