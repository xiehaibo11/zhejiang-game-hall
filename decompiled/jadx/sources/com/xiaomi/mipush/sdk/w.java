package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.util.Log;

/* JADX INFO: loaded from: classes4.dex */
final class w implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8023a;

    w(Context context) {
        this.f8023a = context;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            PackageInfo packageInfo = this.f8023a.getPackageManager().getPackageInfo(this.f8023a.getPackageName(), 4612);
            v.c(this.f8023a);
            v.d(this.f8023a, packageInfo);
            v.c(this.f8023a, packageInfo);
        } catch (Throwable th) {
            Log.e("ManifestChecker", "", th);
        }
    }
}
