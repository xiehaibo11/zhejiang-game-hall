package com.mbridge.msdk.mbbid.common.b;

public abstract class b extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.mbridge.msdk.mbbid.common.b.b> r0 = com.mbridge.msdk.mbbid.common.b.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbid.common.b.b.a = r0
            return
    }

    public b(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.unitId = r2
            r0.placementId = r1
            return
    }

    public abstract void a(int r1, java.lang.String r2);

    public abstract void a(com.mbridge.msdk.mbbid.common.BidResponsedEx r1);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbid.common.b.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "errorCode = "
            r1.append(r2)
            int r2 = r4.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            int r0 = r4.a
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.f.a.a(r4)
            r3.a(r0, r4)
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r5) {
            r4 = this;
            super.onSuccess(r5)
            if (r5 == 0) goto L3e
            com.mbridge.msdk.foundation.same.net.e.c r0 = r5.c
            if (r0 == 0) goto L3e
            com.mbridge.msdk.foundation.same.net.e.c r0 = r5.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r5 = r5.a
            org.json.JSONObject r5 = (org.json.JSONObject) r5
            java.lang.String r0 = "status"
            int r0 = r5.optInt(r0)
            r1 = 200(0xc8, float:2.8E-43)
            java.lang.String r2 = "msg"
            if (r1 != r0) goto L37
            java.lang.String r1 = "data"
            org.json.JSONObject r1 = r5.optJSONObject(r1)
            java.lang.String r3 = r4.unitId
            com.mbridge.msdk.mbbid.common.BidResponsedEx r1 = com.mbridge.msdk.mbbid.common.BidResponsedEx.parseBidResponsedEx(r1, r3)
            if (r1 == 0) goto L2f
            r4.a(r1)
            goto L3e
        L2f:
            java.lang.String r5 = r5.optString(r2)
            r4.a(r0, r5)
            goto L3e
        L37:
            java.lang.String r5 = r5.optString(r2)
            r4.a(r0, r5)
        L3e:
            return
    }
}
