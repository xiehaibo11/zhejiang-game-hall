package com.tkay.core.common.b;

public class b {
    java.lang.ref.WeakReference<com.tkay.core.api.TYAdSourceStatusListener> a;







    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.tkay.core.api.TYAdSourceStatusListener a() {
            r3 = this;
            java.lang.ref.WeakReference<com.tkay.core.api.TYAdSourceStatusListener> r0 = r3.a
            if (r0 == 0) goto L14
            java.lang.Object r0 = r0.get()
            com.tkay.core.api.TYAdSourceStatusListener r0 = (com.tkay.core.api.TYAdSourceStatusListener) r0
            if (r0 != 0) goto L13
            java.lang.String r1 = "tkay"
            java.lang.String r2 = "TYAdSourceStatusListener had been released."
            android.util.Log.e(r1, r2)
        L13:
            return r0
        L14:
            r0 = 0
            return r0
    }

    static com.tkay.core.api.TYAdSourceStatusListener a(com.tkay.core.common.b.b r2) {
            java.lang.ref.WeakReference<com.tkay.core.api.TYAdSourceStatusListener> r2 = r2.a
            if (r2 == 0) goto L14
            java.lang.Object r2 = r2.get()
            com.tkay.core.api.TYAdSourceStatusListener r2 = (com.tkay.core.api.TYAdSourceStatusListener) r2
            if (r2 != 0) goto L13
            java.lang.String r0 = "tkay"
            java.lang.String r1 = "TYAdSourceStatusListener had been released."
            android.util.Log.e(r0, r1)
        L13:
            return r2
        L14:
            r2 = 0
            return r2
    }

    public final void a(com.tkay.core.api.TYAdSourceStatusListener r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.a = r0
            return
    }

    public final void a(com.tkay.core.common.f.d r3) {
            r2 = this;
            r0 = 0
            com.tkay.core.common.b.i r3 = com.tkay.core.common.b.i.a(r3, r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.b$1 r1 = new com.tkay.core.common.b.b$1
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final void a(com.tkay.core.common.f.d r3, com.tkay.core.api.AdError r4) {
            r2 = this;
            r0 = 0
            com.tkay.core.common.b.i r3 = com.tkay.core.common.b.i.a(r3, r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.b$3 r1 = new com.tkay.core.common.b.b$3
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    public final void b(com.tkay.core.common.f.d r3) {
            r2 = this;
            r0 = 0
            com.tkay.core.common.b.i r3 = com.tkay.core.common.b.i.a(r3, r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.b$2 r1 = new com.tkay.core.common.b.b$2
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final void b(com.tkay.core.common.f.d r3, com.tkay.core.api.AdError r4) {
            r2 = this;
            r0 = 0
            com.tkay.core.common.b.i r3 = com.tkay.core.common.b.i.a(r3, r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.b$6 r1 = new com.tkay.core.common.b.b$6
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    public final void c(com.tkay.core.common.f.d r3) {
            r2 = this;
            r0 = 0
            com.tkay.core.common.b.i r3 = com.tkay.core.common.b.i.a(r3, r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.b$4 r1 = new com.tkay.core.common.b.b$4
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final void d(com.tkay.core.common.f.d r3) {
            r2 = this;
            r0 = 0
            com.tkay.core.common.b.i r3 = com.tkay.core.common.b.i.a(r3, r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.b$5 r1 = new com.tkay.core.common.b.b$5
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }
}
