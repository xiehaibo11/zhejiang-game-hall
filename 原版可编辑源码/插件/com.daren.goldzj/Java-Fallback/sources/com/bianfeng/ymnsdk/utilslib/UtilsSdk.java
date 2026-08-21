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

public class UtilsSdk {
    private static volatile boolean isFrist;

    public static String getVersion() {
        return "1.3.8";
    }

    public UtilsSdk() {
    }

    public static void initContext(Context r1) {
        if (isFrist == true) goto L5;
        FileUtils.init(r1);
        YmnDeubgUrlUtils.getInstance().initDebugUrl();
        SharedPreferencesUtils.init(r1);
        UtilsLogger.updateState();
        AppContext.getInstance().init(r1);
        DeviceInfo.getInstance().init(r1);
        isFrist = true;
    L5:
        Log.i("ymnsdk", "UtilsSdk initContext: " + isFrist);
    }

    public static GsonUtils getGsonUtils() {
        UtilsLogger.i(UtilsSdk.class, "getGsonUtils");
        return GsonUtils.getInstance();
    }

    public static String getDebugUrl() {
        return YmnDeubgUrlUtils.getInstance().getDebugUrl();
    }

    public static String getDebugUrl(String r1) {
        return YmnDeubgUrlUtils.getInstance().getDebugUrl(r1);
    }

    public static String getAppPermissions(Context r0) {
        return AppPermissionUtils.getList(r0);
    L4:
        return "";
    }
}
