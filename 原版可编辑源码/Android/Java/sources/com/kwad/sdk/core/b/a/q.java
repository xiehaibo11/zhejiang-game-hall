package com.kwad.sdk.core.b.a;

import com.kwad.components.core.webview.jshandler.n;
import com.qihoo360.replugin.RePlugin;
import org.json.JSONObject;

public final class q implements com.kwad.sdk.core.d<n.a> {
    private static void a(n.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.creativeId = jSONObject.optLong("creativeId", new Long(RePlugin.PROCESS_UI).longValue());
        aVar.adStyle = jSONObject.optInt("adStyle", new Integer(RePlugin.PROCESS_UI).intValue());
    }

    private static JSONObject b(n.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "creativeId", aVar.creativeId);
        com.kwad.sdk.utils.t.putValue(jSONObject, "adStyle", aVar.adStyle);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((n.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((n.a) bVar, jSONObject);
    }
}
