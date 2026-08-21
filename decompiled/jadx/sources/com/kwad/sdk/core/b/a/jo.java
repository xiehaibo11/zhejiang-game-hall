package com.kwad.sdk.core.b.a;

import com.kwad.sdk.m.k;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class jo implements com.kwad.sdk.core.d<k.a> {
    private static void a(k.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aML = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("c_cns");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                aVar.aML.add((String) jSONArrayOptJSONArray.opt(i));
            }
        }
        aVar.aMM = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("s_cns");
        if (jSONArrayOptJSONArray2 != null) {
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                k.a.C0226a c0226a = new k.a.C0226a();
                c0226a.parseJson(jSONArrayOptJSONArray2.optJSONObject(i2));
                aVar.aMM.add(c0226a);
            }
        }
    }

    private static JSONObject b(k.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "c_cns", aVar.aML);
        com.kwad.sdk.utils.t.putValue(jSONObject, "s_cns", aVar.aMM);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((k.a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((k.a) bVar, jSONObject);
    }
}
