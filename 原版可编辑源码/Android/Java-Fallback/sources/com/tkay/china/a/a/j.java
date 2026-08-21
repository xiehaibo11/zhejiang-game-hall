package com.tkay.china.a.a;

public final class j {
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> a;
    android.content.ServiceConnection b;
    private android.content.Context c;


    public j(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            com.tkay.china.a.a.j$1 r0 = new com.tkay.china.a.a.j$1
            r0.<init>(r2)
            r2.b = r0
            r2.c = r3
            return
    }

    public final void a(com.tkay.china.a.a r6) {
            r5 = this;
            java.lang.String r0 = "com.samsung.android.deviceidservice"
            r1 = 0
            android.content.Context r2 = r5.c     // Catch: java.lang.Throwable -> Ld
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> Ld
            r2.getPackageInfo(r0, r1)     // Catch: java.lang.Throwable -> Ld
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
            if (r0 == 0) goto L46
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r5.a     // Catch: java.lang.Throwable -> L3b
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Throwable -> L3b
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Throwable -> L3b
            com.tkay.china.a.a.i$a r2 = new com.tkay.china.a.a.i$a     // Catch: java.lang.Throwable -> L3b
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r2.a()     // Catch: java.lang.Throwable -> L3b
            r6.a(r0, r1)     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r0 = move-exception
            r0.printStackTrace()
            r0.getMessage()
            r6.a()
            return
        L46:
            r6.a()
            return
    }
}
