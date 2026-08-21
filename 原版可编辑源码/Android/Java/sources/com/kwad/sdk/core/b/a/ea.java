package com.kwad.sdk.core.b.a;

import com.alibaba.sdk.android.oss.common.OSSHeaders;
import org.json.JSONObject;

public final class ea implements com.kwad.sdk.core.d<com.kwad.sdk.core.webview.b.a.a> {
    private static void a(com.kwad.sdk.core.webview.b.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.ayH = jSONObject.optString(OSSHeaders.ACCESS_CONTROL_ALLOW_ORIGIN);
        if (aVar.ayH == JSONObject.NULL) {
            aVar.ayH = "";
        }
        aVar.ayI = jSONObject.optString("Timing-Allow-Origin");
        if (aVar.ayI == JSONObject.NULL) {
            aVar.ayI = "";
        }
        aVar.ayJ = jSONObject.optString("content-type");
        if (aVar.ayJ == JSONObject.NULL) {
            aVar.ayJ = "";
        }
        aVar.ayK = jSONObject.optString("Date");
        if (aVar.ayK == JSONObject.NULL) {
            aVar.ayK = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.core.webview.b.a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.ayH != null && !aVar.ayH.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, OSSHeaders.ACCESS_CONTROL_ALLOW_ORIGIN, aVar.ayH);
        }
        if (aVar.ayI != null && !aVar.ayI.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "Timing-Allow-Origin", aVar.ayI);
        }
        if (aVar.ayJ != null && !aVar.ayJ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "content-type", aVar.ayJ);
        }
        if (aVar.ayK != null && !aVar.ayK.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "Date", aVar.ayK);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.webview.b.a.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.webview.b.a.a) bVar, jSONObject);
    }
}
