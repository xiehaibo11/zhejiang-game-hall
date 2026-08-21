package com.kwad.sdk.core.b.a;

import com.kwad.sdk.m.k;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ig implements com.kwad.sdk.core.d<k.a.C0226a> {
    private static void a(k.a.C0226a c0226a, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        c0226a.aMN = jSONObject.optString("s_cn");
        if (c0226a.aMN == JSONObject.NULL) {
            c0226a.aMN = "";
        }
        c0226a.aMO = jSONObject.optString("s_mn");
        if (c0226a.aMO == JSONObject.NULL) {
            c0226a.aMO = "";
        }
    }

    private static JSONObject b(k.a.C0226a c0226a, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (c0226a.aMN != null && !c0226a.aMN.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "s_cn", c0226a.aMN);
        }
        if (c0226a.aMO != null && !c0226a.aMO.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "s_mn", c0226a.aMO);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((k.a.C0226a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((k.a.C0226a) bVar, jSONObject);
    }
}
