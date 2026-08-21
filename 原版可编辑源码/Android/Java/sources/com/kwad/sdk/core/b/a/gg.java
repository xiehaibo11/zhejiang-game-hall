package com.kwad.sdk.core.b.a;

import com.kwad.sdk.ranger.a.a;
import com.vivo.push.PushClientConstants;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class gg implements com.kwad.sdk.core.d<a.a> {
    private static void a(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.aHh = jSONObject.optString("typeStr");
        if (aVar.aHh == JSONObject.NULL) {
            aVar.aHh = "";
        }
        aVar.aHi = jSONObject.optString("valueStr");
        if (aVar.aHi == JSONObject.NULL) {
            aVar.aHi = "";
        }
        aVar.aHj = jSONObject.optString("listValueType");
        if (aVar.aHj == JSONObject.NULL) {
            aVar.aHj = "";
        }
        aVar.aHk = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("valueStrList");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                aVar.aHk.add((String) jSONArrayOptJSONArray.opt(i));
            }
        }
        aVar.fieldName = jSONObject.optString("fieldName");
        if (aVar.fieldName == JSONObject.NULL) {
            aVar.fieldName = "";
        }
        aVar.className = jSONObject.optString(PushClientConstants.TAG_CLASS_NAME);
        if (aVar.className == JSONObject.NULL) {
            aVar.className = "";
        }
        aVar.aHl = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("childParamList");
        if (jSONArrayOptJSONArray2 != null) {
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                a.a aVar2 = new a.a();
                aVar2.parseJson(jSONArrayOptJSONArray2.optJSONObject(i2));
                aVar.aHl.add(aVar2);
            }
        }
    }

    private static JSONObject b(a.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.aHh != null && !aVar.aHh.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "typeStr", aVar.aHh);
        }
        if (aVar.aHi != null && !aVar.aHi.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "valueStr", aVar.aHi);
        }
        if (aVar.aHj != null && !aVar.aHj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "listValueType", aVar.aHj);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "valueStrList", aVar.aHk);
        if (aVar.fieldName != null && !aVar.fieldName.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "fieldName", aVar.fieldName);
        }
        if (aVar.className != null && !aVar.className.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, PushClientConstants.TAG_CLASS_NAME, aVar.className);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "childParamList", aVar.aHl);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((a.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.a) bVar, jSONObject);
    }
}
