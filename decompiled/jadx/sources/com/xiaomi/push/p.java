package com.xiaomi.push;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.PackageManager;

/* JADX INFO: loaded from: classes4.dex */
final class p implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ComponentName f8265a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ Context f834a;

    p(Context context, ComponentName componentName) {
        this.f834a = context;
        this.f8265a = componentName;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            PackageManager packageManager = this.f834a.getPackageManager();
            if (packageManager.getComponentEnabledSetting(this.f8265a) != 2) {
                packageManager.setComponentEnabledSetting(this.f8265a, 2, 1);
            }
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.m43a("close static register of network status receiver failed:" + th);
        }
    }
}
