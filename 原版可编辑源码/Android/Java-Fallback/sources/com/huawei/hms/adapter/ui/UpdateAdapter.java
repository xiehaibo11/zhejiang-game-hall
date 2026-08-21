package com.huawei.hms.adapter.ui;

public class UpdateAdapter implements com.huawei.hms.activity.IBridgeActivityDelegate {
    public java.lang.ref.WeakReference<android.app.Activity> a;
    public int b;
    public com.huawei.hms.update.ui.UpdateBean c;
    public java.lang.String d;

    public UpdateAdapter() {
            r0 = this;
            r0.<init>()
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

    public final boolean a(android.content.Context r4, java.lang.String r5, int r6) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L26
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L26
            if (r6 != 0) goto Lc
            goto L26
        Lc:
            com.huawei.hms.utils.PackageManagerHelper r1 = new com.huawei.hms.utils.PackageManagerHelper
            r1.<init>(r4)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r4 = r1.getPackageStates(r5)
            com.huawei.hms.utils.PackageManagerHelper$PackageStates r2 = com.huawei.hms.utils.PackageManagerHelper.PackageStates.NOT_INSTALLED
            boolean r4 = r2.equals(r4)
            r2 = 1
            if (r4 == 0) goto L1f
            return r2
        L1f:
            int r4 = r1.getPackageVersionCode(r5)
            if (r4 >= r6) goto L26
            r0 = r2
        L26:
            return r0
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
            r2 = this;
            com.huawei.hms.adapter.sysobs.SystemManager r0 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r1 = 8
            r0.notifyUpdateResult(r1)
            r2.a()
            return
    }

