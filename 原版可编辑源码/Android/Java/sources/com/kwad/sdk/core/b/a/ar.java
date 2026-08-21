package com.kwad.sdk.core.b.a;

import android.support.v4.app.NotificationCompat;
import com.kwad.components.core.webview.jshandler.aj;
import org.json.JSONObject;

public final class ar implements com.kwad.sdk.core.d<aj.a> {
    private static void a(aj.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.Vf = jSONObject.optDouble(NotificationCompat.CATEGORY_PROGRESS);
        aVar.status = jSONObject.optInt("status");
    }

    private static JSONObject b(aj.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.Vf != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, NotificationCompat.CATEGORY_PROGRESS, aVar.Vf);
        }
        if (aVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", aVar.status);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((aj.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((aj.a) bVar, jSONObject);
    }
}
