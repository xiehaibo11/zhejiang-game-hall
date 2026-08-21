package com.mbridge.msdk.video.dynview.f.a;

public abstract class a extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private int a;
    private java.lang.String b;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void a(int r1, java.lang.String r2);

    public abstract void a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r1, com.mbridge.msdk.foundation.entity.CampaignUnit r2);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r2) {
            r1 = this;
            int r0 = r2.a
            java.lang.String r2 = com.mbridge.msdk.foundation.same.net.f.a.a(r2)
            r1.a(r0, r2)
            return
    }

    @Override
    public void onPreExecute() {
            r0 = this;
            super.onPreExecute()
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r7) {
            r6 = this;
            super.onSuccess(r7)
            if (r7 == 0) goto L89
            com.mbridge.msdk.foundation.same.net.e.c r0 = r7.c
            if (r0 == 0) goto L89
            int r0 = r6.a
            if (r0 != 0) goto L89
            com.mbridge.msdk.foundation.same.net.e.c r0 = r7.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r7 = r7.a
            org.json.JSONObject r7 = (org.json.JSONObject) r7
            java.lang.String r1 = "status"
            int r1 = r7.optInt(r1)
            r2 = 1
            java.lang.String r3 = "msg"
            if (r2 != r1) goto L82
            long r4 = java.lang.System.currentTimeMillis()
            r6.calcRequestTime(r4)
            java.lang.String r2 = "version"
            java.lang.String r2 = r7.optString(r2)
            java.lang.String r4 = "v5"
            boolean r2 = r4.equals(r2)
            java.lang.String r4 = "data"
            if (r2 == 0) goto L42
            org.json.JSONObject r2 = r7.optJSONObject(r4)
            java.lang.String r4 = r6.b
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r2, r4)
            goto L4c
        L42:
            org.json.JSONObject r2 = r7.optJSONObject(r4)
            java.lang.String r4 = r6.b
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r2, r4)
        L4c:
            if (r2 == 0) goto L6d
            java.util.ArrayList r4 = r2.getAds()
            if (r4 == 0) goto L6d
            java.util.ArrayList r4 = r2.getAds()
            int r4 = r4.size()
            if (r4 <= 0) goto L6d
            r6.a(r0, r2)
            java.util.ArrayList r7 = r2.getAds()
            int r7 = r7.size()
            r6.saveRequestTime(r7)
            goto L89
        L6d:
            r0 = 0
            if (r2 == 0) goto L74
            java.lang.String r0 = r2.getMsg()
        L74:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L7e
            java.lang.String r0 = r7.optString(r3)
        L7e:
            r6.a(r1, r0)
            goto L89
        L82:
            java.lang.String r7 = r7.optString(r3)
            r6.a(r1, r7)
        L89:
            return
    }
}
