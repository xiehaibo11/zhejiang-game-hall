package com.vivo.push.b;

public final class h extends com.vivo.push.o {
    private java.lang.String a;

    public h() {
            r1 = this;
            r0 = 2013(0x7dd, float:2.821E-42)
            r1.<init>(r0)
            return
    }

    public h(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            java.lang.String r0 = r2.a
            java.lang.String r1 = "MsgArriveCommand.MSG_TAG"
            r3.a(r1, r0)
            return
    }

    @Override
    protected final void d(com.vivo.push.a r2) {
            r1 = this;
            java.lang.String r0 = "MsgArriveCommand.MSG_TAG"
            java.lang.String r2 = r2.a(r0)
            r1.a = r2
            return
    }
}
