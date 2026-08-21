package com.bianfeng.ymnsdk.sysfunc;

public class SysfuncNotificationReceiver extends android.content.BroadcastReceiver {
    public SysfuncNotificationReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r2, android.content.Intent r3) {
            r1 = this;
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.String r2 = r2.getPackageName()
            r0 = 0
            r3[r0] = r2
            java.lang.String r2 = "sysfunc_open_app"
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r2, r3)
            return
    }
}
