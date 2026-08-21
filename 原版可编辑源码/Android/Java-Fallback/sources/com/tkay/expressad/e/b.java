package com.tkay.expressad.e;

public final class b implements com.tkay.expressad.c {
    public static java.util.Map<java.lang.String, java.lang.String> a;
    private android.content.Context b;
    private boolean c;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            return
    }

    private void a() {
            r3 = this;
            r0 = 0
            r3.c = r0
            android.content.Context r0 = r3.b     // Catch: java.lang.Exception -> L14
            com.tkay.expressad.foundation.g.f.m.a(r0)     // Catch: java.lang.Exception -> L14
            com.tkay.expressad.foundation.b.a r0 = com.tkay.expressad.foundation.b.a.a()     // Catch: java.lang.Exception -> L14
            java.util.Map<java.lang.String, java.lang.String> r1 = com.tkay.expressad.e.b.a     // Catch: java.lang.Exception -> L14
            android.content.Context r2 = r3.b     // Catch: java.lang.Exception -> L14
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L14
            return
        L14:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    @Override
    public final void a(java.util.Map<java.lang.String, java.lang.String> r2, android.content.Context r3) {
            r1 = this;
            android.content.Context r3 = r3.getApplicationContext()
            r1.b = r3
            com.tkay.expressad.e.b.a = r2
            r2 = 0
            r1.c = r2
            com.tkay.expressad.foundation.g.f.m.a(r3)     // Catch: java.lang.Exception -> L1a
            com.tkay.expressad.foundation.b.a r2 = com.tkay.expressad.foundation.b.a.a()     // Catch: java.lang.Exception -> L1a
            java.util.Map<java.lang.String, java.lang.String> r3 = com.tkay.expressad.e.b.a     // Catch: java.lang.Exception -> L1a
            android.content.Context r0 = r1.b     // Catch: java.lang.Exception -> L1a
            r2.a(r3, r0)     // Catch: java.lang.Exception -> L1a
            return
        L1a:
            r2 = move-exception
            r2.printStackTrace()
            return
    }
}
