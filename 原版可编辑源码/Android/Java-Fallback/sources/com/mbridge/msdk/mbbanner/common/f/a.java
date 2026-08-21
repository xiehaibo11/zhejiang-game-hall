package com.mbridge.msdk.mbbanner.common.f;

public abstract class a extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;
    private java.lang.String b;


    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.f.a> r0 = com.mbridge.msdk.mbbanner.common.f.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.f.a.a = r0
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            return
    }

    static java.lang.String a(com.mbridge.msdk.mbbanner.common.f.a r0) {
            java.lang.String r0 = r0.b
            return r0
    }

    public abstract void a(int r1, java.lang.String r2);

    public abstract void a(com.mbridge.msdk.foundation.entity.CampaignUnit r1);

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.f.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onFailed errorCode = "
            r1.append(r2)
            int r2 = r4.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            int r0 = r4.a
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.f.a.a(r4)
            r3.a(r0, r4)
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r4) {
            r3 = this;
            super.onSuccess(r4)
            com.mbridge.msdk.foundation.same.net.e.c r0 = r4.c
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r0 = r0.d
            T r4 = r4.a
            org.json.JSONObject r4 = (org.json.JSONObject) r4
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.f.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parseLoad content = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            java.lang.String r0 = "status"
            int r0 = r4.optInt(r0)
            r1 = 1
            if (r1 != r0) goto L44
            long r1 = java.lang.System.currentTimeMillis()
            r3.calcRequestTime(r1)
            java.lang.String r1 = "version"
            java.lang.String r1 = r4.optString(r1)
            com.mbridge.msdk.mbbanner.common.f.a$1 r2 = new com.mbridge.msdk.mbbanner.common.f.a$1
            r2.<init>(r3, r1, r4, r0)
            java.util.concurrent.ThreadPoolExecutor r4 = com.mbridge.msdk.foundation.same.f.b.a()
            r4.execute(r2)
            goto L4d
        L44:
            java.lang.String r1 = "msg"
            java.lang.String r4 = r4.optString(r1)
            r3.a(r0, r4)
        L4d:
            return
    }
}
