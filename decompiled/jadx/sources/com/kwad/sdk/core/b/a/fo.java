package com.kwad.sdk.core.b.a;

import com.kwad.sdk.internal.api.NativeAdExtraDataImpl;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class fo implements com.kwad.sdk.core.d<NativeAdExtraDataImpl> {
    private static void a(NativeAdExtraDataImpl nativeAdExtraDataImpl, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        nativeAdExtraDataImpl.enableShake = jSONObject.optBoolean("enableShake");
        nativeAdExtraDataImpl.showLiveStatus = jSONObject.optInt("showLiveStatus");
        nativeAdExtraDataImpl.showLiveStyle = jSONObject.optInt("showLiveStyle");
    }

    private static JSONObject b(NativeAdExtraDataImpl nativeAdExtraDataImpl, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (nativeAdExtraDataImpl.enableShake) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "enableShake", nativeAdExtraDataImpl.enableShake);
        }
        if (nativeAdExtraDataImpl.showLiveStatus != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showLiveStatus", nativeAdExtraDataImpl.showLiveStatus);
        }
        if (nativeAdExtraDataImpl.showLiveStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showLiveStyle", nativeAdExtraDataImpl.showLiveStyle);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((NativeAdExtraDataImpl) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((NativeAdExtraDataImpl) bVar, jSONObject);
    }
}
