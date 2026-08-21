package com.reyun.tracking.b.a;

public class i {
    public java.lang.String a;
    com.reyun.tracking.b.b.i b;
    android.content.ServiceConnection c;
    private android.content.Context d;
    private java.lang.String e;

    public i(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "OUID"
            r1.a = r0
            com.reyun.tracking.b.a.j r0 = new com.reyun.tracking.b.a.j
            r0.<init>(r1)
            r1.c = r0
            r1.d = r2
            return
    }

    private java.lang.String a(java.lang.String r10) {
            r9 = this;
            android.content.Context r0 = r9.d
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = r9.e
            if (r1 != 0) goto L60
            r1 = 0
            android.content.Context r2 = r9.d     // Catch: java.lang.Exception -> L1a
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L1a
            r3 = 64
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> L1a
            android.content.pm.Signature[] r2 = r2.signatures     // Catch: java.lang.Exception -> L1a
            goto L1f
        L1a:
            r2 = move-exception
            r2.printStackTrace()
            r2 = r1
        L1f:
            if (r2 == 0) goto L5e
            int r3 = r2.length
            if (r3 <= 0) goto L5e
            r3 = 0
            r2 = r2[r3]
            byte[] r2 = r2.toByteArray()
            java.lang.String r4 = "SHA1"
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)     // Catch: java.lang.Exception -> L5a
            if (r4 == 0) goto L5e
            byte[] r2 = r4.digest(r2)     // Catch: java.lang.Exception -> L5a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5a
            r4.<init>()     // Catch: java.lang.Exception -> L5a
            int r5 = r2.length     // Catch: java.lang.Exception -> L5a
        L3d:
            if (r3 >= r5) goto L55
            r6 = r2[r3]     // Catch: java.lang.Exception -> L5a
            r6 = r6 & 255(0xff, float:3.57E-43)
            r6 = r6 | 256(0x100, float:3.59E-43)
            java.lang.String r6 = java.lang.Integer.toHexString(r6)     // Catch: java.lang.Exception -> L5a
            r7 = 3
            r8 = 1
            java.lang.String r6 = r6.substring(r8, r7)     // Catch: java.lang.Exception -> L5a
            r4.append(r6)     // Catch: java.lang.Exception -> L5a
            int r3 = r3 + 1
            goto L3d
        L55:
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> L5a
            goto L5e
        L5a:
            r2 = move-exception
            r2.printStackTrace()
        L5e:
            r9.e = r1
        L60:
            com.reyun.tracking.b.b.i r1 = r9.b
            com.reyun.tracking.b.b.k r1 = (com.reyun.tracking.b.b.k) r1
            java.lang.String r2 = r9.e
            java.lang.String r10 = r1.a(r0, r2, r10)
            return r10
    }

    public java.lang.String a(com.reyun.tracking.b.d r5) {
            r4 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L52
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.heytap.openid"
            java.lang.String r3 = "com.heytap.openid.IdentifyService"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            java.lang.String r1 = "action.com.heytap.openid.OPEN_ID_SERVICE"
            r0.setAction(r1)
            android.content.Context r1 = r4.d
            android.content.ServiceConnection r2 = r4.c
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            if (r0 == 0) goto L50
            r0 = 3000(0xbb8, double:1.482E-320)
            android.os.SystemClock.sleep(r0)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r0 = move-exception
            r0.printStackTrace()
        L35:
            com.reyun.tracking.b.b.i r0 = r4.b
            if (r0 == 0) goto L50
            java.lang.String r0 = "OUID"
            java.lang.String r0 = r4.a(r0)
            java.lang.String r1 = "DUID"
            r4.a(r1)
            java.lang.String r1 = "AUID"
            r4.a(r1)
            if (r5 == 0) goto L51
            r1 = 0
            r5.a(r0, r1)
            goto L51
        L50:
            r0 = 0
        L51:
            return r0
        L52:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "Cannot run on MainThread"
            r5.<init>(r0)
            throw r5
    }
}
