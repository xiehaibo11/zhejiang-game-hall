package com.bianfeng.ymnsdk.ymnlink;

import android.net.Uri;

/* JADX INFO: loaded from: classes.dex */
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
