package com.kwad.sdk.core.b.a;

import com.huawei.hms.push.constant.RemoteMessageConst;
import com.kwad.components.core.webview.jshandler.as;
import org.json.JSONObject;

public final class dz implements com.kwad.sdk.core.d<as.a> {
    private static void a(as.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aVar.visibility = jSONObject.optInt(RemoteMessageConst.Notification.VISIBILITY);
    }

    private static JSONObject b(as.a aVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aVar.visibility != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, RemoteMessageConst.Notification.VISIBILITY, aVar.visibility);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((as.a) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((as.a) bVar, jSONObject);
    }
}
