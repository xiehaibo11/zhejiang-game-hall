package com.vivo.push.b;

public final class z extends com.vivo.push.b.c {
    private java.util.ArrayList<java.lang.String> a;

    public z(boolean r1, java.lang.String r2, java.util.ArrayList<java.lang.String> r3) {
            r0 = this;
            if (r1 == 0) goto L5
            r1 = 2004(0x7d4, float:2.808E-42)
            goto L7
        L5:
            r1 = 2005(0x7d5, float:2.81E-42)
        L7:
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            java.util.ArrayList<java.lang.String> r0 = r2.a
            java.lang.String r1 = "tags"
            r3.a(r1, r0)
            return
    }

    @Override
    protected final void d(com.vivo.push.a r2) {
            r1 = this;
            super.d(r2)
            java.lang.String r0 = "tags"
            java.util.ArrayList r2 = r2.c(r0)
            r1.a = r2
            return
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "TagCommand"
            return r0
    }
}
