package com.kwad.sdk.core.b.a;

import com.kwad.sdk.commercial.model.WebCloseStatus;
import org.json.JSONObject;

public final class jk implements com.kwad.sdk.core.d<WebCloseStatus> {
    private static void a(WebCloseStatus webCloseStatus, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        webCloseStatus.interactSuccess = jSONObject.optBoolean("interactSuccess");
        webCloseStatus.closeType = jSONObject.optInt("closeType");
    }

    private static JSONObject b(WebCloseStatus webCloseStatus, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (webCloseStatus.interactSuccess) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "interactSuccess", webCloseStatus.interactSuccess);
        }
        if (webCloseStatus.closeType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "closeType", webCloseStatus.closeType);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((WebCloseStatus) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((WebCloseStatus) bVar, jSONObject);
    }
}
