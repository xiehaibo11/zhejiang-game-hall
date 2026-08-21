package com.huawei.updatesdk;

public final class UpdateSdkAPI {
    public UpdateSdkAPI() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkAppUpdate(android.content.Context r0, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r1, boolean r2, boolean r3) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0, r1, r2, r3)
            return
    }

    public static void checkAppUpdate(android.content.Context r0, com.huawei.updatesdk.service.otaupdate.UpdateParams r1, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r2) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0, r1, r2)
            return
    }

    public static void checkAppUpdateByAppInfo(android.content.Context r0, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r1, com.huawei.updatesdk.service.appmgr.bean.AppInfoAdapter r2) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0, r1, r2)
            return
    }

    public static void checkAppUpdateForHMSKit(android.content.Context r0, com.huawei.updatesdk.service.otaupdate.UpdateParams r1, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r2) {
            com.huawei.updatesdk.service.otaupdate.g.b(r0, r1, r2)
            return
    }

    public static void checkClientOTAUpdate(android.content.Context r0, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r1, boolean r2, int r3, boolean r4) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0, r1, r2, r3, r4)
            return
    }

    public static void checkTargetAppUpdate(android.content.Context r0, java.lang.String r1, com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack r2) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0, r1, r2)
            return
    }

    public static void releaseCallBack() {
            com.huawei.updatesdk.service.otaupdate.g.a()
            return
    }

    public static void setAppStorePkgName(java.lang.String r0) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0)
            return
    }

    public static void setServiceZone(java.lang.String r0) {
            com.huawei.updatesdk.service.otaupdate.g.b(r0)
            return
    }

    public static void showUpdateDialog(android.content.Context r0, com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1, boolean r2) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0, r1, r2)
            return
    }

    public static void showUpdateDialogByAppInfo(android.content.Context r0, com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo r1, com.huawei.updatesdk.service.appmgr.bean.AppInfoAdapter r2) {
            com.huawei.updatesdk.service.otaupdate.g.a(r0, r1, r2)
            return
    }
}
