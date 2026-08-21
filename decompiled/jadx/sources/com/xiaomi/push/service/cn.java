package com.xiaomi.push.service;

import android.content.ComponentName;
import android.content.pm.PackageManager;

/* JADX INFO: loaded from: classes4.dex */
class cn implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8365a;

    cn(XMPushService xMPushService) {
        this.f8365a = xMPushService;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            PackageManager packageManager = this.f8365a.getApplicationContext().getPackageManager();
            ComponentName componentName = new ComponentName(this.f8365a.getApplicationContext(), "com.xiaomi.push.service.receivers.PingReceiver");
            if (packageManager.getComponentEnabledSetting(componentName) != 2) {
                packageManager.setComponentEnabledSetting(componentName, 2, 1);
            }
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.m43a("[Alarm] disable ping receiver may be failure. " + th);
        }
    }
}
