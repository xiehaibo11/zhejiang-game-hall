package com.kwad.sdk.core.b.a;

import com.kwad.sdk.contentalliance.coupon.model.ActivityInfo;
import org.json.JSONObject;

public final class f implements com.kwad.sdk.core.d<ActivityInfo> {
    private static void a(ActivityInfo activityInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        activityInfo.actTypeId = jSONObject.optInt("actTypeId");
        activityInfo.sceneTypeId = jSONObject.optInt("sceneTypeId");
    }

    private static JSONObject b(ActivityInfo activityInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (activityInfo.actTypeId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "actTypeId", activityInfo.actTypeId);
        }
        if (activityInfo.sceneTypeId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "sceneTypeId", activityInfo.sceneTypeId);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((ActivityInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((ActivityInfo) bVar, jSONObject);
    }
}
