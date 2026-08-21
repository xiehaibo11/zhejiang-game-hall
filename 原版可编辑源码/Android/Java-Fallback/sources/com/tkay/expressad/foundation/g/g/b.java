package com.tkay.expressad.foundation.g.g;

public class b {
    private static final java.lang.String a = null;
    private static java.util.WeakHashMap<android.content.Context, com.tkay.expressad.foundation.g.g.c> b;
    private com.tkay.expressad.foundation.g.g.c c;
    private android.content.Context d;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.g.b> r0 = com.tkay.expressad.foundation.g.g.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.g.b.a = r0
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            com.tkay.expressad.foundation.g.g.b.b = r0
            return
    }

    private b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r2.d = r3
            java.util.WeakHashMap<android.content.Context, com.tkay.expressad.foundation.g.g.c> r0 = com.tkay.expressad.foundation.g.g.b.b
            java.lang.Object r3 = r0.get(r3)
            if (r3 == 0) goto L1a
            java.util.WeakHashMap<android.content.Context, com.tkay.expressad.foundation.g.g.c> r3 = com.tkay.expressad.foundation.g.g.b.b
            android.content.Context r0 = r2.d
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.foundation.g.g.c r3 = (com.tkay.expressad.foundation.g.g.c) r3
            r2.c = r3
            return
        L1a:
            com.tkay.expressad.foundation.g.g.c r3 = new com.tkay.expressad.foundation.g.g.c
            android.content.Context r0 = r2.d
            r1 = 5
            r3.<init>(r0, r1)
            r2.c = r3
            java.util.WeakHashMap<android.content.Context, com.tkay.expressad.foundation.g.g.c> r0 = com.tkay.expressad.foundation.g.g.b.b
            android.content.Context r1 = r2.d
            r0.put(r1, r3)
            return
    }

    private void a(com.tkay.expressad.foundation.g.g.a r2) {
            r1 = this;
            com.tkay.expressad.foundation.g.g.c r0 = r1.c
            r0.a(r2)
            return
    }
}
