package com.tkay.basead.f;

public abstract class c implements com.tkay.basead.f.a {
    public static final java.lang.String h = "extra_request_id";
    public static final java.lang.String i = "extra_scenario";
    public static final java.lang.String j = "extra_orientation";
    public java.lang.String b;
    protected android.content.Context c;
    protected com.tkay.core.common.f.i d;
    protected java.lang.String e;
    protected boolean f;
    protected com.tkay.core.common.f.r g;


    public c(android.content.Context r2, com.tkay.core.common.f.i r3, java.lang.String r4, boolean r5) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.b = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.c = r2
            r1.d = r3
            r1.e = r4
            r1.f = r5
            return
    }

    private com.tkay.basead.c.e b() {
            r4 = this;
            java.lang.String r0 = r4.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "30001"
            if (r0 != 0) goto L41
            com.tkay.core.common.f.i r0 = r4.d
            java.lang.String r0 = r0.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L15
            goto L41
        L15:
            android.content.Context r0 = r4.c
            com.tkay.basead.f.a.a r0 = com.tkay.basead.f.a.a.a(r0)
            com.tkay.core.common.f.i r2 = r4.d
            java.lang.String r2 = r2.b
            java.lang.String r3 = r4.e
            com.tkay.core.common.f.r r0 = r0.a(r2, r3)
            r4.g = r0
            if (r0 != 0) goto L30
            java.lang.String r0 = "No fill, offer = null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r1, r0)
            return r0
        L30:
            com.tkay.core.common.f.i r0 = r4.d
            com.tkay.core.common.f.j r0 = r0.m
            if (r0 != 0) goto L3f
            java.lang.String r0 = "30002"
            java.lang.String r1 = "No fill, setting = null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)
            return r0
        L3f:
            r0 = 0
            return r0
        L41:
            java.lang.String r0 = "offerid、placementid can not be null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r1, r0)
            return r0
    }

    @Override
    public final void a(com.tkay.basead.e.c r6) {
            r5 = this;
            java.lang.String r0 = r5.e     // Catch: java.lang.Exception -> L64
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "30001"
            if (r0 != 0) goto L41
            com.tkay.core.common.f.i r0 = r5.d     // Catch: java.lang.Exception -> L64
            java.lang.String r0 = r0.b     // Catch: java.lang.Exception -> L64
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L64
            if (r0 == 0) goto L15
            goto L41
        L15:
            android.content.Context r0 = r5.c     // Catch: java.lang.Exception -> L64
            com.tkay.basead.f.a.a r0 = com.tkay.basead.f.a.a.a(r0)     // Catch: java.lang.Exception -> L64
            com.tkay.core.common.f.i r2 = r5.d     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = r2.b     // Catch: java.lang.Exception -> L64
            java.lang.String r3 = r5.e     // Catch: java.lang.Exception -> L64
            com.tkay.core.common.f.r r0 = r0.a(r2, r3)     // Catch: java.lang.Exception -> L64
            r5.g = r0     // Catch: java.lang.Exception -> L64
            if (r0 != 0) goto L30
            java.lang.String r0 = "No fill, offer = null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r1, r0)     // Catch: java.lang.Exception -> L64
            goto L47
        L30:
            com.tkay.core.common.f.i r0 = r5.d     // Catch: java.lang.Exception -> L64
            com.tkay.core.common.f.j r0 = r0.m     // Catch: java.lang.Exception -> L64
            if (r0 != 0) goto L3f
            java.lang.String r0 = "30002"
            java.lang.String r1 = "No fill, setting = null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)     // Catch: java.lang.Exception -> L64
            goto L47
        L3f:
            r0 = 0
            goto L47
        L41:
            java.lang.String r0 = "offerid、placementid can not be null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r1, r0)     // Catch: java.lang.Exception -> L64
        L47:
            if (r0 == 0) goto L4d
            r6.onAdLoadFailed(r0)     // Catch: java.lang.Exception -> L64
            return
        L4d:
            android.content.Context r0 = r5.c     // Catch: java.lang.Exception -> L64
            com.tkay.basead.f.a.a r0 = com.tkay.basead.f.a.a.a(r0)     // Catch: java.lang.Exception -> L64
            com.tkay.core.common.f.i r1 = r5.d     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = r1.b     // Catch: java.lang.Exception -> L64
            com.tkay.core.common.f.r r2 = r5.g     // Catch: java.lang.Exception -> L64
            com.tkay.core.common.f.i r3 = r5.d     // Catch: java.lang.Exception -> L64
            com.tkay.basead.f.c$1 r4 = new com.tkay.basead.f.c$1     // Catch: java.lang.Exception -> L64
            r4.<init>(r5, r6)     // Catch: java.lang.Exception -> L64
            r0.a(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L64
            return
        L64:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "-9999"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r1, r0)
            r6.onAdLoadFailed(r0)
            return
    }

    @Override
    public boolean a() {
            r4 = this;
            boolean r0 = r4.d()     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L1b
            android.content.Context r0 = r4.c     // Catch: java.lang.Exception -> L17
            com.tkay.basead.f.a.a r0 = com.tkay.basead.f.a.a.a(r0)     // Catch: java.lang.Exception -> L17
            com.tkay.core.common.f.r r1 = r4.g     // Catch: java.lang.Exception -> L17
            com.tkay.core.common.f.i r2 = r4.d     // Catch: java.lang.Exception -> L17
            boolean r3 = r4.f     // Catch: java.lang.Exception -> L17
            boolean r0 = r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L17
            return r0
        L17:
            r0 = move-exception
            r0.printStackTrace()
        L1b:
            r0 = 0
            return r0
    }

    public void c() {
            r0 = this;
            return
    }

    protected final boolean d() {
            r4 = this;
            android.content.Context r0 = r4.c
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.tkay.core.common.f.i r0 = r4.d
            java.lang.String r0 = r0.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L11
            return r1
        L11:
            java.lang.String r0 = r4.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1a
            return r1
        L1a:
            com.tkay.core.common.f.r r0 = r4.g
            if (r0 != 0) goto L33
            android.content.Context r0 = r4.c
            com.tkay.basead.f.a.a r0 = com.tkay.basead.f.a.a.a(r0)
            com.tkay.core.common.f.i r2 = r4.d
            java.lang.String r2 = r2.b
            java.lang.String r3 = r4.e
            com.tkay.core.common.f.r r0 = r0.a(r2, r3)
            r4.g = r0
            if (r0 != 0) goto L33
            return r1
        L33:
            r0 = 1
            return r0
    }

    public final com.tkay.core.common.f.r e() {
            r1 = this;
            com.tkay.core.common.f.r r0 = r1.g
            return r0
    }
}
