package com.loc;

public final class l {
    static java.lang.String a = null;
    static boolean b = false;
    private static java.lang.String c = "";
    private static java.lang.String d = "";
    private static java.lang.String e = "";
    private static java.lang.String f = "";


    static {
            return
    }

    public static java.lang.String a(android.content.Context r0) {
            java.lang.String r0 = h(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = com.loc.l.f
            return r0
    }

    static void a(android.content.Context r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            com.loc.l.f = r3
            if (r2 == 0) goto L17
            com.loc.cr r0 = com.loc.cr.a()
            com.loc.l$1 r1 = new com.loc.l$1
            r1.<init>(r2, r3)
            r0.b(r1)
        L17:
            return
    }

    public static void a(java.lang.String r0) {
            com.loc.l.d = r0
            return
    }

    static boolean a() {
            r0 = 1
            boolean r1 = com.loc.l.b     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L6
            return r0
        L6:
            java.lang.String r1 = com.loc.l.a     // Catch: java.lang.Throwable -> L38
            boolean r1 = b(r1)     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L11
            com.loc.l.b = r0     // Catch: java.lang.Throwable -> L38
            return r0
        L11:
            java.lang.String r1 = com.loc.l.a     // Catch: java.lang.Throwable -> L38
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L38
            r2 = 0
            r3 = 0
            if (r1 != 0) goto L20
            com.loc.l.b = r3     // Catch: java.lang.Throwable -> L38
            com.loc.l.a = r2     // Catch: java.lang.Throwable -> L38
            return r3
        L20:
            java.lang.String r1 = com.loc.l.d     // Catch: java.lang.Throwable -> L38
            boolean r1 = b(r1)     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L2b
            com.loc.l.b = r0     // Catch: java.lang.Throwable -> L38
            return r0
        L2b:
            java.lang.String r1 = com.loc.l.d     // Catch: java.lang.Throwable -> L38
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L38
            if (r1 != 0) goto L38
            com.loc.l.b = r3     // Catch: java.lang.Throwable -> L38
            com.loc.l.d = r2     // Catch: java.lang.Throwable -> L38
            return r3
        L38:
            return r0
    }

    public static java.lang.String b(android.content.Context r2) {
            java.lang.String r0 = ""
            java.lang.String r1 = com.loc.l.c     // Catch: java.lang.Throwable -> L23
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto Ld
            java.lang.String r2 = com.loc.l.c     // Catch: java.lang.Throwable -> L23
            return r2
        Ld:
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L23
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L23
            r1 = 0
            android.content.pm.ApplicationInfo r2 = r0.getApplicationInfo(r2, r1)     // Catch: java.lang.Throwable -> L23
            java.lang.CharSequence r2 = r0.getApplicationLabel(r2)     // Catch: java.lang.Throwable -> L23
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L23
            com.loc.l.c = r2     // Catch: java.lang.Throwable -> L23
            goto L2b
        L23:
            r2 = move-exception
            java.lang.String r0 = "AI"
            java.lang.String r1 = "gAN"
            com.loc.as.a(r2, r0, r1)
        L2b:
            java.lang.String r2 = com.loc.l.c
            return r2
    }

    private static boolean b(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L37
            r6.toCharArray()
            char[] r0 = r6.toCharArray()
            int r2 = r0.length
            r3 = 0
        L10:
            if (r3 >= r2) goto L35
            char r4 = r0[r3]
            r5 = 65
            if (r5 > r4) goto L1c
            r5 = 122(0x7a, float:1.71E-43)
            if (r4 <= r5) goto L32
        L1c:
            r5 = 48
            if (r5 > r4) goto L24
            r5 = 58
            if (r4 <= r5) goto L32
        L24:
            r5 = 46
            if (r4 == r5) goto L32
            com.loc.w r0 = com.loc.x.a()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "errorPackage"
            com.loc.av.b(r0, r6, r2)     // Catch: java.lang.Throwable -> L31
        L31:
            return r1
        L32:
            int r3 = r3 + 1
            goto L10
        L35:
            r6 = 1
            return r6
        L37:
            return r1
    }

    public static java.lang.String c(android.content.Context r2) {
            java.lang.String r0 = com.loc.l.d     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L11
            java.lang.String r0 = ""
            java.lang.String r1 = com.loc.l.d     // Catch: java.lang.Throwable -> L24
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L24
            if (r0 != 0) goto L11
            java.lang.String r2 = com.loc.l.d     // Catch: java.lang.Throwable -> L24
            return r2
        L11:
            java.lang.String r0 = r2.getPackageName()     // Catch: java.lang.Throwable -> L24
            com.loc.l.d = r0     // Catch: java.lang.Throwable -> L24
            boolean r0 = b(r0)     // Catch: java.lang.Throwable -> L24
            if (r0 != 0) goto L2c
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L24
            com.loc.l.d = r2     // Catch: java.lang.Throwable -> L24
            goto L2c
        L24:
            r2 = move-exception
            java.lang.String r0 = "AI"
            java.lang.String r1 = "gpck"
            com.loc.as.a(r2, r0, r1)
        L2c:
            java.lang.String r2 = com.loc.l.d
            return r2
    }

    public static java.lang.String d(android.content.Context r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = com.loc.l.e     // Catch: java.lang.Throwable -> L1f
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto Ld
            java.lang.String r3 = com.loc.l.e     // Catch: java.lang.Throwable -> L1f
            return r3
        Ld:
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Throwable -> L1f
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L1f
            r2 = 0
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r2)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Throwable -> L1f
            com.loc.l.e = r3     // Catch: java.lang.Throwable -> L1f
            goto L27
        L1f:
            r3 = move-exception
            java.lang.String r1 = "AI"
            java.lang.String r2 = "gAV"
            com.loc.as.a(r3, r1, r2)
        L27:
            java.lang.String r3 = com.loc.l.e
            if (r3 != 0) goto L2c
            return r0
        L2c:
            return r3
    }

