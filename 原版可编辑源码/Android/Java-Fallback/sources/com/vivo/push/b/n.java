package com.vivo.push.b;

public final class n extends com.vivo.push.b.s {
    private java.lang.String a;
    private int b;
    private boolean c;

    public n() {
            r1 = this;
            r0 = 7
            r1.<init>(r0)
            r0 = 0
            r1.b = r0
            r1.c = r0
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            java.lang.String r0 = r2.a
            java.lang.String r1 = "content"
            r3.a(r1, r0)
            int r0 = r2.b
            java.lang.String r1 = "log_level"
            r3.a(r1, r0)
            boolean r0 = r2.c
            java.lang.String r1 = "is_server_log"
            r3.a(r1, r0)
            return
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r3) {
            r2 = this;
            super.d(r3)
            java.lang.String r0 = "content"
            java.lang.String r0 = r3.a(r0)
            r2.a = r0
            java.lang.String r0 = "log_level"
            r1 = 0
            int r0 = r3.b(r0, r1)
            r2.b = r0
            java.lang.String r0 = "is_server_log"
            boolean r3 = r3.e(r0)
            r2.c = r3
            return
    }

    public final int e() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final boolean f() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnLogCommand"
            return r0
    }
}
