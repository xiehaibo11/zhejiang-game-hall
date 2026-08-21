package com.vivo.push.b;

public abstract class v extends com.vivo.push.b.s {
    private java.lang.String a;
    private long b;

    public v(int r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected void c(com.vivo.push.a r4) {
            r3 = this;
            super.c(r4)
            java.lang.String r0 = r3.a
            java.lang.String r1 = "OnVerifyCallBackCommand.EXTRA_SECURITY_CONTENT"
            r4.a(r1, r0)
            long r0 = r3.b
            java.lang.String r2 = "notify_id"
            r4.a(r2, r0)
            return
    }

    @Override
    protected void d(com.vivo.push.a r4) {
            r3 = this;
            super.d(r4)
            java.lang.String r0 = "OnVerifyCallBackCommand.EXTRA_SECURITY_CONTENT"
            java.lang.String r0 = r4.a(r0)
            r3.a = r0
            java.lang.String r0 = "notify_id"
            r1 = -1
            long r0 = r4.b(r0, r1)
            r3.b = r0
            return
    }

    public final long f() {
            r2 = this;
            long r0 = r2.b
            return r0
    }

    public final java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }
}
