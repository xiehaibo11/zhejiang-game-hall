package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class fv implements com.kwad.sdk.core.d<com.kwad.sdk.core.network.j> {
    private static void a(com.kwad.sdk.core.network.j jVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        jVar.url = jSONObject.optString("url");
        if (jVar.url == JSONObject.NULL) {
            jVar.url = "";
        }
        jVar.host = jSONObject.optString("host");
        if (jVar.host == JSONObject.NULL) {
            jVar.host = "";
        }
        jVar.httpCode = jSONObject.optInt("http_code");
        jVar.errorMsg = jSONObject.optString("error_msg");
        if (jVar.errorMsg == JSONObject.NULL) {
            jVar.errorMsg = "";
        }
        jVar.apg = jSONObject.optString("req_type");
        if (jVar.apg == JSONObject.NULL) {
            jVar.apg = "";
        }
        jVar.aph = jSONObject.optInt("use_ip");
        jVar.api = jSONObject.optString("ok_http_version");
        if (jVar.api == JSONObject.NULL) {
            jVar.api = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.core.network.j jVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (jVar.url != null && !jVar.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", jVar.url);
        }
        if (jVar.host != null && !jVar.host.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "host", jVar.host);
        }
        if (jVar.httpCode != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "http_code", jVar.httpCode);
        }
        if (jVar.errorMsg != null && !jVar.errorMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "error_msg", jVar.errorMsg);
        }
        if (jVar.apg != null && !jVar.apg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "req_type", jVar.apg);
        }
        if (jVar.aph != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "use_ip", jVar.aph);
        }
        if (jVar.api != null && !jVar.api.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "ok_http_version", jVar.api);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.network.j) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.network.j) bVar, jSONObject);
    }
}
