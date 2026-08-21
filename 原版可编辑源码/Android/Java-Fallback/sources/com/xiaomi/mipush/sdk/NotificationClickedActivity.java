package com.xiaomi.mipush.sdk;

public final class NotificationClickedActivity extends android.app.Activity {
    private android.content.BroadcastReceiver a;
    private android.os.Handler a;

    public NotificationClickedActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Intent r4) {
            r3 = this;
            if (r4 == 0) goto L2d
            java.lang.String r0 = "mipush_serviceIntent"
            android.os.Parcelable r4 = r4.getParcelableExtra(r0)     // Catch: java.lang.Exception -> L29
            android.content.Intent r4 = (android.content.Intent) r4     // Catch: java.lang.Exception -> L29
            if (r4 == 0) goto L2d
            android.content.ComponentName r0 = new android.content.ComponentName     // Catch: java.lang.Exception -> L29
            java.lang.String r1 = r3.getPackageName()     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = "com.xiaomi.mipush.sdk.PushMessageHandler"
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L29
            r4.setComponent(r0)     // Catch: java.lang.Exception -> L29
            java.lang.String r0 = "is_clicked_activity_call"
            r1 = 1
            r4.putExtra(r0, r1)     // Catch: java.lang.Exception -> L29
            java.lang.String r0 = "clicked activity start service."
            com.xiaomi.channel.commonutils.logger.b.b(r0)     // Catch: java.lang.Exception -> L29
            r3.startService(r4)     // Catch: java.lang.Exception -> L29
            goto L2d
        L29:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L2d:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.view.Window r4 = r3.getWindow()
            android.view.WindowManager$LayoutParams r0 = r4.getAttributes()
            r1 = 1
            r0.height = r1
            r0.width = r1
            r1 = 8388659(0x800033, float:1.1755015E-38)
            r0.gravity = r1
            r4.setAttributes(r0)
            android.os.Handler r4 = new android.os.Handler
            r4.<init>()
            r3.a = r4
            com.xiaomi.mipush.sdk.ac r0 = new com.xiaomi.mipush.sdk.ac
            r0.<init>(r3)
            r1 = 3000(0xbb8, double:1.482E-320)
            r4.postDelayed(r0, r1)
            android.content.IntentFilter r4 = new android.content.IntentFilter
            r4.<init>()
            java.lang.String r0 = "action_clicked_activity_finish"
            r4.addAction(r0)
            com.xiaomi.mipush.sdk.ad r0 = new com.xiaomi.mipush.sdk.ad
            r0.<init>(r3)
            r3.a = r0
            java.lang.String r1 = com.xiaomi.mipush.sdk.d.a(r3)     // Catch: java.lang.Exception -> L42
            r2 = 0
            r3.registerReceiver(r0, r4, r1, r2)     // Catch: java.lang.Exception -> L42
        L42:
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            super.onDestroy()
            android.os.Handler r0 = r2.a
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            android.content.BroadcastReceiver r0 = r2.a     // Catch: java.lang.Exception -> Le
            r2.unregisterReceiver(r0)     // Catch: java.lang.Exception -> Le
        Le:
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r1) {
            r0 = this;
            super.onNewIntent(r1)
            r0.setIntent(r1)
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            android.content.Intent r0 = r1.getIntent()
            r1.a(r0)
            return
    }
}
