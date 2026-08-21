package com.tkay.china.common.c;

public final class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r2, java.io.File r3) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L1b
            if (r3 != 0) goto L7
            goto L1b
        L7:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> L17
            r1 = 1
            android.content.pm.PackageInfo r2 = r2.getPackageArchiveInfo(r3, r1)     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Throwable -> L17
            return r2
        L17:
            r2 = move-exception
            r2.printStackTrace()
        L1b:
            return r0
    }

    public static boolean a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L15
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto La
            goto L15
        La:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L15
            r1 = 8192(0x2000, float:1.148E-41)
            r2.getApplicationInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L15
            r2 = 1
            return r2
        L15:
            return r0
    }

    private static void b(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()     // Catch: java.lang.Throwable -> L13
            android.content.Intent r2 = r0.getLaunchIntentForPackage(r2)     // Catch: java.lang.Throwable -> L13
            if (r2 == 0) goto L12
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r0)     // Catch: java.lang.Throwable -> L13
            r1.startActivity(r2)     // Catch: java.lang.Throwable -> L13
        L12:
            return
        L13:
            r1 = move-exception
            r1.printStackTrace()
            return
    }

    private static boolean b(android.content.Context r2, java.io.File r3) {
            r0 = 0
            if (r2 == 0) goto L15
            if (r3 != 0) goto L6
            goto L15
        L6:
            java.lang.String r3 = a(r2, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L15
            boolean r2 = a(r2, r3)
            return r2
        L15:
            return r0
    }
}
