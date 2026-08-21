package com.tkay.core.common.h.a;

public final class b extends com.tkay.core.common.h.a.c {
    java.lang.String a;
    boolean b;
    int c;
    private final java.lang.String k;

    public b(java.lang.String r2, int r3) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.k = r0
            r0 = 1
            r1.c = r0
            r1.b = r0
            r1.a = r2
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r3 != r2) goto L1b
            r1.c = r0
            return
        L1b:
            r2 = 1001(0x3e9, float:1.403E-42)
            if (r3 != r2) goto L22
            r2 = 2
            r1.c = r2
        L22:
            return
    }

    @Override
    public final void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = this;
            return
    }

    @Override
    public final int c() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    @Override
    public final int d() {
            r1 = this;
            r0 = 3
            return r0
    }

    @Override
    public final byte[] e() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r0 = r1.a
            byte[] r0 = a(r0)
            return r0
        Lf:
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }
}
