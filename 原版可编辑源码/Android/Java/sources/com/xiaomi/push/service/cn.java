package com.xiaomi.push.service;

import android.content.ComponentName;
import android.content.pm.PackageManager;

class cn implements Runnable {
    final XMPushService a;

    cn(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    @Override
    public void run() {
        try {
            PackageManager packageManager = this.a.getApplicationContext().getPackageManager();
            ComponentName componentName = new ComponentName(this.a.getApplicationContext(), "com.xiaomi.push.service.receivers.PingReceiver");
            if (packageManager.getComponentEnabledSetting(componentName) != 2) {
                packageManager.setComponentEnabledSetting(componentName, 2, 1);
            }
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("[Alarm] disable ping receiver may be failure. " + th);
        }
    }
}
