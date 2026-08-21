package com.vivo.push.d;

final class ae implements java.lang.Runnable {
    final com.vivo.push.b.i a;
    final com.vivo.push.d.ad b;

    ae(com.vivo.push.d.ad r1, com.vivo.push.b.i r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r4 = this;
            com.vivo.push.d.ad r0 = r4.b
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.ad r1 = r4.b
            android.content.Context r1 = com.vivo.push.d.ad.a(r1)
            com.vivo.push.b.i r2 = r4.a
            int r2 = r2.h()
            com.vivo.push.b.i r3 = r4.a
            java.lang.String r3 = r3.d()
            r0.onUnBind(r1, r2, r3)
            return
    }
}
