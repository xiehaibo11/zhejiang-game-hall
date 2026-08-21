package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class cr implements com.kwad.sdk.core.d<AdStyleInfo.PlayDetailInfo.DrawAdInfo> {
    private static void a(AdStyleInfo.PlayDetailInfo.DrawAdInfo drawAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        drawAdInfo.forcedWatch = jSONObject.optBoolean("forcedWatch");
    }

    private static JSONObject b(AdStyleInfo.PlayDetailInfo.DrawAdInfo drawAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (drawAdInfo.forcedWatch) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "forcedWatch", drawAdInfo.forcedWatch);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.PlayDetailInfo.DrawAdInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.PlayDetailInfo.DrawAdInfo) bVar, jSONObject);
    }
}
