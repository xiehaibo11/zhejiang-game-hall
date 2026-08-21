package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.request.model.StatusInfo;
import org.json.JSONObject;

public final class fq implements com.kwad.sdk.core.d<StatusInfo.NativeAdRequestInfo> {
    private static void a(StatusInfo.NativeAdRequestInfo nativeAdRequestInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        nativeAdRequestInfo.nativeAdStyleControl = new StatusInfo.NativeAdStyleControl();
        nativeAdRequestInfo.nativeAdStyleControl.parseJson(jSONObject.optJSONObject("nativeAdStyleControl"));
    }

    private static JSONObject b(StatusInfo.NativeAdRequestInfo nativeAdRequestInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.a(jSONObject, "nativeAdStyleControl", nativeAdRequestInfo.nativeAdStyleControl);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((StatusInfo.NativeAdRequestInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((StatusInfo.NativeAdRequestInfo) bVar, jSONObject);
    }
}
