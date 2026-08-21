package com.huawei.hms.api;

public class ResolutionDelegate implements com.huawei.hms.activity.IBridgeActivityDelegate {
    public static final java.lang.String CALLBACK_METHOD = "CALLBACK_METHOD";
    private java.lang.ref.WeakReference<android.app.Activity> a;

    public ResolutionDelegate() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.huawei.hms.activity.internal.BusResponseCallback a(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.activity.internal.ForegroundBusResponseMgr r0 = com.huawei.hms.activity.internal.ForegroundBusResponseMgr.getInstance()
            com.huawei.hms.activity.internal.BusResponseCallback r2 = r0.get(r2)
            return r2
    }

    private void a() {
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

    private android.app.Activity b() {
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

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 1002(0x3ea, float:1.404E-42)
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r3) {
            r2 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            r2.a = r0
            android.content.Intent r0 = r3.getIntent()
            android.os.Bundle r0 = r0.getExtras()
            if (r0 == 0) goto L1e
            java.lang.String r1 = "resolution"
            android.os.Parcelable r0 = r0.getParcelable(r1)
            android.content.Intent r0 = (android.content.Intent) r0
            r1 = 1002(0x3ea, float:1.404E-42)
            r3.startActivityForResult(r0, r1)
        L1e:
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r1 = this;
            r0 = 0
            r1.a = r0
            return
    }

    @Override
    public boolean onBridgeActivityResult(int r3, int r4, android.content.Intent r5) {
            r2 = this;
            int r5 = r2.getRequestCode()
            if (r3 == r5) goto L8
            r3 = 0
            return r3
        L8:
            java.lang.String r3 = "CALLBACK_METHOD"
            com.huawei.hms.activity.internal.BusResponseCallback r3 = r2.a(r3)
            java.lang.ref.WeakReference<android.app.Activity> r5 = r2.a
            java.lang.Object r5 = r5.get()
            android.app.Activity r5 = (android.app.Activity) r5
            com.huawei.hms.api.HuaweiApiAvailability r0 = com.huawei.hms.api.HuaweiApiAvailability.getInstance()
            r1 = 30000000(0x1c9c380, float:7.411627E-38)
            int r5 = r0.isHuaweiMobileServicesAvailable(r5, r1)
            r0 = -1
            if (r4 != r0) goto L2e
            if (r5 != 0) goto L2e
            java.lang.String r3 = "ResolutionDelegate"
            java.lang.String r4 = "Make service available success."
            com.huawei.hms.support.log.HMSLog.i(r3, r4)
            goto L3b
        L2e:
            java.lang.ref.WeakReference<android.app.Activity> r5 = r2.a
            java.lang.Object r5 = r5.get()
            android.app.Activity r5 = (android.app.Activity) r5
            java.lang.String r0 = "Make service available failed."
            r3.innerError(r5, r4, r0)
        L3b:
            r2.a()
            r3 = 1
            return r3
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r0 = this;
            return
    }

    @Override
    public void onKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            return
    }
}
