package com.tkay.expressad.foundation.g.c;

public abstract class b {
    protected com.tkay.expressad.foundation.g.c.a a;

    public b(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            com.tkay.expressad.foundation.g.c.a r0 = new com.tkay.expressad.foundation.g.c.a
            r0.<init>()
            r0.a(r3)
            com.tkay.expressad.foundation.g.c.c r3 = com.tkay.expressad.foundation.g.c.c.a
            r0.a(r3)
            java.util.List r3 = r2.b()
            int r1 = r3.size()
            if (r1 <= 0) goto L1d
            r0.a(r3)
        L1d:
            r2.a = r0
            return
    }

    protected static com.tkay.expressad.foundation.g.c.a a(java.util.ArrayList<com.tkay.expressad.foundation.g.c.a> r1, com.tkay.expressad.foundation.g.c.c r2, java.lang.String r3) {
            com.tkay.expressad.foundation.g.c.a r0 = new com.tkay.expressad.foundation.g.c.a
            r0.<init>()
            r0.a(r2)
            r0.a(r3)
            r1.add(r0)
            return r0
    }

    public final com.tkay.expressad.foundation.g.c.a a() {
            r1 = this;
            com.tkay.expressad.foundation.g.c.a r0 = r1.a
            return r0
    }

    protected abstract java.util.List<com.tkay.expressad.foundation.g.c.a> b();
}
