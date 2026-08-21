package com.bianfeng.ymnsdk.sysfunc.helpers;

public class ASUSDeviceIDHelper {
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> linkedBlockingQueue;
    private android.content.Context mContext;
    android.content.ServiceConnection serviceConnection;


    public ASUSDeviceIDHelper(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.linkedBlockingQueue = r0
            com.bianfeng.ymnsdk.sysfunc.helpers.ASUSDeviceIDHelper$1 r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.ASUSDeviceIDHelper$1
            r0.<init>(r2)
            r2.serviceConnection = r0
            r2.mContext = r3
            return
    }

    public void getID(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater r6) {
            r5 = this;
            java.lang.String r0 = "com.asus.msa.SupplementaryDID"
            java.lang.String r1 = "Wooo"
            android.content.Context r2 = r5.mContext     // Catch: java.lang.Exception -> Lf
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Lf
            r3 = 0
            r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> Lf
            goto L18
        Lf:
            r2 = move-exception
            java.lang.String r3 = "intentForID asus service not found;"
            android.util.Log.i(r1, r3)
            r2.printStackTrace()
        L18:
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "com.asus.msa.action.ACCESS_DID"
            r2.setAction(r3)
            android.content.ComponentName r3 = new android.content.ComponentName
            java.lang.String r4 = "com.asus.msa.SupplementaryDID.SupplementaryDIDService"
            r3.<init>(r0, r4)
            r2.setComponent(r3)
            android.content.Context r0 = r5.mContext
            android.content.ServiceConnection r3 = r5.serviceConnection
            r4 = 1
            boolean r0 = r0.bindService(r2, r3, r4)
            java.lang.String r2 = ""
            if (r0 == 0) goto L6e
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r0 = r5.linkedBlockingQueue     // Catch: java.lang.Exception -> L64
            java.lang.Object r0 = r0.take()     // Catch: java.lang.Exception -> L64
            android.os.IBinder r0 = (android.os.IBinder) r0     // Catch: java.lang.Exception -> L64
            com.bianfeng.ymnsdk.sysfunc.interfaces.ASUSIDInterface$ASUSID r3 = new com.bianfeng.ymnsdk.sysfunc.interfaces.ASUSIDInterface$ASUSID     // Catch: java.lang.Exception -> L64
            r3.<init>(r0)     // Catch: java.lang.Exception -> L64
            java.lang.String r0 = r3.getID()     // Catch: java.lang.Exception -> L64
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L64
            r3.<init>()     // Catch: java.lang.Exception -> L64
            java.lang.String r4 = "intentForID getID ids -> "
            r3.append(r4)     // Catch: java.lang.Exception -> L64
            r3.append(r0)     // Catch: java.lang.Exception -> L64
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L64
            android.util.Log.i(r1, r3)     // Catch: java.lang.Exception -> L64
            if (r6 == 0) goto L73
            r6.OnIdsAvalid(r0)     // Catch: java.lang.Exception -> L64
            goto L73
        L64:
            r0 = move-exception
            if (r6 == 0) goto L6a
            r6.OnIdsAvalid(r2)
        L6a:
            r0.printStackTrace()
            goto L73
        L6e:
            if (r6 == 0) goto L73
            r6.OnIdsAvalid(r2)
        L73:
            return
    }
}
