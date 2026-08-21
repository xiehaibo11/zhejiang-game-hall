package com.igexin.push.extension.distribution.basic.f;

public abstract class d extends com.igexin.b.a.d.a {
    java.lang.String a;
    byte[] b;
    protected boolean c;
    protected boolean d;
    protected boolean e;
    public boolean f;

    public d(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public void a(java.lang.Exception r1) {
            r0 = this;
            return
    }

    public void a(byte[] r3) {
            r2 = this;
            r0 = 0
            r2.f = r0
            if (r3 != 0) goto L6
            return
        L6:
            int r0 = r3.length
            r1 = 7
            if (r0 >= r1) goto Lb
            return
        Lb:
            r0 = 5
            r0 = r3[r0]
            r1 = 111(0x6f, float:1.56E-43)
            if (r0 != r1) goto L1c
            r0 = 6
            r3 = r3[r0]
            r0 = 107(0x6b, float:1.5E-43)
            if (r3 != r0) goto L1c
            r3 = 1
            r2.f = r3
        L1c:
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void b(byte[] r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public byte[] c() {
            r1 = this;
            byte[] r0 = r1.b
            return r0
    }

    public boolean d() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public boolean e() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }
}
