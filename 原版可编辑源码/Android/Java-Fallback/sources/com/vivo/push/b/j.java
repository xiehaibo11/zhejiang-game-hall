package com.vivo.push.b;

public final class j extends com.vivo.push.b.s {
    private int a;
    private int b;

    public j() {
            r1 = this;
            r0 = 12
            r1.<init>(r0)
            r0 = -1
            r1.a = r0
            r1.b = r0
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            int r0 = r2.a
            java.lang.String r1 = "OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS"
            r3.a(r1, r0)
            int r0 = r2.b
            java.lang.String r1 = "OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS"
            r3.a(r1, r0)
            return
    }

    public final int d() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r3) {
            r2 = this;
            super.d(r3)
            int r0 = r2.a
            java.lang.String r1 = "OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS"
            int r0 = r3.b(r1, r0)
            r2.a = r0
            int r0 = r2.b
            java.lang.String r1 = "OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS"
            int r3 = r3.b(r1, r0)
            r2.b = r3
            return
    }

    public final int e() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnChangePushStatusCommand"
            return r0
    }
}
