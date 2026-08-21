package com.tkay.expressad.foundation.g.c;

public final class a {
    private com.tkay.expressad.foundation.g.c.c a;
    private java.lang.String b;
    private com.tkay.expressad.foundation.g.c.a c;
    private java.util.List<com.tkay.expressad.foundation.g.c.a> d;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(com.tkay.expressad.foundation.g.c.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    private void b(com.tkay.expressad.foundation.g.c.a r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.g.c.a> r0 = r1.d
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.d = r0
        Lb:
            r2.c = r1
            java.util.List<com.tkay.expressad.foundation.g.c.a> r0 = r1.d
            r0.add(r2)
            return
    }

    public final com.tkay.expressad.foundation.g.c.c a() {
            r1 = this;
            com.tkay.expressad.foundation.g.c.c r0 = r1.a
            return r0
    }

    public final void a(com.tkay.expressad.foundation.g.c.c r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.g.c.c r2, java.lang.String r3) {
            r1 = this;
            com.tkay.expressad.foundation.g.c.a r0 = new com.tkay.expressad.foundation.g.c.a
            r0.<init>()
            r0.a = r2
            r0.b = r3
            r1.b(r0)
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.util.List<com.tkay.expressad.foundation.g.c.a> r2) {
            r1 = this;
            if (r2 == 0) goto L1d
            int r0 = r2.size()
            if (r0 != 0) goto L9
            goto L1d
        L9:
            java.util.Iterator r2 = r2.iterator()
        Ld:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L1d
            java.lang.Object r0 = r2.next()
            com.tkay.expressad.foundation.g.c.a r0 = (com.tkay.expressad.foundation.g.c.a) r0
            r1.b(r0)
            goto Ld
        L1d:
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final com.tkay.expressad.foundation.g.c.a c() {
            r1 = this;
            com.tkay.expressad.foundation.g.c.a r0 = r1.c
            return r0
    }

    public final java.util.List<com.tkay.expressad.foundation.g.c.a> d() {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.g.c.a> r0 = r1.d
            return r0
    }
}
