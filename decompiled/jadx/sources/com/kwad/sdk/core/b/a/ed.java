package com.kwad.sdk.core.b.a;

import com.kwad.sdk.commercial.model.HybridLoadMsg;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ed implements com.kwad.sdk.core.d<HybridLoadMsg> {
    private static void a(HybridLoadMsg hybridLoadMsg, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        hybridLoadMsg.sceneId = jSONObject.optString("scene_id");
        if (hybridLoadMsg.sceneId == JSONObject.NULL) {
            hybridLoadMsg.sceneId = "";
        }
        hybridLoadMsg.h5Version = jSONObject.optString("h5_version");
        if (hybridLoadMsg.h5Version == JSONObject.NULL) {
            hybridLoadMsg.h5Version = "";
        }
        hybridLoadMsg.loadType = jSONObject.optInt("load_type");
        hybridLoadMsg.state = jSONObject.optInt(CallMraidJS.b);
        hybridLoadMsg.interval = jSONObject.optString("interval");
        if (hybridLoadMsg.interval == JSONObject.NULL) {
            hybridLoadMsg.interval = "";
        }
        hybridLoadMsg.failState = jSONObject.optInt("fail_state");
        hybridLoadMsg.failReason = jSONObject.optString("fail_reason");
        if (hybridLoadMsg.failReason == JSONObject.NULL) {
            hybridLoadMsg.failReason = "";
        }
        hybridLoadMsg.url = jSONObject.optString("url");
        if (hybridLoadMsg.url == JSONObject.NULL) {
            hybridLoadMsg.url = "";
        }
        hybridLoadMsg.packageUrl = jSONObject.optString("package_url");
        if (hybridLoadMsg.packageUrl == JSONObject.NULL) {
            hybridLoadMsg.packageUrl = "";
        }
    }

    private static JSONObject b(HybridLoadMsg hybridLoadMsg, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (hybridLoadMsg.sceneId != null && !hybridLoadMsg.sceneId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "scene_id", hybridLoadMsg.sceneId);
        }
        if (hybridLoadMsg.h5Version != null && !hybridLoadMsg.h5Version.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "h5_version", hybridLoadMsg.h5Version);
        }
        if (hybridLoadMsg.loadType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "load_type", hybridLoadMsg.loadType);
        }
        if (hybridLoadMsg.state != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, CallMraidJS.b, hybridLoadMsg.state);
        }
        if (hybridLoadMsg.interval != null && !hybridLoadMsg.interval.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "interval", hybridLoadMsg.interval);
        }
        if (hybridLoadMsg.failState != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fail_state", hybridLoadMsg.failState);
        }
        if (hybridLoadMsg.failReason != null && !hybridLoadMsg.failReason.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fail_reason", hybridLoadMsg.failReason);
        }
        if (hybridLoadMsg.url != null && !hybridLoadMsg.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", hybridLoadMsg.url);
        }
        if (hybridLoadMsg.packageUrl != null && !hybridLoadMsg.packageUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "package_url", hybridLoadMsg.packageUrl);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((HybridLoadMsg) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((HybridLoadMsg) bVar, jSONObject);
    }
}
