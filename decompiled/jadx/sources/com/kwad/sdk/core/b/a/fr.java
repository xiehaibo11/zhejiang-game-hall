package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class fr implements com.kwad.sdk.core.d<AdInfo.NativeAdShakeInfo> {
    private static void a(AdInfo.NativeAdShakeInfo nativeAdShakeInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        nativeAdShakeInfo.acceleration = jSONObject.optInt("acceleration");
        nativeAdShakeInfo.enableShake = jSONObject.optBoolean("enableShake");
    }

    private static JSONObject b(AdInfo.NativeAdShakeInfo nativeAdShakeInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (nativeAdShakeInfo.acceleration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "acceleration", nativeAdShakeInfo.acceleration);
        }
        if (nativeAdShakeInfo.enableShake) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "enableShake", nativeAdShakeInfo.enableShake);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdInfo.NativeAdShakeInfo) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdInfo.NativeAdShakeInfo) bVar, jSONObject);
    }
}
