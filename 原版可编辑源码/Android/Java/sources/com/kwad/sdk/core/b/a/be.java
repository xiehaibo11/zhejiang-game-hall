package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class be implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.block.c> {
    private static void a(com.kwad.sdk.crash.online.monitor.block.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        cVar.aAL = jSONObject.optString("printerName");
        if (cVar.aAL == JSONObject.NULL) {
            cVar.aAL = "";
        }
        cVar.errorMsg = jSONObject.optString("errorMsg");
        if (cVar.errorMsg == JSONObject.NULL) {
            cVar.errorMsg = "";
        }
        cVar.aAM = jSONObject.optBoolean("isDisable");
        cVar.aAN = jSONObject.optBoolean("hasMatrix");
    }

    private static JSONObject b(com.kwad.sdk.crash.online.monitor.block.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (cVar.aAL != null && !cVar.aAL.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "printerName", cVar.aAL);
        }
        if (cVar.errorMsg != null && !cVar.errorMsg.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "errorMsg", cVar.errorMsg);
        }
        if (cVar.aAM) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isDisable", cVar.aAM);
        }
        if (cVar.aAN) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "hasMatrix", cVar.aAN);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.crash.online.monitor.block.c) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.crash.online.monitor.block.c) bVar, jSONObject);
    }
}
