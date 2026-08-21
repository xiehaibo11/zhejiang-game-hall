package com.mbridge.msdk.splash.f;

public abstract class c extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;
    private int b;
    private java.lang.String c;


    static {
            java.lang.Class<com.mbridge.msdk.splash.f.c> r0 = com.mbridge.msdk.splash.f.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.splash.f.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a(com.mbridge.msdk.splash.f.c r0) {
            java.lang.String r0 = r0.c
            return r0
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
            java.lang.String r0 = com.mbridge.msdk.splash.f.c.a
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
            if (r12 == 0) goto Lbe
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            if (r0 == 0) goto Lbe
            int r0 = r11.b
            java.lang.String r1 = "version"
            java.lang.String r2 = "status"
            java.lang.String r3 = "msg"
            r4 = 1
            if (r0 != 0) goto L47
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r9 = r0.d
            T r12 = r12.a
            r8 = r12
            org.json.JSONObject r8 = (org.json.JSONObject) r8
            int r10 = r8.optInt(r2)
            if (r4 != r10) goto L3e
            long r2 = java.lang.System.currentTimeMillis()
            r11.calcRequestTime(r2)
            java.lang.String r7 = r8.optString(r1)
            com.mbridge.msdk.splash.f.c$1 r12 = new com.mbridge.msdk.splash.f.c$1
            r5 = r12
            r6 = r11
            r5.<init>(r6, r7, r8, r9, r10)
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()
            r0.execute(r12)
            goto Lbe
        L3e:
            java.lang.String r12 = r8.optString(r3)
            r11.b(r10, r12)
            goto Lbe
        L47:
            if (r0 != r4) goto Lbe
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r12 = r12.a
            org.json.JSONObject r12 = (org.json.JSONObject) r12
            int r0 = r12.optInt(r2)
            if (r4 != r0) goto Lb7
            long r4 = java.lang.System.currentTimeMillis()
            r11.calcRequestTime(r4)
            java.lang.String r1 = r12.optString(r1)
            java.lang.String r2 = "v5"
            boolean r1 = r2.equals(r1)
            java.lang.String r2 = "data"
            if (r1 == 0) goto L77
            org.json.JSONObject r1 = r12.optJSONObject(r2)
            java.lang.String r2 = r11.c
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r1, r2)
            goto L81
        L77:
            org.json.JSONObject r1 = r12.optJSONObject(r2)
            java.lang.String r2 = r11.c
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r1, r2)
        L81:
            if (r1 == 0) goto La2
            java.util.List r2 = r1.getListFrames()
            if (r2 == 0) goto La2
            java.util.List r2 = r1.getListFrames()
            int r2 = r2.size()
            if (r2 <= 0) goto La2
            java.util.List r12 = r1.getListFrames()
            r11.a(r12)
            int r12 = r12.size()
            r11.saveRequestTime(r12)
            goto Lbe
        La2:
            r2 = 0
            if (r1 == 0) goto La9
            java.lang.String r2 = r1.getMsg()
        La9:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto Lb3
            java.lang.String r2 = r12.optString(r3)
        Lb3:
            r11.b(r0, r2)
            goto Lbe
        Lb7:
            java.lang.String r12 = r12.optString(r3)
            r11.b(r0, r12)
        Lbe:
            return
    }
}
