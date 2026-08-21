package com.vivo.push.b;

public final class o extends com.vivo.push.b.v {
    protected com.vivo.push.model.UnvarnishedMessage a;

    public o() {
            r1 = this;
            r0 = 3
            r1.<init>(r0)
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            com.vivo.push.model.UnvarnishedMessage r0 = r2.a
            java.lang.String r0 = r0.unpackToJson()
            java.lang.String r1 = "msg_v1"
            r3.a(r1, r0)
            return
    }

    public final java.lang.String d() {
            r1 = this;
            com.vivo.push.model.UnvarnishedMessage r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r0.unpackToJson()
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r4) {
            r3 = this;
            super.d(r4)
            java.lang.String r0 = "msg_v1"
            java.lang.String r4 = r4.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1d
            com.vivo.push.model.UnvarnishedMessage r0 = new com.vivo.push.model.UnvarnishedMessage
            r0.<init>(r4)
            r3.a = r0
            long r1 = r3.f()
            r0.setMsgId(r1)
        L1d:
            return
    }

    public final com.vivo.push.model.UnvarnishedMessage e() {
            r1 = this;
            com.vivo.push.model.UnvarnishedMessage r0 = r1.a
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnMessageCommand"
            return r0
    }
}
