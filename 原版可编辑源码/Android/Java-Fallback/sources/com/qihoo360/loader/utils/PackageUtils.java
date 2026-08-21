package com.qihoo360.loader.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PackageUtils {
    public PackageUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.pm.PackageInfo getPackageArchiveInfo(android.content.pm.PackageManager r0, java.lang.String r1, int r2) {
            android.content.pm.PackageInfo r0 = r0.getPackageArchiveInfo(r1, r2)     // Catch: java.lang.Throwable -> L5
            goto Le
        L5:
            r0 = move-exception
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto Ld
            r0.printStackTrace()
        Ld:
            r0 = 0
        Le:
            return r0
    }
}
