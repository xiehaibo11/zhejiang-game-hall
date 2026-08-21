package com.mbridge.msdk.mbdownload;

import android.content.Context;

public final class a {
    private static boolean a;

    public static String a(Context context) {
        return context.getApplicationInfo().sourceDir;
    }

    static {
        try {
            System.loadLibrary("bspatch");
            a = true;
        } catch (UnsatisfiedLinkError unused) {
            a = false;
        }
    }
}
