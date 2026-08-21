package com.tkay.expressad.mbbanner.a.e;

public class a {
    private static final java.lang.String a = null;
    private final android.os.Handler b;
    private boolean c;





    static {
            java.lang.Class<com.tkay.expressad.mbbanner.a.e.a> r0 = com.tkay.expressad.mbbanner.a.e.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.mbbanner.a.e.a.a = r0
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

    private void a(com.tkay.expressad.mbbanner.a.c.b r3, com.tkay.expressad.foundation.d.d r4, java.lang.String r5) {
            r2 = this;
            android.os.Handler r0 = r2.b
            com.tkay.expressad.mbbanner.a.e.a$1 r1 = new com.tkay.expressad.mbbanner.a.e.a$1
            r1.<init>(r2, r3, r5, r4)
            r0.post(r1)
            return
    }

    private void a(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    static boolean a(com.tkay.expressad.mbbanner.a.e.a r0) {
            boolean r0 = r0.c
            return r0
    }

    public final void a(com.tkay.expressad.mbbanner.a.c.b r3, java.lang.String r4) {
            r2 = this;
            android.os.Handler r0 = r2.b
            com.tkay.expressad.mbbanner.a.e.a$3 r1 = new com.tkay.expressad.mbbanner.a.e.a$3
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    public final void a(com.tkay.expressad.mbbanner.a.c.b r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "postCampaignFail errorMsg="
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = " unitId="
            r0.append(r1)
            r0.append(r5)
            android.os.Handler r0 = r2.b
            com.tkay.expressad.mbbanner.a.e.a$2 r1 = new com.tkay.expressad.mbbanner.a.e.a$2
            r1.<init>(r2, r3, r5, r4)
            r0.post(r1)
            return
    }

    public final void b(com.tkay.expressad.mbbanner.a.c.b r3, java.lang.String r4) {
            r2 = this;
            android.os.Handler r0 = r2.b
            com.tkay.expressad.mbbanner.a.e.a$4 r1 = new com.tkay.expressad.mbbanner.a.e.a$4
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }
}
