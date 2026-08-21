package com.tkay.core.common.f;

public final class c {
    private java.lang.String a;
    private java.lang.String b;
    private int c;

    public c(java.lang.String r1, java.lang.String r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    private java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    private int c() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final boolean a(com.tkay.core.common.f.aj r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L22
            int r1 = r4.a
            r2 = 2
            if (r1 == r2) goto L17
            r2 = 3
            if (r1 == r2) goto Lc
            goto L22
        Lc:
            int r4 = r4.c()
            int r1 = r3.c
            if (r4 != r1) goto L16
            r4 = 1
            return r4
        L16:
            return r0
        L17:
            java.lang.String r4 = r4.t()
            java.lang.String r0 = r3.a
            boolean r4 = r4.equals(r0)
            return r4
        L22:
            return r0
    }
}
