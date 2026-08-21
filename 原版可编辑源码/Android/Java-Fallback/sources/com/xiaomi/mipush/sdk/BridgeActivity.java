package com.xiaomi.mipush.sdk;

public class BridgeActivity extends android.app.Activity {
    public BridgeActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            android.view.Window r3 = r2.getWindow()
            android.view.WindowManager$LayoutParams r0 = r3.getAttributes()
            r1 = 1
            r0.height = r1
            r0.width = r1
            r1 = 51
            r0.gravity = r1
            r3.setAttributes(r0)
            return
    }

    @Override
    protected void onResume() {
            r2 = this;
            super.onResume()
            android.content.Intent r0 = r2.getIntent()     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L20
            if (r0 == 0) goto L1a
            java.lang.String r1 = "mipush_serviceIntent"
            android.os.Parcelable r0 = r0.getParcelableExtra(r1)     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L20
            android.content.Intent r0 = (android.content.Intent) r0     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L20
            if (r0 == 0) goto L1a
            android.content.Context r1 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L20
            com.xiaomi.mipush.sdk.PushMessageHandler.a(r1, r0)     // Catch: java.lang.Throwable -> L1e java.lang.Exception -> L20
        L1a:
            r2.finish()
            goto L25
        L1e:
            r0 = move-exception
            goto L26
        L20:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L1e
            goto L1a
        L25:
            return
        L26:
            r2.finish()
            throw r0
    }
}
