package com.mbridge.msdk.d.b;

public abstract class b extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;
    private long b;

    static {
            java.lang.Class<com.mbridge.msdk.d.b.b> r0 = com.mbridge.msdk.d.b.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.d.b.b.a = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void a(int r1, java.lang.String r2, com.mbridge.msdk.foundation.entity.CampaignUnit r3);

    public abstract void a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r1, com.mbridge.msdk.foundation.entity.CampaignUnit r2);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.d.b.b.a
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
            r1 = 0
            r3.a(r0, r4, r1)
            return
    }

    @Override
    public void onPreExecute() {
            r2 = this;
            super.onPreExecute()
            long r0 = java.lang.System.currentTimeMillis()
            r2.b = r0
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r8) {
            r7 = this;
            if (r8 == 0) goto L7e
            com.mbridge.msdk.foundation.same.net.e.c r0 = r8.c
            if (r0 == 0) goto L7e
            com.mbridge.msdk.foundation.same.net.e.c r0 = r8.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r8 = r8.a
            org.json.JSONObject r8 = (org.json.JSONObject) r8
            java.lang.String r1 = "status"
            int r1 = r8.optInt(r1)
            r2 = 1
            java.lang.String r3 = "msg"
            r4 = 0
            if (r2 != r1) goto L77
            long r5 = java.lang.System.currentTimeMillis()
            r7.calcRequestTime(r5)
            java.lang.String r2 = "version"
            java.lang.String r2 = r8.optString(r2)
            java.lang.String r5 = "v5"
            boolean r2 = r5.equals(r2)
            java.lang.String r5 = "data"
            if (r2 == 0) goto L3a
            org.json.JSONObject r2 = r8.optJSONObject(r5)
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r2)
            goto L42
        L3a:
            org.json.JSONObject r2 = r8.optJSONObject(r5)
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r2)
        L42:
            if (r2 == 0) goto L63
            java.util.ArrayList r5 = r2.getAds()
            if (r5 == 0) goto L63
            java.util.ArrayList r5 = r2.getAds()
            int r5 = r5.size()
            if (r5 <= 0) goto L63
            r7.a(r0, r2)
            java.util.ArrayList r8 = r2.getAds()
            int r8 = r8.size()
            r7.saveRequestTime(r8)
            goto L7e
        L63:
            if (r2 == 0) goto L69
            java.lang.String r4 = r2.getMsg()
        L69:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L73
            java.lang.String r4 = r8.optString(r3)
        L73:
            r7.a(r1, r4, r2)
            goto L7e
        L77:
            java.lang.String r8 = r8.optString(r3)
            r7.a(r1, r8, r4)
        L7e:
            return
    }
}
