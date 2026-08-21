package com.vivo.push.util;

final class l implements java.lang.Runnable {
    final java.util.List a;
    final com.vivo.push.util.k b;

    l(com.vivo.push.util.k r1, java.util.List r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r8 = this;
            com.vivo.push.util.k r0 = r8.b
            com.vivo.push.model.InsideNotificationItem r0 = com.vivo.push.util.k.a(r0)
            if (r0 == 0) goto L3a
            com.vivo.push.util.w r0 = com.vivo.push.util.w.b()
            com.vivo.push.util.k r1 = r8.b
            long r1 = com.vivo.push.util.k.b(r1)
            java.lang.String r3 = "com.vivo.push.notify_key"
            r0.a(r3, r1)
            com.vivo.push.util.k r0 = r8.b
            android.content.Context r1 = com.vivo.push.util.k.c(r0)
            java.util.List r2 = r8.a
            com.vivo.push.util.k r0 = r8.b
            com.vivo.push.model.InsideNotificationItem r3 = com.vivo.push.util.k.a(r0)
            com.vivo.push.util.k r0 = r8.b
            long r4 = com.vivo.push.util.k.b(r0)
            com.vivo.push.util.k r0 = r8.b
            int r6 = com.vivo.push.util.k.d(r0)
            com.vivo.push.util.k r0 = r8.b
            com.vivo.push.d.r$a r7 = com.vivo.push.util.k.e(r0)
            com.vivo.push.util.NotifyAdapterUtil.pushNotification(r1, r2, r3, r4, r6, r7)
        L3a:
            return
    }
}
