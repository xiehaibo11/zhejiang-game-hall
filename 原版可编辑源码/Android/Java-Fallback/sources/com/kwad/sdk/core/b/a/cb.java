package com.kwad.sdk.core.b.a;

public final class cb implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.CouponInfo> {
    public cb() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.CouponInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "displayName"
            java.lang.String r0 = r4.optString(r0)
            r3.displayName = r0
            java.lang.String r0 = r3.displayName
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.displayName = r2
        L15:
            java.lang.String r0 = "displayTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.displayTitle = r0
            java.lang.String r0 = r3.displayTitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.displayTitle = r2
        L25:
            java.lang.String r0 = "displayValue"
            java.lang.String r0 = r4.optString(r0)
            r3.displayValue = r0
            java.lang.String r0 = r3.displayValue
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.displayValue = r2
        L35:
            java.lang.String r0 = "displayBase"
            java.lang.String r0 = r4.optString(r0)
            r3.displayBase = r0
            java.lang.String r0 = r3.displayBase
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.displayBase = r2
        L45:
            java.lang.String r0 = "displayType"
            java.lang.String r0 = r4.optString(r0)
            r3.displayType = r0
            java.lang.String r0 = r3.displayType
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.displayType = r2
        L55:
            java.lang.String r0 = "displayActionWords"
            java.lang.String r0 = r4.optString(r0)
            r3.displayActionWords = r0
            java.lang.String r0 = r3.displayActionWords
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r3.displayActionWords = r2
        L65:
            java.lang.String r0 = "displayDiscount"
            java.lang.String r4 = r4.optString(r0)
            r3.displayDiscount = r4
            java.lang.String r4 = r3.displayDiscount
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L75
            r3.displayDiscount = r2
        L75:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.CouponInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.displayName
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.displayName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.displayName
            java.lang.String r2 = "displayName"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.displayTitle
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.displayTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.displayTitle
            java.lang.String r2 = "displayTitle"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            java.lang.String r0 = r3.displayValue
            if (r0 == 0) goto L42
            java.lang.String r0 = r3.displayValue
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r3.displayValue
            java.lang.String r2 = "displayValue"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L42:
            java.lang.String r0 = r3.displayBase
            if (r0 == 0) goto L55
            java.lang.String r0 = r3.displayBase
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r3.displayBase
            java.lang.String r2 = "displayBase"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L55:
            java.lang.String r0 = r3.displayType
            if (r0 == 0) goto L68
            java.lang.String r0 = r3.displayType
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L68
            java.lang.String r0 = r3.displayType
            java.lang.String r2 = "displayType"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L68:
            java.lang.String r0 = r3.displayActionWords
            if (r0 == 0) goto L7b
            java.lang.String r0 = r3.displayActionWords
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7b
            java.lang.String r0 = r3.displayActionWords
            java.lang.String r2 = "displayActionWords"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L7b:
            java.lang.String r0 = r3.displayDiscount
            if (r0 == 0) goto L8e
            java.lang.String r0 = r3.displayDiscount
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8e
            java.lang.String r3 = r3.displayDiscount
            java.lang.String r0 = "displayDiscount"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L8e:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.CouponInfo r1 = (com.kwad.sdk.core.response.model.CouponInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.CouponInfo r1 = (com.kwad.sdk.core.response.model.CouponInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
