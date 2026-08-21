package com.xiaomi.push.service;

final class ch implements java.lang.Runnable {
    final com.xiaomi.push.ii a;

    ch(com.xiaomi.push.ii r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.xiaomi.push.ii r0 = r4.a
            java.lang.String r0 = r0.c()
            com.xiaomi.push.ii r1 = r4.a
            java.lang.String r1 = r1.b()
            com.xiaomi.push.ii r2 = r4.a
            com.xiaomi.push.hj r3 = com.xiaomi.push.hj.i
            com.xiaomi.push.if r0 = com.xiaomi.push.service.ah.a(r0, r1, r2, r3)
            byte[] r0 = com.xiaomi.push.it.a(r0)
            android.content.Context r1 = com.xiaomi.push.service.cg.a()
            boolean r1 = r1 instanceof com.xiaomi.push.service.XMPushService
            if (r1 == 0) goto L31
            android.content.Context r1 = com.xiaomi.push.service.cg.a()
            com.xiaomi.push.service.XMPushService r1 = (com.xiaomi.push.service.XMPushService) r1
            com.xiaomi.push.ii r2 = r4.a
            java.lang.String r2 = r2.c()
            r3 = 1
            r1.a(r2, r0, r3)
            goto L36
        L31:
            java.lang.String r0 = "UNDatas UploadNotificationDatas failed because not xmsf"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L36:
            return
    }
}
