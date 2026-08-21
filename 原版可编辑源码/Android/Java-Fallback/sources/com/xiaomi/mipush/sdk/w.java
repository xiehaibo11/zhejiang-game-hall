package com.xiaomi.mipush.sdk;

final class w implements java.lang.Runnable {
    final android.content.Context a;

    w(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L22
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L22
            android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L22
            r2 = 4612(0x1204, float:6.463E-42)
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Throwable -> L22
            android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L22
            com.xiaomi.mipush.sdk.v.b(r1)     // Catch: java.lang.Throwable -> L22
            android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L22
            com.xiaomi.mipush.sdk.v.a(r1, r0)     // Catch: java.lang.Throwable -> L22
            android.content.Context r1 = r3.a     // Catch: java.lang.Throwable -> L22
            com.xiaomi.mipush.sdk.v.b(r1, r0)     // Catch: java.lang.Throwable -> L22
            goto L2a
        L22:
            r0 = move-exception
            java.lang.String r1 = "ManifestChecker"
            java.lang.String r2 = ""
            android.util.Log.e(r1, r2, r0)
        L2a:
            return
    }
}
