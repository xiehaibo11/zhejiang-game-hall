package com.bianfeng.libuniverse;

import android.content.Context;

public class Universe {
    private static Context sContext;
    private static Context sServiceContext;

    public static void setServiceContext(Context context) {
        sServiceContext = context;
    }

    public static Context getContext() {
        Context context = sContext;
        return context == null ? sServiceContext : context;
    }

    public static void onCreate(Context context) {
        sContext = context;
        Helper.nativeSetContext(context, context.getAssets());
    }

    public static void onDestroy() {
        sContext = null;
    }
}
