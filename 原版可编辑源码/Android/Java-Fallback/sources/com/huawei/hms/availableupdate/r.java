package com.huawei.hms.availableupdate;

public class r extends com.huawei.hms.availableupdate.p {
    public r() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(android.content.Intent r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.apptouch.intent.action.update_hms"
            r0.<init>(r1)
            android.app.Activity r1 = r3.b()
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r2 = 0
            java.util.List r0 = r1.queryIntentServices(r0, r2)
            if (r0 == 0) goto L39
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L39
            java.util.Iterator r0 = r0.iterator()
        L20:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()
            android.content.pm.ResolveInfo r1 = (android.content.pm.ResolveInfo) r1
            android.content.pm.ServiceInfo r1 = r1.serviceInfo
            if (r1 == 0) goto L20
            java.lang.String r1 = r1.packageName
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L20
            goto L3a
        L39:
            r1 = 0
        L3a:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L43
            r4.setPackage(r1)
        L43:
            return
    }

    @Override
    public void a(com.huawei.hms.availableupdate.q r3) {
            r2 = this;
            java.lang.String r0 = "AppTouchWizard"
            java.lang.String r1 = "Enter onCancel."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r3 = r3 instanceof com.huawei.hms.availableupdate.a0
            if (r3 == 0) goto Le
            r2.d()
        Le:
            return
    }

    @Override
    public void a(java.lang.Class<? extends com.huawei.hms.availableupdate.q> r3) {
            r2 = this;
            r2.a()
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            com.huawei.hms.availableupdate.q r3 = (com.huawei.hms.availableupdate.q) r3     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            java.lang.String r0 = r2.h     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            if (r0 != 0) goto L25
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.a0     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            if (r0 == 0) goto L25
            java.lang.String r0 = "hms_update_title"
            java.lang.String r0 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r0)     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            r2.h = r0     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            r0 = r3
            com.huawei.hms.availableupdate.a0 r0 = (com.huawei.hms.availableupdate.a0) r0     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            java.lang.String r1 = r2.h     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            r0.a(r1)     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
        L25:
            r3.a(r2)     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            r2.d = r3     // Catch: java.lang.IllegalStateException -> L2b java.lang.IllegalAccessException -> L2d java.lang.InstantiationException -> L2f
            goto L4a
        L2b:
            r3 = move-exception
            goto L30
        L2d:
            r3 = move-exception
            goto L30
        L2f:
            r3 = move-exception
        L30:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "In showDialog, Failed to show the dialog."
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "AppTouchWizard"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
        L4a:
            return
    }

    @Override
    public void b(com.huawei.hms.availableupdate.q r3) {
            r2 = this;
            java.lang.String r0 = "AppTouchWizard"
            java.lang.String r1 = "Enter onDoWork."
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            boolean r0 = r3 instanceof com.huawei.hms.availableupdate.a0
            if (r0 == 0) goto L1b
            r3.b()
            boolean r3 = r2.c()
            if (r3 != 0) goto L1b
            int r3 = r2.f
            r0 = 8
            r2.a(r0, r3)
        L1b:
            return
    }

    public final boolean c() {
            r5 = this;
            android.app.Activity r0 = r5.b()
            r1 = 0
            if (r0 == 0) goto L3b
            boolean r2 = r0.isFinishing()
            if (r2 == 0) goto Le
            goto L3b
        Le:
            java.lang.String r2 = r5.g
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L17
            return r1
        L17:
            android.content.Intent r2 = new android.content.Intent     // Catch: android.content.ActivityNotFoundException -> L34
            r2.<init>()     // Catch: android.content.ActivityNotFoundException -> L34
            java.lang.String r3 = "com.huawei.appmarket.intent.action.AppDetail"
            r2.setAction(r3)     // Catch: android.content.ActivityNotFoundException -> L34
            java.lang.String r3 = "APP_PACKAGENAME"
            java.lang.String r4 = r5.g     // Catch: android.content.ActivityNotFoundException -> L34
            r2.putExtra(r3, r4)     // Catch: android.content.ActivityNotFoundException -> L34
            r5.a(r2)     // Catch: android.content.ActivityNotFoundException -> L34
            int r3 = r5.getRequestCode()     // Catch: android.content.ActivityNotFoundException -> L34
            r0.startActivityForResult(r2, r3)     // Catch: android.content.ActivityNotFoundException -> L34
            r0 = 1
            return r0
        L34:
            java.lang.String r0 = "AppTouchWizard"
            java.lang.String r2 = "can not open AppTouch detail page"
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
        L3b:
            return r1
    }

    public void d() {
            r2 = this;
            int r0 = r2.f
            r1 = 13
            r2.c(r1, r0)
            return
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 2007(0x7d7, float:2.812E-42)
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r2) {
            r1 = this;
            super.onBridgeActivityCreate(r2)
            com.huawei.hms.update.ui.UpdateBean r2 = r1.c
            if (r2 != 0) goto L8
            return
        L8:
            r0 = 7
            r1.f = r0
            boolean r2 = r2.isNeedConfirm()
            if (r2 == 0) goto L1f
            java.lang.String r2 = r1.h
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L1f
            java.lang.Class<com.huawei.hms.availableupdate.a0> r2 = com.huawei.hms.availableupdate.a0.class
            r1.a(r2)
            goto L2c
        L1f:
            boolean r2 = r1.c()
            if (r2 != 0) goto L2c
            int r2 = r1.f
            r0 = 8
            r1.a(r0, r2)
        L2c:
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r0 = this;
            super.onBridgeActivityDestroy()
            return
    }

    @Override
    public boolean onBridgeActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            boolean r0 = r1.e
            if (r0 == 0) goto Ld
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.b
            if (r0 == 0) goto Ld
            boolean r2 = r0.onBridgeActivityResult(r2, r3, r4)
            return r2
        Ld:
            int r3 = r1.f
            r4 = 7
            r0 = 0
            if (r3 != r4) goto L32
            int r3 = r1.getRequestCode()
            if (r2 != r3) goto L32
            java.lang.String r2 = r1.g
            int r3 = r1.i
            boolean r2 = r1.a(r2, r3)
            if (r2 == 0) goto L29
            int r2 = r1.f
            r1.c(r0, r2)
            goto L30
        L29:
            int r2 = r1.f
            r3 = 8
            r1.c(r3, r2)
        L30:
            r2 = 1
            return r2
        L32:
            return r0
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r0 = this;
            super.onBridgeConfigurationChanged()
            return
    }

    @Override
    public void onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            boolean r0 = r1.e
            if (r0 == 0) goto Lc
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.b
            if (r0 == 0) goto Lc
            r0.onKeyUp(r2, r3)
            return
        Lc:
            r3 = 4
            if (r3 != r2) goto L2a
            java.lang.String r2 = "AppTouchWizard"
            java.lang.String r3 = "In onKeyUp, Call finish."
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            android.app.Activity r2 = r1.b()
            if (r2 == 0) goto L2a
            boolean r3 = r2.isFinishing()
            if (r3 != 0) goto L2a
            r3 = 0
            r0 = 0
            r2.setResult(r3, r0)
            r2.finish()
        L2a:
            return
    }
}
