package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.webview.d.b;
import org.json.JSONObject;

public final class gx implements com.kwad.sdk.core.d<b.a> {
    private static void a(b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.url = jSONObject.optString("url");
        if (aVar.url == JSONObject.NULL) {
            aVar.url = "";
        }
        aVar.method = jSONObject.optString("method");
        if (aVar.method == JSONObject.NULL) {
            aVar.method = "";
        }
        aVar.params = jSONObject.optString("params");
        if (aVar.params == JSONObject.NULL) {
            aVar.params = "";
        }
    }

    private static JSONObject b(b.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.url != null && !aVar.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", aVar.url);
        }
        if (aVar.method != null && !aVar.method.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "method", aVar.method);
        }
        if (aVar.params != null && !aVar.params.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "params", aVar.params);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((b.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((b.a) bVar, jSONObject);
    }
}
