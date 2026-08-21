package com.tkay.expressad.foundation.b;

public class a {
    private static final java.lang.String g = "SDKController";
    private static volatile com.tkay.expressad.foundation.b.a h;
    public final int a;
    public final int b;
    public final int c;
    public final int d;
    public final int e;
    public final int f;
    private android.content.Context i;
    private java.lang.String j;
    private java.lang.String k;
    private boolean l;
    private java.lang.String m;
    private int n;


    static {
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.j = r0
            r1.k = r0
            r0 = 0
            r1.l = r0
            r0 = 1
            r1.a = r0
            r0 = 2
            r1.b = r0
            r0 = 3
            r1.c = r0
            r0 = 4
            r1.d = r0
            r0 = 5
            r1.e = r0
            r0 = 6
            r1.f = r0
            return
    }

    public static com.tkay.expressad.foundation.b.a a() {
            com.tkay.expressad.foundation.b.a r0 = com.tkay.expressad.foundation.b.a.h
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.foundation.b.a> r0 = com.tkay.expressad.foundation.b.a.class
            monitor-enter(r0)
            com.tkay.expressad.foundation.b.a r1 = com.tkay.expressad.foundation.b.a.h     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.foundation.b.a r1 = new com.tkay.expressad.foundation.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.foundation.b.a.h = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.foundation.b.a r0 = com.tkay.expressad.foundation.b.a.h
            return r0
    }

    private static void a(android.content.Context r3) {
            java.lang.String r0 = "exc_log"
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r0 = ""
            if (r3 == 0) goto L1a
            java.lang.String r1 = "exc_sys"
            java.lang.String r1 = r3.getString(r1, r0)     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "exc_bk"
            java.lang.String r0 = r3.getString(r2, r0)     // Catch: java.lang.Throwable -> L30
            r3 = r0
            r0 = r1
            goto L1b
        L1a:
            r3 = r0
        L1b:
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.co     // Catch: java.lang.Throwable -> L30
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L2f
            java.lang.String r1 = com.tkay.expressad.foundation.g.a.cp     // Catch: java.lang.Throwable -> L30
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L2f
            com.tkay.expressad.foundation.g.a.co = r0     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.foundation.g.a.cp = r3     // Catch: java.lang.Throwable -> L30
        L2f:
            return
        L30:
            r3 = move-exception
            r3.getMessage()
            return
    }

    private static java.lang.String b() {
            java.lang.String r0 = com.tkay.expressad.out.n.a
            return r0
    }

    private void c() {
            r2 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r2.j
            r0.a(r1)
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r2.k
            r0.b(r1)
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.c()
            android.content.Context r0 = r2.i
            android.content.Context r0 = r0.getApplicationContext()
            a(r0)
            android.content.Context r0 = r2.i
            com.tkay.expressad.foundation.h.r.a(r0)
            r0 = 1
            r2.l = r0
            return
    }

    private static void d() {
            return
    }

    private void e() {
            r2 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r2.j
            r0.a(r1)
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r2.k
            r0.b(r1)
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.c()
            return
    }

    public final void a(java.util.Map r5, android.content.Context r6) {
            r4 = this;
            if (r6 == 0) goto L70
            android.content.Context r0 = r6.getApplicationContext()
            r4.i = r0
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r1 = r4.i
            r0.a(r1)
            android.content.Context r0 = r4.i     // Catch: java.lang.Exception -> L16
            com.tkay.expressad.foundation.g.f.m.a(r0)     // Catch: java.lang.Exception -> L16
        L16:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.expressad.foundation.b.a$1 r1 = new com.tkay.expressad.foundation.b.a$1
            r1.<init>(r4, r6)
            r2 = 300(0x12c, double:1.48E-321)
            r0.a(r1, r2)
            if (r5 == 0) goto L70
            java.lang.String r6 = "dsp_tkay_appid"
            boolean r0 = r5.containsKey(r6)
            if (r0 == 0) goto L36
            java.lang.Object r6 = r5.get(r6)
            java.lang.String r6 = (java.lang.String) r6
            r4.j = r6
        L36:
            java.lang.String r6 = "dsp_tkay_appkey"
            boolean r0 = r5.containsKey(r6)
            if (r0 == 0) goto L46
            java.lang.Object r5 = r5.get(r6)
            java.lang.String r5 = (java.lang.String) r5
            r4.k = r5
        L46:
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r6 = r4.j
            r5.a(r6)
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r6 = r4.k
            r5.b(r6)
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()
            r5.c()
            android.content.Context r5 = r4.i
            android.content.Context r5 = r5.getApplicationContext()
            a(r5)
            android.content.Context r5 = r4.i
            com.tkay.expressad.foundation.h.r.a(r5)
            r5 = 1
            r4.l = r5
        L70:
            return
    }
}
