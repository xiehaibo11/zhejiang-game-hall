package com.huawei.updatesdk.service.otaupdate;

public final class g {
    public static void a() {
            java.lang.String r0 = "UpdateSdk"
            java.lang.String r1 = "UpdateSDK releaseCallBack"
            android.util.Log.i(r0, r1)
            com.huawei.updatesdk.service.otaupdate.d r1 = com.huawei.updatesdk.service.otaupdate.d.a()
            r2 = 0
            r1.a(r2)
            java.util.List r1 = com.huawei.updatesdk.b.g.b.a()
            if (r1 == 0) goto L3b
            boolean r2 = r1.isEmpty()
            if (r2 == 0) goto L1c
            goto L3b
        L1c:
            java.util.Iterator r2 = r1.iterator()
        L20:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L38
            java.lang.Object r3 = r2.next()
            android.os.AsyncTask r3 = (android.os.AsyncTask) r3
            if (r3 == 0) goto L32
            r4 = 1
            r3.cancel(r4)
        L32:
            java.lang.String r3 = "cancel task"
            android.util.Log.d(r0, r3)
            goto L20
        L38:
            r1.clear()
        L3b:
            return
    }

    private static void a(android.content.Context r2) {
            com.huawei.updatesdk.a.b.a.a.a(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UpdateSDK version is: 3.0.2.300 ,flavor: envrelease ,pkgName: "
            r0.append(r1)
            java.lang.String r1 = r2.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "updatesdk"
            android.util.Log.i(r1, r0)
            com.huawei.updatesdk.b.c.c r0 = com.huawei.updatesdk.b.c.b.a()
            int r0 = r0.b()
            r1 = 3
            if (r0 != r1) goto L2b
            com.huawei.updatesdk.a.a.d.h.a.b(r2)
        L2b:
            return
    }

    public static void a(android.content.Context r2, com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r3, com.huawei.updatesdk.service.appmgr.bean.AppInfoAdapter r4) {
            if (r4 == 0) goto L29
            java.lang.String r0 = r4.getAppStorePkgName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L29
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
            java.lang.String r0 = r0.c()
            java.lang.String r1 = r4.getAppStorePkgName()
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 != 0) goto L29
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
            java.lang.String r1 = r4.getAppStorePkgName()
            r0.c(r1)
        L29:
            if (r4 == 0) goto L33
            boolean r0 = r4.isMustBtnOne()
            if (r0 == 0) goto L33
            r0 = 1
            goto L34
        L33:
            r0 = 0
        L34:
            boolean r4 = a(r4)
            a(r2, r3, r0, r4)
            return
    }

    public static void a(android.content.Context r1, com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r2, boolean r3) {
            r0 = 0
            a(r1, r2, r3, r0)
            return
    }

