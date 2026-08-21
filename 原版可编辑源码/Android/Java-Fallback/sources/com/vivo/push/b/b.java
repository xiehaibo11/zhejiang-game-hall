package com.vivo.push.b;

public final class b extends com.vivo.push.b.c {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private boolean e;

    public b(boolean r1, java.lang.String r2) {
            r0 = this;
            if (r1 == 0) goto L5
            r1 = 2006(0x7d6, float:2.811E-42)
            goto L7
        L5:
            r1 = 2007(0x7d7, float:2.812E-42)
        L7:
            r0.<init>(r1, r2)
            r1 = 0
            r0.e = r1
            return
    }

    @Override
    public final void c(com.vivo.push.a r4) {
            r3 = this;
            super.c(r4)
            java.lang.String r0 = r3.a
            java.lang.String r1 = "sdk_clients"
            r4.a(r1, r0)
            java.lang.String r0 = "sdk_version"
            r1 = 323(0x143, double:1.596E-321)
            r4.a(r0, r1)
            java.lang.String r0 = r3.c
            java.lang.String r1 = "BaseAppCommand.EXTRA_APPID"
            r4.a(r1, r0)
            java.lang.String r0 = r3.b
            java.lang.String r1 = "BaseAppCommand.EXTRA_APPKEY"
            r4.a(r1, r0)
            java.lang.String r0 = r3.d
            java.lang.String r1 = "PUSH_REGID"
            r4.a(r1, r0)
            return
    }

    public final void d() {
            r1 = this;
            r0 = 0
            r1.c = r0
            return
    }

    @Override
    public final void d(com.vivo.push.a r2) {
            r1 = this;
            super.d(r2)
            java.lang.String r0 = "sdk_clients"
            java.lang.String r0 = r2.a(r0)
            r1.a = r0
            java.lang.String r0 = "BaseAppCommand.EXTRA_APPID"
            java.lang.String r0 = r2.a(r0)
            r1.c = r0
            java.lang.String r0 = "BaseAppCommand.EXTRA_APPKEY"
            java.lang.String r0 = r2.a(r0)
            r1.b = r0
            java.lang.String r0 = "PUSH_REGID"
            java.lang.String r2 = r2.a(r0)
            r1.d = r2
            return
    }

    public final void e() {
            r1 = this;
            r0 = 0
            r1.b = r0
            return
    }

    @Override
    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AppCommand:"
            r0.<init>(r1)
            int r1 = r2.b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
