package com.bianfeng.addpermission.ui;

import android.app.Activity;
import com.bianfeng.ymnsdk.util.Logger;

public class AddPermissionApi {
    private static PermissionCallback permissionCallback;
    private static AddPrivacyPolicyCallBack policyCallBack;

    public static void setPolicyCallBack(AddPrivacyPolicyCallBack addPrivacyPolicyCallBack) {
        policyCallBack = addPrivacyPolicyCallBack;
    }

    public static AddPrivacyPolicyCallBack getPolicyCallBack() {
        return policyCallBack;
    }

    public static PermissionCallback getPermissionCallback() {
        return permissionCallback;
    }

    public static void setPermissionCallback(PermissionCallback permissionCallback2) {
        permissionCallback = permissionCallback2;
    }

    public static void showPolicyDialog(Activity activity) {
        ShowPrivacyPolicyDialog.start(activity);
    }

    public static void toShowPermissionDialog(Activity activity) {
        Logger.i("======toShowPermissionDialog=");
        ShowPermissionDialog.start(activity);
    }

    public static void showTipsDialog(Activity activity) {
        ShowTipsDialog.start(activity);
    }
}
