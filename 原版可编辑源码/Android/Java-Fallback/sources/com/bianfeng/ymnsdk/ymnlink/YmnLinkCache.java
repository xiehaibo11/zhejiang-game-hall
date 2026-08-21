package com.bianfeng.ymnsdk.ymnlink;

public class YmnLinkCache {
    private static android.net.Uri launchData;

    public YmnLinkCache() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearLaunchData() {
            r0 = 0
            setLaunchData(r0)
            return
    }

    public static android.net.Uri getLaunchData() {
            android.net.Uri r0 = com.bianfeng.ymnsdk.ymnlink.YmnLinkCache.launchData
            return r0
    }

    public static void setLaunchData(android.net.Uri r0) {
            com.bianfeng.ymnsdk.ymnlink.YmnLinkCache.launchData = r0
            return
    }
}
