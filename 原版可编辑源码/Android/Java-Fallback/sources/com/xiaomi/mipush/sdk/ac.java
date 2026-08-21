package com.xiaomi.mipush.sdk;

class ac implements java.lang.Runnable {
    final com.xiaomi.mipush.sdk.NotificationClickedActivity a;

    ac(com.xiaomi.mipush.sdk.NotificationClickedActivity r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r1 = this;
            java.lang.String r0 = "clicked activity finish by timeout."
            com.xiaomi.channel.commonutils.logger.b.e(r0)
            com.xiaomi.mipush.sdk.NotificationClickedActivity r0 = r1.a
            r0.finish()
            return
    }
}
