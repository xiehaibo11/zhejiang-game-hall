package com.huawei.hms.availableupdate;

public abstract class p implements com.huawei.hms.activity.IBridgeActivityDelegate {
    public java.lang.ref.WeakReference<android.app.Activity> a;
    public com.huawei.hms.activity.IBridgeActivityDelegate b;
    public com.huawei.hms.update.ui.UpdateBean c;
    public com.huawei.hms.availableupdate.q d;
    public boolean e;
    public int f;
    public java.lang.String g;
    public java.lang.String h;
    public int i;

    public p() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.c = r0
            r3.d = r0
            r1 = 0
            r3.e = r1
            r2 = -1
            r3.f = r2
            r3.g = r0
            r3.h = r0
            r3.i = r1
            return
    }

    public static java.lang.String a(int r1) {
            if (r1 == 0) goto L23
            r0 = 5
            if (r1 == r0) goto L1c
            r0 = 6
            if (r1 == r0) goto L15
            r0 = 7
            if (r1 == r0) goto Le
            java.lang.String r1 = ""
            return r1
        Le:
            java.lang.Class<com.huawei.hms.availableupdate.r> r1 = com.huawei.hms.availableupdate.r.class
            java.lang.String r1 = r1.getName()
            return r1
        L15:
            java.lang.Class<com.huawei.hms.availableupdate.h0> r1 = com.huawei.hms.availableupdate.h0.class
            java.lang.String r1 = r1.getName()
            return r1
        L1c:
            java.lang.Class<com.huawei.hms.availableupdate.z> r1 = com.huawei.hms.availableupdate.z.class
            java.lang.String r1 = r1.getName()
            return r1
        L23:
            java.lang.Class<com.huawei.hms.availableupdate.g0> r1 = com.huawei.hms.availableupdate.g0.class
            java.lang.String r1 = r1.getName()
            return r1
    }

    public void a() {
            r3 = this;
            com.huawei.hms.availableupdate.q r0 = r3.d
            if (r0 != 0) goto L5
            return
        L5:
            r0.b()     // Catch: java.lang.IllegalStateException -> Lc
            r0 = 0
            r3.d = r0     // Catch: java.lang.IllegalStateException -> Lc
            goto L27
        Lc:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "In dismissDialog, Failed to dismiss the dialog."
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AbsUpdateWizard"
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
        L27:
            return
    }

    public void a(int r6, int r7) {
            r5 = this;
            boolean r0 = com.huawei.hms.android.SystemUtils.isChinaROM()
            if (r0 != 0) goto Le
            java.lang.String r6 = "AbsUpdateWizard"
            java.lang.String r7 = "not ChinaROM "
            com.huawei.hms.support.log.HMSLog.i(r6, r7)
            return
        Le:
            android.app.Activity r0 = r5.b()
            if (r0 == 0) goto L88
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto L1b
            goto L88
        L1b:
            com.huawei.hms.utils.PackageManagerHelper r1 = new com.huawei.hms.utils.PackageManagerHelper
            r1.<init>(r0)
            java.lang.String r2 = r5.g
            int r1 = r1.getPackageVersionCode(r2)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.lang.String r3 = r0.getPackageName()
            java.lang.String r4 = "package"
            r2.put(r4, r3)
            java.lang.String r3 = r5.g
            java.lang.String r4 = "target_package"
            r2.put(r4, r3)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r3 = "target_ver"
            r2.put(r3, r1)
            r1 = 50300301(0x2ff858d, float:3.7545537E-37)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r3 = "sdk_ver"
            r2.put(r3, r1)
            java.lang.String r1 = com.huawei.hms.common.util.AGCUtils.getAppId(r0)
            java.lang.String r3 = "app_id"
            r2.put(r3, r1)
            java.lang.String r1 = "trigger_api"
            java.lang.String r3 = "core.connnect"
            r2.put(r1, r3)
            java.lang.String r1 = java.lang.String.valueOf(r7)
            java.lang.String r3 = "update_type"
            r2.put(r3, r1)
            int r1 = com.huawei.hms.utils.NetWorkUtil.getNetworkType(r0)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r3 = "net_type"
            r2.put(r3, r1)
            java.lang.String r6 = r5.b(r6, r7)
            java.lang.String r7 = "result"
            r2.put(r7, r6)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtils r6 = com.huawei.hms.support.hianalytics.HiAnalyticsUtils.getInstance()
            java.lang.String r7 = "HMS_SDK_UPDATE"
            r6.onEvent(r0, r7, r2)
        L88:
            return
    }

    public void a(com.huawei.hms.availableupdate.q r1) {
            r0 = this;
            return
    }

    public final void a(com.huawei.hms.update.ui.UpdateBean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public abstract void a(java.lang.Class<? extends com.huawei.hms.availableupdate.q> r1);

    public final void a(java.util.ArrayList r3) {
            r2 = this;
            if (r3 == 0) goto L18
            int r0 = r3.size()
            if (r0 <= 0) goto L18
            r0 = 0
            java.lang.Object r3 = r3.get(r0)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            java.lang.String r3 = a(r3)
            goto L19
        L18:
            r3 = 0
        L19:
            if (r3 != 0) goto L1c
            return
        L1c:
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.ClassNotFoundException -> L2f java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L33 java.lang.ClassCastException -> L35
            java.lang.Class<com.huawei.hms.activity.IBridgeActivityDelegate> r0 = com.huawei.hms.activity.IBridgeActivityDelegate.class
            java.lang.Class r3 = r3.asSubclass(r0)     // Catch: java.lang.ClassNotFoundException -> L2f java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L33 java.lang.ClassCastException -> L35
            java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.ClassNotFoundException -> L2f java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L33 java.lang.ClassCastException -> L35
            com.huawei.hms.activity.IBridgeActivityDelegate r3 = (com.huawei.hms.activity.IBridgeActivityDelegate) r3     // Catch: java.lang.ClassNotFoundException -> L2f java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L33 java.lang.ClassCastException -> L35
            r2.b = r3     // Catch: java.lang.ClassNotFoundException -> L2f java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L33 java.lang.ClassCastException -> L35
            goto L50
        L2f:
            r3 = move-exception
            goto L36
        L31:
            r3 = move-exception
            goto L36
        L33:
            r3 = move-exception
            goto L36
        L35:
            r3 = move-exception
        L36:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getBridgeActivityDelegate error"
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "AbsUpdateWizard"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
        L50:
            return
    }

    public boolean a(java.lang.String r4, int r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.app.Activity r0 = r3.b()
            if (r0 == 0) goto L21
            boolean r2 = r0.isFinishing()
            if (r2 == 0) goto L15
            goto L21
        L15:
            com.huawei.hms.utils.PackageManagerHelper r2 = new com.huawei.hms.utils.PackageManagerHelper
            r2.<init>(r0)
            int r4 = r2.getPackageVersionCode(r4)
            if (r4 < r5) goto L21
            r1 = 1
        L21:
            return r1
    }

    public boolean a(boolean r5) {
            r4 = this;
            android.app.Activity r0 = r4.b()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            com.huawei.hms.update.ui.UpdateBean r2 = r4.c
            java.util.ArrayList r2 = r2.getTypeList()
            int r3 = r2.size()
            if (r3 <= 0) goto L17
            r2.remove(r1)
        L17:
            com.huawei.hms.activity.IBridgeActivityDelegate r3 = r4.b
            if (r3 != 0) goto L1e
            r4.a(r2)
        L1e:
            com.huawei.hms.activity.IBridgeActivityDelegate r3 = r4.b
            if (r3 == 0) goto L41
            r1 = 1
            r4.e = r1
            com.huawei.hms.update.ui.UpdateBean r3 = r4.c
            r3.setTypeList(r2)
            com.huawei.hms.update.ui.UpdateBean r2 = r4.c
            r2.setNeedConfirm(r5)
            com.huawei.hms.activity.IBridgeActivityDelegate r5 = r4.b
            boolean r2 = r5 instanceof com.huawei.hms.availableupdate.p
            if (r2 == 0) goto L3c
            com.huawei.hms.availableupdate.p r5 = (com.huawei.hms.availableupdate.p) r5
            com.huawei.hms.update.ui.UpdateBean r2 = r4.c
            r5.a(r2)
        L3c:
            com.huawei.hms.activity.IBridgeActivityDelegate r5 = r4.b
            r5.onBridgeActivityCreate(r0)
        L41:
            return r1
    }

    public android.app.Activity b() {
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

    public final java.lang.String b(int r2, int r3) {
            r1 = this;
            java.lang.String r2 = java.lang.String.valueOf(r2)
            if (r3 == 0) goto L31
            r0 = 5
            if (r3 == r0) goto L1f
            r0 = 6
            if (r3 == r0) goto Ld
            return r2
        Ld:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "4000"
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            return r2
        L1f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "5000"
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            return r2
        L31:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "0000"
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            return r2
    }

    public void b(com.huawei.hms.availableupdate.q r1) {
            r0 = this;
            return
    }

    public void c(int r4, int r5) {
            r3 = this;
            android.app.Activity r0 = r3.b()
            if (r0 == 0) goto L2e
            boolean r1 = r0.isFinishing()
            if (r1 == 0) goto Ld
            goto L2e
        Ld:
            r3.a(r4, r5)
            android.content.Intent r5 = new android.content.Intent
            r5.<init>()
            java.lang.Class r1 = r3.getClass()
            java.lang.String r1 = r1.getName()
            java.lang.String r2 = "intent.extra.DELEGATE_CLASS_OBJECT"
            r5.putExtra(r2, r1)
            java.lang.String r1 = "intent.extra.RESULT"
            r5.putExtra(r1, r4)
            r4 = -1
            r0.setResult(r4, r5)
            r0.finish()
        L2e:
            return
    }

    @Override
    public void onBridgeActivityCreate(android.app.Activity r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.a = r0
            com.huawei.hms.update.ui.UpdateBean r0 = r1.c
            if (r0 != 0) goto L1f
            android.content.Intent r2 = r2.getIntent()
            if (r2 != 0) goto L12
            return
        L12:
            java.lang.String r0 = "intent.extra.update.info"
            java.io.Serializable r2 = r2.getSerializableExtra(r0)
            com.huawei.hms.update.ui.UpdateBean r2 = (com.huawei.hms.update.ui.UpdateBean) r2
            r1.c = r2
            if (r2 != 0) goto L1f
            return
        L1f:
            com.huawei.hms.update.ui.UpdateBean r2 = r1.c
            java.lang.String r2 = r2.b()
            r1.g = r2
            com.huawei.hms.update.ui.UpdateBean r2 = r1.c
            java.lang.String r2 = r2.getClientAppName()
            r1.h = r2
            com.huawei.hms.update.ui.UpdateBean r2 = r1.c
            int r2 = r2.c()
            r1.i = r2
            com.huawei.hms.update.ui.UpdateBean r2 = r1.c
            r2.a()
            r2 = 0
            r1.b = r2
            r2 = 0
            r1.e = r2
            r2 = -1
            r1.f = r2
            return
    }

    @Override
    public void onBridgeActivityDestroy() {
            r1 = this;
            r0 = 0
            r1.a = r0
            r1.a()
            boolean r0 = r1.e
            if (r0 == 0) goto L11
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.b
            if (r0 == 0) goto L11
            r0.onBridgeActivityDestroy()
        L11:
            return
    }

    @Override
    public void onBridgeConfigurationChanged() {
            r2 = this;
            boolean r0 = r2.e
            if (r0 == 0) goto Lc
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r2.b
            if (r0 == 0) goto Lc
            r0.onBridgeConfigurationChanged()
            return
        Lc:
            com.huawei.hms.availableupdate.q r0 = r2.d
            if (r0 != 0) goto L11
            return
        L11:
            java.lang.Class r0 = r0.getClass()
            com.huawei.hms.availableupdate.q r1 = r2.d
            r1.b()
            r1 = 0
            r2.d = r1
            r2.a(r0)
            return
    }

    @Override
    public void onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            boolean r0 = r1.e
            if (r0 == 0) goto Lb
            com.huawei.hms.activity.IBridgeActivityDelegate r0 = r1.b
            if (r0 == 0) goto Lb
            r0.onKeyUp(r2, r3)
        Lb:
            return
    }
}
