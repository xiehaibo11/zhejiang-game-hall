package com.kwad.sdk.core.b.a;

import com.kwad.sdk.i.a;
import org.json.JSONObject;

public final class cs implements com.kwad.sdk.core.d<a.a> {
    private static void a(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.sdkVersion = jSONObject.optString("run_sdk_version");
        if (aVar.sdkVersion == JSONObject.NULL) {
            aVar.sdkVersion = "";
        }
        aVar.aCR = jSONObject.optLong("trigger_count", new Long("0").longValue());
        aVar.aCS = jSONObject.optLong("fail_count", new Long("0").longValue());
        aVar.aCT = jSONObject.optLong("real_fail_count", new Long("0").longValue());
        aVar.aCU = jSONObject.optString("business");
        if (aVar.aCU == JSONObject.NULL) {
            aVar.aCU = "";
        }
        aVar.aCV = jSONObject.optString("stage");
        if (aVar.aCV == JSONObject.NULL) {
            aVar.aCV = "";
        }
        aVar.aCW = jSONObject.optString("function");
        if (aVar.aCW == JSONObject.NULL) {
            aVar.aCW = "";
        }
    }

    private static JSONObject b(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.sdkVersion != null && !aVar.sdkVersion.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "run_sdk_version", aVar.sdkVersion);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "trigger_count", aVar.aCR);
        com.kwad.sdk.utils.t.putValue(jSONObject, "fail_count", aVar.aCS);
        com.kwad.sdk.utils.t.putValue(jSONObject, "real_fail_count", aVar.aCT);
        if (aVar.aCU != null && !aVar.aCU.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "business", aVar.aCU);
        }
        if (aVar.aCV != null && !aVar.aCV.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "stage", aVar.aCV);
        }
        if (aVar.aCW != null && !aVar.aCW.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "function", aVar.aCW);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.a) bVar, jSONObject);
    }
}
