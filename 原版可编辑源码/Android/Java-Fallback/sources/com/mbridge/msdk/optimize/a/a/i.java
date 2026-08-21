package com.mbridge.msdk.optimize.a.a;

public final class i {
    android.content.Context a;
    java.lang.String b;
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> c;
    android.content.ServiceConnection d;


    public i(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "com.mdid.msa"
            r2.b = r0
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.c = r0
            com.mbridge.msdk.optimize.a.a.i$1 r0 = new com.mbridge.msdk.optimize.a.a.i$1
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

    public final void a(com.mbridge.msdk.optimize.a.b r8) {
            r7 = this;
            r0 = 0
            android.content.Context r1 = r7.a     // Catch: java.lang.Exception -> Ld
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Ld
            java.lang.String r2 = r7.b     // Catch: java.lang.Exception -> Ld
            r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            android.content.Context r1 = r7.a
            java.lang.String r1 = r1.getPackageName()
            r7.a()
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = r7.b
            java.lang.String r4 = "com.mdid.msa.service.MsaKlService"
            r2.setClassName(r3, r4)
            java.lang.String r3 = "com.bun.msa.action.start.service"
            r2.setAction(r3)
            java.lang.String r3 = "com.bun.msa.param.pkgname"
            r2.putExtra(r3, r1)
            r4 = 1
            java.lang.String r5 = "com.bun.msa.param.runinset"
            r2.putExtra(r5, r4)     // Catch: java.lang.Exception -> L3d
            android.content.Context r5 = r7.a     // Catch: java.lang.Exception -> L3d
            android.content.ComponentName r2 = r5.startService(r2)     // Catch: java.lang.Exception -> L3d
            goto L41
        L3d:
            r2 = move-exception
            r2.printStackTrace()
        L41:
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r5 = "com.mdid.msa"
            java.lang.String r6 = "com.mdid.msa.service.MsaIdService"
            r2.setClassName(r5, r6)
            java.lang.String r5 = "com.bun.msa.action.bindto.service"
            r2.setAction(r5)
            r2.putExtra(r3, r1)
            android.content.Context r1 = r7.a
            android.content.ServiceConnection r3 = r7.d
            boolean r1 = r1.bindService(r2, r3, r4)
            if (r1 == 0) goto L8c
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r7.c     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.Object r1 = r1.take()     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            com.mbridge.msdk.optimize.a.b.f$a$a r2 = new com.mbridge.msdk.optimize.a.b.f$a$a     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            java.lang.String r1 = r2.a()     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            if (r8 == 0) goto L7c
            r8.a(r1, r0)     // Catch: java.lang.Throwable -> L76 java.lang.Exception -> L78
            goto L7c
        L76:
            r8 = move-exception
            goto L84
        L78:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Throwable -> L76
        L7c:
            android.content.Context r8 = r7.a
            android.content.ServiceConnection r0 = r7.d
            r8.unbindService(r0)
            goto L8c
        L84:
            android.content.Context r0 = r7.a
            android.content.ServiceConnection r1 = r7.d
            r0.unbindService(r1)
            throw r8
        L8c:
            return
    }
}
