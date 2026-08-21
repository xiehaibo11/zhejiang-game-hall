package com.cmic.gen.sdk.e;

public class l {
    public static byte[] a(android.content.Context r3, java.lang.String r4) {
            android.content.pm.PackageManager r0 = r3.getPackageManager()
            java.lang.String r1 = r3.getPackageName()
            boolean r1 = r1.equalsIgnoreCase(r4)
            r2 = 0
            if (r1 == 0) goto L2f
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2b
            r1 = 64
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r3, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2b
            java.lang.String r0 = r3.packageName
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L2f
            android.content.pm.Signature[] r3 = r3.signatures
            r4 = 0
            r3 = r3[r4]
            byte[] r3 = r3.toByteArray()
            return r3
        L2b:
            r3 = move-exception
            r3.printStackTrace()
        L2f:
            return r2
    }
}
