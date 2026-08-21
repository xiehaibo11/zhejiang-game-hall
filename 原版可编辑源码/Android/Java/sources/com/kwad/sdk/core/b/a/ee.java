package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.a;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

public final class ee implements com.kwad.sdk.core.d<a.b> {
    private static void a(a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.packageName = jSONObject.optString(DBDefinition.PACKAGE_NAME);
        if (bVar.packageName == JSONObject.NULL) {
            bVar.packageName = "";
        }
    }

    private static JSONObject b(a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.packageName != null && !bVar.packageName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, bVar.packageName);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.b) bVar, jSONObject);
    }
}
