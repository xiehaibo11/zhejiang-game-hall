package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.e;
import org.json.JSONObject;

public final class dt implements com.kwad.sdk.core.d<e.b> {
    private static void a(e.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.Ty = jSONObject.optInt("playableSrc");
        bVar.Tz = jSONObject.optInt("isMiddleEnd");
        bVar.KR = jSONObject.optInt("adType");
    }

    private static JSONObject b(e.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.Ty != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "playableSrc", bVar.Ty);
        }
        if (bVar.Tz != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isMiddleEnd", bVar.Tz);
        }
        if (bVar.KR != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adType", bVar.KR);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((e.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((e.b) bVar, jSONObject);
    }
}
