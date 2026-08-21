package com.tkay.china.a.a;

public final class g {
    com.tkay.china.a.a.h a;
    android.content.ServiceConnection b;
    private android.content.Context c;


    public g(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.tkay.china.a.a.g$1 r0 = new com.tkay.china.a.a.g$1
            r0.<init>(r1)
            r1.b = r0
            r1.c = r2
            return
    }

    private java.lang.String a(java.lang.String r10) {
            r9 = this;
            android.content.Context r0 = r9.c
            java.lang.String r0 = r0.getPackageName()
            r1 = 0
            android.content.Context r2 = r9.c     // Catch: java.lang.Exception -> L16
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L16
            r3 = 64
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> L16
            android.content.pm.Signature[] r2 = r2.signatures     // Catch: java.lang.Exception -> L16
            goto L1b
        L16:
            r2 = move-exception
            r2.printStackTrace()
            r2 = r1
        L1b:
            if (r2 == 0) goto L5a
            int r3 = r2.length
            if (r3 <= 0) goto L5a
            r3 = 0
            r2 = r2[r3]
            byte[] r2 = r2.toByteArray()
            java.lang.String r4 = "SHA1"
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)     // Catch: java.lang.Exception -> L56
            if (r4 == 0) goto L5a
            byte[] r2 = r4.digest(r2)     // Catch: java.lang.Exception -> L56
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L56
            r4.<init>()     // Catch: java.lang.Exception -> L56
            int r5 = r2.length     // Catch: java.lang.Exception -> L56
        L39:
            if (r3 >= r5) goto L51
            r6 = r2[r3]     // Catch: java.lang.Exception -> L56
            r6 = r6 & 255(0xff, float:3.57E-43)
            r6 = r6 | 256(0x100, float:3.59E-43)
            java.lang.String r6 = java.lang.Integer.toHexString(r6)     // Catch: java.lang.Exception -> L56
            r7 = 3
            r8 = 1
            java.lang.String r6 = r6.substring(r8, r7)     // Catch: java.lang.Exception -> L56
            r4.append(r6)     // Catch: java.lang.Exception -> L56
            int r3 = r3 + 1
            goto L39
        L51:
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> L56
            goto L5a
        L56:
            r2 = move-exception
            r2.printStackTrace()
        L5a:
            com.tkay.china.a.a.h r2 = r9.a
            com.tkay.china.a.a.h$a$a r2 = (com.tkay.china.a.a.h.a.a) r2
            java.lang.String r10 = r2.a(r0, r1, r10)
            return r10
    }

    public final java.lang.String a(com.tkay.china.a.a r6) {
            r5 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.String r2 = ""
            if (r0 != r1) goto Ld
            return r2
        Ld:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r3 = "com.heytap.openid"
            java.lang.String r4 = "com.heytap.openid.IdentifyService"
            r1.<init>(r3, r4)
            r0.setComponent(r1)
            java.lang.String r1 = "action.com.heytap.openid.OPEN_ID_SERVICE"
            r0.setAction(r1)
            android.content.Context r1 = r5.c
            android.content.ServiceConnection r3 = r5.b
            r4 = 1
            boolean r0 = r1.bindService(r0, r3, r4)
            if (r0 == 0) goto L46
            r0 = 3000(0xbb8, double:1.482E-320)
            android.os.SystemClock.sleep(r0)     // Catch: java.lang.Throwable -> L34
            goto L38
        L34:
            r0 = move-exception
            r0.printStackTrace()
        L38:
            com.tkay.china.a.a.h r0 = r5.a
            if (r0 == 0) goto L46
            java.lang.String r0 = "OUID"
            java.lang.String r2 = r5.a(r0)
            r0 = 0
            r6.a(r2, r0)
        L46:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L4f
            r6.a()
        L4f:
            return r2
    }
}
