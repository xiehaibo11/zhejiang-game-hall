package com.kwad.sdk.core.b.a;

import android.support.v4.app.NotificationCompat;
import com.kwad.components.core.webview.jshandler.h;
import org.json.JSONObject;

public final class ek implements com.kwad.sdk.core.d<h.b> {
    private static void a(h.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.status = jSONObject.optInt("status");
        bVar.progress = jSONObject.optInt(NotificationCompat.CATEGORY_PROGRESS);
    }

    private static JSONObject b(h.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", bVar.status);
        }
        if (bVar.progress != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, NotificationCompat.CATEGORY_PROGRESS, bVar.progress);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((h.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((h.b) bVar, jSONObject);
    }
}
