package com.bianfeng.ymnsdk.sysfunc.helpers;

public class SamsungDeviceIDHelper {
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> linkedBlockingQueue;
    private android.content.Context mContext;
    android.content.ServiceConnection serviceConnection;


    public SamsungDeviceIDHelper(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.linkedBlockingQueue = r0
            com.bianfeng.ymnsdk.sysfunc.helpers.SamsungDeviceIDHelper$1 r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.SamsungDeviceIDHelper$1
            r0.<init>(r2)
            r2.serviceConnection = r0
            r2.mContext = r3
            return
    }

    public void getSumsungID(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater r6) {
            r5 = this;
            java.lang.String r0 = "com.samsung.android.deviceidservice"
            java.lang.String r1 = "Wooo"
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> Lf
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Lf
            r3 = 0
            r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> Lf
            goto L18
        Lf:
            r2 = move-exception
            java.lang.String r3 = "intentForID getSumsungID service not found;"
            android.util.Log.i(r1, r3)
            r2.printStackTrace()
        L18:
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "com.samsung.android.deviceidservice.DeviceIdService"
            r2.setClassName(r0, r3)
            android.content.Context r0 = r5.mContext
            android.content.ServiceConnection r3 = r5.serviceConnection
            r4 = 1
            boolean r0 = r0.bindService(r2, r3, r4)
            java.lang.String r2 = ""
            if (r0 == 0) goto L64
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r5.linkedBlockingQueue     // Catch: java.lang.Exception -> L5a
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Exception -> L5a
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Exception -> L5a
            com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface$Proxy r3 = new com.bianfeng.ymnsdk.sysfunc.interfaces.SamsungIDInterface$Proxy     // Catch: java.lang.Exception -> L5a
            r3.<init>(r0)     // Catch: java.lang.Exception -> L5a
            java.lang.String r0 = r3.getID()     // Catch: java.lang.Exception -> L5a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5a
            r3.<init>()     // Catch: java.lang.Exception -> L5a
            java.lang.String r4 = "intentForID getSumsungID oaid -> "
            r3.append(r4)     // Catch: java.lang.Exception -> L5a
            r3.append(r0)     // Catch: java.lang.Exception -> L5a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L5a
            android.util.Log.i(r1, r3)     // Catch: java.lang.Exception -> L5a
            if (r6 == 0) goto L69
            r6.OnIdsAvalid(r0)     // Catch: java.lang.Exception -> L5a
            goto L69
        L5a:
            r0 = move-exception
            if (r6 == 0) goto L60
            r6.OnIdsAvalid(r2)
        L60:
            r0.printStackTrace()
            goto L69
        L64:
            if (r6 == 0) goto L69
            r6.OnIdsAvalid(r2)
        L69:
            return
    }
}
