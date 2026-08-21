package com.kwad.sdk.core.b.a;

import android.support.v4.app.NotificationCompat;
import com.kwad.components.core.webview.a.a;
import org.json.JSONObject;

public final class cp implements com.kwad.sdk.core.d<a.b> {
    private static void a(a.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.status = jSONObject.optInt("status");
        bVar.progress = jSONObject.optInt(NotificationCompat.CATEGORY_PROGRESS);
    }

    private static JSONObject b(a.b bVar, JSONObject jSONObject) {
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
        a((a.b) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((a.b) bVar, jSONObject);
    }
}
