package com.kwad.sdk.utils;

import android.content.Context;
import android.content.pm.PackageInfo;

public final class aj {
    public static boolean co(Context context) {
        try {
            return context.getPackageManager().canRequestPackageInstalls();
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return false;
        }
    }

    public static String[] cp(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 4096);
            if (packageInfo != null) {
                return packageInfo.requestedPermissions;
            }
            return null;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return null;
        }
    }
}
