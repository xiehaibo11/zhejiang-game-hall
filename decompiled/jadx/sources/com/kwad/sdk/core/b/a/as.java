package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.aj;
import com.vivo.push.PushClientConstants;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class as implements com.kwad.sdk.core.d<aj.b> {
    private static void a(aj.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.appName = jSONObject.optString("appName");
        if (bVar.appName == JSONObject.NULL) {
            bVar.appName = "";
        }
        bVar.UA = jSONObject.optString(PushClientConstants.TAG_PKG_NAME);
        if (bVar.UA == JSONObject.NULL) {
            bVar.UA = "";
        }
        bVar.version = jSONObject.optString("version");
        if (bVar.version == JSONObject.NULL) {
            bVar.version = "";
        }
        bVar.versionCode = jSONObject.optInt("versionCode");
        bVar.Vm = jSONObject.optLong("appSize");
        bVar.UC = jSONObject.optString("md5");
        if (bVar.UC == JSONObject.NULL) {
            bVar.UC = "";
        }
        bVar.url = jSONObject.optString("url");
        if (bVar.url == JSONObject.NULL) {
            bVar.url = "";
        }
        bVar.icon = jSONObject.optString("icon");
        if (bVar.icon == JSONObject.NULL) {
            bVar.icon = "";
        }
        bVar.qm = jSONObject.optString("desc");
        if (bVar.qm == JSONObject.NULL) {
            bVar.qm = "";
        }
    }

    private static JSONObject b(aj.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.appName != null && !bVar.appName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appName", bVar.appName);
        }
        if (bVar.UA != null && !bVar.UA.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, PushClientConstants.TAG_PKG_NAME, bVar.UA);
        }
        if (bVar.version != null && !bVar.version.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "version", bVar.version);
        }
        if (bVar.versionCode != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "versionCode", bVar.versionCode);
        }
        if (bVar.Vm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appSize", bVar.Vm);
        }
        if (bVar.UC != null && !bVar.UC.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "md5", bVar.UC);
        }
        if (bVar.url != null && !bVar.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", bVar.url);
        }
        if (bVar.icon != null && !bVar.icon.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "icon", bVar.icon);
        }
        if (bVar.qm != null && !bVar.qm.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "desc", bVar.qm);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((aj.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((aj.b) bVar, jSONObject);
    }
}
