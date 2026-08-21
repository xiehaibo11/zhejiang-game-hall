package com.igexin.push.core;

class u extends android.os.Handler {
    final com.igexin.push.core.r a;
    final com.igexin.push.core.t b;

    u(com.igexin.push.core.t r1, android.os.Looper r2, com.igexin.push.core.r r3) {
            r0 = this;
            r0.b = r1
            r0.a = r3
            r0.<init>(r2)
            return
    }

    @Override
    public void handleMessage(android.os.Message r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.what     // Catch: java.lang.Throwable -> L39
            r1 = 2
            r2 = 1
            if (r0 == r2) goto L1d
            if (r0 == r1) goto Lf
            r1 = 3
            if (r0 == r1) goto Lf
            goto L3d
        Lf:
            com.igexin.push.core.t r0 = r3.b     // Catch: java.lang.Throwable -> L39
            com.igexin.push.core.r r0 = r0.a     // Catch: java.lang.Throwable -> L39
            int r4 = r4.arg1     // Catch: java.lang.Throwable -> L39
            if (r4 != 0) goto L18
            goto L19
        L18:
            r2 = 0
        L19:
            com.igexin.push.core.r.a(r0, r2)     // Catch: java.lang.Throwable -> L39
            goto L3d
        L1d:
            com.igexin.push.core.t r0 = r3.b     // Catch: java.lang.Throwable -> L39
            com.igexin.push.core.r r0 = r0.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r4 = r4.obj     // Catch: java.lang.Throwable -> L39
            android.os.IBinder r4 = (android.os.IBinder) r4     // Catch: java.lang.Throwable -> L39
            boolean r4 = com.igexin.push.core.r.a(r0, r4)     // Catch: java.lang.Throwable -> L39
            if (r4 == 0) goto L3d
            r3.removeMessages(r1)     // Catch: java.lang.Throwable -> L39
            r3.removeMessages(r2)     // Catch: java.lang.Throwable -> L39
            com.igexin.push.core.t r4 = r3.b     // Catch: java.lang.Throwable -> L39
            com.igexin.push.core.r r4 = r4.a     // Catch: java.lang.Throwable -> L39
            com.igexin.push.core.r.b(r4)     // Catch: java.lang.Throwable -> L39
            goto L3d
        L39:
            r4 = move-exception
            r4.printStackTrace()
        L3d:
            return
    }
}
