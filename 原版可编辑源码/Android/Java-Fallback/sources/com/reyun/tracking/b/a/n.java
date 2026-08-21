package com.reyun.tracking.b.a;

public class n {
    android.content.Context a;
    java.lang.String b;
    public final java.util.concurrent.LinkedBlockingQueue c;
    android.content.ServiceConnection d;

    public n(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "com.mdid.msa"
            r2.b = r0
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.c = r0
            com.reyun.tracking.b.a.o r0 = new com.reyun.tracking.b.a.o
            r0.<init>(r2)
            r2.d = r0
            r2.a = r3
            return
    }

    private int a() {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> Le
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Le
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> Le
            r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Le
            r0 = 1
            goto L12
        Le:
            r1 = move-exception
            r1.printStackTrace()
        L12:
            return r0
    }

    private void a(java.lang.String r4) {
            r3 = this;
            r3.a()
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = r3.b
            java.lang.String r2 = "com.mdid.msa.service.MsaKlService"
            r0.setClassName(r1, r2)
            java.lang.String r1 = "com.bun.msa.action.start.service"
            r0.setAction(r1)
            java.lang.String r1 = "com.bun.msa.param.pkgname"
            r0.putExtra(r1, r4)
            java.lang.String r4 = "com.bun.msa.param.runinset"
            r1 = 1
            r0.putExtra(r4, r1)     // Catch: java.lang.Exception -> L28
            android.content.Context r4 = r3.a     // Catch: java.lang.Exception -> L28
            android.content.ComponentName r4 = r4.startService(r0)     // Catch: java.lang.Exception -> L28
            if (r4 == 0) goto L2c
            return
        L28:
            r4 = move-exception
            r4.printStackTrace()
        L2c:
            return
    }

    public void a(com.reyun.tracking.b.d r6) {
            r5 = this;
            r0 = 0
            android.content.Context r1 = r5.a     // Catch: java.lang.Exception -> Ld
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Ld
            java.lang.String r2 = r5.b     // Catch: java.lang.Exception -> Ld
            r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            android.content.Context r1 = r5.a
            java.lang.String r1 = r1.getPackageName()
            r5.a(r1)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "com.mdid.msa"
            java.lang.String r4 = "com.mdid.msa.service.MsaIdService"
            r2.setClassName(r3, r4)
            java.lang.String r3 = "com.bun.msa.action.bindto.service"
            r2.setAction(r3)
            java.lang.String r3 = "com.bun.msa.param.pkgname"
            r2.putExtra(r3, r1)
            android.content.Context r1 = r5.a
            android.content.ServiceConnection r3 = r5.d
            r4 = 1
            boolean r1 = r1.bindService(r2, r3, r4)
            if (r1 == 0) goto L68
            java.util.concurrent.LinkedBlockingQueue r1 = r5.c     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.Object r1 = r1.take()     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            com.reyun.tracking.b.b.p r2 = new com.reyun.tracking.b.b.p     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            java.lang.String r1 = r2.a()     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            if (r6 == 0) goto L58
            r6.a(r1, r0)     // Catch: java.lang.Throwable -> L52 java.lang.Exception -> L54
            goto L58
        L52:
            r6 = move-exception
            goto L60
        L54:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L52
        L58:
            android.content.Context r6 = r5.a
            android.content.ServiceConnection r0 = r5.d
            r6.unbindService(r0)
            goto L68
        L60:
            android.content.Context r0 = r5.a
            android.content.ServiceConnection r1 = r5.d
            r0.unbindService(r1)
            throw r6
        L68:
            return
    }
}
