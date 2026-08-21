package com.kwad.sdk.utils;

import android.content.Context;
import android.os.Build;
import android.os.Environment;

public final class c {
    public static boolean bF(Context context) {
        try {
            if (context.getApplicationInfo().targetSdkVersion >= 29 && Build.VERSION.SDK_INT >= 29) {
                if (!Environment.isExternalStorageLegacy()) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }
}
