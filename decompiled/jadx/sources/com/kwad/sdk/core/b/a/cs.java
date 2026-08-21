package com.kwad.sdk.core.b.a;

import com.kwad.sdk.i.a;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class cs implements com.kwad.sdk.core.d<a.C0223a> {
    private static void a(a.C0223a c0223a, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        c0223a.sdkVersion = jSONObject.optString("run_sdk_version");
        if (c0223a.sdkVersion == JSONObject.NULL) {
            c0223a.sdkVersion = "";
        }
        c0223a.aCR = jSONObject.optLong("trigger_count", new Long("0").longValue());
        c0223a.aCS = jSONObject.optLong("fail_count", new Long("0").longValue());
        c0223a.aCT = jSONObject.optLong("real_fail_count", new Long("0").longValue());
        c0223a.aCU = jSONObject.optString("business");
        if (c0223a.aCU == JSONObject.NULL) {
            c0223a.aCU = "";
        }
        c0223a.aCV = jSONObject.optString("stage");
        if (c0223a.aCV == JSONObject.NULL) {
            c0223a.aCV = "";
        }
        c0223a.aCW = jSONObject.optString("function");
        if (c0223a.aCW == JSONObject.NULL) {
            c0223a.aCW = "";
        }
    }

    private static JSONObject b(a.C0223a c0223a, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (c0223a.sdkVersion != null && !c0223a.sdkVersion.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "run_sdk_version", c0223a.sdkVersion);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "trigger_count", c0223a.aCR);
        com.kwad.sdk.utils.t.putValue(jSONObject, "fail_count", c0223a.aCS);
        com.kwad.sdk.utils.t.putValue(jSONObject, "real_fail_count", c0223a.aCT);
        if (c0223a.aCU != null && !c0223a.aCU.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "business", c0223a.aCU);
        }
        if (c0223a.aCV != null && !c0223a.aCV.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "stage", c0223a.aCV);
        }
        if (c0223a.aCW != null && !c0223a.aCW.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "function", c0223a.aCW);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.C0223a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.C0223a) bVar, jSONObject);
    }
}
