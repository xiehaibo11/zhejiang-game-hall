package com.kwad.sdk.core.b.a;

import cz.msebera.android.httpclient.client.cache.HeaderConstants;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gc implements com.kwad.sdk.core.d<com.kwad.sdk.h.a.b> {
    private static void a(com.kwad.sdk.h.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.aCb = jSONObject.optString("packageId");
        if (bVar.aCb == JSONObject.NULL) {
            bVar.aCb = "";
        }
        bVar.aCc = jSONObject.optString("zipFileName");
        if (bVar.aCc == JSONObject.NULL) {
            bVar.aCc = "";
        }
        bVar.aCd = jSONObject.optString("zipPath");
        if (bVar.aCd == JSONObject.NULL) {
            bVar.aCd = "";
        }
        bVar.packageUrl = jSONObject.optString("packageUrl");
        if (bVar.packageUrl == JSONObject.NULL) {
            bVar.packageUrl = "";
        }
        bVar.version = jSONObject.optString("version");
        if (bVar.version == JSONObject.NULL) {
            bVar.version = "";
        }
        bVar.agi = jSONObject.optString("checksum");
        if (bVar.agi == JSONObject.NULL) {
            bVar.agi = "";
        }
        bVar.loadType = jSONObject.optInt("loadType");
        bVar.packageType = jSONObject.optInt("packageType");
        bVar.aCf = jSONObject.optBoolean(HeaderConstants.PUBLIC);
    }

    private static JSONObject b(com.kwad.sdk.h.a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.aCb != null && !bVar.aCb.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "packageId", bVar.aCb);
        }
        if (bVar.aCc != null && !bVar.aCc.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "zipFileName", bVar.aCc);
        }
        if (bVar.aCd != null && !bVar.aCd.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "zipPath", bVar.aCd);
        }
        if (bVar.packageUrl != null && !bVar.packageUrl.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "packageUrl", bVar.packageUrl);
        }
        if (bVar.version != null && !bVar.version.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "version", bVar.version);
        }
        if (bVar.agi != null && !bVar.agi.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "checksum", bVar.agi);
        }
        if (bVar.loadType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "loadType", bVar.loadType);
        }
        if (bVar.packageType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "packageType", bVar.packageType);
        }
        if (bVar.aCf) {
            com.kwad.sdk.utils.t.putValue(jSONObject, HeaderConstants.PUBLIC, bVar.aCf);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.h.a.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.h.a.b) bVar, jSONObject);
    }
}