    public static java.lang.String e(android.content.Context r7) {
            android.content.pm.PackageManager r0 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = r7.getPackageName()     // Catch: java.lang.Throwable -> L73
            r2 = 64
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Throwable -> L73
            android.content.pm.Signature[] r1 = r0.signatures     // Catch: java.lang.Throwable -> L73
            r2 = 0
            r1 = r1[r2]     // Catch: java.lang.Throwable -> L73
            byte[] r1 = r1.toByteArray()     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = "IU0hBMQ"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L73
            java.security.MessageDigest r3 = java.security.MessageDigest.getInstance(r3)     // Catch: java.lang.Throwable -> L73
            byte[] r1 = r3.digest(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.StringBuffer r3 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L73
            r3.<init>()     // Catch: java.lang.Throwable -> L73
        L2a:
            int r4 = r1.length     // Catch: java.lang.Throwable -> L73
            if (r2 >= r4) goto L52
            r4 = r1[r2]     // Catch: java.lang.Throwable -> L73
            r4 = r4 & 255(0xff, float:3.57E-43)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)     // Catch: java.lang.Throwable -> L73
            java.util.Locale r5 = java.util.Locale.US     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = r4.toUpperCase(r5)     // Catch: java.lang.Throwable -> L73
            int r5 = r4.length()     // Catch: java.lang.Throwable -> L73
            r6 = 1
            if (r5 != r6) goto L47
            java.lang.String r5 = "0"
            r3.append(r5)     // Catch: java.lang.Throwable -> L73
        L47:
            r3.append(r4)     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = ":"
            r3.append(r4)     // Catch: java.lang.Throwable -> L73
            int r2 = r2 + 1
            goto L2a
        L52:
            java.lang.String r1 = r0.packageName     // Catch: java.lang.Throwable -> L73
            boolean r2 = b(r1)     // Catch: java.lang.Throwable -> L73
            if (r2 == 0) goto L5c
            java.lang.String r1 = r0.packageName     // Catch: java.lang.Throwable -> L73
        L5c:
            java.lang.String r0 = com.loc.l.d     // Catch: java.lang.Throwable -> L73
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L73
            if (r0 == 0) goto L65
            goto L69
        L65:
            java.lang.String r1 = c(r7)     // Catch: java.lang.Throwable -> L73
        L69:
            r3.append(r1)     // Catch: java.lang.Throwable -> L73
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L73
            com.loc.l.a = r7     // Catch: java.lang.Throwable -> L73
            return r7
        L73:
            r7 = move-exception
            java.lang.String r0 = "AI"
            java.lang.String r1 = "gsp"
            com.loc.as.a(r7, r0, r1)
            java.lang.String r7 = com.loc.l.a
            return r7
    }

