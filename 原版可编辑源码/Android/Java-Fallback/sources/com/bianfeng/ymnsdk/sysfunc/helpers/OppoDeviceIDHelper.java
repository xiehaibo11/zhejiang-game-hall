package com.bianfeng.ymnsdk.sysfunc.helpers;

public class OppoDeviceIDHelper {
    private android.content.Context mContext;
    public java.lang.String oaid;
    com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface oppoIDInterface;
    android.content.ServiceConnection serviceConnection;
    private java.lang.String sign;


    public OppoDeviceIDHelper(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "OUID"
            r1.oaid = r0
            com.bianfeng.ymnsdk.sysfunc.helpers.OppoDeviceIDHelper$1 r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.OppoDeviceIDHelper$1
            r0.<init>(r1)
            r1.serviceConnection = r0
            r1.mContext = r2
            return
    }

    private boolean isSupportOppo() {
            r6 = this;
            android.content.Context r0 = r6.mContext     // Catch: java.lang.Exception -> L25
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = "com.heytap.openid"
            r2 = 0
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L25
            if (r0 != 0) goto L10
            return r2
        L10:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L25
            r3 = 28
            if (r1 < r3) goto L1b
            long r0 = r0.getLongVersionCode()     // Catch: java.lang.Exception -> L25
            goto L1e
        L1b:
            int r0 = r0.versionCode     // Catch: java.lang.Exception -> L25
            long r0 = (long) r0
        L1e:
            r3 = 1
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 >= 0) goto L29
            return r2
        L25:
            r0 = move-exception
            r0.printStackTrace()
        L29:
            r0 = 1
            return r0
    }

    private java.lang.String realoGetIds(java.lang.String r10) {
            r9 = this;
            android.content.Context r0 = r9.mContext
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = r9.sign
            if (r1 != 0) goto L60
            r1 = 0
            android.content.Context r2 = r9.mContext     // Catch: java.lang.Exception -> L1a
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
            r9.sign = r1
        L60:
            com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface r1 = r9.oppoIDInterface
            com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface$up$down r1 = (com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface.up.down) r1
            java.lang.String r2 = r9.sign
            java.lang.String r10 = r1.getSerID(r0, r2, r10)
            return r10
    }

    public java.lang.String getID(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater r5) {
            r4 = this;
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L54
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.heytap.openid"
            java.lang.String r3 = "com.heytap.openid.IdentifyService"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            java.lang.String r1 = "android.intent.action.OPEN_ID"
            r0.setAction(r1)
            android.content.Context r1 = r4.mContext
            android.content.ServiceConnection r2 = r4.serviceConnection
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L4d
            com.bianfeng.ymnsdk.sysfunc.interfaces.OppoIDInterface r0 = r4.oppoIDInterface
            if (r0 == 0) goto L47
            java.lang.String r0 = "OUID"
            java.lang.String r0 = r4.realoGetIds(r0)
            java.lang.String r1 = "DUID"
            r4.realoGetIds(r1)
            java.lang.String r1 = "AUID"
            r4.realoGetIds(r1)
            if (r5 == 0) goto L53
            r5.OnIdsAvalid(r0)
            goto L53
        L47:
            if (r5 == 0) goto L52
            r5.OnIdsAvalid(r1)
            goto L52
        L4d:
            if (r5 == 0) goto L52
            r5.OnIdsAvalid(r1)
        L52:
            r0 = 0
        L53:
            return r0
        L54:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "Cannot run on MainThread"
            r5.<init>(r0)
            throw r5
    }
}
