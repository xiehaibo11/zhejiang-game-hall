package com.bianfeng.ymnsdk.util;

public class YmnUtilsdk {
    public YmnUtilsdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void init(android.content.Context r0) {
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r0)
            com.bianfeng.ymnsdk.util.YmnAppContext.init(r0)
            return
    }

    public static boolean isAgreeprivacy() {
            boolean r0 = com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.isAgreeprivacy()
            return r0
    }

    public static void setAgreePrivacy() {
            com.bianfeng.ymnsdk.util.cache.YmnSharedPreferencesUtils.setYmnagreeprivacy()
            return
    }
}
