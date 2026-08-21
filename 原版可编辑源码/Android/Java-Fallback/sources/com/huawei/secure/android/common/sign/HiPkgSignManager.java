package com.huawei.secure.android.common.sign;

public class HiPkgSignManager {
    private static final java.lang.String a = "HiPkgSignManager";

    public HiPkgSignManager() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(byte[] r5) {
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            int r0 = r5.length
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            r2 = 0
        Lb:
            if (r2 >= r0) goto L40
            r3 = r5[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = 16
            if (r3 >= r4) goto L32
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "0"
            r3.append(r4)
            r4 = r5[r2]
            r4 = r4 & 255(0xff, float:3.57E-43)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.append(r3)
            goto L3d
        L32:
            r3 = r5[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            r1.append(r3)
        L3d:
            int r2 = r2 + 1
            goto Lb
        L40:
            java.lang.String r5 = r1.toString()
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r5 = r5.toUpperCase(r0)
            return r5
    }

    private static java.lang.String b(byte[] r2) {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> Lf
            byte[] r2 = r0.digest(r2)     // Catch: java.security.NoSuchAlgorithmException -> Lf
            java.lang.String r2 = a(r2)     // Catch: java.security.NoSuchAlgorithmException -> Lf
            goto L2c
        Lf:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NoSuchAlgorithmException"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "HiPkgSignManager"
            android.util.Log.e(r0, r2)
            java.lang.String r2 = ""
        L2c:
            return r2
    }

    public static boolean doCheckArchiveApk(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L2b
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2b
            if (r2 == 0) goto L2b
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L16
            goto L2b
        L16:
            java.lang.String r0 = getUnInstalledAppHash(r2, r4)
            java.lang.String r2 = getUnInstalledAPPPackageName(r2, r4)
            boolean r3 = r3.equalsIgnoreCase(r0)
            if (r3 == 0) goto L2b
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L2b
            r1 = 1
        L2b:
            return r1
    }

    public static boolean doCheckInstalled(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            if (r1 != 0) goto Lf
            goto L18
        Lf:
            java.lang.String r1 = getInstalledAppHash(r1, r3)
            boolean r1 = r2.equals(r1)
            return r1
        L18:
            r1 = 0
            return r1
    }

    public static byte[] getInstalledAPPSignature(android.content.Context r4, java.lang.String r5) {
            r0 = 0
            java.lang.String r1 = "HiPkgSignManager"
            if (r4 == 0) goto L5a
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto Lc
            goto L5a
        Lc:
            r2 = 1
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L24 android.content.pm.PackageManager.NameNotFoundException -> L3e
            if (r4 == 0) goto L57
            r3 = 64
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r5, r3)     // Catch: java.lang.Exception -> L24 android.content.pm.PackageManager.NameNotFoundException -> L3e
            if (r4 == 0) goto L57
            android.content.pm.Signature[] r4 = r4.signatures     // Catch: java.lang.Exception -> L24 android.content.pm.PackageManager.NameNotFoundException -> L3e
            r4 = r4[r0]     // Catch: java.lang.Exception -> L24 android.content.pm.PackageManager.NameNotFoundException -> L3e
            byte[] r4 = r4.toByteArray()     // Catch: java.lang.Exception -> L24 android.content.pm.PackageManager.NameNotFoundException -> L3e
            return r4
        L24:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r3 = "Exception : "
            r5.append(r3)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r4, r2)
            goto L57
        L3e:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r3 = "PackageManager.NameNotFoundException : "
            r5.append(r3)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r4, r2)
        L57:
            byte[] r4 = new byte[r0]
            return r4
        L5a:
            java.lang.String r4 = "packageName is null or context is null"
            android.util.Log.e(r1, r4)
            byte[] r4 = new byte[r0]
            return r4
    }

    public static java.lang.String getInstalledAppHash(android.content.Context r0, java.lang.String r1) {
            byte[] r0 = getInstalledAPPSignature(r0, r1)
            if (r0 == 0) goto Le
            int r1 = r0.length
            if (r1 <= 0) goto Le
            java.lang.String r0 = b(r0)
            goto L10
        Le:
            java.lang.String r0 = ""
        L10:
            return r0
    }

    public static java.lang.String getUnInstalledAPPPackageName(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = ""
            java.lang.String r1 = "HiPkgSignManager"
            if (r3 == 0) goto L38
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto Ld
            goto L38
        Ld:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L1e
            if (r3 == 0) goto L37
            r2 = 64
            android.content.pm.PackageInfo r3 = r3.getPackageArchiveInfo(r4, r2)     // Catch: java.lang.Exception -> L1e
            if (r3 == 0) goto L37
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L1e
            return r3
        L1e:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "getUnInstalledAPPSignature exception : "
            r4.append(r2)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.e(r1, r3)
        L37:
            return r0
        L38:
            java.lang.String r3 = "archiveFilePath is null or context is null"
            android.util.Log.e(r1, r3)
            return r0
    }

    public static byte[] getUnInstalledAPPSignature(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "HiPkgSignManager"
            if (r3 == 0) goto L46
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto Lc
            goto L46
        Lc:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L29
            if (r3 == 0) goto L43
            r2 = 64
            android.content.pm.PackageInfo r3 = r3.getPackageArchiveInfo(r4, r2)     // Catch: java.lang.Exception -> L29
            if (r3 == 0) goto L23
            android.content.pm.Signature[] r3 = r3.signatures     // Catch: java.lang.Exception -> L29
            r3 = r3[r0]     // Catch: java.lang.Exception -> L29
            byte[] r3 = r3.toByteArray()     // Catch: java.lang.Exception -> L29
            return r3
        L23:
            java.lang.String r3 = "PackageInfo is null "
            android.util.Log.e(r1, r3)     // Catch: java.lang.Exception -> L29
            goto L43
        L29:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "Exception : "
            r4.append(r2)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r4 = 1
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r3, r4)
        L43:
            byte[] r3 = new byte[r0]
            return r3
        L46:
            java.lang.String r3 = "archiveFilePath is null or context is null"
            android.util.Log.e(r1, r3)
            byte[] r3 = new byte[r0]
            return r3
    }

    public static java.lang.String getUnInstalledAppHash(android.content.Context r0, java.lang.String r1) {
            byte[] r0 = getUnInstalledAPPSignature(r0, r1)
            if (r0 == 0) goto Le
            int r1 = r0.length
            if (r1 <= 0) goto Le
            java.lang.String r0 = b(r0)
            goto L10
        Le:
            java.lang.String r0 = ""
        L10:
            return r0
    }
}
