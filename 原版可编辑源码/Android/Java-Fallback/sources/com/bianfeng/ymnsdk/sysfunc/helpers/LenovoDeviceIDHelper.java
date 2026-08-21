package com.bianfeng.ymnsdk.sysfunc.helpers;

public class LenovoDeviceIDHelper {
    com.bianfeng.ymnsdk.sysfunc.interfaces.LenovoIDInterface lenovoIDInterface;
    private android.content.Context mContext;
    android.content.ServiceConnection serviceConnection;


    public LenovoDeviceIDHelper(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.bianfeng.ymnsdk.sysfunc.helpers.LenovoDeviceIDHelper$1 r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.LenovoDeviceIDHelper$1
            r0.<init>(r1)
            r1.serviceConnection = r0
            r1.mContext = r2
            return
    }

    public void getIdRun(com.bianfeng.ymnsdk.sysfunc.helpers.DevicesIDsHelper.AppIdsUpdater r6) {
            r5 = this;
            java.lang.String r0 = "LenovoDeviceIDHelper"
            java.lang.String r1 = "getIdRun"
            android.util.Log.e(r0, r1)
            android.content.Context r0 = r5.mContext
            java.lang.String r0 = r0.getPackageName()
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.String r2 = "com.zui.deviceidservice"
            java.lang.String r3 = "com.zui.deviceidservice.DeviceidService"
            r1.setClassName(r2, r3)
            android.content.Context r2 = r5.mContext
            android.content.ServiceConnection r3 = r5.serviceConnection
            r4 = 1
            boolean r1 = r2.bindService(r1, r3, r4)
            if (r1 == 0) goto L41
            com.bianfeng.ymnsdk.sysfunc.interfaces.LenovoIDInterface r1 = r5.lenovoIDInterface
            if (r1 == 0) goto L48
            java.lang.String r1 = r1.a()
            com.bianfeng.ymnsdk.sysfunc.interfaces.LenovoIDInterface r2 = r5.lenovoIDInterface
            r2.b()
            com.bianfeng.ymnsdk.sysfunc.interfaces.LenovoIDInterface r2 = r5.lenovoIDInterface
            r2.b(r0)
            com.bianfeng.ymnsdk.sysfunc.interfaces.LenovoIDInterface r2 = r5.lenovoIDInterface
            r2.b(r0)
            if (r6 == 0) goto L48
            r6.OnIdsAvalid(r1)
            goto L48
        L41:
            if (r6 == 0) goto L48
            java.lang.String r0 = ""
            r6.OnIdsAvalid(r0)
        L48:
            return
    }
}
