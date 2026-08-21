package com.kwad.sdk.core.b.a;

import org.json.JSONObject;

public final class ip implements com.kwad.sdk.core.d<com.kwad.sdk.core.request.model.f> {
    private static void a(com.kwad.sdk.core.request.model.f fVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        fVar.adStyle = jSONObject.optInt("adStyle");
        fVar.taskType = jSONObject.optInt("taskType");
        fVar.count = jSONObject.optInt("count");
        fVar.auw = jSONObject.optLong("lastModifiedTime");
    }

    private static JSONObject b(com.kwad.sdk.core.request.model.f fVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (fVar.adStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adStyle", fVar.adStyle);
        }
        if (fVar.taskType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "taskType", fVar.taskType);
        }
        if (fVar.count != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "count", fVar.count);
        }
        if (fVar.auw != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "lastModifiedTime", fVar.auw);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((com.kwad.sdk.core.request.model.f) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((com.kwad.sdk.core.request.model.f) bVar, jSONObject);
    }
}
