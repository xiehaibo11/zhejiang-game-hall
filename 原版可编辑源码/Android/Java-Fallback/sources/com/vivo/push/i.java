package com.vivo.push;

final class i implements com.vivo.push.IPushActionListener {
    final com.vivo.push.e a;

    i(com.vivo.push.e r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final void onStateChanged(int r3) {
            r2 = this;
            java.lang.String r0 = "APP_TOKEN"
            if (r3 != 0) goto L1f
            com.vivo.push.e r3 = r2.a
            java.lang.String r1 = ""
            com.vivo.push.e.a(r3, r1)
            com.vivo.push.e r3 = r2.a
            com.vivo.push.util.b r3 = com.vivo.push.e.b(r3)
            r3.a(r0, r1)
            com.vivo.push.e r3 = r2.a
            com.vivo.push.e.c(r3)
            com.vivo.push.e r3 = r2.a
            com.vivo.push.e.d(r3)
            return
        L1f:
            com.vivo.push.e r3 = r2.a
            r1 = 0
            com.vivo.push.e.a(r3, r1)
            com.vivo.push.e r3 = r2.a
            com.vivo.push.util.b r3 = com.vivo.push.e.b(r3)
            r3.b(r0)
            return
    }
}
