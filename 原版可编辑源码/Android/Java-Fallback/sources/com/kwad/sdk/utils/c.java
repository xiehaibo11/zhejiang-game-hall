package com.kwad.sdk.utils;

public final class c {
    public static boolean bF(android.content.Context r2) {
            r0 = 0
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()     // Catch: java.lang.Throwable -> L17
            int r2 = r2.targetSdkVersion     // Catch: java.lang.Throwable -> L17
            r1 = 29
            if (r2 < r1) goto L17
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L17
            if (r2 < r1) goto L17
            boolean r2 = android.os.Environment.isExternalStorageLegacy()     // Catch: java.lang.Throwable -> L17
            if (r2 != 0) goto L17
            r2 = 1
            return r2
        L17:
            return r0
    }
}
