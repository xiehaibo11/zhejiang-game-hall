package com.vivo.push.d;

final class m implements java.lang.Runnable {
    final com.vivo.push.b.m a;
    final com.vivo.push.d.l b;

    m(com.vivo.push.d.l r1, com.vivo.push.b.m r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r5 = this;
            com.vivo.push.d.l r0 = r5.b
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.l r1 = r5.b
            android.content.Context r1 = com.vivo.push.d.l.a(r1)
            com.vivo.push.b.m r2 = r5.a
            int r2 = r2.h()
            com.vivo.push.b.m r3 = r5.a
            java.util.ArrayList r3 = r3.d()
            com.vivo.push.b.m r4 = r5.a
            java.lang.String r4 = r4.g()
            r0.onListTags(r1, r2, r3, r4)
            return
    }
}
