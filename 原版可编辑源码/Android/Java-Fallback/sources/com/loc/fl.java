package com.loc;

public final class fl extends com.loc.r {
    java.util.Map<java.lang.String, java.lang.String> a;
    java.util.Map<java.lang.String, java.lang.String> b;
    java.lang.String c;
    byte[] d;
    private java.lang.String e;

    public fl() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.b = r0
            java.lang.String r1 = ""
            r2.c = r1
            r2.d = r0
            r2.e = r0
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a
            return r0
    }

    public final void a(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void a(byte[] r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void b(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.e
            return r0
        Lb:
            java.lang.String r0 = super.c()
            return r0
    }

    public final void c(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    public final byte[] d() {
            r1 = this;
            byte[] r0 = r1.d
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> e() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.b
            return r0
    }
}
