package com.bianfeng.ymnsdk.util.cache;

import com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils;

public class YmnSharedPreferencesUtils {
    private static final String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private static final String YMN_CLIP_ALLOW = "ymn_clip_allow";

    public static void setYmnagreeprivacy() {
        try {
            boolean isAgree = SharedPreferencesUtils.getBoolean(YMNAGREEPRIVACY);
            if (!isAgree) {
                SharedPreferencesUtils.put(YMNAGREEPRIVACY, true);
            }
        } catch (Exception e) {
        }
    }

    public static boolean isAgreeprivacy() {
        return SharedPreferencesUtils.getBoolean(YMNAGREEPRIVACY);
    }

    public static void clearAgreePrivacy() {
        try {
            SharedPreferencesUtils.put(YMNAGREEPRIVACY, false);
        } catch (Exception e) {
        }
    }

    public static void setYmnClipAllow(boolean isAllow) {
        try {
            SharedPreferencesUtils.put(YMN_CLIP_ALLOW, isAllow);
        } catch (Exception e) {
        }
    }

    public static boolean isYmnClipAllow() {
        return SharedPreferencesUtils.getBoolean(YMN_CLIP_ALLOW);
    }
}
