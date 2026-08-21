package com.xiaomi.mipush.sdk;

class ac implements Runnable {
    final NotificationClickedActivity a;

    ac(NotificationClickedActivity notificationClickedActivity) {
        this.a = notificationClickedActivity;
    }

    @Override
    public void run() {
        com.xiaomi.channel.commonutils.logger.b.e("clicked activity finish by timeout.");
        this.a.finish();
    }
}
