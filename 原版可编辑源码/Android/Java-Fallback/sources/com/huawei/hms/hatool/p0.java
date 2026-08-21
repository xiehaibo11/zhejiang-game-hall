package com.huawei.hms.hatool;

public class p0 {
    public static boolean a(android.content.Context r4) {
            java.lang.String r0 = "Privacy_MY"
            java.lang.String r1 = "flashKeyTime"
            r2 = -1
            long r0 = com.huawei.hms.hatool.g0.a(r4, r0, r1, r2)
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            r0 = 43200000(0x2932e00, double:2.1343636E-316)
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 <= 0) goto L18
            r4 = 1
            goto L19
        L18:
            r4 = 0
        L19:
            return r4
    }

    public static boolean a(android.content.Context r5, java.lang.String r6) {
            r0 = 1
            if (r5 != 0) goto L4
            return r0
        L4:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            java.lang.String r3 = "not have read phone permission!"
            java.lang.String r4 = "hmsSdk"
            if (r1 >= r2) goto L20
            android.content.pm.PackageManager r1 = r5.getPackageManager()
            java.lang.String r5 = r5.getPackageName()
            int r5 = r1.checkPermission(r6, r5)
            if (r5 == 0) goto L2a
            com.huawei.hms.hatool.y.f(r4, r3)
            return r0
        L20:
            int r5 = r5.checkSelfPermission(r6)
            if (r5 == 0) goto L2a
            com.huawei.hms.hatool.y.f(r4, r3)
            return r0
        L2a:
            r5 = 0
            return r5
    }

    public static boolean a(android.content.Context r3, java.lang.String r4, int r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = com.huawei.hms.hatool.g0.c(r3, r4)
            r0.append(r4)
            java.lang.String r4 = ".xml"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.io.File r0 = new java.io.File
            java.io.File r3 = r3.getFilesDir()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "../shared_prefs/"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r3, r4)
            long r3 = r0.length()
            long r0 = (long) r5
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r1 = 0
            if (r0 <= 0) goto L55
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0[r1] = r3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
            r4 = 1
            r0[r4] = r3
            java.lang.String r3 = "reach local file limited size - file len: %d limitedSize: %d"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            java.lang.String r5 = "hmsSdk"
            com.huawei.hms.hatool.y.c(r5, r3)
            return r4
        L55:
            return r1
    }

    public static boolean a(java.lang.String r4, long r5, long r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            long r2 = java.lang.Long.parseLong(r4)     // Catch: java.lang.NumberFormatException -> L14
            long r5 = r5 - r2
            int r4 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r4 <= 0) goto L12
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
        L14:
            java.lang.String r4 = "hmsSdk"
            java.lang.String r5 = "isTimeExpired(): Data type conversion error : number format !"
            com.huawei.hms.hatool.y.f(r4, r5)
            return r1
    }
}
