package com.huawei.hms.adapter.ui;

public class BaseResolutionAdapter implements com.huawei.hms.activity.IBridgeActivityDelegate {
    public java.lang.ref.WeakReference<android.app.Activity> a;
    public java.lang.String b;

    public BaseResolutionAdapter() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            return
    }

    public final void a() {
            r2 = this;
            android.app.Activity r0 = r2.b()
            if (r0 == 0) goto L10
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L10
        Ld:
            r0.finish()
        L10:
            return
    }

    public final android.app.Activity b() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
    }

    public final void c() {
            r3 = this;
            com.huawei.hms.adapter.sysobs.SystemManager r0 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            java.lang.String r1 = r3.b
            r2 = 0
            r0.notifyResolutionResult(r2, r1)
            r3.a()
            return
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 1001(0x3e9, float:1.403E-42)
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r11) {
            r10 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r11)
            r10.a = r0
            android.content.Intent r0 = r11.getIntent()
            if (r0 != 0) goto L11
            r10.c()
            return
        L11:
            android.os.Bundle r1 = r0.getExtras()
            java.lang.String r2 = "transaction_id"
            java.lang.String r0 = r0.getStringExtra(r2)
            r10.b = r0
            if (r1 != 0) goto L23
            r10.c()
            return
        L23:
            java.lang.String r0 = "resolution"
            android.os.Parcelable r0 = r1.getParcelable(r0)
            if (r0 != 0) goto L2f
            r10.c()
            return
        L2f:
            boolean r1 = r0 instanceof android.content.Intent
            java.lang.String r2 = "BaseResolutionAdapter"
            if (r1 == 0) goto L46
            android.content.Intent r0 = (android.content.Intent) r0     // Catch: android.content.ActivityNotFoundException -> L3d
            r1 = 1001(0x3e9, float:1.403E-42)
            r11.startActivityForResult(r0, r1)     // Catch: android.content.ActivityNotFoundException -> L3d
            goto L63
        L3d:
            r10.c()
            java.lang.String r11 = "ActivityNotFoundException:exception"
            com.huawei.hms.support.log.HMSLog.e(r2, r11)
            goto L63
        L46:
            boolean r1 = r0 instanceof android.app.PendingIntent
            if (r1 == 0) goto L63
            android.app.PendingIntent r0 = (android.app.PendingIntent) r0     // Catch: android.content.IntentSender.SendIntentException -> L5b
            android.content.IntentSender r4 = r0.getIntentSender()     // Catch: android.content.IntentSender.SendIntentException -> L5b
            r5 = 1001(0x3e9, float:1.403E-42)
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r3 = r11
            r3.startIntentSenderForResult(r4, r5, r6, r7, r8, r9)     // Catch: android.content.IntentSender.SendIntentException -> L5b
            goto L63
        L5b:
            r10.c()
            java.lang.String r11 = "SendIntentException:exception"
            com.huawei.hms.support.log.HMSLog.e(r2, r11)
        L63:
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r2 = this;
            java.lang.String r0 = "BaseResolutionAdapter"
            java.lang.String r1 = "onBridgeActivityDestroy"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            r0 = 0
            r2.a = r0
            return
    }

    @Override
    public boolean onBridgeActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            int r0 = r1.getRequestCode()
            if (r2 == r0) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r2 = "BaseResolutionAdapter"
            java.lang.String r0 = "onBridgeActivityResult"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            r2 = -1
            if (r3 == r2) goto L26
            java.lang.String r2 = "kit_update_result"
            boolean r2 = r4.hasExtra(r2)
            if (r2 == 0) goto L1b
            goto L26
        L1b:
            com.huawei.hms.adapter.sysobs.SystemManager r2 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            java.lang.String r3 = r1.b
            r4 = 0
            r2.notifyResolutionResult(r4, r3)
            goto L2f
        L26:
            com.huawei.hms.adapter.sysobs.SystemManager r2 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            java.lang.String r3 = r1.b
            r2.notifyResolutionResult(r4, r3)
        L2f:
            r1.a()
            r2 = 1
            return r2
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r2 = this;
            java.lang.String r0 = "BaseResolutionAdapter"
            java.lang.String r1 = "onBridgeConfigurationChanged"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            return
    }

    @Override
    public void onKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            java.lang.String r1 = "BaseResolutionAdapter"
            java.lang.String r2 = "On key up when resolve conn error"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            return
    }
}
