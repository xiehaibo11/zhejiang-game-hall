package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.a.a;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class cm implements com.kwad.sdk.core.d<a.C0166a> {
    private static void a(a.C0166a c0166a, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        c0166a.url = jSONObject.optString("url");
        if (c0166a.url == JSONObject.NULL) {
            c0166a.url = "";
        }
        c0166a.packageName = jSONObject.optString(DBDefinition.PACKAGE_NAME);
        if (c0166a.packageName == JSONObject.NULL) {
            c0166a.packageName = "";
        }
    }

    private static JSONObject b(a.C0166a c0166a, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (c0166a.url != null && !c0166a.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", c0166a.url);
        }
        if (c0166a.packageName != null && !c0166a.packageName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, c0166a.packageName);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.C0166a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.C0166a) bVar, jSONObject);
    }
}
