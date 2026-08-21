package com.bianfeng.ymnsdk.util.cache;

import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;

public class YmnSharedPreferencesUtils {
    private static final String YMNAGREEPRIVACY = "ymn_agree_privacy";

    public YmnSharedPreferencesUtils() {
    }

    public static boolean isAgreeprivacy() {
        return SharedPreferencesUtils.getBoolean(YMNAGREEPRIVACY);
    }

    public static void setYmnagreeprivacy() {
        if (SharedPreferencesUtils.getBoolean(YMNAGREEPRIVACY) == true) goto L10;
        SharedPreferencesUtils.put(YMNAGREEPRIVACY, true);     // Catch: Exception -> L7
        return;
    L10:
        return;
    }
}
