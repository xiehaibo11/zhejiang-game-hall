package com.czhj.devicehelper.oaId.helpers;

public class k {
    android.content.Context a;
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> b;
    android.content.ServiceConnection c;


    public k(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.b = r0
            com.czhj.devicehelper.oaId.helpers.k$1 r0 = new com.czhj.devicehelper.oaId.helpers.k$1
            r0.<init>(r2)
            r2.c = r0
            r2.a = r3
            return
    }

    private void a(java.lang.String r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "com.bun.msa.action.start.service"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "com.mdid.msa"
            java.lang.String r2 = "com.mdid.msa.service.MsaKlService"
            r0.setClassName(r1, r2)     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "com.bun.msa.param.pkgname"
            r0.putExtra(r1, r4)     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "com.bun.msa.param.runinset"
            r2 = 1
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L3d
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L3d
            android.content.ComponentName r0 = r1.startService(r0)     // Catch: java.lang.Exception -> L3d
            if (r0 == 0) goto L45
            java.lang.String r0 = "oaid"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3d
            r1.<init>()     // Catch: java.lang.Exception -> L3d
            java.lang.String r2 = "oaid startMsaklServer()  success called with: pkgName = ["
            r1.append(r2)     // Catch: java.lang.Exception -> L3d
            r1.append(r4)     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = "]"
            r1.append(r4)     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L3d
            android.util.Log.d(r0, r4)     // Catch: java.lang.Exception -> L3d
            goto L45
        L3d:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L45:
            return
    }

    private boolean a() {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L11
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L11
            java.lang.String r2 = "com.mdid.msa"
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> L11
            if (r1 == 0) goto L10
            r0 = 1
        L10:
            return r0
        L11:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            return r0
    }

    public void a(com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r7) {
            r6 = this;
            boolean r0 = r6.a()
            java.lang.String r1 = "oaid"
            if (r0 != 0) goto Le
            java.lang.String r7 = "oaid  checkService false "
            android.util.Log.d(r1, r7)
            return
        Le:
            android.content.Context r0 = r6.a
            java.lang.String r0 = r0.getPackageName()
            r6.a(r0)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "com.mdid.msa"
            java.lang.String r4 = "com.mdid.msa.service.MsaIdService"
            r2.setClassName(r3, r4)
            java.lang.String r3 = "com.bun.msa.action.bindto.service"
            r2.setAction(r3)
            java.lang.String r3 = "com.bun.msa.param.pkgname"
            r2.putExtra(r3, r0)
            android.content.Context r3 = r6.a
            android.content.ServiceConnection r4 = r6.c
            r5 = 1
            boolean r2 = r3.bindService(r2, r4, r5)
            if (r2 == 0) goto L82
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            r2.<init>()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r3 = "oaid getID()  bindService success called with: pkgName = ["
            r2.append(r3)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            r2.append(r0)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r0 = "]"
            r2.append(r0)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            android.util.Log.d(r1, r0)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r6.b     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            com.czhj.devicehelper.oaId.interfaces.g$a$a r1 = new com.czhj.devicehelper.oaId.interfaces.g$a$a     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            java.lang.String r0 = r1.b()     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            if (r7 == 0) goto L72
            r7.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> L68 java.lang.Exception -> L6a
            goto L72
        L68:
            r7 = move-exception
            goto L7a
        L6a:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L68
            com.czhj.sdk.logger.SigmobLog.e(r7)     // Catch: java.lang.Throwable -> L68
        L72:
            android.content.Context r7 = r6.a
            android.content.ServiceConnection r0 = r6.c
            r7.unbindService(r0)
            goto L82
        L7a:
            android.content.Context r0 = r6.a
            android.content.ServiceConnection r1 = r6.c
            r0.unbindService(r1)
            throw r7
        L82:
            return
    }
}
