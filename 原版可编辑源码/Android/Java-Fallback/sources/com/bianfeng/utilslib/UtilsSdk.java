package com.bianfeng.utilslib;

public class UtilsSdk {
    public UtilsSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.ActivityHookUtils getActivityHook() {
            com.bianfeng.utilslib.ActivityHookUtils r0 = com.bianfeng.utilslib.ActivityHookUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.AppConfigUtils getAppConfig() {
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.AppConfigUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.reflex.ClassNameSetUtils getClassNameSet() {
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r0 = com.bianfeng.utilslib.reflex.ClassNameSetUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.ConfigurationUtils getConfiguration() {
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.ConfigurationUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.DensityUtils getDensityUtils() {
            com.bianfeng.utilslib.DensityUtils r0 = com.bianfeng.utilslib.DensityUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.FileUtils getFileUtils() {
            com.bianfeng.utilslib.FileUtils r0 = com.bianfeng.utilslib.FileUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.screen.FullScreenUtils getFullScreen() {
            com.bianfeng.utilslib.screen.FullScreenUtils r0 = com.bianfeng.utilslib.screen.FullScreenUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.Logger getLogger() {
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.Logger.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.screen.NotchScreenUtils getNotchScreen() {
            com.bianfeng.utilslib.screen.NotchScreenUtils r0 = com.bianfeng.utilslib.screen.NotchScreenUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.PermissionUtils getPermission(android.app.Activity r1) {
            com.bianfeng.utilslib.PermissionUtils r0 = new com.bianfeng.utilslib.PermissionUtils
            r0.<init>(r1)
            return r0
    }

    public static com.bianfeng.utilslib.reflex.ReflexCallbackUtils getReflexCall() {
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r0 = com.bianfeng.utilslib.reflex.ReflexCallbackUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.ResourceManger getResourceManger() {
            com.bianfeng.utilslib.ResourceManger r0 = new com.bianfeng.utilslib.ResourceManger
            r0.<init>()
            return r0
    }

    public static com.bianfeng.utilslib.SharedPreferencesUtils getSharedPreferences() {
            com.bianfeng.utilslib.SharedPreferencesUtils r0 = com.bianfeng.utilslib.SharedPreferencesUtils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.SignMd5Utils getSignMd5() {
            com.bianfeng.utilslib.SignMd5Utils r0 = com.bianfeng.utilslib.SignMd5Utils.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.SystemUtil getSystemUtil() {
            com.bianfeng.utilslib.SystemUtil r0 = com.bianfeng.utilslib.SystemUtil.getInstance()
            return r0
    }

    public static com.bianfeng.utilslib.ToastUtils getToast() {
            com.bianfeng.utilslib.ToastUtils r0 = com.bianfeng.utilslib.ToastUtils.getInstance()
            return r0
    }

    public static void init(android.app.Activity r1) {
            com.bianfeng.utilslib.SharedPreferencesUtils r0 = com.bianfeng.utilslib.SharedPreferencesUtils.getInstance()
            r0.init(r1)
            com.bianfeng.utilslib.FileUtils r0 = com.bianfeng.utilslib.FileUtils.getInstance()
            r0.init(r1)
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.AppConfigUtils.getInstance()
            r0.init(r1)
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.Logger.getInstance()
            r1.updateState()
            return
    }

    public static void onCreate(android.app.Activity r1) {
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.ConfigurationUtils.getInstance()
            r0.onInit(r1)
            return
    }

    public static void onWindowFocusChanged(boolean r1, android.app.Activity r2) {
            com.bianfeng.utilslib.ConfigurationUtils r0 = com.bianfeng.utilslib.ConfigurationUtils.getInstance()
            r0.onWindowFocusChanged(r1, r2)
            return
    }
}
