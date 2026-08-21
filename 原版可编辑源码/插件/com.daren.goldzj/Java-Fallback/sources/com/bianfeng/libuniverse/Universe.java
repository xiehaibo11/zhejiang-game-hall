package com.bianfeng.libuniverse;

import android.content.Context;

public class Universe {
    private static Context sContext;
    private static Context sServiceContext;

    static {
    }

    public Universe() {
    }

    public static void setServiceContext(Context r0) {
        sServiceContext = r0;
    }

    public static Context getContext() {
        Context r0 = sContext;
        if (r0 == null) goto L5;
        return r0;
    L5:
        return sServiceContext;
    }

    public static void onCreate(Context r1) {
        sContext = r1;
        Helper.nativeSetContext(r1, r1.getAssets());
    }

    public static void onDestroy() {
        sContext = null;
    }
}
