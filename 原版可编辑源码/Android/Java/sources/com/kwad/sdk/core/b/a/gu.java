package com.kwad.sdk.core.b.a;

import com.kwad.sdk.ranger.d;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class gu implements com.kwad.sdk.core.d<com.kwad.sdk.ranger.d> {
    private static void a(com.kwad.sdk.ranger.d dVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        dVar.aGF = jSONObject.optLong("funcSwitch");
        dVar.aGG = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("urlList");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                dVar.aGG.add((String) jSONArrayOptJSONArray.opt(i));
            }
        }
        dVar.aGH = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("actConfigList");
        if (jSONArrayOptJSONArray2 != null) {
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                d.a aVar = new d.a();
                aVar.parseJson(jSONArrayOptJSONArray2.optJSONObject(i2));
                dVar.aGH.add(aVar);
            }
        }
        dVar.aGI = jSONObject.optLong("byteCount");
        dVar.aGJ = jSONObject.optDouble("sampleRate");
        dVar.aGK = new ArrayList();
        JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("anchorNodeList");
        if (jSONArrayOptJSONArray3 != null) {
            for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                com.kwad.sdk.ranger.a.a aVar2 = new com.kwad.sdk.ranger.a.a();
                aVar2.parseJson(jSONArrayOptJSONArray3.optJSONObject(i3));
                dVar.aGK.add(aVar2);
            }
        }
    }

    private static JSONObject b(com.kwad.sdk.ranger.d dVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (dVar.aGF != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "funcSwitch", dVar.aGF);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "urlList", dVar.aGG);
        com.kwad.sdk.utils.t.putValue(jSONObject, "actConfigList", dVar.aGH);
        if (dVar.aGI != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "byteCount", dVar.aGI);
        }
        if (dVar.aGJ != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sampleRate", dVar.aGJ);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "anchorNodeList", dVar.aGK);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.ranger.d) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.ranger.d) bVar, jSONObject);
    }
}
