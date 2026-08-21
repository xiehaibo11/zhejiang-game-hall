package com.reyun.tracking.b.a;

public class k {
    public final java.util.concurrent.LinkedBlockingQueue a;
    android.content.ServiceConnection b;
    private android.content.Context c;

    public k(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            com.reyun.tracking.b.a.l r0 = new com.reyun.tracking.b.a.l
            r0.<init>(r2)
            r2.b = r0
            r2.c = r3
            return
    }

    public void a(com.reyun.tracking.b.d r6) {
            r5 = this;
            java.lang.String r0 = "com.samsung.android.deviceidservice"
            r1 = 0
            android.content.Context r2 = r5.c     // Catch: java.lang.Exception -> Ld
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Ld
            r2.getPackageInfo(r0, r1)     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r2 = move-exception
            r2.printStackTrace()
        L11:
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "com.samsung.android.deviceidservice.DeviceIdService"
            r2.setClassName(r0, r3)
            android.content.Context r0 = r5.c
            android.content.ServiceConnection r3 = r5.b
            r4 = 1
            boolean r0 = r0.bindService(r2, r3, r4)
            if (r0 == 0) goto L41
            java.util.concurrent.LinkedBlockingQueue r0 = r5.a     // Catch: java.lang.Exception -> L3d
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Exception -> L3d
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Exception -> L3d
            com.reyun.tracking.b.b.m r2 = new com.reyun.tracking.b.b.m     // Catch: java.lang.Exception -> L3d
            r2.<init>(r0)     // Catch: java.lang.Exception -> L3d
            java.lang.String r0 = r2.a()     // Catch: java.lang.Exception -> L3d
            if (r6 == 0) goto L41
            r6.a(r0, r1)     // Catch: java.lang.Exception -> L3d
            goto L41
        L3d:
            r6 = move-exception
            r6.printStackTrace()
        L41:
            return
    }
}
