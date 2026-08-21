package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.a.a;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

public final class cm implements com.kwad.sdk.core.d<a.a> {
    private static void a(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.url = jSONObject.optString("url");
        if (aVar.url == JSONObject.NULL) {
            aVar.url = "";
        }
        aVar.packageName = jSONObject.optString(DBDefinition.PACKAGE_NAME);
        if (aVar.packageName == JSONObject.NULL) {
            aVar.packageName = "";
        }
    }

    private static JSONObject b(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.url != null && !aVar.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", aVar.url);
        }
        if (aVar.packageName != null && !aVar.packageName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, aVar.packageName);
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
