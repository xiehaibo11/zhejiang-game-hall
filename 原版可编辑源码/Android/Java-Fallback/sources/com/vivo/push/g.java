package com.vivo.push;

final class g implements com.vivo.push.IPushActionListener {
    final com.vivo.push.e.a a;
    final com.vivo.push.e b;

    g(com.vivo.push.e r1, com.vivo.push.e.a r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void onStateChanged(int r3) {
            r2 = this;
            if (r3 != 0) goto L27
            com.vivo.push.e$a r3 = r2.a
            java.lang.Object[] r3 = r3.b()
            if (r3 == 0) goto L1f
            int r3 = r3.length
            if (r3 != 0) goto Le
            goto L1f
        Le:
            com.vivo.push.e r3 = r2.b
            com.vivo.push.e$a r0 = r2.a
            java.lang.Object[] r0 = r0.b()
            r1 = 0
            r0 = r0[r1]
            java.lang.String r0 = (java.lang.String) r0
            r3.a(r0)
            return
        L1f:
            java.lang.String r3 = "PushClientManager"
            java.lang.String r0 = "bind app result is null"
            com.vivo.push.util.p.a(r3, r0)
            return
        L27:
            com.vivo.push.e r3 = r2.b
            r0 = 0
            com.vivo.push.e.a(r3, r0)
            com.vivo.push.e r3 = r2.b
            com.vivo.push.util.b r3 = com.vivo.push.e.b(r3)
            java.lang.String r0 = "APP_TOKEN"
            r3.b(r0)
            return
    }
}
