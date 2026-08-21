package com.bianfeng.ymnsdk.util;

import android.content.Context;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

public class YmnUtilsdk {
    public YmnUtilsdk() {
    }

    public static void init(Context r0) {
        UtilsSdk.initContext(r0);
        YmnAppContext.init(r0);
    }

    public static boolean isAgreeprivacy() {
        return YmnSharedPreferencesUtils.isAgreeprivacy();
    }

    public static void setAgreePrivacy() {
        YmnSharedPreferencesUtils.setYmnagreeprivacy();
    }
}
