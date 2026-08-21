package com.huawei.hms.push;

public class h {
    public android.content.ServiceConnection a;
    public android.os.Messenger b;

    public h() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            return
    }

    public static android.os.Messenger a(com.huawei.hms.push.h r0) {
            android.os.Messenger r0 = r0.b
            return r0
    }

    public static android.os.Messenger a(com.huawei.hms.push.h r0, android.os.Messenger r1) {
            r0.b = r1
            return r1
    }

    public static android.content.ServiceConnection b(com.huawei.hms.push.h r0) {
            android.content.ServiceConnection r0 = r0.a
            return r0
    }

    public boolean a(android.content.Context r2, android.os.Bundle r3, android.content.Intent r4) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()
            com.huawei.hms.push.g r0 = new com.huawei.hms.push.g
            r0.<init>(r1, r3, r2)
            r1.a = r0
            java.lang.String r3 = "RemoteService"
            java.lang.String r0 = "remote service bind service start"
            com.huawei.hms.support.log.HMSLog.i(r3, r0)
            android.content.ServiceConnection r3 = r1.a
            r0 = 1
            boolean r2 = r2.bindService(r4, r3, r0)
            return r2
    }
}
