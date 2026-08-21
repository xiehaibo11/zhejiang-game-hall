package com.tkay.core.common.l.a;

public class c {
    private final com.tkay.core.common.l.a.f a;
    private final java.util.Map<android.view.View, com.tkay.core.common.l.a.b> b;
    private final java.util.Map<android.view.View, com.tkay.core.common.l.a.d<com.tkay.core.common.l.a.b>> c;
    private final com.tkay.core.common.l.a.f.b d;
    private com.tkay.core.common.l.a.f.d e;


    public c() {
            r6 = this;
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            java.util.WeakHashMap r1 = new java.util.WeakHashMap
            r1.<init>()
            com.tkay.core.common.l.a.f$b r2 = new com.tkay.core.common.l.a.f$b
            r2.<init>()
            com.tkay.core.common.l.a.f r3 = new com.tkay.core.common.l.a.f
            r3.<init>()
            android.os.Handler r4 = new android.os.Handler
            android.os.Looper r5 = android.os.Looper.getMainLooper()
            r4.<init>(r5)
            r6.<init>(r0, r1, r2, r3)
            return
    }

    public c(int r6) {
            r5 = this;
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            java.util.WeakHashMap r1 = new java.util.WeakHashMap
            r1.<init>()
            com.tkay.core.common.l.a.f$b r2 = new com.tkay.core.common.l.a.f$b
            r2.<init>()
            com.tkay.core.common.l.a.f r3 = new com.tkay.core.common.l.a.f
            r3.<init>(r6)
            android.os.Handler r6 = new android.os.Handler
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r6.<init>(r4)
            r5.<init>(r0, r1, r2, r3)
            return
    }

    private c(java.util.Map<android.view.View, com.tkay.core.common.l.a.b> r1, java.util.Map<android.view.View, com.tkay.core.common.l.a.d<com.tkay.core.common.l.a.b>> r2, com.tkay.core.common.l.a.f.b r3, com.tkay.core.common.l.a.f r4) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            r0.a = r4
            com.tkay.core.common.l.a.c$1 r1 = new com.tkay.core.common.l.a.c$1
            r1.<init>(r0)
            r0.e = r1
            com.tkay.core.common.l.a.f r2 = r0.a
            r2.a(r1)
            return
    }

    static java.util.Map a(com.tkay.core.common.l.a.c r0) {
            java.util.Map<android.view.View, com.tkay.core.common.l.a.b> r0 = r0.b
            return r0
    }

    private void b(android.view.View r2) {
            r1 = this;
            java.util.Map<android.view.View, com.tkay.core.common.l.a.d<com.tkay.core.common.l.a.b>> r0 = r1.c
            r0.remove(r2)
            return
    }

    @java.lang.Deprecated
    private com.tkay.core.common.l.a.f.d c() {
            r1 = this;
            com.tkay.core.common.l.a.f$d r0 = r1.e
            return r0
    }

    public final void a() {
            r1 = this;
            java.util.Map<android.view.View, com.tkay.core.common.l.a.b> r0 = r1.b
            r0.clear()
            java.util.Map<android.view.View, com.tkay.core.common.l.a.d<com.tkay.core.common.l.a.b>> r0 = r1.c
            r0.clear()
            com.tkay.core.common.l.a.f r0 = r1.a
            r0.a()
            return
    }

    public final void a(android.view.View r2) {
            r1 = this;
            java.util.Map<android.view.View, com.tkay.core.common.l.a.b> r0 = r1.b
            r0.remove(r2)
            r1.b(r2)
            com.tkay.core.common.l.a.f r0 = r1.a
            r0.a(r2)
            return
    }

    public final void a(android.view.View r8, com.tkay.core.common.l.a.b r9) {
            r7 = this;
            java.util.Map<android.view.View, com.tkay.core.common.l.a.b> r0 = r7.b
            java.lang.Object r0 = r0.get(r8)
            if (r0 != r9) goto L9
            return
        L9:
            r7.a(r8)
            boolean r0 = r9.isImpressionRecorded()
            if (r0 == 0) goto L13
            return
        L13:
            java.util.Map<android.view.View, com.tkay.core.common.l.a.b> r0 = r7.b
            r0.put(r8, r9)
            com.tkay.core.common.l.a.f r1 = r7.a
            int r5 = r9.getImpressionMinPercentageViewed()
            java.lang.Integer r6 = r9.getImpressionMinVisiblePx()
            r2 = r8
            r3 = r8
            r4 = r5
            r1.a(r2, r3, r4, r5, r6)
            return
    }

    public final void b() {
            r1 = this;
            r1.a()
            com.tkay.core.common.l.a.f r0 = r1.a
            r0.b()
            r0 = 0
            r1.e = r0
            return
    }
}
