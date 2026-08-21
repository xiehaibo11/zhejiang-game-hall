package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.y;
import com.vivo.push.PushClientConstants;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class jc implements com.kwad.sdk.core.d<y.a> {
    private static void a(y.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.type = jSONObject.optInt("type");
        aVar.appName = jSONObject.optString("appName");
        if (aVar.appName == JSONObject.NULL) {
            aVar.appName = "";
        }
        aVar.UA = jSONObject.optString(PushClientConstants.TAG_PKG_NAME);
        if (aVar.UA == JSONObject.NULL) {
            aVar.UA = "";
        }
        aVar.version = jSONObject.optString("version");
        if (aVar.version == JSONObject.NULL) {
            aVar.version = "";
        }
        aVar.versionCode = jSONObject.optInt("versionCode");
        aVar.UB = jSONObject.optInt("appSize");
        aVar.UC = jSONObject.optString("md5");
        if (aVar.UC == JSONObject.NULL) {
            aVar.UC = "";
        }
        aVar.url = jSONObject.optString("url");
        if (aVar.url == JSONObject.NULL) {
            aVar.url = "";
        }
        aVar.UD = jSONObject.optString("appLink");
        if (aVar.UD == JSONObject.NULL) {
            aVar.UD = "";
        }
        aVar.icon = jSONObject.optString("icon");
        if (aVar.icon == JSONObject.NULL) {
            aVar.icon = "";
        }
        aVar.qm = jSONObject.optString("desc");
        if (aVar.qm == JSONObject.NULL) {
            aVar.qm = "";
        }
        aVar.appId = jSONObject.optString(com.tkay.expressad.videocommon.e.b.u);
        if (aVar.appId == JSONObject.NULL) {
            aVar.appId = "";
        }
        aVar.UE = jSONObject.optString("marketUri");
        if (aVar.UE == JSONObject.NULL) {
            aVar.UE = "";
        }
        aVar.UF = jSONObject.optBoolean("disableLandingPageDeepLink");
        aVar.UG = jSONObject.optBoolean("isLandscapeSupported");
        aVar.UH = jSONObject.optBoolean("isFromLive");
    }

    private static JSONObject b(y.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.type != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "type", aVar.type);
        }
        if (aVar.appName != null && !aVar.appName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appName", aVar.appName);
        }
        if (aVar.UA != null && !aVar.UA.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, PushClientConstants.TAG_PKG_NAME, aVar.UA);
        }
        if (aVar.version != null && !aVar.version.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "version", aVar.version);
        }
        if (aVar.versionCode != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "versionCode", aVar.versionCode);
        }
        if (aVar.UB != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appSize", aVar.UB);
        }
        if (aVar.UC != null && !aVar.UC.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "md5", aVar.UC);
        }
        if (aVar.url != null && !aVar.url.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "url", aVar.url);
        }
        if (aVar.UD != null && !aVar.UD.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "appLink", aVar.UD);
        }
        if (aVar.icon != null && !aVar.icon.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "icon", aVar.icon);
        }
        if (aVar.qm != null && !aVar.qm.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "desc", aVar.qm);
        }
        if (aVar.appId != null && !aVar.appId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, com.tkay.expressad.videocommon.e.b.u, aVar.appId);
        }
        if (aVar.UE != null && !aVar.UE.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "marketUri", aVar.UE);
        }
        if (aVar.UF) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "disableLandingPageDeepLink", aVar.UF);
        }
        if (aVar.UG) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isLandscapeSupported", aVar.UG);
        }
        if (aVar.UH) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isFromLive", aVar.UH);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((y.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((y.a) bVar, jSONObject);
    }
}
