package com.mbridge.msdk.mbnative.e.a;

public abstract class b extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;
    private int b;
    private java.lang.String c;


    static {
            java.lang.Class<com.mbridge.msdk.mbnative.e.a.b> r0 = com.mbridge.msdk.mbnative.e.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbnative.e.a.b.a = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public abstract void a(int r1, java.lang.String r2);

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public abstract void a(java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r1, com.mbridge.msdk.foundation.entity.CampaignUnit r2);

    public final int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public abstract void b(java.util.List<com.mbridge.msdk.out.Frame> r1);

    public final void e(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbnative.e.a.b.a
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
    public void onPreExecute() {
            r0 = this;
            super.onPreExecute()
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r12) {
            r11 = this;
            super.onSuccess(r12)
            if (r12 == 0) goto Lb0
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            if (r0 == 0) goto Lb0
            int r0 = r11.b
            java.lang.String r1 = "version"
            java.lang.String r2 = "status"
            java.lang.String r3 = "msg"
            r4 = 1
            if (r0 != 0) goto L46
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
            com.mbridge.msdk.mbnative.e.a.b$1 r12 = new com.mbridge.msdk.mbnative.e.a.b$1
            r5 = r12
            r6 = r11
            r5.<init>(r6, r7, r8, r9, r10)
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()
            r0.execute(r12)
            goto Lb0
        L3e:
            java.lang.String r12 = r8.optString(r3)
            r11.a(r10, r12)
            goto Lb0
        L46:
            if (r0 != r4) goto Lb0
            com.mbridge.msdk.foundation.same.net.e.c r0 = r12.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r12 = r12.a
            org.json.JSONObject r12 = (org.json.JSONObject) r12
            int r0 = r12.optInt(r2)
            if (r4 != r0) goto La9
            long r4 = java.lang.System.currentTimeMillis()
            r11.calcRequestTime(r4)
            java.lang.String r1 = r12.optString(r1)
            java.lang.String r2 = "v5"
            boolean r1 = r2.equals(r1)
            java.lang.String r2 = "data"
            if (r1 == 0) goto L74
            org.json.JSONObject r1 = r12.optJSONObject(r2)
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseV5CampaignUnit(r1)
            goto L7c
        L74:
            org.json.JSONObject r1 = r12.optJSONObject(r2)
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = com.mbridge.msdk.foundation.entity.CampaignUnit.parseCampaignUnit(r1)
        L7c:
            if (r1 == 0) goto La1
            java.util.List r2 = r1.getListFrames()
            if (r2 == 0) goto La1
            java.util.List r2 = r1.getListFrames()
            int r2 = r2.size()
            if (r2 <= 0) goto La1
            java.util.List r12 = r1.getListFrames()
            r11.b(r12)
            java.util.List r12 = r1.getListFrames()
            int r12 = r12.size()
            r11.saveRequestTime(r12)
            goto Lb0
        La1:
            java.lang.String r12 = r12.optString(r3)
            r11.a(r0, r12)
            goto Lb0
        La9:
            java.lang.String r12 = r12.optString(r3)
            r11.a(r0, r12)
        Lb0:
            return
    }
}
