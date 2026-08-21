package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdMatrixInfo;
import org.json.JSONObject;

public final class an implements com.kwad.sdk.core.d<AdMatrixInfo.AggregationCardInfo> {
    private static void a(AdMatrixInfo.AggregationCardInfo aggregationCardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        aggregationCardInfo.changeTime = jSONObject.optInt("changeTime");
        aggregationCardInfo.maxTimesPerDay = jSONObject.optInt("maxTimesPerDay");
        aggregationCardInfo.intervalTime = jSONObject.optLong("intervalTime", new Long("1200").longValue());
    }

    private static JSONObject b(AdMatrixInfo.AggregationCardInfo aggregationCardInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (aggregationCardInfo.changeTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "changeTime", aggregationCardInfo.changeTime);
        }
        if (aggregationCardInfo.maxTimesPerDay != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "maxTimesPerDay", aggregationCardInfo.maxTimesPerDay);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "intervalTime", aggregationCardInfo.intervalTime);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdMatrixInfo.AggregationCardInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdMatrixInfo.AggregationCardInfo) bVar, jSONObject);
    }
}
