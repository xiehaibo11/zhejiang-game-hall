package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.webview.d.a;
import org.json.JSONObject;

public final class dy implements com.kwad.sdk.core.d<a.a> {
    private static void a(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.Uh = jSONObject.optString("SDKVersion");
        if (aVar.Uh == JSONObject.NULL) {
            aVar.Uh = "";
        }
        aVar.Ui = jSONObject.optInt("SDKVersionCode");
        aVar.asl = jSONObject.optString("tkVersion");
        if (aVar.asl == JSONObject.NULL) {
            aVar.asl = "";
        }
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
        aVar.ayW = jSONObject.optString("globalId");
        if (aVar.ayW == JSONObject.NULL) {
            aVar.ayW = "";
        }
        aVar.aua = jSONObject.optString("eGid");
        if (aVar.aua == JSONObject.NULL) {
            aVar.aua = "";
        }
        aVar.atZ = jSONObject.optString("deviceSig");
        if (aVar.atZ == JSONObject.NULL) {
            aVar.atZ = "";
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
        aVar.ayX = jSONObject.optString("uuid");
        if (aVar.ayX == JSONObject.NULL) {
            aVar.ayX = "";
        }
        aVar.ayY = jSONObject.optBoolean("isDynamic");
        aVar.Uu = jSONObject.optInt("screenWidth");
        aVar.Uv = jSONObject.optInt("screenHeight");
        aVar.amD = jSONObject.optString("imei");
        if (aVar.amD == JSONObject.NULL) {
            aVar.amD = "";
        }
        aVar.amE = jSONObject.optString("oaid");
        if (aVar.amE == JSONObject.NULL) {
            aVar.amE = "";
        }
        aVar.atU = jSONObject.optString("androidId");
        if (aVar.atU == JSONObject.NULL) {
            aVar.atU = "";
        }
        aVar.aun = jSONObject.optString("mac");
        if (aVar.aun == JSONObject.NULL) {
            aVar.aun = "";
        }
        aVar.Uw = jSONObject.optInt("statusBarHeight");
        aVar.Ux = jSONObject.optInt("titleBarHeight");
        aVar.ayZ = jSONObject.optString("bridgeVersion");
        if (aVar.ayZ == JSONObject.NULL) {
            aVar.ayZ = "";
        }
    }

    private static JSONObject b(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.Uh != null && !aVar.Uh.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "SDKVersion", aVar.Uh);
        }
        if (aVar.Ui != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "SDKVersionCode", aVar.Ui);
        }
        if (aVar.asl != null && !aVar.asl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "tkVersion", aVar.asl);
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
        if (aVar.ayW != null && !aVar.ayW.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "globalId", aVar.ayW);
        }
        if (aVar.aua != null && !aVar.aua.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "eGid", aVar.aua);
        }
        if (aVar.atZ != null && !aVar.atZ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceSig", aVar.atZ);
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
        if (aVar.ayX != null && !aVar.ayX.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "uuid", aVar.ayX);
        }
        if (aVar.ayY) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isDynamic", aVar.ayY);
        }
        if (aVar.Uu != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenWidth", aVar.Uu);
        }
        if (aVar.Uv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenHeight", aVar.Uv);
        }
        if (aVar.amD != null && !aVar.amD.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "imei", aVar.amD);
        }
        if (aVar.amE != null && !aVar.amE.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "oaid", aVar.amE);
        }
        if (aVar.atU != null && !aVar.atU.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "androidId", aVar.atU);
        }
        if (aVar.aun != null && !aVar.aun.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mac", aVar.aun);
        }
        if (aVar.Uw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "statusBarHeight", aVar.Uw);
        }
        if (aVar.Ux != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "titleBarHeight", aVar.Ux);
        }
        if (aVar.ayZ != null && !aVar.ayZ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "bridgeVersion", aVar.ayZ);
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
