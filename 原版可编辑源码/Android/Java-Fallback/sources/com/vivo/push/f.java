package com.vivo.push;

final class f implements java.lang.Runnable {
    final java.lang.String a;
    final com.vivo.push.e b;

    f(com.vivo.push.e r1, java.lang.String r2) {
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
            android.content.Context r0 = com.vivo.push.e.a(r0)
            if (r0 != 0) goto L9
            return
        L9:
            java.lang.String r0 = r3.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2e
            com.vivo.push.e r0 = r3.b
            android.content.Context r0 = com.vivo.push.e.a(r0)
            com.vivo.push.e r1 = r3.b
            android.content.Context r1 = com.vivo.push.e.a(r1)
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = r3.a
            boolean r0 = com.vivo.push.util.z.b(r0, r1, r2)
            if (r0 == 0) goto L2e
            com.vivo.push.e r0 = r3.b
            r0.i()
        L2e:
            return
    }
}
