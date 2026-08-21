package com.mbridge.msdk.mbbanner.common.util;

public class a {
    private static final java.lang.String a = null;
    private final android.os.Handler b;
    private boolean c;





    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.util.a> r0 = com.mbridge.msdk.mbbanner.common.util.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.util.a.a = r0
            return
    }

    public a() {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.b = r0
            return
    }

    static boolean a(com.mbridge.msdk.mbbanner.common.util.a r0) {
            boolean r0 = r0.c
            return r0
    }

    public final void a(com.mbridge.msdk.mbbanner.common.b.b r4, com.mbridge.msdk.foundation.entity.CampaignUnit r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.util.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postCampaignSuccess unitId="
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            android.os.Handler r0 = r3.b
            com.mbridge.msdk.mbbanner.common.util.a$1 r1 = new com.mbridge.msdk.mbbanner.common.util.a$1
            r1.<init>(r3, r4, r6, r5)
            r0.post(r1)
            return
    }

    public final void a(com.mbridge.msdk.mbbanner.common.b.b r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.util.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postResourceSuccess unitId="
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            android.os.Handler r0 = r3.b
            com.mbridge.msdk.mbbanner.common.util.a$3 r1 = new com.mbridge.msdk.mbbanner.common.util.a$3
            r1.<init>(r3, r4, r5)
            r0.post(r1)
            return
    }

    public final void a(com.mbridge.msdk.mbbanner.common.b.b r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.util.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postCampaignFail errorMsg="
            r1.append(r2)
            r1.append(r5)
            java.lang.String r2 = " unitId="
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            android.os.Handler r0 = r3.b
            com.mbridge.msdk.mbbanner.common.util.a$2 r1 = new com.mbridge.msdk.mbbanner.common.util.a$2
            r1.<init>(r3, r4, r6, r5)
            r0.post(r1)
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void b(com.mbridge.msdk.mbbanner.common.b.b r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.util.a.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "postResourceFail unitId="
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            android.os.Handler r0 = r3.b
            com.mbridge.msdk.mbbanner.common.util.a$4 r1 = new com.mbridge.msdk.mbbanner.common.util.a$4
            r1.<init>(r3, r4, r5)
            r0.post(r1)
            return
    }
}
