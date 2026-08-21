package com.bianfeng.ymnsdk.util.cache;

public class YmnSharedPreferencesUtils {
    private static final java.lang.String YMNAGREEPRIVACY = "ymn_agree_privacy";

    public YmnSharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isAgreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            return r0
    }

    public static void setYmnagreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)     // Catch: java.lang.Exception -> Lc
            if (r1 != 0) goto Lc
            r1 = 1
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> Lc
        Lc:
            return
    }
}