    private static void a(android.content.Context r4, com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r5, boolean r6, boolean r7) {
            java.lang.String r0 = "UpdateSdk"
            if (r4 == 0) goto L5b
            if (r5 != 0) goto L7
            goto L5b
        L7:
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.huawei.updatesdk.service.otaupdate.AppUpdateActivity> r2 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.class
            r1.<init>(r4, r2)
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            java.lang.String r3 = "app_update_parm"
            r2.putSerializable(r3, r5)
            java.lang.String r5 = "app_must_btn"
            r2.putBoolean(r5, r6)
            java.lang.String r5 = "is_apptouch"
            r2.putBoolean(r5, r7)
            r1.putExtras(r2)
            boolean r5 = r4 instanceof android.app.Activity
            if (r5 != 0) goto L2e
            r5 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r5)
        L2e:
            r4.startActivity(r1)     // Catch: java.lang.SecurityException -> L32 android.content.ActivityNotFoundException -> L42
            goto L5b
        L32:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "go AppUpdateActivity security error: "
            r5.append(r6)
            java.lang.String r4 = r4.toString()
            goto L51
        L42:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "go AppUpdateActivity error: "
            r5.append(r6)
            java.lang.String r4 = r4.toString()
        L51:
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            android.util.Log.e(r0, r4)
        L5b:
            return
    }

    public static void a(android.content.Context r3, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r4, com.huawei.updatesdk.service.appmgr.bean.AppInfoAdapter r5) {
            if (r3 != 0) goto L3
            return
        L3:
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r0 = new com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder
            r0.<init>()
            if (r5 == 0) goto L49
            java.lang.String r1 = r5.getServiceZone()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            java.lang.String r1 = r5.getServiceZone()
            r0.setServiceZone(r1)
        L1b:
            java.lang.String r1 = r5.getAppStorePkgName()
            a(r1)
            java.lang.String r1 = r5.getTargetPkgName()
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r1 = r0.setTargetPkgName(r1)
            java.util.List r2 = r5.getPackageList()
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r1 = r1.setPackageList(r2)
            boolean r2 = r5.isMustBtnOne()
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r1 = r1.setMustBtnOne(r2)
            boolean r2 = r5.isShowImmediate()
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r1 = r1.setIsShowImmediate(r2)
            int r2 = r5.getMinIntervalDay()
            r1.setMinIntervalDay(r2)
        L49:
            com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = r0.build()
            r0.resetParamList()
            boolean r5 = a(r5)
            a(r3, r0, r4, r5)
            return
    }

    public static void a(android.content.Context r8, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r9, boolean r10, int r11, boolean r12) {
            if (r8 == 0) goto L56
            boolean r0 = com.huawei.updatesdk.a.a.d.i.a.d(r8)
            if (r0 != 0) goto L9
            goto L56
        L9:
            a(r8)
            long r0 = java.lang.System.currentTimeMillis()
            com.huawei.updatesdk.b.b.a r2 = com.huawei.updatesdk.b.b.a.d()
            long r2 = r2.b()
            if (r11 == 0) goto L29
            long r2 = r0 - r2
            long r2 = java.lang.Math.abs(r2)
            long r4 = (long) r11
            r6 = 86400000(0x5265c00, double:4.2687272E-316)
            long r4 = r4 * r6
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto L56
        L29:
            com.huawei.updatesdk.b.b.a r2 = com.huawei.updatesdk.b.b.a.d()
            r2.a(r0)
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r0 = new com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder
            r0.<init>()
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r10 = r0.setIsShowImmediate(r10)
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r10 = r10.setMustBtnOne(r12)
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r10 = r10.setMinIntervalDay(r11)
            com.huawei.updatesdk.service.otaupdate.UpdateParams r10 = r10.build()
            com.huawei.updatesdk.service.otaupdate.e r11 = new com.huawei.updatesdk.service.otaupdate.e
            r11.<init>(r8, r10, r9)
            r8 = 1
            r11.b(r8)
            java.util.concurrent.ThreadPoolExecutor r8 = com.huawei.updatesdk.b.g.c.b
            r9 = 0
            java.lang.Void[] r9 = new java.lang.Void[r9]
            r11.executeOnExecutor(r8, r9)
        L56:
            return
    }

    public static void a(android.content.Context r2, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r3, boolean r4, boolean r5) {
            if (r2 != 0) goto L3
            return
        L3:
            boolean r0 = com.huawei.updatesdk.a.a.d.i.a.d(r2)
            r1 = 0
            if (r0 == 0) goto L2b
            a(r2)
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r0 = new com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder
            r0.<init>()
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r4 = r0.setIsShowImmediate(r4)
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r4 = r4.setMustBtnOne(r5)
            com.huawei.updatesdk.service.otaupdate.UpdateParams r4 = r4.build()
            com.huawei.updatesdk.service.otaupdate.e r5 = new com.huawei.updatesdk.service.otaupdate.e
            r5.<init>(r2, r4, r3)
            java.util.concurrent.ThreadPoolExecutor r2 = com.huawei.updatesdk.b.g.c.b
            java.lang.Void[] r3 = new java.lang.Void[r1]
            r5.executeOnExecutor(r2, r3)
            goto L48
        L2b:
            if (r3 == 0) goto L3b
            android.content.Intent r4 = new android.content.Intent
            r4.<init>()
            r5 = 2
            java.lang.String r0 = "status"
            r4.putExtra(r0, r5)
            r3.onUpdateInfo(r4)
        L3b:
            java.lang.String r3 = "upsdk_no_available_network_prompt_toast"
            int r3 = com.huawei.updatesdk.b.h.c.c(r2, r3)
            android.widget.Toast r2 = android.widget.Toast.makeText(r2, r3, r1)
            r2.show()
        L48:
            return
    }

    public static void a(android.content.Context r0, com.huawei.updatesdk.service.otaupdate.UpdateParams r1, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r2) {
            if (r0 == 0) goto L10
            if (r1 == 0) goto L10
            if (r2 != 0) goto L7
            goto L10
        L7:
            a(r0)
            r1.resetParamList()
            b(r0, r1, r2)
        L10:
            return
    }

    private static void a(android.content.Context r8, com.huawei.updatesdk.service.otaupdate.UpdateParams r9, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r10, boolean r11) {
            if (r8 == 0) goto L5b
            if (r9 == 0) goto L5b
            if (r10 != 0) goto L7
            goto L5b
        L7:
            a(r8)
            long r0 = java.lang.System.currentTimeMillis()
            com.huawei.updatesdk.b.b.a r2 = com.huawei.updatesdk.b.b.a.d()
            long r2 = r2.b()
            int r4 = r9.getMinIntervalDay()
            if (r4 == 0) goto L2f
            long r2 = r0 - r2
            long r2 = java.lang.Math.abs(r2)
            int r4 = r9.getMinIntervalDay()
            long r4 = (long) r4
            r6 = 86400000(0x5265c00, double:4.2687272E-316)
            long r4 = r4 * r6
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto L5b
        L2f:
            boolean r2 = com.huawei.updatesdk.a.a.d.i.a.d(r8)
            if (r2 == 0) goto L4d
            com.huawei.updatesdk.b.b.a r2 = com.huawei.updatesdk.b.b.a.d()
            r2.a(r0)
            com.huawei.updatesdk.service.otaupdate.e r0 = new com.huawei.updatesdk.service.otaupdate.e
            r0.<init>(r8, r9, r10)
            r0.a(r11)
            java.util.concurrent.ThreadPoolExecutor r8 = com.huawei.updatesdk.b.g.c.b
            r9 = 0
            java.lang.Void[] r9 = new java.lang.Void[r9]
            r0.executeOnExecutor(r8, r9)
            goto L5b
        L4d:
            android.content.Intent r8 = new android.content.Intent
            r8.<init>()
            r9 = 2
            java.lang.String r11 = "status"
            r8.putExtra(r11, r9)
            r10.onUpdateInfo(r8)
        L5b:
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r4) {
            java.lang.String r0 = "status"
            if (r2 == 0) goto L42
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L42
            if (r4 != 0) goto Ld
            goto L42
        Ld:
            boolean r1 = com.huawei.updatesdk.a.a.d.i.a.d(r2)
            if (r1 == 0) goto L35
            a(r2)
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r0 = new com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder
            r0.<init>()
            r1 = 0
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r0 = r0.setMustBtnOne(r1)
            com.huawei.updatesdk.service.otaupdate.UpdateParams$Builder r3 = r0.setTargetPkgName(r3)
            com.huawei.updatesdk.service.otaupdate.UpdateParams r3 = r3.build()
            com.huawei.updatesdk.service.otaupdate.e r0 = new com.huawei.updatesdk.service.otaupdate.e
            r0.<init>(r2, r3, r4)
            java.util.concurrent.ThreadPoolExecutor r2 = com.huawei.updatesdk.b.g.c.b
            java.lang.Void[] r3 = new java.lang.Void[r1]
            r0.executeOnExecutor(r2, r3)
            goto L41
        L35:
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            r3 = 2
            r2.putExtra(r0, r3)
            r4.onUpdateInfo(r2)
        L41:
            return
        L42:
            if (r4 == 0) goto L50
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            r3 = 1
            r2.putExtra(r0, r3)
            r4.onUpdateInfo(r2)
        L50:
            return
    }

    public static void a(java.lang.String r1) {
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
            r0.c(r1)
            return
    }

    private static boolean a(com.huawei.updatesdk.service.appmgr.bean.AppInfoAdapter r1) {
            if (r1 == 0) goto L1a
            java.lang.String r0 = r1.getAppStorePkgName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            java.lang.String r1 = r1.getBusiness()
            java.lang.String r0 = "AppTouch"
            boolean r1 = android.text.TextUtils.equals(r1, r0)
            if (r1 == 0) goto L1a
            r1 = 1
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
    }

    public static void b(android.content.Context r1, com.huawei.updatesdk.service.otaupdate.UpdateParams r2, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r3) {
            r0 = 0
            a(r1, r2, r3, r0)
            return
    }

    public static void b(java.lang.String r1) {
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
            r0.b(r1)
            return
    }
}
