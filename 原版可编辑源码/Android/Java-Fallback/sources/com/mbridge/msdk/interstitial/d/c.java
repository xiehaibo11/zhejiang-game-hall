package com.mbridge.msdk.interstitial.d;

public abstract class c extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;
    private int b;

    static {
            java.lang.Class<com.mbridge.msdk.interstitial.d.c> r0 = com.mbridge.msdk.interstitial.d.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.interstitial.d.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void a(java.util.List<com.mbridge.msdk.out.Frame> r1);

    public abstract void a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r1, com.mbridge.msdk.foundation.entity.CampaignUnit r2);

    public abstract void b(int r1, java.lang.String r2);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.interstitial.d.c.a
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
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r12) {
            r11 = this;
            super.onSuccess(r12)
            if (r12 == 0) goto L121
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            if (r0 == 0) goto L121
            int r0 = r11.b
            r1 = 0
            java.lang.String r2 = "v5"
            java.lang.String r3 = "version"
            java.lang.String r4 = "status"
            java.lang.String r5 = ""
            r6 = 1
            java.lang.String r7 = "data"
            java.lang.String r8 = "msg"
            if (r0 != 0) goto L9f
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r12 = r12.a
            org.json.JSONObject r12 = (org.json.JSONObject) r12
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "content = "
            r9.append(r10)
            r9.append(r12)
            java.lang.String r9 = r9.toString()
            com.mbridge.msdk.foundation.tools.z.d(r5, r9)
            int r4 = r12.optInt(r4)
            if (r6 != r4) goto L96
            long r5 = java.lang.System.currentTimeMillis()
            r11.calcRequestTime(r5)
            java.lang.String r3 = r12.optString(r3)
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L57
            org.json.JSONObject r2 = r12.optJSONObject(r7)
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r2)
            goto L5f
        L57:
            org.json.JSONObject r2 = r12.optJSONObject(r7)
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r2)
        L5f:
            if (r2 == 0) goto L81
            java.util.ArrayList r3 = r2.getAds()
            if (r3 == 0) goto L81
            java.util.ArrayList r3 = r2.getAds()
            int r3 = r3.size()
            if (r3 <= 0) goto L81
            r11.a(r0, r2)
            java.util.ArrayList r12 = r2.getAds()
            int r12 = r12.size()
            r11.saveRequestTime(r12)
            goto L121
        L81:
            if (r2 == 0) goto L87
            java.lang.String r1 = r2.getMsg()
        L87:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L91
            java.lang.String r1 = r12.optString(r8)
        L91:
            r11.b(r4, r1)
            goto L121
        L96:
            java.lang.String r12 = r12.optString(r8)
            r11.b(r4, r12)
            goto L121
        L9f:
            if (r0 != r6) goto L121
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r12 = r12.a
            org.json.JSONObject r12 = (org.json.JSONObject) r12
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r9 = "content frames = "
            r0.append(r9)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r5, r0)
            int r0 = r12.optInt(r4)
            if (r6 != r0) goto L11a
            long r4 = java.lang.System.currentTimeMillis()
            r11.calcRequestTime(r4)
            java.lang.String r3 = r12.optString(r3)
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto Ldd
            org.json.JSONObject r2 = r12.optJSONObject(r7)
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r2)
            goto Le5
        Ldd:
            org.json.JSONObject r2 = r12.optJSONObject(r7)
            com.mbridge.msdk.foundation.entity.CampaignUnit r2 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r2)
        Le5:
            if (r2 == 0) goto L106
            java.util.List r3 = r2.getListFrames()
            if (r3 == 0) goto L106
            java.util.List r3 = r2.getListFrames()
            int r3 = r3.size()
            if (r3 <= 0) goto L106
            java.util.List r12 = r2.getListFrames()
            r11.a(r12)
            int r12 = r12.size()
            r11.saveRequestTime(r12)
            goto L121
        L106:
            if (r2 == 0) goto L10c
            java.lang.String r1 = r2.getMsg()
        L10c:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L116
            java.lang.String r1 = r12.optString(r8)
        L116:
            r11.b(r0, r1)
            goto L121
        L11a:
            java.lang.String r12 = r12.optString(r8)
            r11.b(r0, r12)
        L121:
            return
    }
}
