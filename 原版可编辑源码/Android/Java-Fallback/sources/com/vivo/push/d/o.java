package com.vivo.push.d;

final class o implements java.lang.Runnable {
    final com.vivo.push.b.n a;
    final com.vivo.push.d.n b;

    o(com.vivo.push.d.n r1, com.vivo.push.b.n r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r5 = this;
            com.vivo.push.d.n r0 = r5.b
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.n r1 = r5.b
            android.content.Context r1 = com.vivo.push.d.n.a(r1)
            com.vivo.push.b.n r2 = r5.a
            java.lang.String r2 = r2.d()
            com.vivo.push.b.n r3 = r5.a
            int r3 = r3.e()
            com.vivo.push.b.n r4 = r5.a
            boolean r4 = r4.f()
            r0.onLog(r1, r2, r3, r4)
            return
    }
}
