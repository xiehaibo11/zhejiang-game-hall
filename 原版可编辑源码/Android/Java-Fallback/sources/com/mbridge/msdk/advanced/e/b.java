package com.mbridge.msdk.advanced.e;

public abstract class b extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;
    private int b;
    private java.lang.String c;

    static {
            java.lang.Class<com.mbridge.msdk.advanced.e.b> r0 = com.mbridge.msdk.advanced.e.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.advanced.e.b.a = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public abstract void a(java.util.List<com.mbridge.msdk.out.Frame> r1);

    public abstract void a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r1, com.mbridge.msdk.foundation.entity.CampaignUnit r2);

    public abstract void b(int r1, java.lang.String r2);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.advanced.e.b.a
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
            r3.b(r0, r4)
            return
    }

    @Override
    public void onPreExecute() {
            r0 = this;
            super.onPreExecute()
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r11) {
            r10 = this;
            super.onSuccess(r11)
            if (r11 == 0) goto Lff
            com.mbridge.msdk.foundation.same.net.e.c r0 = r11.c
            if (r0 == 0) goto Lff
            int r0 = r10.b
            r1 = 0
            java.lang.String r2 = "v5"
            java.lang.String r3 = "version"
            java.lang.String r4 = "status"
            r5 = 1
            java.lang.String r6 = "data"
            java.lang.String r7 = "msg"
            if (r0 != 0) goto L8d
            com.mbridge.msdk.foundation.same.net.e.c r0 = r11.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r11 = r11.a
            org.json.JSONObject r11 = (org.json.JSONObject) r11
            int r4 = r11.optInt(r4)
            if (r5 != r4) goto L84
            long r8 = java.lang.System.currentTimeMillis()
            r10.calcRequestTime(r8)
            java.lang.String r3 = r11.optString(r3)
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L43
            org.json.JSONObject r2 = r11.optJSONObject(r6)
            java.lang.String r3 = r10.c
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r2, r3)
            goto L4d
        L43:
            org.json.JSONObject r2 = r11.optJSONObject(r6)
            java.lang.String r3 = r10.c
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r2, r3)
        L4d:
            if (r2 == 0) goto L6f
            java.util.ArrayList r3 = r2.getAds()
            if (r3 == 0) goto L6f
            java.util.ArrayList r3 = r2.getAds()
            int r3 = r3.size()
            if (r3 <= 0) goto L6f
            r10.a(r0, r2)
            java.util.ArrayList r11 = r2.getAds()
            int r11 = r11.size()
            r10.saveRequestTime(r11)
            goto Lff
        L6f:
            if (r2 == 0) goto L75
            java.lang.String r1 = r2.getMsg()
        L75:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7f
            java.lang.String r1 = r11.optString(r7)
        L7f:
            r10.b(r4, r1)
            goto Lff
        L84:
            java.lang.String r11 = r11.optString(r7)
            r10.b(r4, r11)
            goto Lff
        L8d:
            if (r0 != r5) goto Lff
            com.mbridge.msdk.foundation.same.net.e.c r0 = r11.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r11 = r11.a
            org.json.JSONObject r11 = (org.json.JSONObject) r11
            int r0 = r11.optInt(r4)
            if (r5 != r0) goto Lf8
            long r4 = java.lang.System.currentTimeMillis()
            r10.calcRequestTime(r4)
            java.lang.String r3 = r11.optString(r3)
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto Lb9
            org.json.JSONObject r2 = r11.optJSONObject(r6)
            java.lang.String r3 = r10.c
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r2, r3)
            goto Lc3
        Lb9:
            org.json.JSONObject r2 = r11.optJSONObject(r6)
            java.lang.String r3 = r10.c
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r2, r3)
        Lc3:
            if (r2 == 0) goto Le4
            java.util.List r3 = r2.getListFrames()
            if (r3 == 0) goto Le4
            java.util.List r3 = r2.getListFrames()
            int r3 = r3.size()
            if (r3 <= 0) goto Le4
            java.util.List r11 = r2.getListFrames()
            r10.a(r11)
            int r11 = r11.size()
            r10.saveRequestTime(r11)
            goto Lff
        Le4:
            if (r2 == 0) goto Lea
            java.lang.String r1 = r2.getMsg()
        Lea:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto Lf4
            java.lang.String r1 = r11.optString(r7)
        Lf4:
            r10.b(r0, r1)
            goto Lff
        Lf8:
            java.lang.String r11 = r11.optString(r7)
            r10.b(r0, r11)
        Lff:
            return
    }
}
