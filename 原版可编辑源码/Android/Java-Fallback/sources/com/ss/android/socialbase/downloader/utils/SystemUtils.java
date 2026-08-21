package com.ss.android.socialbase.downloader.utils;

public class SystemUtils {
    public SystemUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean checkServiceExists(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            r0 = 0
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Throwable -> L2b
            r1 = 4
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r5, r1)     // Catch: java.lang.Throwable -> L2b
            android.content.pm.ServiceInfo[] r4 = r4.services     // Catch: java.lang.Throwable -> L2b
            int r5 = r4.length     // Catch: java.lang.Throwable -> L2b
            r1 = r0
        Le:
            if (r1 >= r5) goto L2f
            r2 = r4[r1]     // Catch: java.lang.Throwable -> L2b
            boolean r3 = r2.exported     // Catch: java.lang.Throwable -> L2b
            if (r3 == 0) goto L28
            boolean r3 = r2.enabled     // Catch: java.lang.Throwable -> L2b
            if (r3 == 0) goto L28
            java.lang.String r3 = r2.permission     // Catch: java.lang.Throwable -> L2b
            if (r3 != 0) goto L28
            java.lang.String r2 = r2.name     // Catch: java.lang.Throwable -> L2b
            boolean r2 = r2.equals(r6)     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L28
            r4 = 1
            return r4
        L28:
            int r1 = r1 + 1
            goto Le
        L2b:
            r4 = move-exception
            r4.printStackTrace()
        L2f:
            return r0
    }
}
