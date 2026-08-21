package com.kwad.sdk.core.b.a;

import com.kwad.sdk.ranger.a.a;
import com.vivo.push.PushClientConstants;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class gg implements com.kwad.sdk.core.d<a.C0227a> {
    private static void a(a.C0227a c0227a, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        c0227a.aHh = jSONObject.optString("typeStr");
        if (c0227a.aHh == JSONObject.NULL) {
            c0227a.aHh = "";
        }
        c0227a.aHi = jSONObject.optString("valueStr");
        if (c0227a.aHi == JSONObject.NULL) {
            c0227a.aHi = "";
        }
        c0227a.aHj = jSONObject.optString("listValueType");
        if (c0227a.aHj == JSONObject.NULL) {
            c0227a.aHj = "";
        }
        c0227a.aHk = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("valueStrList");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                c0227a.aHk.add((String) jSONArrayOptJSONArray.opt(i));
            }
        }
        c0227a.fieldName = jSONObject.optString("fieldName");
        if (c0227a.fieldName == JSONObject.NULL) {
            c0227a.fieldName = "";
        }
        c0227a.className = jSONObject.optString(PushClientConstants.TAG_CLASS_NAME);
        if (c0227a.className == JSONObject.NULL) {
            c0227a.className = "";
        }
        c0227a.aHl = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("childParamList");
        if (jSONArrayOptJSONArray2 != null) {
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                a.C0227a c0227a2 = new a.C0227a();
                c0227a2.parseJson(jSONArrayOptJSONArray2.optJSONObject(i2));
                c0227a.aHl.add(c0227a2);
            }
        }
    }

    private static JSONObject b(a.C0227a c0227a, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (c0227a.aHh != null && !c0227a.aHh.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "typeStr", c0227a.aHh);
        }
        if (c0227a.aHi != null && !c0227a.aHi.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "valueStr", c0227a.aHi);
        }
        if (c0227a.aHj != null && !c0227a.aHj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "listValueType", c0227a.aHj);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "valueStrList", c0227a.aHk);
        if (c0227a.fieldName != null && !c0227a.fieldName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fieldName", c0227a.fieldName);
        }
        if (c0227a.className != null && !c0227a.className.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, PushClientConstants.TAG_CLASS_NAME, c0227a.className);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "childParamList", c0227a.aHl);
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.C0227a) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.C0227a) bVar, jSONObject);
    }
}
