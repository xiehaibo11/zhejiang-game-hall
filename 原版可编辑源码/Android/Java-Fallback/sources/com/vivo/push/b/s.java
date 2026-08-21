package com.vivo.push.b;

public class s extends com.vivo.push.o {
    private java.lang.String a;
    private int b;

    public s(int r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            r1 = 0
            r0.b = r1
            return
    }

    @Override
    protected void c(com.vivo.push.a r3) {
            r2 = this;
            java.lang.String r0 = r2.a
            java.lang.String r1 = "req_id"
            r3.a(r1, r0)
            int r0 = r2.b
            java.lang.String r1 = "status_msg_code"
            r3.a(r1, r0)
            return
    }

    @Override
    protected void d(com.vivo.push.a r3) {
            r2 = this;
            java.lang.String r0 = "req_id"
            java.lang.String r0 = r3.a(r0)
            r2.a = r0
            int r0 = r2.b
            java.lang.String r1 = "status_msg_code"
            int r3 = r3.b(r1, r0)
            r2.b = r3
            return
    }

    public final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final int h() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnReceiveCommand"
            return r0
    }
}
