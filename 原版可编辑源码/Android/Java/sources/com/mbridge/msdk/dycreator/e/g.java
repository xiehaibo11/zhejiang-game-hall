package com.mbridge.msdk.dycreator.e;

import android.util.Log;

public final class g {
    public static boolean a;

    public static void a(String str) {
        if (a) {
            new SecurityManager();
            Log.e(new Throwable().getStackTrace()[1].getFileName(), str);
        }
    }
}
