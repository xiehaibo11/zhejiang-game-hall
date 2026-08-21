package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.webview.d.a;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class dy implements com.kwad.sdk.core.d<a.C0218a> {
    private static void a(a.C0218a c0218a, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        c0218a.Uh = jSONObject.optString("SDKVersion");
        if (c0218a.Uh == JSONObject.NULL) {
            c0218a.Uh = "";
        }
        c0218a.Ui = jSONObject.optInt("SDKVersionCode");
        c0218a.asl = jSONObject.optString("tkVersion");
        if (c0218a.asl == JSONObject.NULL) {
            c0218a.asl = "";
        }
        c0218a.Uj = jSONObject.optString("sdkApiVersion");
        if (c0218a.Uj == JSONObject.NULL) {
            c0218a.Uj = "";
        }
        c0218a.Uk = jSONObject.optInt("sdkApiVersionCode");
        c0218a.Ul = jSONObject.optInt("sdkType");
        c0218a.appVersion = jSONObject.optString("appVersion");
        if (c0218a.appVersion == JSONObject.NULL) {
            c0218a.appVersion = "";
        }
        c0218a.appName = jSONObject.optString("appName");
        if (c0218a.appName == JSONObject.NULL) {
            c0218a.appName = "";
        }
        c0218a.appId = jSONObject.optString(com.tkay.expressad.videocommon.e.b.u);
        if (c0218a.appId == JSONObject.NULL) {
            c0218a.appId = "";
        }
        c0218a.ayW = jSONObject.optString("globalId");
        if (c0218a.ayW == JSONObject.NULL) {
            c0218a.ayW = "";
        }
        c0218a.aua = jSONObject.optString("eGid");
        if (c0218a.aua == JSONObject.NULL) {
            c0218a.aua = "";
        }
        c0218a.atZ = jSONObject.optString("deviceSig");
        if (c0218a.atZ == JSONObject.NULL) {
            c0218a.atZ = "";
        }
        c0218a.Um = jSONObject.optString("networkType");
        if (c0218a.Um == JSONObject.NULL) {
            c0218a.Um = "";
        }
        c0218a.Un = jSONObject.optString("manufacturer");
        if (c0218a.Un == JSONObject.NULL) {
            c0218a.Un = "";
        }
        c0218a.model = jSONObject.optString("model");
        if (c0218a.model == JSONObject.NULL) {
            c0218a.model = "";
        }
        c0218a.Uo = jSONObject.optString("deviceBrand");
        if (c0218a.Uo == JSONObject.NULL) {
            c0218a.Uo = "";
        }
        c0218a.Up = jSONObject.optInt("osType");
        c0218a.Uq = jSONObject.optString("systemVersion");
        if (c0218a.Uq == JSONObject.NULL) {
            c0218a.Uq = "";
        }
        c0218a.Ur = jSONObject.optInt("osApi");
        c0218a.Us = jSONObject.optString("language");
        if (c0218a.Us == JSONObject.NULL) {
            c0218a.Us = "";
        }
        c0218a.Ut = jSONObject.optString("locale");
        if (c0218a.Ut == JSONObject.NULL) {
            c0218a.Ut = "";
        }
        c0218a.ayX = jSONObject.optString("uuid");
        if (c0218a.ayX == JSONObject.NULL) {
            c0218a.ayX = "";
        }
        c0218a.ayY = jSONObject.optBoolean("isDynamic");
        c0218a.Uu = jSONObject.optInt("screenWidth");
        c0218a.Uv = jSONObject.optInt("screenHeight");
        c0218a.amD = jSONObject.optString("imei");
        if (c0218a.amD == JSONObject.NULL) {
            c0218a.amD = "";
        }
        c0218a.amE = jSONObject.optString("oaid");
        if (c0218a.amE == JSONObject.NULL) {
            c0218a.amE = "";
        }
        c0218a.atU = jSONObject.optString("androidId");
        if (c0218a.atU == JSONObject.NULL) {
            c0218a.atU = "";
        }
        c0218a.aun = jSONObject.optString("mac");
        if (c0218a.aun == JSONObject.NULL) {
            c0218a.aun = "";
        }
        c0218a.Uw = jSONObject.optInt("statusBarHeight");
        c0218a.Ux = jSONObject.optInt("titleBarHeight");
        c0218a.ayZ = jSONObject.optString("bridgeVersion");
        if (c0218a.ayZ == JSONObject.NULL) {
            c0218a.ayZ = "";
        }
    }

    private static JSONObject b(a.C0218a c0218a, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (c0218a.Uh != null && !c0218a.Uh.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "SDKVersion", c0218a.Uh);
        }
        if (c0218a.Ui != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "SDKVersionCode", c0218a.Ui);
        }
        if (c0218a.asl != null && !c0218a.asl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "tkVersion", c0218a.asl);
        }
        if (c0218a.Uj != null && !c0218a.Uj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkApiVersion", c0218a.Uj);
        }
        if (c0218a.Uk != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkApiVersionCode", c0218a.Uk);
        }
        if (c0218a.Ul != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sdkType", c0218a.Ul);
        }
        if (c0218a.appVersion != null && !c0218a.appVersion.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appVersion", c0218a.appVersion);
        }
        if (c0218a.appName != null && !c0218a.appName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appName", c0218a.appName);
        }
        if (c0218a.appId != null && !c0218a.appId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.videocommon.e.b.u, c0218a.appId);
        }
        if (c0218a.ayW != null && !c0218a.ayW.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "globalId", c0218a.ayW);
        }
        if (c0218a.aua != null && !c0218a.aua.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "eGid", c0218a.aua);
        }
        if (c0218a.atZ != null && !c0218a.atZ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceSig", c0218a.atZ);
        }
        if (c0218a.Um != null && !c0218a.Um.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "networkType", c0218a.Um);
        }
        if (c0218a.Un != null && !c0218a.Un.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "manufacturer", c0218a.Un);
        }
        if (c0218a.model != null && !c0218a.model.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "model", c0218a.model);
        }
        if (c0218a.Uo != null && !c0218a.Uo.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceBrand", c0218a.Uo);
        }
        if (c0218a.Up != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "osType", c0218a.Up);
        }
        if (c0218a.Uq != null && !c0218a.Uq.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "systemVersion", c0218a.Uq);
        }
        if (c0218a.Ur != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "osApi", c0218a.Ur);
        }
        if (c0218a.Us != null && !c0218a.Us.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "language", c0218a.Us);
        }
        if (c0218a.Ut != null && !c0218a.Ut.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "locale", c0218a.Ut);
        }
        if (c0218a.ayX != null && !c0218a.ayX.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "uuid", c0218a.ayX);
        }
        if (c0218a.ayY) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isDynamic", c0218a.ayY);
        }
        if (c0218a.Uu != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenWidth", c0218a.Uu);
        }
        if (c0218a.Uv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenHeight", c0218a.Uv);
        }
        if (c0218a.amD != null && !c0218a.amD.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "imei", c0218a.amD);
        }
        if (c0218a.amE != null && !c0218a.amE.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "oaid", c0218a.amE);
        }
        if (c0218a.atU != null && !c0218a.atU.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "androidId", c0218a.atU);
        }
        if (c0218a.aun != null && !c0218a.aun.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mac", c0218a.aun);
        }
        if (c0218a.Uw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "statusBarHeight", c0218a.Uw);
        }
        if (c0218a.Ux != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "titleBarHeight", c0218a.Ux);
        }
        if (c0218a.ayZ != null && !c0218a.ayZ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "bridgeVersion", c0218a.ayZ);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.C0218a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.C0218a) bVar, jSONObject);
    }
}
