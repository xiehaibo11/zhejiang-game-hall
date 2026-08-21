package com.kwad.sdk.core.b.a;

import android.support.v4.app.NotificationCompat;
import com.kwad.components.core.webview.jshandler.ae;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class eu implements com.kwad.sdk.core.d<ae.b> {
    private static void a(ae.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        bVar.Vf = jSONObject.optDouble(NotificationCompat.CATEGORY_PROGRESS);
        bVar.status = jSONObject.optInt("status");
        bVar.totalBytes = jSONObject.optLong(DBDefinition.TOTAL_BYTES);
    }

    private static JSONObject b(ae.b bVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (bVar.Vf != 0.0d) {
            com.kwad.sdk.utils.t.putValue(jSONObject, NotificationCompat.CATEGORY_PROGRESS, bVar.Vf);
        }
        if (bVar.status != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "status", bVar.status);
        }
        if (bVar.totalBytes != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, DBDefinition.TOTAL_BYTES, bVar.totalBytes);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ae.b) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ae.b) bVar, jSONObject);
    }
}
