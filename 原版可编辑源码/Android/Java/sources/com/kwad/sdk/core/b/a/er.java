package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.interstitial.monitor.InterstitialMonitorInfo;
import com.tkay.core.common.c.m;
import org.json.JSONObject;

public final class er implements com.kwad.sdk.core.d<InterstitialMonitorInfo> {
    private static void a(InterstitialMonitorInfo interstitialMonitorInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        interstitialMonitorInfo.status = jSONObject.optInt("status");
        interstitialMonitorInfo.type = jSONObject.optInt("type");
        interstitialMonitorInfo.loadDataTime = jSONObject.optLong("load_data_duration_ms");
        interstitialMonitorInfo.renderDuration = jSONObject.optLong("render_duration_ms");
        interstitialMonitorInfo.renderType = jSONObject.optInt("render_type");
        interstitialMonitorInfo.expectedRenderType = jSONObject.optInt("expected_render_type");
        interstitialMonitorInfo.materialType = jSONObject.optInt("material_type");
        interstitialMonitorInfo.downloadDuration = jSONObject.optLong("download_duration_ms");
        interstitialMonitorInfo.downloadType = jSONObject.optInt("download_type");
        interstitialMonitorInfo.downloadSize = jSONObject.optLong(m.a.e);
        interstitialMonitorInfo.errorCode = jSONObject.optInt("error_code");
        interstitialMonitorInfo.errorMsg = jSONObject.optString("error_msg");
        if (interstitialMonitorInfo.errorMsg == JSONObject.NULL) {
            interstitialMonitorInfo.errorMsg = "";
        }
        interstitialMonitorInfo.creativeId = jSONObject.optLong("creative_id");
        interstitialMonitorInfo.videoUrl = jSONObject.optString("video_url");
        if (interstitialMonitorInfo.videoUrl == JSONObject.NULL) {
            interstitialMonitorInfo.videoUrl = "";
        }
        interstitialMonitorInfo.videoDuration = jSONObject.optLong("video_duration_ms");
        interstitialMonitorInfo.posId = jSONObject.optLong("pos_Id");
    }

    private static JSONObject b(InterstitialMonitorInfo interstitialMonitorInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (interstitialMonitorInfo.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", interstitialMonitorInfo.status);
        }
        if (interstitialMonitorInfo.type != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "type", interstitialMonitorInfo.type);
        }
        if (interstitialMonitorInfo.loadDataTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "load_data_duration_ms", interstitialMonitorInfo.loadDataTime);
        }
        if (interstitialMonitorInfo.renderDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "render_duration_ms", interstitialMonitorInfo.renderDuration);
        }
        if (interstitialMonitorInfo.renderType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "render_type", interstitialMonitorInfo.renderType);
        }
        if (interstitialMonitorInfo.expectedRenderType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "expected_render_type", interstitialMonitorInfo.expectedRenderType);
        }
        if (interstitialMonitorInfo.materialType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "material_type", interstitialMonitorInfo.materialType);
        }
        if (interstitialMonitorInfo.downloadDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "download_duration_ms", interstitialMonitorInfo.downloadDuration);
        }
        if (interstitialMonitorInfo.downloadType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "download_type", interstitialMonitorInfo.downloadType);
        }
        if (interstitialMonitorInfo.downloadSize != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, m.a.e, interstitialMonitorInfo.downloadSize);
        }
        if (interstitialMonitorInfo.errorCode != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "error_code", interstitialMonitorInfo.errorCode);
        }
        if (interstitialMonitorInfo.errorMsg != null && !interstitialMonitorInfo.errorMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "error_msg", interstitialMonitorInfo.errorMsg);
        }
        if (interstitialMonitorInfo.creativeId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "creative_id", interstitialMonitorInfo.creativeId);
        }
        if (interstitialMonitorInfo.videoUrl != null && !interstitialMonitorInfo.videoUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "video_url", interstitialMonitorInfo.videoUrl);
        }
        if (interstitialMonitorInfo.videoDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "video_duration_ms", interstitialMonitorInfo.videoDuration);
        }
        if (interstitialMonitorInfo.posId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "pos_Id", interstitialMonitorInfo.posId);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((InterstitialMonitorInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((InterstitialMonitorInfo) bVar, jSONObject);
    }
}
