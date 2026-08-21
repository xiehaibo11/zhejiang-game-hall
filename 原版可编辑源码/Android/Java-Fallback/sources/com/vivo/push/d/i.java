package com.vivo.push.d;

final class i implements java.lang.Runnable {
    final int a;
    final java.util.List b;
    final java.util.List c;
    final java.lang.String d;
    final com.vivo.push.d.h e;

    i(com.vivo.push.d.h r1, int r2, java.util.List r3, java.util.List r4, java.lang.String r5) {
            r0 = this;
            r0.e = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.d = r5
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r7 = this;
            com.vivo.push.d.h r0 = r7.e
            com.vivo.push.sdk.PushMessageCallback r1 = r0.b
            com.vivo.push.d.h r0 = r7.e
            android.content.Context r2 = com.vivo.push.d.h.a(r0)
            int r3 = r7.a
            java.util.List r4 = r7.b
            java.util.List r5 = r7.c
            java.lang.String r6 = r7.d
            r1.onDelTags(r2, r3, r4, r5, r6)
            return
    }
}
