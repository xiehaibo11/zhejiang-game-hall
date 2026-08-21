package com.igexin.b.a.b;

public abstract class e extends com.igexin.b.a.d.e {
    public java.lang.String a;
    public com.igexin.b.a.b.b b;
    public java.lang.Object c;
    public com.igexin.b.a.b.d d;

    public e(int r1, java.lang.String r2, com.igexin.b.a.b.b r3) {
            r0 = this;
            r0.<init>(r1)
            if (r2 == 0) goto Lb
            java.lang.String r1 = r0.a(r2)
            r0.a = r1
        Lb:
            r0.b = r3
            return
    }

    public e(java.lang.String r2, com.igexin.b.a.b.b r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2, r3)
            return
    }

    private java.lang.String a(java.lang.String r1) {
            r0 = this;
            java.lang.String[] r1 = com.igexin.b.a.b.f.a(r1)
            java.lang.String r1 = com.igexin.b.a.b.f.a(r1)
            return r1
    }

    @Override
    public void f() {
            r2 = this;
            com.igexin.b.a.b.b r0 = r2.b
            if (r0 == 0) goto L8
            r1 = 0
            r0.a(r1)
        L8:
            r0 = 0
            r2.b = r0
            r2.d = r0
            r2.a = r0
            super.f()
            return
    }
}
