package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.w;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gp implements com.kwad.sdk.core.d<w.a> {
    private static void a(w.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.Uh = jSONObject.optString("SDKVersion");
        if (aVar.Uh == JSONObject.NULL) {
            aVar.Uh = "";
        }
        aVar.Ui = jSONObject.optInt("SDKVersionCode");
        aVar.Uj = jSONObject.optString("sdkApiVersion");
        if (aVar.Uj == JSONObject.NULL) {
            aVar.Uj = "";
        }
        aVar.Uk = jSONObject.optInt("sdkApiVersionCode");
        aVar.Ul = jSONObject.optInt("sdkType");
        aVar.appVersion = jSONObject.optString("appVersion");
        if (aVar.appVersion == JSONObject.NULL) {
            aVar.appVersion = "";
        }
        aVar.appName = jSONObject.optString("appName");
        if (aVar.appName == JSONObject.NULL) {
            aVar.appName = "";
        }
        aVar.appId = jSONObject.optString(com.tkay.expressad.videocommon.e.b.u);
        if (aVar.appId == JSONObject.NULL) {
            aVar.appId = "";
        }
        aVar.Um = jSONObject.optString("networkType");
        if (aVar.Um == JSONObject.NULL) {
            aVar.Um = "";
        }
        aVar.Un = jSONObject.optString("manufacturer");
        if (aVar.Un == JSONObject.NULL) {
            aVar.Un = "";
        }
        aVar.model = jSONObject.optString("model");
        if (aVar.model == JSONObject.NULL) {
            aVar.model = "";
        }
        aVar.Uo = jSONObject.optString("deviceBrand");
        if (aVar.Uo == JSONObject.NULL) {
            aVar.Uo = "";
        }
        aVar.Up = jSONObject.optInt("osType");
        aVar.Uq = jSONObject.optString("systemVersion");
        if (aVar.Uq == JSONObject.NULL) {
            aVar.Uq = "";
        }
        aVar.Ur = jSONObject.optInt("osApi");
        aVar.Us = jSONObject.optString("language");
        if (aVar.Us == JSONObject.NULL) {
            aVar.Us = "";
        }
        aVar.Ut = jSONObject.optString("locale");
        if (aVar.Ut == JSONObject.NULL) {
            aVar.Ut = "";
        }
        aVar.Uu = jSONObject.optInt("screenWidth");
        aVar.Uv = jSONObject.optInt("screenHeight");
        aVar.Uw = jSONObject.optInt("statusBarHeight");
        aVar.Ux = jSONObject.optInt("titleBarHeight");
    }

    private static JSONObject b(w.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.Uh != null && !aVar.Uh.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "SDKVersion", aVar.Uh);
        }
        if (aVar.Ui != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "SDKVersionCode", aVar.Ui);
        }
        if (aVar.Uj != null && !aVar.Uj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkApiVersion", aVar.Uj);
        }
        if (aVar.Uk != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkApiVersionCode", aVar.Uk);
        }
        if (aVar.Ul != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkType", aVar.Ul);
        }
        if (aVar.appVersion != null && !aVar.appVersion.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appVersion", aVar.appVersion);
        }
        if (aVar.appName != null && !aVar.appName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appName", aVar.appName);
        }
        if (aVar.appId != null && !aVar.appId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.videocommon.e.b.u, aVar.appId);
        }
        if (aVar.Um != null && !aVar.Um.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "networkType", aVar.Um);
        }
        if (aVar.Un != null && !aVar.Un.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "manufacturer", aVar.Un);
        }
        if (aVar.model != null && !aVar.model.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "model", aVar.model);
        }
        if (aVar.Uo != null && !aVar.Uo.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceBrand", aVar.Uo);
        }
        if (aVar.Up != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "osType", aVar.Up);
        }
        if (aVar.Uq != null && !aVar.Uq.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "systemVersion", aVar.Uq);
        }
        if (aVar.Ur != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "osApi", aVar.Ur);
        }
        if (aVar.Us != null && !aVar.Us.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "language", aVar.Us);
        }
        if (aVar.Ut != null && !aVar.Ut.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "locale", aVar.Ut);
        }
        if (aVar.Uu != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenWidth", aVar.Uu);
        }
        if (aVar.Uv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenHeight", aVar.Uv);
        }
        if (aVar.Uw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "statusBarHeight", aVar.Uw);
        }
        if (aVar.Ux != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "titleBarHeight", aVar.Ux);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((w.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((w.a) bVar, jSONObject);
    }
}
