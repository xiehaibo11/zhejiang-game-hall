package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.c;
import org.json.JSONObject;

public final class dq implements com.kwad.sdk.core.d<c.a> {
    private static void a(c.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.showLiveStatus = jSONObject.optInt("showLiveStatus");
        aVar.showLiveStyle = jSONObject.optInt("showLiveStyle");
    }

    private static JSONObject b(c.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.showLiveStatus != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showLiveStatus", aVar.showLiveStatus);
        }
        if (aVar.showLiveStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showLiveStyle", aVar.showLiveStyle);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((c.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((c.a) bVar, jSONObject);
    }
}
