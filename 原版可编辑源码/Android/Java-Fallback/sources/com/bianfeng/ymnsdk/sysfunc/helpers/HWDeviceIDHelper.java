package com.bianfeng.ymnsdk.sysfunc.helpers;

public class HWDeviceIDHelper {
    public final java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> linkedBlockingQueue;
    private android.content.Context mContext;
    android.content.ServiceConnection serviceConnection;


    public HWDeviceIDHelper(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r1 = 1
            r0.<init>(r1)
            r2.linkedBlockingQueue = r0
            com.bianfeng.ymnsdk.sysfunc.helpers.HWDeviceIDHelper$1 r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.HWDeviceIDHelper$1
            r0.<init>(r2)
            r2.serviceConnection = r0
            r2.mContext = r3
            return
    }

    public void getHWID(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater r8) {
            r7 = this;
            java.lang.String r0 = "com.huawei.hwid"
            java.lang.String r1 = "Wooo"
            java.lang.String r2 = "getHWID IN "
            android.util.Log.i(r1, r2)
            android.content.Context r2 = r7.mContext     // Catch: java.lang.Exception -> L14
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L14
            r3 = 0
            r2.getPackageInfo(r0, r3)     // Catch: java.lang.Exception -> L14
            goto L1d
        L14:
            r2 = move-exception
            java.lang.String r3 = "getHWID hw service not found;"
            android.util.Log.i(r1, r3)
            r2.printStackTrace()
        L1d:
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = "com.uodis.opendevice.OPENIDS_SERVICE"
            r2.<init>(r3)
            r2.setPackage(r0)
            android.content.Context r0 = r7.mContext
            android.content.ServiceConnection r3 = r7.serviceConnection
            r4 = 1
            boolean r0 = r0.bindService(r2, r3, r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "intentForID bindService. isBin -> "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            android.util.Log.i(r1, r2)
            java.lang.String r2 = ""
            if (r0 == 0) goto Lae
            java.util.concurrent.LinkedBlockingQueue<android.os.IBinder> r3 = r7.linkedBlockingQueue     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.Object r3 = r3.take()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            android.os.IBinder r3 = (android.os.IBinder) r3     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            r4.<init>()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.String r5 = "getHWID bindService. binder -> "
            r4.append(r5)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            r4.append(r3)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            android.util.Log.i(r1, r4)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            com.bianfeng.ymnsdk.sysfunc.interfaces.HWIDInterface$HWID r4 = new com.bianfeng.ymnsdk.sysfunc.interfaces.HWIDInterface$HWID     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.String r3 = r4.getIDs()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            boolean r4 = r4.getBoos()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            r5.<init>()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.String r6 = "getHWID OUT ids -> "
            r5.append(r6)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            r5.append(r3)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.String r6 = " , boos -> "
            r5.append(r6)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            r5.append(r4)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            android.util.Log.i(r1, r4)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            if (r8 == 0) goto L9e
            r8.OnIdsAvalid(r3)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L95
            goto L9e
        L93:
            r8 = move-exception
            goto La6
        L95:
            r3 = move-exception
            if (r8 == 0) goto L9b
            r8.OnIdsAvalid(r2)     // Catch: java.lang.Throwable -> L93
        L9b:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L93
        L9e:
            android.content.Context r8 = r7.mContext
            android.content.ServiceConnection r2 = r7.serviceConnection
            r8.unbindService(r2)
            goto Lb3
        La6:
            android.content.Context r0 = r7.mContext
            android.content.ServiceConnection r1 = r7.serviceConnection
            r0.unbindService(r1)
            throw r8
        Lae:
            if (r8 == 0) goto Lb3
            r8.OnIdsAvalid(r2)
        Lb3:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r2 = "getHWID OUT isBin -> "
            r8.append(r2)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            android.util.Log.i(r1, r8)
            return
    }
}
