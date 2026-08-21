package com.kwad.sdk.core.b.a;

import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class hg implements com.kwad.sdk.core.d<AdMatrixInfo.RotateDegreeInfo> {
    private static void a(AdMatrixInfo.RotateDegreeInfo rotateDegreeInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        rotateDegreeInfo.rotateDegree = jSONObject.optInt("rotateDegree");
        rotateDegreeInfo.direction = jSONObject.optInt(HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION);
    }

    private static JSONObject b(AdMatrixInfo.RotateDegreeInfo rotateDegreeInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (rotateDegreeInfo.rotateDegree != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "rotateDegree", rotateDegreeInfo.rotateDegree);
        }
        if (rotateDegreeInfo.direction != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION, rotateDegreeInfo.direction);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.RotateDegreeInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.RotateDegreeInfo) bVar, jSONObject);
    }
}
