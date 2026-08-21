package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.splashscreen.monitor.SplashWebMonitorInfo;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.kwad.sdk.core.b.a.if, reason: invalid class name */
/* JADX INFO: loaded from: classes2.dex */
public final class Cif implements com.kwad.sdk.core.d<SplashWebMonitorInfo> {
    private static void a(SplashWebMonitorInfo splashWebMonitorInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        splashWebMonitorInfo.event = jSONObject.optString("event");
        if (splashWebMonitorInfo.event == JSONObject.NULL) {
            splashWebMonitorInfo.event = "";
        }
        splashWebMonitorInfo.status = jSONObject.optInt("status");
        splashWebMonitorInfo.url = jSONObject.optString("url");
        if (splashWebMonitorInfo.url == JSONObject.NULL) {
            splashWebMonitorInfo.url = "";
        }
        splashWebMonitorInfo.sceneId = jSONObject.optString("scene_id");
        if (splashWebMonitorInfo.sceneId == JSONObject.NULL) {
            splashWebMonitorInfo.sceneId = "";
        }
        splashWebMonitorInfo.durationMs = jSONObject.optLong("duration_ms");
        splashWebMonitorInfo.timeType = jSONObject.optInt("time_type");
        splashWebMonitorInfo.errorMsg = jSONObject.optString("error_msg");
        if (splashWebMonitorInfo.errorMsg == JSONObject.NULL) {
            splashWebMonitorInfo.errorMsg = "";
        }
    }

    private static JSONObject b(SplashWebMonitorInfo splashWebMonitorInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (splashWebMonitorInfo.event != null && !splashWebMonitorInfo.event.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "event", splashWebMonitorInfo.event);
        }
        if (splashWebMonitorInfo.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", splashWebMonitorInfo.status);
        }
        if (splashWebMonitorInfo.url != null && !splashWebMonitorInfo.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", splashWebMonitorInfo.url);
        }
        if (splashWebMonitorInfo.sceneId != null && !splashWebMonitorInfo.sceneId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "scene_id", splashWebMonitorInfo.sceneId);
        }
        if (splashWebMonitorInfo.durationMs != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "duration_ms", splashWebMonitorInfo.durationMs);
        }
        if (splashWebMonitorInfo.timeType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "time_type", splashWebMonitorInfo.timeType);
        }
        if (splashWebMonitorInfo.errorMsg != null && !splashWebMonitorInfo.errorMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "error_msg", splashWebMonitorInfo.errorMsg);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((SplashWebMonitorInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((SplashWebMonitorInfo) bVar, jSONObject);
    }
}
