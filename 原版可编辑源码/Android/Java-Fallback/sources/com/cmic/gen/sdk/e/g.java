package com.cmic.gen.sdk.e;

public class g {
    public static boolean a(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r0 = r1.getPackageManager()
            java.lang.String r1 = r1.getPackageName()
            int r1 = r0.checkPermission(r2, r1)
            if (r1 != 0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }
}
