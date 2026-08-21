package com.vivo.push.b;

public final class u extends com.vivo.push.b.v {
    private long a;
    private int b;

    public u() {
            r2 = this;
            r0 = 20
            r2.<init>(r0)
            r0 = -1
            r2.a = r0
            return
    }

    @Override
    protected final void c(com.vivo.push.a r4) {
            r3 = this;
            super.c(r4)
            long r0 = r3.a
            java.lang.String r2 = "undo_msg_v1"
            r4.a(r2, r0)
            int r0 = r3.b
            java.lang.String r1 = "undo_msg_type_v1"
            r4.a(r1, r0)
            return
    }

    public final long d() {
            r2 = this;
            long r0 = r2.a
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r4) {
            r3 = this;
            super.d(r4)
            long r0 = r3.a
            java.lang.String r2 = "undo_msg_v1"
            long r0 = r4.b(r2, r0)
            r3.a = r0
            java.lang.String r0 = "undo_msg_type_v1"
            r1 = 0
            int r4 = r4.b(r0, r1)
            r3.b = r4
            return
    }

    public final java.lang.String e() {
            r4 = this;
            long r0 = r4.a
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto Ld
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        Ld:
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnUndoMsgCommand"
            return r0
    }
}