    public static java.lang.String f(android.content.Context r2) {
            com.loc.m.a(r2)     // Catch: java.lang.Throwable -> L3
        L3:
            java.lang.String r2 = h(r2)     // Catch: java.lang.Throwable -> L8
            return r2
        L8:
            r2 = move-exception
            java.lang.String r0 = "AI"
            java.lang.String r1 = "gKy"
            com.loc.as.a(r2, r0, r1)
            java.lang.String r2 = com.loc.l.f
            return r2
    }

    private static java.lang.String g(android.content.Context r6) {
            java.lang.String r0 = "k.store"
            java.lang.String r6 = com.loc.at.c(r6, r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r6 = r0.exists()
            java.lang.String r1 = ""
            if (r6 != 0) goto L14
            return r1
        L14:
            r6 = 0
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L3b
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L3b
            int r6 = r2.available()     // Catch: java.lang.Throwable -> L39
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L39
            r2.read(r6)     // Catch: java.lang.Throwable -> L39
            java.lang.String r6 = com.loc.x.a(r6)     // Catch: java.lang.Throwable -> L39
            int r0 = r6.length()     // Catch: java.lang.Throwable -> L39
            r3 = 32
            if (r0 != r3) goto L30
            r1 = r6
        L30:
            r2.close()     // Catch: java.lang.Throwable -> L34
            goto L38
        L34:
            r6 = move-exception
            r6.printStackTrace()
        L38:
            return r1
        L39:
            r6 = move-exception
            goto L3f
        L3b:
            r2 = move-exception
            r5 = r2
            r2 = r6
            r6 = r5
        L3f:
            java.lang.String r3 = "AI"
            java.lang.String r4 = "gKe"
            com.loc.as.a(r6, r3, r4)     // Catch: java.lang.Throwable -> L5f
            boolean r6 = r0.exists()     // Catch: java.lang.Throwable -> L50
            if (r6 == 0) goto L54
            r0.delete()     // Catch: java.lang.Throwable -> L50
            goto L54
        L50:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L5f
        L54:
            if (r2 == 0) goto L5e
            r2.close()     // Catch: java.lang.Throwable -> L5a
            goto L5e
        L5a:
            r6 = move-exception
            r6.printStackTrace()
        L5e:
            return r1
        L5f:
            r6 = move-exception
            if (r2 == 0) goto L6a
            r2.close()     // Catch: java.lang.Throwable -> L66
            goto L6a
        L66:
            r0 = move-exception
            r0.printStackTrace()
        L6a:
            throw r6
    }

    private static java.lang.String h(android.content.Context r3) throws android.content.pm.PackageManager.NameNotFoundException {
            java.lang.String r0 = com.loc.l.f
            if (r0 == 0) goto Lc
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L33
        Lc:
            android.content.pm.PackageManager r0 = r3.getPackageManager()
            java.lang.String r1 = r3.getPackageName()
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)
            if (r0 == 0) goto L36
            android.os.Bundle r1 = r0.metaData
            if (r1 != 0) goto L21
            goto L36
        L21:
            android.os.Bundle r0 = r0.metaData
            java.lang.String r1 = "com.amap.api.v2.apikey"
            java.lang.String r0 = r0.getString(r1)
            com.loc.l.f = r0
            if (r0 != 0) goto L33
            java.lang.String r3 = g(r3)
            com.loc.l.f = r3
        L33:
            java.lang.String r3 = com.loc.l.f
            return r3
        L36:
            java.lang.String r3 = com.loc.l.f
            return r3
    }
}
