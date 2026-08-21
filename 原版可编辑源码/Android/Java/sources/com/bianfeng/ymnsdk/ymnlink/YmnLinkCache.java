package com.bianfeng.ymnsdk.ymnlink;

import android.net.Uri;

public class YmnLinkCache {
    private static Uri launchData;

    public static Uri getLaunchData() {
        return launchData;
    }

    public static void setLaunchData(Uri uri) {
        launchData = uri;
    }

    public static void clearLaunchData() {
        setLaunchData(null);
    }
}
