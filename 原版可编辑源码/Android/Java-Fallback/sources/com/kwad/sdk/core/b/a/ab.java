package com.kwad.sdk.core.b.a;

public final class ab implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdProductInfo> {
    public ab() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdProductInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "icon"
            java.lang.String r0 = r6.optString(r0)
            r5.icon = r0
            java.lang.String r0 = r5.icon
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r5.icon = r2
        L15:
            java.lang.String r0 = "name"
            java.lang.String r0 = r6.optString(r0)
            r5.name = r0
            java.lang.String r0 = r5.name
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r5.name = r2
        L25:
            java.lang.String r0 = "price"
            java.lang.String r0 = r6.optString(r0)
            r5.price = r0
            java.lang.String r0 = r5.price
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r5.price = r2
        L35:
            java.lang.String r0 = "originPrice"
            java.lang.String r0 = r6.optString(r0)
            r5.originPrice = r0
            java.lang.String r0 = r5.originPrice
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r5.originPrice = r2
        L45:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.couponList = r0
            java.lang.String r0 = "couponList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L6f
            r1 = 0
        L55:
            int r3 = r0.length()
            if (r1 >= r3) goto L6f
            com.kwad.sdk.core.response.model.CouponInfo r3 = new com.kwad.sdk.core.response.model.CouponInfo
            r3.<init>()
            org.json.JSONObject r4 = r0.optJSONObject(r1)
            r3.parseJson(r4)
            java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r4 = r5.couponList
            r4.add(r3)
            int r1 = r1 + 1
            goto L55
        L6f:
            java.lang.String r0 = "volume"
            java.lang.String r0 = r6.optString(r0)
            r5.volume = r0
            java.lang.String r0 = r5.volume
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L7f
            r5.volume = r2
        L7f:
            java.lang.String r0 = "rating"
            java.lang.String r0 = r6.optString(r0)
            r5.rating = r0
            java.lang.String r0 = r5.rating
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8f
            r5.rating = r2
        L8f:
            com.kwad.sdk.core.response.model.AdProductInfo$SpikeInfo r0 = new com.kwad.sdk.core.response.model.AdProductInfo$SpikeInfo
            r0.<init>()
            r5.seckillInfo = r0
            com.kwad.sdk.core.response.model.AdProductInfo$SpikeInfo r5 = r5.seckillInfo
            java.lang.String r0 = "seckillInfo"
            org.json.JSONObject r6 = r6.optJSONObject(r0)
            r5.parseJson(r6)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdProductInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.icon
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.icon
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.icon
            java.lang.String r2 = "icon"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.name
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.name
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.name
            java.lang.String r2 = "name"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.price
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.price
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r3.price
            java.lang.String r2 = "price"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L42:
            java.lang.String r0 = r3.originPrice
            if (r0 == 0) goto L55
            java.lang.String r0 = r3.originPrice
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r3.originPrice
            java.lang.String r2 = "originPrice"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L55:
            java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r0 = r3.couponList
            java.lang.String r2 = "couponList"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            java.lang.String r0 = r3.volume
            if (r0 == 0) goto L6f
            java.lang.String r0 = r3.volume
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6f
            java.lang.String r0 = r3.volume
            java.lang.String r2 = "volume"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L6f:
            java.lang.String r0 = r3.rating
            if (r0 == 0) goto L82
            java.lang.String r0 = r3.rating
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L82
            java.lang.String r0 = r3.rating
            java.lang.String r1 = "rating"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L82:
            com.kwad.sdk.core.response.model.AdProductInfo$SpikeInfo r3 = r3.seckillInfo
            java.lang.String r0 = "seckillInfo"
            com.kwad.sdk.utils.t.a(r4, r0, r3)
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdProductInfo r1 = (com.kwad.sdk.core.response.model.AdProductInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdProductInfo r1 = (com.kwad.sdk.core.response.model.AdProductInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
