package com.vivo.push;

final class k implements java.lang.Runnable {
    final java.lang.String a;
    final com.vivo.push.e b;

    k(com.vivo.push.e r1, java.lang.String r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r3 = this;
            com.vivo.push.e r0 = r3.b
            java.lang.String r1 = r3.a
            com.vivo.push.e$a r0 = com.vivo.push.e.c(r0, r1)
            if (r0 == 0) goto L12
            r1 = 1003(0x3eb, float:1.406E-42)
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r0.a(r1, r2)
        L12:
            return
    }
}
