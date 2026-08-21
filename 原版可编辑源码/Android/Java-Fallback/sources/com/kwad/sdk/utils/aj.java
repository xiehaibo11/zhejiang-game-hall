package com.kwad.sdk.utils;

public final class aj {
    public static boolean co(android.content.Context r0) {
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L9
            boolean r0 = r0.canRequestPackageInstalls()     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 0
            return r0
    }

    public static java.lang.String[] cp(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L13
            r1 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Throwable -> L13
            if (r2 == 0) goto L17
            java.lang.String[] r2 = r2.requestedPermissions     // Catch: java.lang.Throwable -> L13
            return r2
        L13:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L17:
            r2 = 0
            return r2
    }
}
