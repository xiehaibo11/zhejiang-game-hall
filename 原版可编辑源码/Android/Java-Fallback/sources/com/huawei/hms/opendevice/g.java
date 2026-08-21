package com.huawei.hms.opendevice;

public class g implements android.content.ServiceConnection {
    public final android.os.Bundle a;
    public final android.content.Context b;
    public final com.huawei.hms.opendevice.h c;

    public g(com.huawei.hms.opendevice.h r1, android.os.Bundle r2, android.content.Context r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r3, android.os.IBinder r4) {
            r2 = this;
            java.lang.String r3 = "RemoteService"
            java.lang.String r0 = "remote service onConnected"
            com.huawei.hms.support.log.HMSLog.i(r3, r0)
            com.huawei.hms.opendevice.h r0 = r2.c
            android.os.Messenger r1 = new android.os.Messenger
            r1.<init>(r4)
            com.huawei.hms.opendevice.h.a(r0, r1)
            android.os.Message r4 = android.os.Message.obtain()
            android.os.Bundle r0 = r2.a
            r4.setData(r0)
            com.huawei.hms.opendevice.h r0 = r2.c     // Catch: android.os.RemoteException -> L24
            android.os.Messenger r0 = com.huawei.hms.opendevice.h.a(r0)     // Catch: android.os.RemoteException -> L24
            r0.send(r4)     // Catch: android.os.RemoteException -> L24
            goto L29
        L24:
            java.lang.String r4 = "remote service message send failed"
            com.huawei.hms.support.log.HMSLog.i(r3, r4)
        L29:
            java.lang.String r4 = "remote service unbindservice"
            com.huawei.hms.support.log.HMSLog.i(r3, r4)
            android.content.Context r3 = r2.b
            com.huawei.hms.opendevice.h r4 = r2.c
            android.content.ServiceConnection r4 = com.huawei.hms.opendevice.h.b(r4)
            r3.unbindService(r4)
            return
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r2) {
            r1 = this;
            java.lang.String r2 = "RemoteService"
            java.lang.String r0 = "remote service onDisconnected"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            com.huawei.hms.opendevice.h r2 = r1.c
            r0 = 0
            com.huawei.hms.opendevice.h.a(r2, r0)
            return
    }
}
