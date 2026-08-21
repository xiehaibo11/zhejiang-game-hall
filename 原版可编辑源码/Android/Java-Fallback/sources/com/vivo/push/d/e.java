package com.vivo.push.d;

final class e implements java.lang.Runnable {
    final java.lang.String a;
    final com.vivo.push.b.i b;
    final com.vivo.push.d.d c;

    e(com.vivo.push.d.d r1, java.lang.String r2, com.vivo.push.b.i r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r4 = this;
            java.lang.String r0 = r4.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            com.vivo.push.d.d r0 = r4.c
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.d r1 = r4.c
            android.content.Context r1 = com.vivo.push.d.d.a(r1)
            java.lang.String r2 = r4.a
            r0.onReceiveRegId(r1, r2)
        L17:
            com.vivo.push.d.d r0 = r4.c
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.d r1 = r4.c
            android.content.Context r1 = com.vivo.push.d.d.b(r1)
            com.vivo.push.b.i r2 = r4.b
            int r2 = r2.h()
            com.vivo.push.b.i r3 = r4.b
            java.lang.String r3 = r3.d()
            r0.onBind(r1, r2, r3)
            return
    }
}
