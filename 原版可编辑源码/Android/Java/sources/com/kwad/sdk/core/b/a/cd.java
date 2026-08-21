package com.kwad.sdk.core.b.a;

import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class cd implements com.kwad.sdk.core.d<com.kwad.sdk.crash.a> {
    private static void a(com.kwad.sdk.crash.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.azn = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("appIdList");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                aVar.azn.add((String) jSONArrayOptJSONArray.opt(i));
            }
        }
        aVar.azo = new ArrayList();
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("sdkVersionList");
        if (jSONArrayOptJSONArray2 != null) {
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                aVar.azo.add((String) jSONArrayOptJSONArray2.opt(i2));
            }
        }
        aVar.azp = new ArrayList();
        JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("stacktraceList");
        if (jSONArrayOptJSONArray3 != null) {
            for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                aVar.azp.add((String) jSONArrayOptJSONArray3.opt(i3));
            }
        }
        aVar.azq = jSONObject.optDouble("crashUploadRate", new Double("1.0").doubleValue());
    }

    private static JSONObject b(com.kwad.sdk.crash.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "appIdList", aVar.azn);
        com.kwad.sdk.utils.t.putValue(jSONObject, "sdkVersionList", aVar.azo);
        com.kwad.sdk.utils.t.putValue(jSONObject, "stacktraceList", aVar.azp);
        com.kwad.sdk.utils.t.putValue(jSONObject, "crashUploadRate", aVar.azq);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.crash.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.crash.a) bVar, jSONObject);
    }
}
