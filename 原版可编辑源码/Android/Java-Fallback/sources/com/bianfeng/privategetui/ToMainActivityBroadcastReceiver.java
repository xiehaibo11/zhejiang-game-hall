package com.bianfeng.privategetui;

public class ToMainActivityBroadcastReceiver extends android.content.BroadcastReceiver {
    public ToMainActivityBroadcastReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r5, android.content.Intent r6) {
            r4 = this;
            java.lang.String r0 = "click"
            java.lang.String r1 = "notification"
            java.lang.Object r1 = r5.getSystemService(r1)
            android.app.NotificationManager r1 = (android.app.NotificationManager) r1
            java.lang.String r2 = "notificationId"
            r3 = -1
            int r2 = r6.getIntExtra(r2, r3)
            r1.cancel(r2)
            java.lang.String r1 = "PUSH_APP_MAIN_ACTIVITY"
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r1)
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L3a
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L3a
            r2.<init>(r5, r1)     // Catch: java.lang.Exception -> L3a
            r1 = 268435456(0x10000000, float:2.524355E-29)
            android.content.Intent r1 = r2.addFlags(r1)     // Catch: java.lang.Exception -> L3a
            boolean r2 = r6.hasExtra(r0)     // Catch: java.lang.Exception -> L3a
            if (r2 == 0) goto L36
            java.lang.String r6 = r6.getStringExtra(r0)     // Catch: java.lang.Exception -> L3a
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r0, r6)     // Catch: java.lang.Exception -> L3a
        L36:
            r5.startActivity(r1)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r5 = move-exception
            r5.printStackTrace()
        L3e:
            return
    }
}
