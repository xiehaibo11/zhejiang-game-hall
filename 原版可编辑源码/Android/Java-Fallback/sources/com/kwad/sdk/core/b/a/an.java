package com.kwad.sdk.core.b.a;

public final class an implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdMatrixInfo.AggregationCardInfo> {
    public an() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdMatrixInfo.AggregationCardInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "changeTime"
            int r0 = r4.optInt(r0)
            r3.changeTime = r0
            java.lang.String r0 = "maxTimesPerDay"
            int r0 = r4.optInt(r0)
            r3.maxTimesPerDay = r0
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "1200"
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "intervalTime"
            long r0 = r4.optLong(r2, r0)
            r3.intervalTime = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdMatrixInfo.AggregationCardInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.changeTime
            if (r0 == 0) goto L12
            int r0 = r2.changeTime
            java.lang.String r1 = "changeTime"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.maxTimesPerDay
            if (r0 == 0) goto L1d
            int r0 = r2.maxTimesPerDay
            java.lang.String r1 = "maxTimesPerDay"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            long r0 = r2.intervalTime
            java.lang.String r2 = "intervalTime"
            com.kwad.sdk.utils.t.putValue(r3, r2, r0)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.AggregationCardInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.AggregationCardInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
