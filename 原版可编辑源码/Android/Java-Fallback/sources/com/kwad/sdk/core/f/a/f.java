package com.kwad.sdk.core.f.a;

public final class f {
    private android.content.ServiceConnection aql;
    private final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> aqn;
    private android.content.Context mContext;


    public f(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.aqn = r0
            com.kwad.sdk.core.f.a.f$1 r0 = new com.kwad.sdk.core.f.a.f$1
            r0.<init>(r2)
            r2.aql = r0
            r2.mContext = r3
            return
    }

    private java.lang.String BL() {
            r8 = this;
            r0 = 0
            android.content.Context r1 = r8.mContext     // Catch: java.lang.Exception -> L50
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L50
            android.content.Context r2 = r8.mContext     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L50
            r3 = 64
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L50
            if (r1 != 0) goto L16
            return r0
        L16:
            android.content.pm.Signature[] r1 = r1.signatures     // Catch: java.lang.Exception -> L50
            if (r1 == 0) goto L50
            int r2 = r1.length     // Catch: java.lang.Exception -> L50
            if (r2 <= 0) goto L50
            r2 = 0
            r1 = r1[r2]     // Catch: java.lang.Exception -> L50
            byte[] r1 = r1.toByteArray()     // Catch: java.lang.Exception -> L50
            java.lang.String r3 = "SHA1"
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.lang.Exception -> L50
            byte[] r1 = r3.digest(r1)     // Catch: java.lang.Exception -> L50
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L50
            r3.<init>()     // Catch: java.lang.Exception -> L50
            int r4 = r1.length     // Catch: java.lang.Exception -> L50
        L34:
            if (r2 >= r4) goto L4c
            r5 = r1[r2]     // Catch: java.lang.Exception -> L50
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r5 | 256(0x100, float:3.59E-43)
            java.lang.String r5 = java.lang.Integer.toHexString(r5)     // Catch: java.lang.Exception -> L50
            r6 = 3
            r7 = 1
            java.lang.String r5 = r5.substring(r7, r6)     // Catch: java.lang.Exception -> L50
            r3.append(r5)     // Catch: java.lang.Exception -> L50
            int r2 = r2 + 1
            goto L34
        L4c:
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L50
        L50:
            return r0
    }

    static java.util.concurrent.LinkedBlockingQueue a(com.kwad.sdk.core.f.a.f r0) {
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r0.aqn
            return r0
    }

    public final java.lang.String getOAID() {
            r5 = this;
            java.lang.String r0 = ""
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L68
            r1.<init>()     // Catch: java.lang.Exception -> L68
            android.content.ComponentName r2 = new android.content.ComponentName     // Catch: java.lang.Exception -> L68
            java.lang.String r3 = "com.heytap.openid"
            java.lang.String r4 = "com.heytap.openid.IdentifyService"
            r2.<init>(r3, r4)     // Catch: java.lang.Exception -> L68
            r1.setComponent(r2)     // Catch: java.lang.Exception -> L68
            java.lang.String r2 = "action.com.heytap.openid.OPEN_ID_SERVICE"
            r1.setAction(r2)     // Catch: java.lang.Exception -> L68
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L68
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L68
            r4 = 1
            boolean r1 = r2.bindService(r1, r3, r4)     // Catch: java.lang.Exception -> L68
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L68
            java.lang.String r3 = "getOAID isBin="
            r2.<init>(r3)     // Catch: java.lang.Exception -> L68
            r2.append(r1)     // Catch: java.lang.Exception -> L68
            if (r1 == 0) goto L68
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r1 = r5.aqn     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            java.lang.Object r1 = r1.take()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            android.os.IBinder r1 = (android.os.IBinder) r1     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            com.kwad.sdk.core.f.b.d$a r2 = new com.kwad.sdk.core.f.b.d$a     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            java.lang.String r3 = r5.BL()     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            java.lang.String r4 = "OUID"
            java.lang.String r0 = r2.getSerID(r1, r3, r4)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            java.lang.String r2 = "getOAID oaid"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            r1.append(r0)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L65
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L68
        L56:
            android.content.ServiceConnection r2 = r5.aql     // Catch: java.lang.Exception -> L68
            r1.unbindService(r2)     // Catch: java.lang.Exception -> L68
            goto L68
        L5c:
            r1 = move-exception
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> L68
            android.content.ServiceConnection r3 = r5.aql     // Catch: java.lang.Exception -> L68
            r2.unbindService(r3)     // Catch: java.lang.Exception -> L68
            throw r1     // Catch: java.lang.Exception -> L68
        L65:
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Exception -> L68
            goto L56
        L68:
            return r0
    }
}
