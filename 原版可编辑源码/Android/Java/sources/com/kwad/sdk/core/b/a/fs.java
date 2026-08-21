package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.request.model.StatusInfo;
import org.json.JSONObject;

public final class fs implements com.kwad.sdk.core.d<StatusInfo.NativeAdStyleControl> {
    private static void a(StatusInfo.NativeAdStyleControl nativeAdStyleControl, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        nativeAdStyleControl.enableShake = jSONObject.optBoolean("enableShake");
    }

    private static JSONObject b(StatusInfo.NativeAdStyleControl nativeAdStyleControl, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (nativeAdStyleControl.enableShake) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "enableShake", nativeAdStyleControl.enableShake);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((StatusInfo.NativeAdStyleControl) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((StatusInfo.NativeAdStyleControl) bVar, jSONObject);
    }
}
