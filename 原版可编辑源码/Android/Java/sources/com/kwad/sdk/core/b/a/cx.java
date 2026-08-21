package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class cx implements com.kwad.sdk.core.d<AdStyleInfo.ExposeTagInfo> {
    private static void a(AdStyleInfo.ExposeTagInfo exposeTagInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        exposeTagInfo.text = jSONObject.optString("text");
        if (exposeTagInfo.text == JSONObject.NULL) {
            exposeTagInfo.text = "";
        }
    }

    private static JSONObject b(AdStyleInfo.ExposeTagInfo exposeTagInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (exposeTagInfo.text != null && !exposeTagInfo.text.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "text", exposeTagInfo.text);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.ExposeTagInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.ExposeTagInfo) bVar, jSONObject);
    }
}
