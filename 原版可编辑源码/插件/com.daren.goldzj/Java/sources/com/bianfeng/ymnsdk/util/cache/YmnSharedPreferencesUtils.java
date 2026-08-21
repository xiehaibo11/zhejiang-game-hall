package com.bianfeng.ymnsdk.util.cache;

import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;

public class YmnSharedPreferencesUtils {
    private static final String YMNAGREEPRIVACY = "ymn_agree_privacy";

    public static boolean isAgreeprivacy() {
        return SharedPreferencesUtils.getBoolean(YMNAGREEPRIVACY);
    }

    public static void setYmnagreeprivacy() {
        try {
            if (SharedPreferencesUtils.getBoolean(YMNAGREEPRIVACY)) {
                return;
            }
            SharedPreferencesUtils.put(YMNAGREEPRIVACY, true);
        } catch (Exception unused) {
        }
    }
}
