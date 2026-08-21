package com.czhj.devicehelper.oaId.helpers;

public class c {
    com.czhj.devicehelper.oaId.interfaces.c a;
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> b;
    android.content.ServiceConnection c;
    private android.content.Context d;


    public c(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.b = r0
            com.czhj.devicehelper.oaId.helpers.c$1 r0 = new com.czhj.devicehelper.oaId.helpers.c$1
            r0.<init>(r2)
            r2.c = r0
            r2.d = r3
            return
    }

    private boolean a() {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.d     // Catch: java.lang.Throwable -> L10
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> L10
            java.lang.String r2 = "com.zui.deviceidservice"
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> L10
            if (r1 == 0) goto L10
            r0 = 1
        L10:
            return r0
    }

    public void a(com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r5) {
            r4 = this;
            boolean r0 = r4.a()
            if (r0 != 0) goto L7
            return
        L7:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.zui.deviceidservice"
            java.lang.String r2 = "com.zui.deviceidservice.DeviceidService"
            r0.setClassName(r1, r2)
            android.content.Context r1 = r4.d
            android.content.ServiceConnection r2 = r4.c
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            if (r0 == 0) goto L52
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r4.b     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Throwable -> L39
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Throwable -> L39
            com.czhj.devicehelper.oaId.interfaces.c$a$a r1 = new com.czhj.devicehelper.oaId.interfaces.c$a$a     // Catch: java.lang.Throwable -> L39
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L39
            r4.a = r1     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L41
            java.lang.String r0 = r1.a()     // Catch: java.lang.Throwable -> L39
            if (r5 == 0) goto L41
            r5.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> L39
            goto L41
        L39:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L49
            com.czhj.sdk.logger.SigmobLog.e(r5)     // Catch: java.lang.Throwable -> L49
        L41:
            android.content.Context r5 = r4.d
            android.content.ServiceConnection r0 = r4.c
            r5.unbindService(r0)
            goto L52
        L49:
            r5 = move-exception
            android.content.Context r0 = r4.d
            android.content.ServiceConnection r1 = r4.c
            r0.unbindService(r1)
            throw r5
        L52:
            return
    }
}
