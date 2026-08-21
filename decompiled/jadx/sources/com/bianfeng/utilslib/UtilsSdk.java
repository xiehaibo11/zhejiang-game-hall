package com.bianfeng.utilslib;

import android.app.Activity;
import com.bianfeng.utilslib.reflex.ClassNameSetUtils;
import com.bianfeng.utilslib.reflex.ReflexCallbackUtils;
import com.bianfeng.utilslib.screen.FullScreenUtils;
import com.bianfeng.utilslib.screen.NotchScreenUtils;

/* JADX INFO: loaded from: classes.dex */
public class UtilsSdk {
    public static void init(Activity activity) {
        SharedPreferencesUtils.getInstance().init(activity);
        FileUtils.getInstance().init(activity);
        AppConfigUtils.getInstance().init(activity);
        Logger.getInstance().updateState();
    }

    public static void onCreate(Activity activity) {
        ConfigurationUtils.getInstance().onInit(activity);
    }

    public static void onWindowFocusChanged(boolean z, Activity activity) {
        ConfigurationUtils.getInstance().onWindowFocusChanged(z, activity);
    }

    public static Logger getLogger() {
        return Logger.getInstance();
    }

    public static PermissionUtils getPermission(Activity activity) {
        return new PermissionUtils(activity);
    }

    public static ToastUtils getToast() {
        return ToastUtils.getInstance();
    }

    public static ResourceManger getResourceManger() {
        return new ResourceManger();
    }

    public static FileUtils getFileUtils() {
        return FileUtils.getInstance();
    }

    public static AppConfigUtils getAppConfig() {
        return AppConfigUtils.getInstance();
    }

    public static SharedPreferencesUtils getSharedPreferences() {
        return SharedPreferencesUtils.getInstance();
    }

    public static FullScreenUtils getFullScreen() {
        return FullScreenUtils.getInstance();
    }

    public static SystemUtil getSystemUtil() {
        return SystemUtil.getInstance();
    }

    public static SignMd5Utils getSignMd5() {
        return SignMd5Utils.getInstance();
    }

    public static DensityUtils getDensityUtils() {
        return DensityUtils.getInstance();
    }

    public static ActivityHookUtils getActivityHook() {
        return ActivityHookUtils.getInstance();
    }

    public static ClassNameSetUtils getClassNameSet() {
        return ClassNameSetUtils.getInstance();
    }

    public static ReflexCallbackUtils getReflexCall() {
        return ReflexCallbackUtils.getInstance();
    }

    public static ConfigurationUtils getConfiguration() {
        return ConfigurationUtils.getInstance();
    }

    public static NotchScreenUtils getNotchScreen() {
        return NotchScreenUtils.getInstance();
    }
}
