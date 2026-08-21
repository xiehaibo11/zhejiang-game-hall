package com.czhj.devicehelper.oaId.helpers;

public class b {
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> a;
    android.content.ServiceConnection b;
    private android.content.Context c;


    public b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            com.czhj.devicehelper.oaId.helpers.b$1 r0 = new com.czhj.devicehelper.oaId.helpers.b$1
            r0.<init>(r2)
            r2.b = r0
            r2.c = r3
            return
    }

    public void a(com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r5) {
            r4 = this;
            boolean r0 = r4.a()
            if (r0 != 0) goto L7
            return
        L7:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r0.<init>(r1)
            java.lang.String r1 = "com.huawei.hwid"
            r0.setPackage(r1)
            android.content.Context r1 = r4.c
            android.content.ServiceConnection r2 = r4.b
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            if (r0 == 0) goto L54
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r4.a     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            com.czhj.devicehelper.oaId.interfaces.b$a r1 = new com.czhj.devicehelper.oaId.interfaces.b$a     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            android.content.Context r2 = r4.c     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r1.<init>(r0, r2)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            java.lang.String r0 = r1.a()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r1.b()     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            if (r5 == 0) goto L44
            r5.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            goto L44
        L3a:
            r5 = move-exception
            goto L4c
        L3c:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L3a
            com.czhj.sdk.logger.SigmobLog.e(r5)     // Catch: java.lang.Throwable -> L3a
        L44:
            android.content.Context r5 = r4.c
            android.content.ServiceConnection r0 = r4.b
            r5.unbindService(r0)
            goto L54
        L4c:
            android.content.Context r0 = r4.c
            android.content.ServiceConnection r1 = r4.b
            r0.unbindService(r1)
            throw r5
        L54:
            return
    }

    public boolean a() {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.c     // Catch: java.lang.Throwable -> L10
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> L10
            java.lang.String r2 = "com.huawei.hwid"
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> L10
            if (r1 == 0) goto L10
            r0 = 1
        L10:
            return r0
    }
}
