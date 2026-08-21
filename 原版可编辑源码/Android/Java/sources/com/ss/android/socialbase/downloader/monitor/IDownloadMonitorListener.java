package com.ss.android.socialbase.downloader.monitor;

import org.json.JSONObject;

public interface IDownloadMonitorListener {
    void monitorEvent(String str, JSONObject jSONObject, JSONObject jSONObject2, JSONObject jSONObject3);
}
