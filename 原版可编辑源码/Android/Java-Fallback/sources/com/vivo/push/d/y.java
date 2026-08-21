package com.vivo.push.d;

final class y implements java.lang.Runnable {
    final com.vivo.push.b.r a;
    final com.vivo.push.d.x b;

    y(com.vivo.push.d.x r1, com.vivo.push.b.r r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r4 = this;
            com.vivo.push.d.x r0 = r4.b
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.x r1 = r4.b
            android.content.Context r1 = com.vivo.push.d.x.a(r1)
            com.vivo.push.b.r r2 = r4.a
            int r2 = r2.h()
            com.vivo.push.b.r r3 = r4.a
            java.lang.String r3 = r3.g()
            r0.onPublish(r1, r2, r3)
            return
    }
}
