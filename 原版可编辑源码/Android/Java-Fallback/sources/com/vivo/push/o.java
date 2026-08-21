package com.vivo.push;

public abstract class o {
    private int a;
    private java.lang.String b;

    public o(int r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.a = r0
            if (r2 < 0) goto Lb
            r1.a = r2
            return
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "PushCommand: the value of command must > 0."
            r2.<init>(r0)
            throw r2
    }

    private void e(com.vivo.push.a r3) {
            r2 = this;
            int r0 = r2.a
            java.lang.String r1 = "command"
            r3.a(r1, r0)
            java.lang.String r0 = r2.b
            java.lang.String r1 = "client_pkgname"
            r3.a(r1, r0)
            r2.c(r3)
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final void a(android.content.Intent r2) {
            r1 = this;
            com.vivo.push.a r0 = com.vivo.push.a.a(r2)
            if (r0 != 0) goto Le
            java.lang.String r2 = "PushCommand"
            java.lang.String r0 = "bundleWapper is null"
            com.vivo.push.util.p.b(r2, r0)
            return
        Le:
            r1.a(r0)
            android.os.Bundle r0 = r0.b()
            if (r0 == 0) goto L1a
            r2.putExtras(r0)
        L1a:
            return
    }

    public final void a(com.vivo.push.a r3) {
            r2 = this;
            int r0 = r2.a
            java.lang.String r0 = com.vivo.push.p.a(r0)
            if (r0 != 0) goto La
            java.lang.String r0 = ""
        La:
            java.lang.String r1 = "method"
            r3.a(r1, r0)
            r2.e(r3)
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public final void b(android.content.Intent r4) {
            r3 = this;
            com.vivo.push.a r0 = com.vivo.push.a.a(r4)
            if (r0 != 0) goto Le
            java.lang.String r4 = "PushCommand"
            java.lang.String r0 = "bundleWapper is null"
            com.vivo.push.util.p.b(r4, r0)
            return
        Le:
            int r1 = r3.a
            java.lang.String r2 = "method"
            r0.a(r2, r1)
            r3.e(r0)
            android.os.Bundle r0 = r0.b()
            if (r0 == 0) goto L21
            r4.putExtras(r0)
        L21:
            return
    }

    public final void b(com.vivo.push.a r3) {
            r2 = this;
            java.lang.String r0 = r3.a()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb
            goto L11
        Lb:
            java.lang.String r0 = "client_pkgname"
            java.lang.String r0 = r3.a(r0)
        L11:
            r2.b = r0
            r2.d(r3)
            return
    }

    protected abstract void c(com.vivo.push.a r1);

    public boolean c() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected abstract void d(com.vivo.push.a r1);

    public java.lang.String toString() {
            r1 = this;
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            return r0
    }
}
