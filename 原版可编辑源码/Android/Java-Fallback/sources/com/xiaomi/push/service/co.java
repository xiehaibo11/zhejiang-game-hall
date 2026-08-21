package com.xiaomi.push.service;

class co extends android.os.Handler {
    final com.xiaomi.push.service.XMPushService a;

    co(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void handleMessage(android.os.Message r5) {
            r4 = this;
            super.handleMessage(r5)
            if (r5 == 0) goto L3f
            int r0 = r5.what     // Catch: java.lang.Throwable -> L3f
            r1 = 17
            if (r0 == r1) goto L31
            r1 = 18
            if (r0 == r1) goto L10
            goto L3f
        L10:
            r0 = 0
            r2 = 0
            android.os.Message r0 = android.os.Message.obtain(r0, r2)     // Catch: java.lang.Throwable -> L3f
            r0.what = r1     // Catch: java.lang.Throwable -> L3f
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L3f
            r1.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "xmsf_region"
            com.xiaomi.push.service.XMPushService r3 = r4.a     // Catch: java.lang.Throwable -> L3f
            java.lang.String r3 = com.xiaomi.push.service.XMPushService.a(r3)     // Catch: java.lang.Throwable -> L3f
            r1.putString(r2, r3)     // Catch: java.lang.Throwable -> L3f
            r0.setData(r1)     // Catch: java.lang.Throwable -> L3f
            android.os.Messenger r5 = r5.replyTo     // Catch: java.lang.Throwable -> L3f
            r5.send(r0)     // Catch: java.lang.Throwable -> L3f
            goto L3f
        L31:
            java.lang.Object r0 = r5.obj     // Catch: java.lang.Throwable -> L3f
            if (r0 == 0) goto L3f
            java.lang.Object r5 = r5.obj     // Catch: java.lang.Throwable -> L3f
            android.content.Intent r5 = (android.content.Intent) r5     // Catch: java.lang.Throwable -> L3f
            com.xiaomi.push.service.XMPushService r0 = r4.a     // Catch: java.lang.Throwable -> L3f
            r1 = 1
            r0.onStart(r5, r1)     // Catch: java.lang.Throwable -> L3f
        L3f:
            return
    }
}
