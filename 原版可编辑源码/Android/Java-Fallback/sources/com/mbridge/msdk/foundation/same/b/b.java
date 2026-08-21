package com.mbridge.msdk.foundation.same.b;

public abstract class b {
    protected com.mbridge.msdk.foundation.same.b.a a;

    public b(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.foundation.same.b.a r0 = new com.mbridge.msdk.foundation.same.b.a
            r0.<init>()
            r0.a(r3)
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.a
            r0.a(r3)
            java.util.List r3 = r2.b()
            if (r3 == 0) goto L1f
            int r1 = r3.size()
            if (r1 <= 0) goto L1f
            r0.a(r3)
        L1f:
            r2.a = r0
            return
    }

    public final com.mbridge.msdk.foundation.same.b.a a() {
            r1 = this;
            com.mbridge.msdk.foundation.same.b.a r0 = r1.a
            return r0
    }

    protected final com.mbridge.msdk.foundation.same.b.a a(java.util.ArrayList<com.mbridge.msdk.foundation.same.b.a> r2, com.mbridge.msdk.foundation.same.b.c r3, java.lang.String r4) {
            r1 = this;
            com.mbridge.msdk.foundation.same.b.a r0 = new com.mbridge.msdk.foundation.same.b.a
            r0.<init>()
            r0.a(r3)
            r0.a(r4)
            r2.add(r0)
            return r0
    }

    protected abstract java.util.List<com.mbridge.msdk.foundation.same.b.a> b();
}
