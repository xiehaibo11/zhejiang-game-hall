package com.kwad.sdk.core.b.a;

public final class u implements com.kwad.sdk.core.d<com.kwad.sdk.internal.api.a> {
    public u() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.internal.api.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "thirdAge"
            int r0 = r4.optInt(r0)
            r3.ajr = r0
            java.lang.String r0 = "thirdGender"
            int r0 = r4.optInt(r0)
            r3.ajs = r0
            java.lang.String r0 = "thirdInterest"
            java.lang.String r0 = r4.optString(r0)
            r3.ajt = r0
            java.lang.String r0 = r3.ajt
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L25
            r3.ajt = r2
        L25:
            java.lang.String r0 = "prevTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.aju = r0
            java.lang.String r0 = r3.aju
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.aju = r2
        L35:
            java.lang.String r0 = "postTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.ajv = r0
            java.lang.String r0 = r3.ajv
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.ajv = r2
        L45:
            java.lang.String r0 = "historyTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.ajw = r0
            java.lang.String r0 = r3.ajw
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.ajw = r2
        L55:
            java.lang.String r0 = "channel"
            java.lang.String r0 = r4.optString(r0)
            r3.ajx = r0
            java.lang.String r0 = r3.ajx
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r3.ajx = r2
        L65:
            java.lang.String r0 = "cpmBidFloor"
            long r0 = r4.optLong(r0)
            r3.ajy = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.internal.api.a r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            int r0 = r4.ajr
            if (r0 == 0) goto L12
            int r0 = r4.ajr
            java.lang.String r1 = "thirdAge"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L12:
            int r0 = r4.ajs
            if (r0 == 0) goto L1d
            int r0 = r4.ajs
            java.lang.String r1 = "thirdGender"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L1d:
            java.lang.String r0 = r4.ajt
            java.lang.String r1 = ""
            if (r0 == 0) goto L32
            java.lang.String r0 = r4.ajt
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L32
            java.lang.String r0 = r4.ajt
            java.lang.String r2 = "thirdInterest"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L32:
            java.lang.String r0 = r4.aju
            if (r0 == 0) goto L45
            java.lang.String r0 = r4.aju
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L45
            java.lang.String r0 = r4.aju
            java.lang.String r2 = "prevTitle"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L45:
            java.lang.String r0 = r4.ajv
            if (r0 == 0) goto L58
            java.lang.String r0 = r4.ajv
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L58
            java.lang.String r0 = r4.ajv
            java.lang.String r2 = "postTitle"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L58:
            java.lang.String r0 = r4.ajw
            if (r0 == 0) goto L6b
            java.lang.String r0 = r4.ajw
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L6b
            java.lang.String r0 = r4.ajw
            java.lang.String r2 = "historyTitle"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L6b:
            java.lang.String r0 = r4.ajx
            if (r0 == 0) goto L7e
            java.lang.String r0 = r4.ajx
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7e
            java.lang.String r0 = r4.ajx
            java.lang.String r1 = "channel"
            com.kwad.sdk.utils.t.putValue(r5, r1, r0)
        L7e:
            long r0 = r4.ajy
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L8d
            long r0 = r4.ajy
            java.lang.String r4 = "cpmBidFloor"
            com.kwad.sdk.utils.t.putValue(r5, r4, r0)
        L8d:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.a r1 = (com.kwad.sdk.internal.api.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.a r1 = (com.kwad.sdk.internal.api.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
