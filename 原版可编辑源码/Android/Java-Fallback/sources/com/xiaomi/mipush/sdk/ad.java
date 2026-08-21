package com.xiaomi.mipush.sdk;

class ad extends android.content.BroadcastReceiver {
    final com.xiaomi.mipush.sdk.NotificationClickedActivity a;

    ad(com.xiaomi.mipush.sdk.NotificationClickedActivity r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            java.lang.String r1 = "clicked activity finish by normal."
            com.xiaomi.channel.commonutils.logger.b.b(r1)
            com.xiaomi.mipush.sdk.NotificationClickedActivity r1 = r0.a
            r1.finish()
            return
    }
}
