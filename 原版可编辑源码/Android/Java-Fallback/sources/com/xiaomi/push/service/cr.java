package com.xiaomi.push.service;

class cr extends android.database.ContentObserver {
    final com.xiaomi.push.service.XMPushService a;

    cr(com.xiaomi.push.service.XMPushService r1, android.os.Handler r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public void onChange(boolean r5) {
            r4 = this;
            super.onChange(r5)
            com.xiaomi.push.service.XMPushService r5 = r4.a
            boolean r5 = com.xiaomi.push.service.XMPushService.a(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SuperPowerMode:"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.XMPushService r0 = r4.a
            com.xiaomi.push.service.XMPushService.a(r0)
            if (r5 == 0) goto L34
            com.xiaomi.push.service.XMPushService r5 = r4.a
            com.xiaomi.push.service.XMPushService$g r0 = new com.xiaomi.push.service.XMPushService$g
            com.xiaomi.push.service.XMPushService r1 = r4.a
            r2 = 24
            r3 = 0
            r0.<init>(r1, r2, r3)
            r5.a(r0)
            goto L3a
        L34:
            com.xiaomi.push.service.XMPushService r5 = r4.a
            r0 = 1
            r5.a(r0)
        L3a:
            return
    }
}
