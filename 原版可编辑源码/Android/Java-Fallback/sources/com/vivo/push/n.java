package com.vivo.push;

final class n extends android.os.Handler {
    n(android.os.Looper r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void handleMessage(android.os.Message r3) {
            r2 = this;
            java.lang.Object r3 = r3.obj
            boolean r0 = r3 instanceof com.vivo.push.l
            if (r0 == 0) goto L1a
            com.vivo.push.l r3 = (com.vivo.push.l) r3
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "PushClientThread-handleMessage, task = "
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "PushClientThread"
            com.vivo.push.util.p.c(r1, r0)
            r3.run()
        L1a:
            return
    }
}
