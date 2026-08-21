package com.huawei.hms.availableupdate;

public class o extends android.content.BroadcastReceiver {
    public android.os.Handler a;

    public o(android.os.Handler r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public void onReceive(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.huawei.hms.ui.SafeIntent r2 = new com.huawei.hms.ui.SafeIntent
            r2.<init>(r3)
            java.lang.String r3 = r2.getAction()
            java.lang.String r0 = "com.huawei.appmarket.service.downloadservice.Receiver"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L2c
            android.os.Bundle r2 = r2.getExtras()
            if (r2 != 0) goto L1b
            return
        L1b:
            android.os.Message r3 = new android.os.Message
            r3.<init>()
            r0 = 101(0x65, float:1.42E-43)
            r3.what = r0
            r3.obj = r2
            android.os.Handler r2 = r1.a
            r2.sendMessage(r3)
            goto L6b
        L2c:
            java.lang.String r0 = "com.huawei.appmarket.service.downloadservice.progress.Receiver"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L4c
            android.os.Bundle r2 = r2.getExtras()
            if (r2 != 0) goto L3b
            return
        L3b:
            android.os.Message r3 = new android.os.Message
            r3.<init>()
            r0 = 102(0x66, float:1.43E-43)
            r3.what = r0
            r3.obj = r2
            android.os.Handler r2 = r1.a
            r2.sendMessage(r3)
            goto L6b
        L4c:
            java.lang.String r0 = "com.huawei.appmarket.service.installerservice.Receiver"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L6b
            android.os.Bundle r2 = r2.getExtras()
            if (r2 != 0) goto L5b
            return
        L5b:
            android.os.Message r3 = new android.os.Message
            r3.<init>()
            r0 = 103(0x67, float:1.44E-43)
            r3.what = r0
            r3.obj = r2
            android.os.Handler r2 = r1.a
            r2.sendMessage(r3)
        L6b:
            return
    }
}
