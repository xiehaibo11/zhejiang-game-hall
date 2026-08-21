package com.kwad.sdk.core.b.a;

import com.kwad.sdk.ranger.a.a;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class io implements com.kwad.sdk.core.d<a.b> {
    private static void a(a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.name = jSONObject.optString("name");
        if (bVar.name == JSONObject.NULL) {
            bVar.name = "";
        }
        bVar.aHo = jSONObject.optBoolean("isStatic");
        bVar.aHp = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("paramList");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                a.C0227a c0227a = new a.C0227a();
                c0227a.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                bVar.aHp.add(c0227a);
            }
        }
    }

    private static JSONObject b(a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.name != null && !bVar.name.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "name", bVar.name);
        }
        if (bVar.aHo) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isStatic", bVar.aHo);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "paramList", bVar.aHp);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.b) bVar, jSONObject);
    }
}
