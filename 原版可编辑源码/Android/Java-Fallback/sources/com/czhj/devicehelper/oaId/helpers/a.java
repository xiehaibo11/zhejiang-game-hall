package com.czhj.devicehelper.oaId.helpers;

public class a {
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> a;
    android.content.ServiceConnection b;
    private android.content.Context c;


    public a(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            com.czhj.devicehelper.oaId.helpers.a$1 r0 = new com.czhj.devicehelper.oaId.helpers.a$1
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
            r0.<init>()
            java.lang.String r1 = "com.asus.msa.action.ACCESS_DID"
            r0.setAction(r1)
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.asus.msa.SupplementaryDID"
            java.lang.String r3 = "com.asus.msa.SupplementaryDID.SupplementaryDIDService"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            android.content.Context r1 = r4.c
            android.content.ServiceConnection r2 = r4.b
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            if (r0 == 0) goto L59
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r4.a     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            com.czhj.devicehelper.oaId.interfaces.a$a r1 = new com.czhj.devicehelper.oaId.interfaces.a$a     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            java.lang.String r0 = r1.a()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            if (r5 == 0) goto L49
            r5.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            goto L49
        L3f:
            r5 = move-exception
            goto L51
        L41:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L3f
            com.czhj.sdk.logger.SigmobLog.e(r5)     // Catch: java.lang.Throwable -> L3f
        L49:
            android.content.Context r5 = r4.c
            android.content.ServiceConnection r0 = r4.b
            r5.unbindService(r0)
            goto L59
        L51:
            android.content.Context r0 = r4.c
            android.content.ServiceConnection r1 = r4.b
            r0.unbindService(r1)
            throw r5
        L59:
            return
    }

    public boolean a() {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.c     // Catch: java.lang.Throwable -> L10
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> L10
            java.lang.String r2 = "com.asus.msa.SupplementaryDID"
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> L10
            if (r1 == 0) goto L10
            r0 = 1
        L10:
            return r0
    }
}
