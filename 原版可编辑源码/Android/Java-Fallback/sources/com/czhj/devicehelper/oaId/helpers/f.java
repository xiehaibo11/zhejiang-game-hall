package com.czhj.devicehelper.oaId.helpers;

public class f {
    public java.lang.String a;
    com.czhj.devicehelper.oaId.interfaces.d b;
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> c;
    android.content.ServiceConnection d;
    private android.content.Context e;
    private java.lang.String f;


    public f(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "OUID"
            r2.a = r0
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.c = r0
            com.czhj.devicehelper.oaId.helpers.f$1 r0 = new com.czhj.devicehelper.oaId.helpers.f$1
            r0.<init>(r2)
            r2.d = r0
            r2.e = r3
            return
    }

    private java.lang.String a(java.lang.String r10) {
            r9 = this;
            android.content.Context r0 = r9.e
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = r9.f
            if (r1 != 0) goto L68
            r1 = 0
            android.content.Context r2 = r9.e     // Catch: java.lang.Exception -> L1a
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1a
            r3 = 64
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> L1a
            android.content.pm.Signature[] r2 = r2.signatures     // Catch: java.lang.Exception -> L1a
            goto L23
        L1a:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            r2 = r1
        L23:
            if (r2 == 0) goto L66
            int r3 = r2.length
            if (r3 <= 0) goto L66
            r3 = 0
            r2 = r2[r3]
            byte[] r2 = r2.toByteArray()
            java.lang.String r4 = "SHA1"
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)     // Catch: java.lang.Throwable -> L5e
            if (r4 == 0) goto L66
            byte[] r2 = r4.digest(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r4.<init>()     // Catch: java.lang.Throwable -> L5e
            int r5 = r2.length     // Catch: java.lang.Throwable -> L5e
        L41:
            if (r3 >= r5) goto L59
            r6 = r2[r3]     // Catch: java.lang.Throwable -> L5e
            r6 = r6 & 255(0xff, float:3.57E-43)
            r6 = r6 | 256(0x100, float:3.59E-43)
            java.lang.String r6 = java.lang.Integer.toHexString(r6)     // Catch: java.lang.Throwable -> L5e
            r7 = 3
            r8 = 1
            java.lang.String r6 = r6.substring(r8, r7)     // Catch: java.lang.Throwable -> L5e
            r4.append(r6)     // Catch: java.lang.Throwable -> L5e
            int r3 = r3 + 1
            goto L41
        L59:
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L5e
            goto L66
        L5e:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
        L66:
            r9.f = r1
        L68:
            com.czhj.devicehelper.oaId.interfaces.d r1 = r9.b
            com.czhj.devicehelper.oaId.interfaces.d$a$a r1 = (com.czhj.devicehelper.oaId.interfaces.d.a.a) r1
            java.lang.String r2 = r9.f
            java.lang.String r10 = r1.a(r0, r2, r10)
            return r10
    }

    private boolean a() {
            r5 = this;
            r0 = 0
            android.content.Context r1 = r5.e     // Catch: java.lang.Exception -> L27
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "com.heytap.openid"
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> L27
            if (r1 != 0) goto L10
            return r0
        L10:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L27
            r3 = 28
            if (r2 < r3) goto L1b
            long r1 = r1.getLongVersionCode()     // Catch: java.lang.Exception -> L27
            goto L1e
        L1b:
            int r1 = r1.versionCode     // Catch: java.lang.Exception -> L27
            long r1 = (long) r1
        L1e:
            r3 = 1
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L25
            return r0
        L25:
            r0 = 1
            return r0
        L27:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            return r0
    }

    public void a(com.czhj.devicehelper.oaId.helpers.DevicesIDsHelper.AppIdsUpdater r5) {
            r4 = this;
            boolean r0 = r4.a()
            if (r0 != 0) goto L7
            return
        L7:
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto L12
            return
        L12:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.heytap.openid"
            java.lang.String r3 = "com.heytap.openid.IdentifyService"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            java.lang.String r1 = "action.com.heytap.openid.OPEN_ID_SERVICE"
            r0.setAction(r1)
            android.content.Context r1 = r4.e
            android.content.ServiceConnection r2 = r4.d
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            if (r0 == 0) goto L68
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r4.c     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Throwable -> L4f
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Throwable -> L4f
            com.czhj.devicehelper.oaId.interfaces.d r0 = com.czhj.devicehelper.oaId.interfaces.d.a.a(r0)     // Catch: java.lang.Throwable -> L4f
            r4.b = r0     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L57
            java.lang.String r0 = "OUID"
            java.lang.String r0 = r4.a(r0)     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L57
            r5.OnIdsAvalid(r0)     // Catch: java.lang.Throwable -> L4f
            goto L57
        L4f:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L5f
            com.czhj.sdk.logger.SigmobLog.e(r5)     // Catch: java.lang.Throwable -> L5f
        L57:
            android.content.Context r5 = r4.e
            android.content.ServiceConnection r0 = r4.d
            r5.unbindService(r0)
            goto L68
        L5f:
            r5 = move-exception
            android.content.Context r0 = r4.e
            android.content.ServiceConnection r1 = r4.d
            r0.unbindService(r1)
            throw r5
        L68:
            return
    }
}
