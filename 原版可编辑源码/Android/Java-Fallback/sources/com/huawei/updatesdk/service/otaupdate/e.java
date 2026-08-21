package com.huawei.updatesdk.service.otaupdate;

public class e extends android.os.AsyncTask<java.lang.Void, java.lang.Void, com.huawei.updatesdk.a.b.c.c.d> {
    private android.content.Context a;
    private com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack b;
    private com.huawei.updatesdk.service.otaupdate.UpdateParams c;
    private android.widget.Toast d;
    private boolean e;
    private java.util.List<java.lang.String> f;
    private com.huawei.updatesdk.a.b.c.b g;
    private boolean h;

    public e(android.content.Context r3, com.huawei.updatesdk.service.otaupdate.UpdateParams r4, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.e = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.f = r1
            r2.h = r0
            r2.c = r4
            r2.a = r3
            r2.b = r5
            com.huawei.updatesdk.service.otaupdate.f r3 = com.huawei.updatesdk.service.otaupdate.f.e()
            java.lang.String r4 = r4.getServiceZone()
            r3.b(r4)
            return
    }

    private android.content.pm.PackageInfo a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            android.content.pm.PackageInfo r2 = com.huawei.updatesdk.b.h.b.a(r3, r2)
            if (r2 != 0) goto L1f
            android.content.pm.PackageInfo r2 = new android.content.pm.PackageInfo
            r2.<init>()
            r2.packageName = r3
            java.lang.String r3 = "1.0"
            r2.versionName = r3
            r3 = 1
            r2.versionCode = r3
            android.content.pm.ApplicationInfo r3 = new android.content.pm.ApplicationInfo
            r3.<init>()
            r0 = 19
            r3.targetSdkVersion = r0
            r2.applicationInfo = r3
        L1f:
            return r2
    }

    private com.huawei.updatesdk.a.b.c.c.d a(android.content.Context r3, java.util.List<java.lang.String> r4) {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L9:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r4.next()
            java.lang.String r1 = (java.lang.String) r1
            android.content.pm.PackageInfo r1 = r2.a(r3, r1)
            r0.add(r1)
            goto L9
        L1d:
            com.huawei.updatesdk.service.otaupdate.UpdateParams r4 = r2.c
            java.util.List r4 = r4.getParamList()
            boolean r4 = com.huawei.updatesdk.b.h.d.a(r4)
            if (r4 != 0) goto L35
            com.huawei.updatesdk.service.appmgr.bean.d r4 = new com.huawei.updatesdk.service.appmgr.bean.d
            com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = r2.c
            java.util.List r0 = r0.getParamList()
            r4.<init>(r0)
            goto L39
        L35:
            com.huawei.updatesdk.service.appmgr.bean.d r4 = com.huawei.updatesdk.service.appmgr.bean.d.a(r0)
        L39:
            boolean r0 = r2.h
            r1 = 0
            if (r0 == 0) goto L41
            r0 = 34
            goto L42
        L41:
            r0 = r1
        L42:
            r4.d(r0)
            r4.b(r1)
            boolean r0 = r2.h
            if (r0 == 0) goto L4f
            java.lang.String r0 = "apptouch"
            goto L51
        L4f:
            java.lang.String r0 = "default"
        L51:
            com.huawei.updatesdk.b.e.a r0 = com.huawei.updatesdk.b.e.e.a(r0)
            java.lang.String r0 = r0.b()
            java.lang.String r3 = com.huawei.updatesdk.a.a.d.h.c.b(r3, r0)
            r4.d(r3)
            boolean r3 = r2.isCancelled()
            r0 = 0
            if (r3 == 0) goto L6f
            java.lang.String r3 = "UpdateSDKCheckTask"
            java.lang.String r4 = "UpdateSDK task is canceled and return empty upgradeInfo"
            com.huawei.updatesdk.a.a.a.c(r3, r4)
            return r0
        L6f:
            com.huawei.updatesdk.a.b.c.b r3 = new com.huawei.updatesdk.a.b.c.b
            r3.<init>(r4, r0)
            r2.g = r3
            com.huawei.updatesdk.a.b.c.c.d r3 = r3.c()
            return r3
    }

    private void a() {
            r1 = this;
            android.widget.Toast r0 = r1.d
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    private void a(android.content.Context r4, com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r5) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.huawei.updatesdk.service.otaupdate.AppUpdateActivity> r1 = com.huawei.updatesdk.service.otaupdate.AppUpdateActivity.class
            r0.<init>(r4, r1)
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "app_update_parm"
            r1.putSerializable(r2, r5)
            com.huawei.updatesdk.service.otaupdate.UpdateParams r5 = r3.c
            boolean r5 = r5.isMustBtnOne()
            java.lang.String r2 = "app_must_btn"
            r1.putBoolean(r2, r5)
            boolean r5 = r3.h
            java.lang.String r2 = "is_apptouch"
            r1.putBoolean(r2, r5)
            r0.putExtras(r1)
            boolean r5 = r4 instanceof android.app.Activity
            if (r5 != 0) goto L32
            r5 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r5)
        L32:
            r4.startActivity(r0)     // Catch: android.content.ActivityNotFoundException -> L36
            goto L51
        L36:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "go AppUpdateActivity error: "
            r5.append(r0)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "UpdateSDKCheckTask"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r5, r4)
        L51:
            return
    }

    private void a(java.util.List<com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo> r3) {
            r2 = this;
            boolean r0 = com.huawei.updatesdk.b.h.d.a(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Iterator r3 = r3.iterator()
        Lb:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L38
            java.lang.Object r0 = r3.next()
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r0 = (com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo) r0
            if (r0 == 0) goto Lb
            java.lang.String r1 = r0.getFullDownUrl_()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lb
            int r1 = r0.getDiffSize_()
            if (r1 <= 0) goto L30
            java.lang.String r1 = r0.getDownurl_()
            r0.setDiffDownUrl_(r1)
        L30:
            java.lang.String r1 = r0.getFullDownUrl_()
            r0.setDownurl_(r1)
            goto Lb
        L38:
            return
    }

    private void b() {
            r2 = this;
            com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = r2.c
            java.lang.String r0 = r0.getTargetPkgName()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L12
            android.content.Context r0 = r2.a
            java.lang.String r0 = r0.getPackageName()
        L12:
            com.huawei.updatesdk.service.otaupdate.UpdateParams r1 = r2.c
            java.util.List r1 = r1.getPackageList()
            boolean r1 = com.huawei.updatesdk.b.h.d.a(r1)
            if (r1 == 0) goto L2a
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L35
            java.util.List<java.lang.String> r1 = r2.f
            r1.add(r0)
            goto L35
        L2a:
            java.util.List<java.lang.String> r0 = r2.f
            com.huawei.updatesdk.service.otaupdate.UpdateParams r1 = r2.c
            java.util.List r1 = r1.getPackageList()
            r0.addAll(r1)
        L35:
            return
    }

    private void b(com.huawei.updatesdk.a.b.c.c.d r4) {
            r3 = this;
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r3.b
            if (r0 == 0) goto L42
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r1 = 6
            java.lang.String r2 = "status"
            r0.putExtra(r2, r1)
            com.huawei.updatesdk.a.b.c.c.d$a r1 = r4.a()
            if (r1 == 0) goto L22
            com.huawei.updatesdk.a.b.c.c.d$a r1 = r4.a()
            int r1 = r1.ordinal()
            java.lang.String r2 = "failcause"
            r0.putExtra(r2, r1)
        L22:
            java.lang.String r1 = r4.c()
            java.lang.String r2 = "failreason"
            r0.putExtra(r2, r1)
            int r1 = r4.b()
            java.lang.String r2 = "responsecode"
            r0.putExtra(r2, r1)
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r1 = r3.b
            r1.onUpdateInfo(r0)
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r3.b
            int r4 = r4.d()
            r0.onUpdateStoreError(r4)
        L42:
            return
    }

    private boolean c() {
            r1 = this;
            boolean r0 = r1.e
            if (r0 != 0) goto L2a
            com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = r1.c
            java.lang.String r0 = r0.getTargetPkgName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2a
            com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = r1.c
            java.util.List r0 = r0.getPackageList()
            boolean r0 = com.huawei.updatesdk.b.h.d.a(r0)
            if (r0 == 0) goto L2a
            com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = r1.c
            java.util.List r0 = r0.getParamList()
            boolean r0 = com.huawei.updatesdk.b.h.d.a(r0)
            if (r0 == 0) goto L2a
            r0 = 1
            return r0
        L2a:
            r0 = 0
            return r0
    }

    protected com.huawei.updatesdk.a.b.c.c.d a(java.lang.Void... r2) {
            r1 = this;
            java.lang.String r2 = "UpdateSDKCheckTask"
            java.lang.String r0 = "CheckOtaAndUpdataTask doInBackground"
            com.huawei.updatesdk.a.a.c.a.a.a.a(r2, r0)
            com.huawei.updatesdk.b.b.a r2 = com.huawei.updatesdk.b.b.a.d()
            r2.c()
            com.huawei.updatesdk.b.g.b.a(r1)
            r1.b()
            boolean r2 = r1.h
            if (r2 == 0) goto L1b
            java.lang.String r2 = "apptouch"
            goto L1d
        L1b:
            java.lang.String r2 = "default"
        L1d:
            com.huawei.updatesdk.b.e.a r2 = com.huawei.updatesdk.b.e.e.a(r2)
            java.util.List<java.lang.String> r0 = r1.f
            r2.a(r0)
            r2.c()
            android.content.Context r0 = r1.a
            java.lang.String r2 = r2.b(r0)
            com.huawei.updatesdk.a.b.c.c.c.c(r2)
            com.huawei.updatesdk.b.b.a r2 = com.huawei.updatesdk.b.b.a.d()
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
            java.lang.String r0 = r0.a()
            r2.e(r0)
            android.content.Context r2 = r1.a
            java.util.List<java.lang.String> r0 = r1.f
            com.huawei.updatesdk.a.b.c.c.d r2 = r1.a(r2, r0)
            return r2
    }

    protected void a(com.huawei.updatesdk.a.b.c.c.d r10) {
            r9 = this;
            java.util.List r0 = com.huawei.updatesdk.b.g.b.a()
            r0.remove(r9)
            r9.a()
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r9.b
            java.lang.String r1 = "UpdateSDKCheckTask"
            if (r0 != 0) goto L15
            java.lang.String r0 = "UpdateSDK callback is null"
            com.huawei.updatesdk.a.a.a.c(r1, r0)
        L15:
            r0 = 3
            java.lang.String r2 = "status"
            if (r10 != 0) goto L2c
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r10 = r9.b
            if (r10 == 0) goto L2b
            android.content.Intent r10 = new android.content.Intent
            r10.<init>()
            r10.putExtra(r2, r0)
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r9.b
            r0.onUpdateInfo(r10)
        L2b:
            return
        L2c:
            int r3 = r10.b()
            r4 = 0
            boolean r5 = r10.f()
            java.lang.String r6 = "responsecode"
            r7 = 0
            if (r5 == 0) goto L95
            com.huawei.updatesdk.service.appmgr.bean.e r10 = (com.huawei.updatesdk.service.appmgr.bean.e) r10
            java.util.ArrayList<com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo> r4 = r10.list
            java.util.List<com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo> r5 = r10.notRcmList
            boolean r5 = com.huawei.updatesdk.b.h.d.a(r5)
            if (r5 != 0) goto L72
            java.util.List<com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo> r10 = r10.notRcmList
            java.lang.Object r10 = r10.get(r7)
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r10 = (com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo) r10
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r8 = "UpdateSDK get update info is not recommend,reason: "
            r5.append(r8)
            java.lang.String r8 = r10.getNotRcmReason_()
            r5.append(r8)
            java.lang.String r8 = ",is same signature: "
            r5.append(r8)
            int r10 = r10.getSameS_()
            r5.append(r10)
            java.lang.String r10 = r5.toString()
            com.huawei.updatesdk.a.a.a.c(r1, r10)
        L72:
            r9.a(r4)
            boolean r10 = com.huawei.updatesdk.b.h.d.a(r4)
            if (r10 == 0) goto Lbc
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r10 = r9.b
            if (r10 == 0) goto Lbc
            java.lang.String r10 = "no upgrade info"
            com.huawei.updatesdk.a.a.a.b(r1, r10)
            android.content.Intent r10 = new android.content.Intent
            r10.<init>()
            r10.putExtra(r2, r0)
            r10.putExtra(r6, r3)
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r9.b
            r0.onUpdateInfo(r10)
            goto Lbc
        L95:
            r9.b(r10)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "get app update msg failed,responseCode is "
            r0.append(r5)
            int r5 = r10.d()
            r0.append(r5)
            java.lang.String r5 = ",failreason: "
            r0.append(r5)
            java.lang.String r10 = r10.c()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            com.huawei.updatesdk.a.a.a.a(r1, r10)
        Lbc:
            boolean r10 = com.huawei.updatesdk.b.h.d.a(r4)
            if (r10 != 0) goto L151
            java.lang.Object r10 = r4.get(r7)
            com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r10 = (com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo) r10
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r0 = r9.b
            if (r0 == 0) goto Le7
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r5 = "updatesdk_update_info"
            r0.putExtra(r5, r10)
            java.lang.String r5 = "updatesdk_update_info_list"
            r0.putParcelableArrayListExtra(r5, r4)
            r4 = 7
            r0.putExtra(r2, r4)
            r0.putExtra(r6, r3)
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r2 = r9.b
            r2.onUpdateInfo(r0)
        Le7:
            if (r10 == 0) goto L13e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ApkUpgradeInfo,version = "
            r0.append(r2)
            java.lang.String r2 = r10.getVersion_()
            r0.append(r2)
            java.lang.String r2 = ",versionCode = "
            r0.append(r2)
            int r2 = r10.getVersionCode_()
            r0.append(r2)
            java.lang.String r2 = ",detailId = "
            r0.append(r2)
            java.lang.String r2 = r10.getDetailId_()
            r0.append(r2)
            java.lang.String r2 = ",devType = "
            r0.append(r2)
            int r2 = r10.getDevType_()
            r0.append(r2)
            java.lang.String r2 = ",packageName = "
            r0.append(r2)
            java.lang.String r2 = r10.getPackage_()
            r0.append(r2)
            java.lang.String r2 = ",oldVersionCode = "
            r0.append(r2)
            int r2 = r10.getOldVersionCode_()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.huawei.updatesdk.a.a.a.b(r1, r0)
            goto L143
        L13e:
            java.lang.String r0 = "info == null"
            com.huawei.updatesdk.a.a.a.a(r1, r0)
        L143:
            com.huawei.updatesdk.service.otaupdate.UpdateParams r0 = r9.c
            boolean r0 = r0.isShowImmediate()
            if (r0 == 0) goto L16b
            android.content.Context r0 = r9.a
            r9.a(r0, r10)
            goto L16b
        L151:
            boolean r10 = r9.c()
            if (r10 == 0) goto L16b
            java.lang.String r10 = "show no upgrade info toast."
            com.huawei.updatesdk.a.a.a.b(r1, r10)
            android.content.Context r10 = r9.a
            java.lang.String r0 = "upsdk_update_check_no_new_version"
            int r0 = com.huawei.updatesdk.b.h.c.c(r10, r0)
            android.widget.Toast r10 = android.widget.Toast.makeText(r10, r0, r7)
            r10.show()
        L16b:
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void b(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    protected com.huawei.updatesdk.a.b.c.c.d doInBackground(java.lang.Void[] r1) {
            r0 = this;
            java.lang.Void[] r1 = (java.lang.Void[]) r1
            com.huawei.updatesdk.a.b.c.c.d r1 = r0.a(r1)
            return r1
    }

    @Override
    protected void onCancelled() {
            r1 = this;
            super.onCancelled()
            com.huawei.updatesdk.a.b.c.b r0 = r1.g
            if (r0 == 0) goto La
            r0.b()
        La:
            return
    }

    @Override
    protected void onPostExecute(com.huawei.updatesdk.a.b.c.c.d r1) {
            r0 = this;
            com.huawei.updatesdk.a.b.c.c.d r1 = (com.huawei.updatesdk.a.b.c.c.d) r1
            r0.a(r1)
            return
    }

    @Override
    protected void onPreExecute() {
            r3 = this;
            super.onPreExecute()
            com.huawei.updatesdk.service.otaupdate.d r0 = com.huawei.updatesdk.service.otaupdate.d.a()
            com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r1 = r3.b
            r0.a(r1)
            boolean r0 = r3.c()
            if (r0 == 0) goto L24
            android.content.Context r0 = r3.a
            java.lang.String r1 = "upsdk_checking_update_prompt"
            int r1 = com.huawei.updatesdk.b.h.c.c(r0, r1)
            r2 = 1
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)
            r3.d = r0
            r0.show()
        L24:
            return
    }
}
