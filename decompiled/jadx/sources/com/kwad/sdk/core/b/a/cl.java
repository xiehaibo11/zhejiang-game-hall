package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class cl implements com.kwad.sdk.core.d<com.kwad.sdk.core.request.model.b> {
    private static void a(com.kwad.sdk.core.request.model.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.amD = jSONObject.optString("imei");
        if (bVar.amD == JSONObject.NULL) {
            bVar.amD = "";
        }
        bVar.atM = jSONObject.optString("imei1");
        if (bVar.atM == JSONObject.NULL) {
            bVar.atM = "";
        }
        bVar.atN = jSONObject.optString("imei2");
        if (bVar.atN == JSONObject.NULL) {
            bVar.atN = "";
        }
        bVar.atO = jSONObject.optString("meid");
        if (bVar.atO == JSONObject.NULL) {
            bVar.atO = "";
        }
        bVar.amE = jSONObject.optString("oaid");
        if (bVar.amE == JSONObject.NULL) {
            bVar.amE = "";
        }
        bVar.atP = jSONObject.optString("appMkt");
        if (bVar.atP == JSONObject.NULL) {
            bVar.atP = "";
        }
        bVar.atQ = jSONObject.optString("appMktParam");
        if (bVar.atQ == JSONObject.NULL) {
            bVar.atQ = "";
        }
        bVar.Qb = jSONObject.optString("romName");
        if (bVar.Qb == JSONObject.NULL) {
            bVar.Qb = "";
        }
        bVar.Up = jSONObject.optInt("osType");
        bVar.Ur = jSONObject.optInt("osApi");
        bVar.atR = jSONObject.optString("osVersion");
        if (bVar.atR == JSONObject.NULL) {
            bVar.atR = "";
        }
        bVar.Us = jSONObject.optString("language");
        if (bVar.Us == JSONObject.NULL) {
            bVar.Us = "";
        }
        bVar.Uu = jSONObject.optInt("screenWidth");
        bVar.Uv = jSONObject.optInt("screenHeight");
        bVar.atS = jSONObject.optInt("deviceWidth");
        bVar.atT = jSONObject.optInt("deviceHeight");
        bVar.atU = jSONObject.optString("androidId");
        if (bVar.atU == JSONObject.NULL) {
            bVar.atU = "";
        }
        bVar.atV = jSONObject.optString("deviceId");
        if (bVar.atV == JSONObject.NULL) {
            bVar.atV = "";
        }
        bVar.atW = jSONObject.optString("deviceVendor");
        if (bVar.atW == JSONObject.NULL) {
            bVar.atW = "";
        }
        bVar.atX = jSONObject.optInt("platform");
        bVar.atY = jSONObject.optString("deviceModel");
        if (bVar.atY == JSONObject.NULL) {
            bVar.atY = "";
        }
        bVar.Uo = jSONObject.optString("deviceBrand");
        if (bVar.Uo == JSONObject.NULL) {
            bVar.Uo = "";
        }
        bVar.atZ = jSONObject.optString("deviceSig");
        if (bVar.atZ == JSONObject.NULL) {
            bVar.atZ = "";
        }
        bVar.aua = jSONObject.optString("eGid");
        if (bVar.aua == JSONObject.NULL) {
            bVar.aua = "";
        }
        bVar.aub = jSONObject.optJSONArray("appPackageName");
        bVar.auc = jSONObject.optString("arch");
        if (bVar.auc == JSONObject.NULL) {
            bVar.auc = "";
        }
        bVar.aud = jSONObject.optInt("screenDirection");
        bVar.aue = jSONObject.optString("kwaiVersionName");
        if (bVar.aue == JSONObject.NULL) {
            bVar.aue = "";
        }
        bVar.auf = jSONObject.optString("kwaiNebulaVersionName");
        if (bVar.auf == JSONObject.NULL) {
            bVar.auf = "";
        }
        bVar.aug = jSONObject.optString("wechatVersionName");
        if (bVar.aug == JSONObject.NULL) {
            bVar.aug = "";
        }
        bVar.auh = jSONObject.optLong("sourceFlag");
        bVar.aui = jSONObject.optString("systemBootTime");
        if (bVar.aui == JSONObject.NULL) {
            bVar.aui = "";
        }
        bVar.auj = jSONObject.optString("systemUpdateTime");
        if (bVar.auj == JSONObject.NULL) {
            bVar.auj = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.core.request.model.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.amD != null && !bVar.amD.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "imei", bVar.amD);
        }
        if (bVar.atM != null && !bVar.atM.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "imei1", bVar.atM);
        }
        if (bVar.atN != null && !bVar.atN.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "imei2", bVar.atN);
        }
        if (bVar.atO != null && !bVar.atO.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "meid", bVar.atO);
        }
        if (bVar.amE != null && !bVar.amE.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "oaid", bVar.amE);
        }
        if (bVar.atP != null && !bVar.atP.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appMkt", bVar.atP);
        }
        if (bVar.atQ != null && !bVar.atQ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appMktParam", bVar.atQ);
        }
        if (bVar.Qb != null && !bVar.Qb.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "romName", bVar.Qb);
        }
        if (bVar.Up != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "osType", bVar.Up);
        }
        if (bVar.Ur != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "osApi", bVar.Ur);
        }
        if (bVar.atR != null && !bVar.atR.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "osVersion", bVar.atR);
        }
        if (bVar.Us != null && !bVar.Us.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "language", bVar.Us);
        }
        if (bVar.Uu != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenWidth", bVar.Uu);
        }
        if (bVar.Uv != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenHeight", bVar.Uv);
        }
        if (bVar.atS != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceWidth", bVar.atS);
        }
        if (bVar.atT != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceHeight", bVar.atT);
        }
        if (bVar.atU != null && !bVar.atU.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "androidId", bVar.atU);
        }
        if (bVar.atV != null && !bVar.atV.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceId", bVar.atV);
        }
        if (bVar.atW != null && !bVar.atW.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceVendor", bVar.atW);
        }
        if (bVar.atX != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "platform", bVar.atX);
        }
        if (bVar.atY != null && !bVar.atY.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceModel", bVar.atY);
        }
        if (bVar.Uo != null && !bVar.Uo.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceBrand", bVar.Uo);
        }
        if (bVar.atZ != null && !bVar.atZ.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "deviceSig", bVar.atZ);
        }
        if (bVar.aua != null && !bVar.aua.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "eGid", bVar.aua);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "appPackageName", bVar.aub);
        if (bVar.auc != null && !bVar.auc.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "arch", bVar.auc);
        }
        if (bVar.aud != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "screenDirection", bVar.aud);
        }
        if (bVar.aue != null && !bVar.aue.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "kwaiVersionName", bVar.aue);
        }
        if (bVar.auf != null && !bVar.auf.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "kwaiNebulaVersionName", bVar.auf);
        }
        if (bVar.aug != null && !bVar.aug.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "wechatVersionName", bVar.aug);
        }
        if (bVar.auh != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sourceFlag", bVar.auh);
        }
        if (bVar.aui != null && !bVar.aui.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "systemBootTime", bVar.aui);
        }
        if (bVar.auj != null && !bVar.auj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "systemUpdateTime", bVar.auj);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.request.model.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.request.model.b) bVar, jSONObject);
    }
}
