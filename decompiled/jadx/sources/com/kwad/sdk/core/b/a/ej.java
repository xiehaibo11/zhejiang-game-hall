package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.h;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ej implements com.kwad.sdk.core.d<h.a> {
    private static void a(h.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.TB = jSONObject.optString("apkUrl");
        if (aVar.TB == JSONObject.NULL) {
            aVar.TB = "";
        }
        aVar.packageName = jSONObject.optString(DBDefinition.PACKAGE_NAME);
        if (aVar.packageName == JSONObject.NULL) {
            aVar.packageName = "";
        }
    }

    private static JSONObject b(h.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.TB != null && !aVar.TB.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "apkUrl", aVar.TB);
        }
        if (aVar.packageName != null && !aVar.packageName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, aVar.packageName);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((h.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((h.a) bVar, jSONObject);
    }
}
