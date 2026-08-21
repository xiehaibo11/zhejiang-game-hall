package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.scene.URLPackage;
import cz.msebera.android.httpclient.protocol.HTTP;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class iy implements com.kwad.sdk.core.d<URLPackage> {
    private static void a(URLPackage uRLPackage, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        uRLPackage.page = jSONObject.optInt("page");
        uRLPackage.identity = jSONObject.optString(HTTP.IDENTITY_CODING);
        if (uRLPackage.identity == JSONObject.NULL) {
            uRLPackage.identity = "";
        }
    }

    private static JSONObject b(URLPackage uRLPackage, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (uRLPackage.page != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "page", uRLPackage.page);
        }
        if (uRLPackage.identity != null && !uRLPackage.identity.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, HTTP.IDENTITY_CODING, uRLPackage.identity);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((URLPackage) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((URLPackage) bVar, jSONObject);
    }
}