    @Override
    public int getRequestCode() {
            r1 = this;
            r0 = 1001(0x3e9, float:1.403E-42)
            return r0
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r7) {
            r6 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r7)
            r6.a = r0
            com.huawei.hms.availableupdate.a r0 = com.huawei.hms.availableupdate.a.b
            android.app.Activity r1 = r6.b()
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto L14
            return
        L14:
            android.content.Intent r0 = r7.getIntent()
            if (r0 != 0) goto L1e
            r6.c()
            return
        L1e:
            r1 = 0
            java.lang.String r2 = "update_version"
            int r2 = r0.getIntExtra(r2, r1)
            r6.b = r2
            if (r2 != 0) goto L2d
            r6.c()
            return
        L2d:
            java.lang.String r2 = "new_update"
            boolean r0 = r0.getBooleanExtra(r2, r1)
            r1 = 1001(0x3e9, float:1.403E-42)
            java.lang.String r2 = "UpdateAdapter"
            if (r0 == 0) goto L6f
            java.lang.String r0 = "4.0 framework HMSCore upgrade process"
            com.huawei.hms.support.log.HMSLog.i(r2, r0)
            android.content.Context r0 = r7.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
            java.lang.String r0 = r0.getHMSPackageName()
            android.content.ComponentName r2 = new android.content.ComponentName
            java.lang.String r3 = "com.huawei.hms.fwksdk.stub.UpdateStubActivity"
            r2.<init>(r0, r3)
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            android.content.Context r4 = r7.getApplicationContext()
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r5 = "kpms_key_caller_packagename"
            r3.putExtra(r5, r4)
            java.lang.String r4 = "kitUpdatePackageName"
            r3.putExtra(r4, r0)
            r3.setComponent(r2)
            r7.startActivityForResult(r3, r1)
            return
        L6f:
            android.content.Context r0 = r7.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r0 = com.huawei.hms.utils.HMSPackageManager.getInstance(r0)
            java.lang.String r0 = r0.getHMSPackageName()
            r6.d = r0
            com.huawei.hms.update.ui.UpdateBean r0 = new com.huawei.hms.update.ui.UpdateBean
            r0.<init>()
            r3 = 1
            r0.setHmsOrApkUpgrade(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "target HMS Core packageName is "
            r3.append(r4)
            java.lang.String r4 = r6.d
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            java.lang.String r3 = r6.d
            r0.setClientPackageName(r3)
            int r3 = r6.b
            r0.setClientVersionCode(r3)
            java.lang.String r3 = "C10132067"
            r0.setClientAppId(r3)
            android.content.Context r3 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r3 != 0) goto Lba
            if (r7 == 0) goto Lba
            android.content.Context r3 = r7.getApplicationContext()
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r3)
        Lba:
            java.lang.String r3 = "hms_update_title"
            java.lang.String r3 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r3)
            r0.setClientAppName(r3)
            r6.c = r0
            java.lang.String r3 = "old framework HMSCore upgrade process"
            com.huawei.hms.support.log.HMSLog.i(r2, r3)
            com.huawei.hms.update.manager.UpdateManager.startUpdate(r7, r1, r0)
            r7 = 0
            r6.c = r7
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r2 = this;
            java.lang.String r0 = "UpdateAdapter"
            java.lang.String r1 = "onBridgeActivityDestroy"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.availableupdate.a r0 = com.huawei.hms.availableupdate.a.b
            android.app.Activity r1 = r2.b()
            r0.b(r1)
            r0 = 0
            r2.a = r0
            return
    }

    @Override
    public boolean onBridgeActivityResult(int r7, int r8, android.content.Intent r9) {
            r6 = this;
            int r0 = r6.getRequestCode()
            r1 = 0
            r2 = 0
            if (r7 == r0) goto Lb
            r6.c = r2
            return r1
        Lb:
            java.lang.String r7 = "UpdateAdapter"
            java.lang.String r0 = "onBridgeActivityResult"
            com.huawei.hms.support.log.HMSLog.i(r7, r0)
            r0 = 1214(0x4be, float:1.701E-42)
            r3 = 1
            if (r8 != r0) goto L33
            java.lang.String r0 = "Enter update escape route"
            com.huawei.hms.support.log.HMSLog.i(r7, r0)
            android.app.Activity r0 = r6.b()
            if (r0 != 0) goto L2a
            java.lang.String r8 = "bridgeActivity is null, update escape failed "
            com.huawei.hms.support.log.HMSLog.e(r7, r8)
            r6.c = r2
            return r3
        L2a:
            com.huawei.hms.update.ui.UpdateBean r4 = r6.c
            r5 = 1001(0x3e9, float:1.403E-42)
            com.huawei.hms.update.manager.UpdateManager.startUpdate(r0, r5, r4)
            r6.c = r2
        L33:
            r0 = -1
            r4 = 13
            if (r8 != r0) goto L97
            if (r9 == 0) goto Ldb
            java.lang.String r8 = "kit_update_result"
            int r8 = r9.getIntExtra(r8, r1)
            if (r8 != r3) goto L54
            java.lang.String r8 = "new framework update process,Error resolved successfully!"
            com.huawei.hms.support.log.HMSLog.i(r7, r8)
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r7.notifyUpdateResult(r1)
            r6.c = r2
            r6.a()
            return r3
        L54:
            java.lang.String r8 = "intent.extra.RESULT"
            int r8 = r9.getIntExtra(r8, r0)
            if (r8 != 0) goto L6a
            java.lang.String r8 = "Error resolved successfully!"
            com.huawei.hms.support.log.HMSLog.i(r7, r8)
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r7.notifyUpdateResult(r1)
            goto Ldb
        L6a:
            if (r8 != r4) goto L79
            java.lang.String r8 = "Resolve error process canceled by user!"
            com.huawei.hms.support.log.HMSLog.i(r7, r8)
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r7.notifyUpdateResult(r4)
            goto Ldb
        L79:
            r9 = 8
            if (r8 != r9) goto L8a
            java.lang.String r8 = "Internal error occurred, recommended retry."
            com.huawei.hms.support.log.HMSLog.i(r7, r8)
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r7.notifyUpdateResult(r9)
            goto Ldb
        L8a:
            java.lang.String r9 = "Other error codes."
            com.huawei.hms.support.log.HMSLog.i(r7, r9)
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r7.notifyUpdateResult(r8)
            goto Ldb
        L97:
            if (r8 != 0) goto Ld0
            java.lang.String r8 = "Activity.RESULT_CANCELED"
            com.huawei.hms.support.log.HMSLog.i(r7, r8)
            r6.c = r2
            android.app.Activity r8 = r6.b()
            if (r8 != 0) goto La7
            return r3
        La7:
            android.content.Context r9 = r8.getApplicationContext()
            com.huawei.hms.utils.HMSPackageManager r9 = com.huawei.hms.utils.HMSPackageManager.getInstance(r9)
            java.lang.String r9 = r9.getHMSPackageName()
            int r0 = r6.b
            boolean r8 = r6.a(r8, r9, r0)
            if (r8 == 0) goto Lc8
            java.lang.String r8 = "Resolve error, process canceled by user clicking back button!"
            com.huawei.hms.support.log.HMSLog.i(r7, r8)
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r7.notifyUpdateResult(r4)
            goto Ldb
        Lc8:
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r7.notifyUpdateResult(r1)
            goto Ldb
        Ld0:
            if (r8 != r3) goto Ldb
            com.huawei.hms.adapter.sysobs.SystemManager r7 = com.huawei.hms.adapter.sysobs.SystemManager.getInstance()
            r8 = 28
            r7.notifyUpdateResult(r8)
        Ldb:
            r6.a()
            return r3
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r2 = this;
            java.lang.String r0 = "UpdateAdapter"
            java.lang.String r1 = "onBridgeConfigurationChanged"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            return
    }

    @Override
    public void onKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            java.lang.String r1 = "UpdateAdapter"
            java.lang.String r2 = "On key up when resolve conn error"
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            return
    }
}
