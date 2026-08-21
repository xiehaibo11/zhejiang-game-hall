package com.vivo.push.b;

public final class a extends com.vivo.push.b.c {
    private java.util.ArrayList<java.lang.String> a;

    public a(boolean r1, java.lang.String r2, java.util.ArrayList<java.lang.String> r3) {
            r0 = this;
            if (r1 == 0) goto L5
            r1 = 2002(0x7d2, float:2.805E-42)
            goto L7
        L5:
            r1 = 2003(0x7d3, float:2.807E-42)
        L7:
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    @Override
    public final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            java.util.ArrayList<java.lang.String> r0 = r2.a
            java.lang.String r1 = "tags"
            r3.a(r1, r0)
            return
    }

    @Override
    public final void d(com.vivo.push.a r2) {
            r1 = this;
            super.d(r2)
            java.lang.String r0 = "tags"
            java.util.ArrayList r2 = r2.c(r0)
            r1.a = r2
            return
    }

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AliasCommand:"
            r0.<init>(r1)
            int r1 = r2.b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
