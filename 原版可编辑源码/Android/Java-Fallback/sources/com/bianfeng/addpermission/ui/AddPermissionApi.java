package com.bianfeng.addpermission.ui;

public class AddPermissionApi {
    private static com.bianfeng.addpermission.ui.PermissionCallback permissionCallback;
    private static com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack policyCallBack;

    public AddPermissionApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.addpermission.ui.PermissionCallback getPermissionCallback() {
            com.bianfeng.addpermission.ui.PermissionCallback r0 = com.bianfeng.addpermission.ui.AddPermissionApi.permissionCallback
            return r0
    }

    public static com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack getPolicyCallBack() {
            com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack r0 = com.bianfeng.addpermission.ui.AddPermissionApi.policyCallBack
            return r0
    }

    public static void setPermissionCallback(com.bianfeng.addpermission.ui.PermissionCallback r0) {
            com.bianfeng.addpermission.ui.AddPermissionApi.permissionCallback = r0
            return
    }

    public static void setPolicyCallBack(com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack r0) {
            com.bianfeng.addpermission.ui.AddPermissionApi.policyCallBack = r0
            return
    }

    public static void showPolicyDialog(android.app.Activity r0) {
            com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog.start(r0)
            return
    }

    public static void showTipsDialog(android.app.Activity r0) {
            com.bianfeng.addpermission.ui.ShowTipsDialog.start(r0)
            return
    }

    public static void toShowPermissionDialog(android.app.Activity r1) {
            java.lang.String r0 = "======toShowPermissionDialog="
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            com.bianfeng.addpermission.ui.ShowPermissionDialog.start(r1)
            return
    }
}
