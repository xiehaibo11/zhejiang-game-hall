package com.mbridge.msdk.foundation.same.b;

public final class a {
    private com.mbridge.msdk.foundation.same.b.c a;
    private java.lang.String b;
    private com.mbridge.msdk.foundation.same.b.a c;
    private java.util.List<com.mbridge.msdk.foundation.same.b.a> d;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(com.mbridge.msdk.foundation.same.b.a r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.same.b.a> r0 = r1.d
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.d = r0
        Lb:
            r2.c = r1
            java.util.List<com.mbridge.msdk.foundation.same.b.a> r0 = r1.d
            r0.add(r2)
            return
    }

    public final com.mbridge.msdk.foundation.same.b.c a() {
            r1 = this;
            com.mbridge.msdk.foundation.same.b.c r0 = r1.a
            return r0
    }

    public final void a(com.mbridge.msdk.foundation.same.b.c r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void a(com.mbridge.msdk.foundation.same.b.c r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.foundation.same.b.a r0 = new com.mbridge.msdk.foundation.same.b.a
            r0.<init>()
            r0.a = r2
            r0.b = r3
            r1.a(r0)
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.same.b.a> r2) {
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
            com.mbridge.msdk.foundation.same.b.a r0 = (com.mbridge.msdk.foundation.same.b.a) r0
            r1.a(r0)
            goto Ld
        L1d:
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final com.mbridge.msdk.foundation.same.b.a c() {
            r1 = this;
            com.mbridge.msdk.foundation.same.b.a r0 = r1.c
            return r0
    }

    public final java.util.List<com.mbridge.msdk.foundation.same.b.a> d() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.same.b.a> r0 = r1.d
            return r0
    }
}
