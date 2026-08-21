package com.igexin.push.extension.distribution.basic.g;

public class b {
    public static boolean a() {
            java.lang.String r0 = "com.igexin.push.util.EncryptUtils"
            java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static boolean a(android.content.Intent r1, android.content.Context r2) {
            r0 = 0
            if (r1 == 0) goto L15
            if (r2 != 0) goto L6
            goto L15
        L6:
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L15
            java.util.List r1 = r2.queryIntentActivities(r1, r0)     // Catch: java.lang.Throwable -> L15
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L15
            if (r1 <= 0) goto L15
            r0 = 1
        L15:
            return r0
    }

    public static boolean a(java.lang.String r2) {
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> Lc
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Lc
            r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Lc
            r2 = 1
            return r2
        Lc:
            return r0
    }

    public static boolean b() {
            java.lang.String r0 = com.igexin.push.extension.distribution.basic.c.e.f
            boolean r0 = b(r0)
            return r0
    }

    private static boolean b(java.lang.String r10) {
            java.lang.String r0 = "~"
            java.lang.String r1 = "|"
            boolean r2 = android.text.TextUtils.isEmpty(r10)
            r3 = 0
            if (r2 == 0) goto Lc
            return r3
        Lc:
            java.lang.String r2 = ","
            java.lang.String[] r10 = r10.split(r2)     // Catch: java.lang.Throwable -> L60
            int r2 = r10.length     // Catch: java.lang.Throwable -> L60
            r4 = r3
        L14:
            if (r4 >= r2) goto L60
            r5 = r10[r4]     // Catch: java.lang.Throwable -> L60
            boolean r6 = r5.contains(r1)     // Catch: java.lang.Throwable -> L60
            if (r6 == 0) goto L5d
            boolean r6 = r5.contains(r0)     // Catch: java.lang.Throwable -> L60
            if (r6 != 0) goto L25
            goto L5d
        L25:
            int r6 = r5.indexOf(r1)     // Catch: java.lang.Throwable -> L60
            java.lang.String r6 = r5.substring(r3, r6)     // Catch: java.lang.Throwable -> L60
            int r7 = r5.indexOf(r1)     // Catch: java.lang.Throwable -> L60
            r8 = 1
            int r7 = r7 + r8
            java.lang.String r5 = r5.substring(r7)     // Catch: java.lang.Throwable -> L60
            java.lang.String[] r5 = r5.split(r0)     // Catch: java.lang.Throwable -> L60
            int r7 = r5.length     // Catch: java.lang.Throwable -> L60
            r9 = 2
            if (r7 == r9) goto L40
            goto L5d
        L40:
            r7 = r5[r3]     // Catch: java.lang.Throwable -> L60
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> L60
            r5 = r5[r8]     // Catch: java.lang.Throwable -> L60
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> L60
            java.lang.String r9 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L60
            boolean r6 = r9.equalsIgnoreCase(r6)     // Catch: java.lang.Throwable -> L60
            if (r6 == 0) goto L5d
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L60
            if (r6 < r7) goto L5d
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L60
            if (r6 > r5) goto L5d
            return r8
        L5d:
            int r4 = r4 + 1
            goto L14
        L60:
            return r3
    }
}
