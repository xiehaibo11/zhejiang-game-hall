package com.bianfeng.ymnsdk.util.cache;

public class YmnSharedPreferencesUtils {
    private static final java.lang.String YMNAGREEPRIVACY = "ymn_agree_privacy";
    private static final java.lang.String YMN_CLIP_ALLOW = "ymn_clip_allow";

    public YmnSharedPreferencesUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearAgreePrivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            r1 = 0
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L7
            goto L8
        L7:
            r0 = move-exception
        L8:
            return
    }

    public static boolean isAgreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            return r0
    }

    public static boolean isYmnClipAllow() {
            java.lang.String r0 = "ymn_clip_allow"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            return r0
    }

    public static void setYmnClipAllow(boolean r1) {
            java.lang.String r0 = "ymn_clip_allow"
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L6
            goto L7
        L6:
            r0 = move-exception
        L7:
            return
    }

    public static void setYmnagreeprivacy() {
            java.lang.String r0 = "ymn_agree_privacy"
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)     // Catch: java.lang.Exception -> Ld
            if (r1 != 0) goto Lc
            r2 = 1
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r2)     // Catch: java.lang.Exception -> Ld
        Lc:
            goto Le
        Ld:
            r0 = move-exception
        Le:
            return
    }
}
