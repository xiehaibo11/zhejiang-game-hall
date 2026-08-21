package com.bianfeng.libuniverse;

public class Universe {
    private static android.content.Context sContext;
    private static android.content.Context sServiceContext;

    static {
            return
    }

    public Universe() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.Context getContext() {
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.sContext
            if (r0 != 0) goto L6
            android.content.Context r0 = com.bianfeng.libuniverse.Universe.sServiceContext
        L6:
            return r0
    }

    public static void onCreate(android.content.Context r1) {
            com.bianfeng.libuniverse.Universe.sContext = r1
            android.content.res.AssetManager r0 = r1.getAssets()
            com.bianfeng.libuniverse.Helper.nativeSetContext(r1, r0)
            return
    }

    public static void onDestroy() {
            r0 = 0
            com.bianfeng.libuniverse.Universe.sContext = r0
            return
    }

    public static void setServiceContext(android.content.Context r0) {
            com.bianfeng.libuniverse.Universe.sServiceContext = r0
            return
    }
}
