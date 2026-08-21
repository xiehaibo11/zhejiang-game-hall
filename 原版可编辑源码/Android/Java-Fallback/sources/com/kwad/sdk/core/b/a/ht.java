package com.kwad.sdk.core.b.a;

public final class ht implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdProductInfo.SpikeInfo> {
    public ht() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdProductInfo.SpikeInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "endTime"
            long r0 = r3.optLong(r0)
            r2.endTime = r0
            java.lang.String r0 = "soldStock"
            int r0 = r3.optInt(r0)
            r2.soldStock = r0
            java.lang.String r0 = "originalStock"
            int r3 = r3.optInt(r0)
            r2.originalStock = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdProductInfo.SpikeInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            long r0 = r4.endTime
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r4.endTime
            java.lang.String r2 = "endTime"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L16:
            int r0 = r4.soldStock
            if (r0 == 0) goto L21
            int r0 = r4.soldStock
            java.lang.String r1 = "soldStock"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L21:
            int r0 = r4.originalStock
            if (r0 == 0) goto L2c
            int r4 = r4.originalStock
            java.lang.String r0 = "originalStock"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
        L2c:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdProductInfo$SpikeInfo r1 = (com.kwad.sdk.core.response.model.AdProductInfo.SpikeInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdProductInfo$SpikeInfo r1 = (com.kwad.sdk.core.response.model.AdProductInfo.SpikeInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
