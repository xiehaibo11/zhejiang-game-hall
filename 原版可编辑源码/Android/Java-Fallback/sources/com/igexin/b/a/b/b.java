package com.igexin.b.a.b;

public abstract class b {
    protected java.lang.String c;
    protected com.igexin.b.a.b.b d;
    protected com.igexin.b.a.b.b e;
    protected boolean f;

    public b(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.f = r2
            return
    }

    public abstract java.lang.Object a(com.igexin.b.a.b.e r1, com.igexin.b.a.b.d r2, java.lang.Object r3);

    protected final void a(com.igexin.b.a.b.b r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.igexin.b.a.b.b r0 = r2.d
            r2.d = r1
            r1.e = r2
            r1.d = r0
            return
    }

    public void a(boolean r3) {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L7
            if (r3 != 0) goto L7
            return
        L7:
            com.igexin.b.a.b.b r3 = r2.d
            if (r3 == 0) goto L13
            com.igexin.b.a.b.b r0 = r3.d
            r1 = 0
            r3.d = r1
            r2.d = r0
            goto L7
        L13:
            return
    }

    public abstract java.lang.Object c(com.igexin.b.a.b.e r1, com.igexin.b.a.b.d r2, java.lang.Object r3);

    public final java.lang.Object d(com.igexin.b.a.b.e r2, com.igexin.b.a.b.d r3, java.lang.Object r4) {
            r1 = this;
            if (r4 == 0) goto Lf
            com.igexin.b.a.b.b r0 = r1.d
            if (r0 == 0) goto La
            java.lang.Object r4 = r0.d(r2, r3, r4)
        La:
            java.lang.Object r2 = r1.a(r2, r3, r4)
            return r2
        Lf:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "Nothing to encode!"
            r2.<init>(r3)
            throw r2
    }
}
