package com.bianfeng.ymnsdk.util;

import android.content.Context;
import com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

public class YmnUtilsdk {
    public static void init(Context context) {
        UtilsSdk.initContext(context);
        YmnAppContext.init(context);
    }

    public static void setAgreePrivacy() {
        YmnSharedPreferencesUtils.setYmnagreeprivacy();
    }

    public static boolean isAgreeprivacy() {
        return YmnSharedPreferencesUtils.isAgreeprivacy();
    }
}
