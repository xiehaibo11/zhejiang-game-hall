package com.bianfeng.toponad.common;

public class ToponSpUtils {
    public ToponSpUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isSHowSplashAd() {
            java.lang.String r0 = "is_show_topon_splashad"
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Ld
            if (r1 != 0) goto Lc
            r2 = 1
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> Ld
        Lc:
            return r1
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }
}
