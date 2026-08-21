package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class cv implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.m> {
    private static void a(com.kwad.sdk.core.report.m mVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        mVar.ara = jSONObject.optString("log");
        if (mVar.ara == JSONObject.NULL) {
            mVar.ara = "";
        }
    }

    private static JSONObject b(com.kwad.sdk.core.report.m mVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (mVar.ara != null && !mVar.ara.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "log", mVar.ara);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.report.m) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.report.m) bVar, jSONObject);
    }
}
