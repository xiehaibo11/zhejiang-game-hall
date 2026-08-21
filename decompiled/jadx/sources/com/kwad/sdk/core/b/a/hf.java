package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.reward.monitor.RewardWebViewInfo;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class hf implements com.kwad.sdk.core.d<RewardWebViewInfo> {
    private static void a(RewardWebViewInfo rewardWebViewInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        rewardWebViewInfo.event = jSONObject.optString("event");
        if (rewardWebViewInfo.event == JSONObject.NULL) {
            rewardWebViewInfo.event = "";
        }
        rewardWebViewInfo.status = jSONObject.optInt("status");
        rewardWebViewInfo.url = jSONObject.optString("url");
        if (rewardWebViewInfo.url == JSONObject.NULL) {
            rewardWebViewInfo.url = "";
        }
        rewardWebViewInfo.source = jSONObject.optString("source");
        if (rewardWebViewInfo.source == JSONObject.NULL) {
            rewardWebViewInfo.source = "";
        }
        rewardWebViewInfo.sceneId = jSONObject.optString("scene_id");
        if (rewardWebViewInfo.sceneId == JSONObject.NULL) {
            rewardWebViewInfo.sceneId = "";
        }
        rewardWebViewInfo.pageType = jSONObject.optString("page_type");
        if (rewardWebViewInfo.pageType == JSONObject.NULL) {
            rewardWebViewInfo.pageType = "";
        }
        rewardWebViewInfo.durationMs = jSONObject.optLong("duration_ms");
        rewardWebViewInfo.timeType = jSONObject.optInt("time_type");
    }

    private static JSONObject b(RewardWebViewInfo rewardWebViewInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (rewardWebViewInfo.event != null && !rewardWebViewInfo.event.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "event", rewardWebViewInfo.event);
        }
        if (rewardWebViewInfo.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", rewardWebViewInfo.status);
        }
        if (rewardWebViewInfo.url != null && !rewardWebViewInfo.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", rewardWebViewInfo.url);
        }
        if (rewardWebViewInfo.source != null && !rewardWebViewInfo.source.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "source", rewardWebViewInfo.source);
        }
        if (rewardWebViewInfo.sceneId != null && !rewardWebViewInfo.sceneId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "scene_id", rewardWebViewInfo.sceneId);
        }
        if (rewardWebViewInfo.pageType != null && !rewardWebViewInfo.pageType.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "page_type", rewardWebViewInfo.pageType);
        }
        if (rewardWebViewInfo.durationMs != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "duration_ms", rewardWebViewInfo.durationMs);
        }
        if (rewardWebViewInfo.timeType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "time_type", rewardWebViewInfo.timeType);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((RewardWebViewInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((RewardWebViewInfo) bVar, jSONObject);
    }
}
