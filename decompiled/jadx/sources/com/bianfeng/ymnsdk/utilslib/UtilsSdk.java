package com.bianfeng.ymnsdk.utilslib;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppContext;
import com.bianfeng.ymnsdk.utilslib.appinfo.AppPermissionUtils;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.cache.YmnDeubgUrlUtils;
import com.bianfeng.ymnsdk.utilslib.device.DeviceInfo;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

/* JADX INFO: loaded from: classes.dex */
public class UtilsSdk {
    private static volatile boolean isFrist;
    private static volatile boolean isFristInitDeviceInfo;

    public static void initContext(Context context) {
        if (!isFrist) {
            FileUtils.init(context);
            YmnDeubgUrlUtils.getInstance().initDebugUrl();
            SharedPreferencesUtils.init(context);
            UtilsLogger.updateState();
            AppContext.getInstance().init(context);
            DeviceInfo.getInstance().setContext(context);
            isFrist = true;
        }
        Log.i("ymnsdk", "UtilsSdk initContext: " + isFrist);
    }

    public static void initDeviceInfo(Context context) {
        if (!isFristInitDeviceInfo) {
            DeviceInfo.getInstance().init(context);
            isFristInitDeviceInfo = true;
        }
    }

    public static GsonUtils getGsonUtils() {
        UtilsLogger.i(UtilsSdk.class, "getGsonUtils");
        return GsonUtils.getInstance();
    }

    public static String getDebugUrl() {
        return YmnDeubgUrlUtils.getInstance().getDebugUrl();
    }

    public static String getDebugUrl(String key) {
        return YmnDeubgUrlUtils.getInstance().getDebugUrl(key);
    }

    public static String getAppPermissions(Context context) {
        try {
            return AppPermissionUtils.getList(context);
        } catch (Exception e) {
            return "";
        }
    }

    public static String getVersion() {
        return "1.5.8";
    }
}
