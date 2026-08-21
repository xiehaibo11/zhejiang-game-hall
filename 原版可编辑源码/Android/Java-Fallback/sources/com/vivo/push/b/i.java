package com.vivo.push.b;

public final class i extends com.vivo.push.b.s {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;

    public i(int r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            java.lang.String r0 = r2.a
            java.lang.String r1 = "app_id"
            r3.a(r1, r0)
            java.lang.String r0 = r2.b
            java.lang.String r1 = "client_id"
            r3.a(r1, r0)
            java.lang.String r0 = r2.c
            java.lang.String r1 = "client_token"
            r3.a(r1, r0)
            return
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r2) {
            r1 = this;
            super.d(r2)
            java.lang.String r0 = "app_id"
            java.lang.String r0 = r2.a(r0)
            r1.a = r0
            java.lang.String r0 = "client_id"
            java.lang.String r0 = r2.a(r0)
            r1.b = r0
            java.lang.String r0 = "client_token"
            java.lang.String r2 = r2.a(r0)
            r1.c = r2
            return
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnBindCommand"
            return r0
    }
}
