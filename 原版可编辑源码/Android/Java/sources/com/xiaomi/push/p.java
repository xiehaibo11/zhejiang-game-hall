package com.xiaomi.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.PackageManager;

final class p implements Runnable {
    final ComponentName a;
    final Context a;

    p(Context context, ComponentName componentName) {
        this.a = context;
        this.a = componentName;
    }

    @Override
    public void run() {
        try {
            PackageManager packageManager = this.a.getPackageManager();
            if (packageManager.getComponentEnabledSetting(this.a) != 2) {
                packageManager.setComponentEnabledSetting(this.a, 2, 1);
            }
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("close static register of network status receiver failed:" + th);
        }
    }
}
