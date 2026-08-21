package com.xiaomi.mipush.sdk;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

class ad extends BroadcastReceiver {
    final NotificationClickedActivity a;

    ad(NotificationClickedActivity notificationClickedActivity) {
        this.a = notificationClickedActivity;
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        com.xiaomi.channel.commonutils.logger.b.b("clicked activity finish by normal.");
        this.a.finish();
    }
}
