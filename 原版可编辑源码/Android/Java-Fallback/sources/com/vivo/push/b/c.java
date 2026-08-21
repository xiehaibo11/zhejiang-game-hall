package com.vivo.push.b;

public class c extends com.vivo.push.o {
    private java.lang.String a;
    private java.lang.String b;
    private long c;
    private int d;
    private int e;
    private java.lang.String f;

    public c(int r3, java.lang.String r4) {
            r2 = this;
            r2.<init>(r3)
            r0 = -1
            r2.c = r0
            r3 = -1
            r2.d = r3
            r3 = 0
            r2.a = r3
            r2.b = r4
            return
    }

    public final int a(android.content.Context r5) {
            r4 = this;
            int r0 = r4.d
            r1 = -1
            if (r0 != r1) goto L36
            java.lang.String r0 = r4.b
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L25
            java.lang.String r0 = "BaseAppCommand"
            java.lang.String r2 = "pkg name is null"
            com.vivo.push.util.p.a(r0, r2)
            java.lang.String r2 = r4.a()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L24
            java.lang.String r5 = "src is null"
            com.vivo.push.util.p.a(r0, r5)
            return r1
        L24:
            r0 = r2
        L25:
            int r5 = com.vivo.push.util.t.b(r5, r0)
            r4.d = r5
            java.lang.String r5 = r4.f
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L36
            r5 = 2
            r4.d = r5
        L36:
            int r5 = r4.d
            return r5
    }

    public final void a(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    protected void c(com.vivo.push.a r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.String r1 = "req_id"
            r4.a(r1, r0)
            java.lang.String r0 = r3.b
            java.lang.String r1 = "package_name"
            r4.a(r1, r0)
            java.lang.String r0 = "sdk_version"
            r1 = 323(0x143, double:1.596E-321)
            r4.a(r0, r1)
            int r0 = r3.d
            java.lang.String r1 = "PUSH_APP_STATUS"
            r4.a(r1, r0)
            java.lang.String r0 = r3.f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r3.f
            java.lang.String r1 = "BaseAppCommand.EXTRA__HYBRIDVERSION"
            r4.a(r1, r0)
        L2b:
            return
    }

    @Override
    protected void d(com.vivo.push.a r4) {
            r3 = this;
            java.lang.String r0 = "req_id"
            java.lang.String r0 = r4.a(r0)
            r3.a = r0
            java.lang.String r0 = "package_name"
            java.lang.String r0 = r4.a(r0)
            r3.b = r0
            java.lang.String r0 = "sdk_version"
            r1 = 0
            long r0 = r4.b(r0, r1)
            r3.c = r0
            java.lang.String r0 = "PUSH_APP_STATUS"
            r1 = 0
            int r0 = r4.b(r0, r1)
            r3.d = r0
            java.lang.String r0 = "BaseAppCommand.EXTRA__HYBRIDVERSION"
            java.lang.String r4 = r4.a(r0)
            r3.f = r4
            return
    }

    public final int f() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    public final void g() {
            r1 = this;
            r0 = 0
            r1.f = r0
            return
    }

    public final java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "BaseAppCommand"
            return r0
    }
}
