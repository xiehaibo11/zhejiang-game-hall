package com.bianfeng.toponad.common;

import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;

public class ToponSpUtils {
    public static boolean isSHowSplashAd() {
        try {
            boolean z = SharedPreferencesUtils.getBoolean("is_show_topon_splashad");
            if (!z) {
                SharedPreferencesUtils.put("is_show_topon_splashad", true);
            }
            return z;
        } catch (YmnException e) {
            e.printStackTrace();
            return false;
        }
    }
}
