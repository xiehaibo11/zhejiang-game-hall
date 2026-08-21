package com.tencent.open.utils;

public class k {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tencent.a.a.a> a;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.tencent.open.utils.k.a = r0
            return
    }

    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r8, java.lang.String r9) {
            r0 = 0
            if (r8 != 0) goto L6
            if (r9 != 0) goto L6
            return r0
        L6:
            r1 = 1
            if (r8 == 0) goto Lc
            if (r9 != 0) goto Lc
            return r1
        Lc:
            r2 = -1
            if (r8 != 0) goto L12
            if (r9 == 0) goto L12
            return r2
        L12:
            java.lang.String r3 = "\\."
            java.lang.String[] r4 = r8.split(r3)
            java.lang.String[] r3 = r9.split(r3)
            r5 = 0
        L1d:
            int r6 = r4.length     // Catch: java.lang.NumberFormatException -> L41
            if (r5 >= r6) goto L38
            int r6 = r3.length     // Catch: java.lang.NumberFormatException -> L41
            if (r5 >= r6) goto L38
            r6 = r4[r5]     // Catch: java.lang.NumberFormatException -> L41
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.NumberFormatException -> L41
            r7 = r3[r5]     // Catch: java.lang.NumberFormatException -> L41
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.NumberFormatException -> L41
            if (r6 >= r7) goto L32
            return r2
        L32:
            if (r6 <= r7) goto L35
            return r1
        L35:
            int r5 = r5 + 1
            goto L1d
        L38:
            int r4 = r4.length     // Catch: java.lang.NumberFormatException -> L41
            if (r4 <= r5) goto L3c
            return r1
        L3c:
            int r8 = r3.length     // Catch: java.lang.NumberFormatException -> L41
            if (r8 <= r5) goto L40
            return r2
        L40:
            return r0
        L41:
            int r8 = r8.compareTo(r9)
            return r8
    }

    private static long a(java.io.InputStream r7, java.io.OutputStream r8) throws java.io.IOException {
            r0 = 8192(0x2000, float:1.148E-41)
            byte[] r1 = new byte[r0]
            r2 = 0
        L6:
            r4 = 0
            int r5 = r7.read(r1, r4, r0)
            r6 = -1
            if (r5 == r6) goto L14
            r8.write(r1, r4, r5)
            long r4 = (long) r5
            long r2 = r2 + r4
            goto L6
        L14:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "-->copy, copyed size is: "
            r7.append(r8)
            r7.append(r2)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "openSDK_LOG.SystemUtils"
            com.tencent.open.log.SLog.i(r8, r7)
            return r2
    }

    public static java.lang.String a(int r1) {
            r0 = 10103(0x2777, float:1.4157E-41)
            if (r1 != r0) goto L7
            java.lang.String r1 = "shareToQQ"
            return r1
        L7:
            r0 = 10104(0x2778, float:1.4159E-41)
            if (r1 != r0) goto Le
            java.lang.String r1 = "shareToQzone"
            return r1
        Le:
            r0 = 10105(0x2779, float:1.416E-41)
            if (r1 != r0) goto L15
            java.lang.String r1 = "addToQQFavorites"
            return r1
        L15:
            r0 = 10106(0x277a, float:1.4162E-41)
            if (r1 != r0) goto L1c
            java.lang.String r1 = "sendToMyComputer"
            return r1
        L1c:
            r0 = 10107(0x277b, float:1.4163E-41)
            if (r1 != r0) goto L23
            java.lang.String r1 = "shareToTroopBar"
            return r1
        L23:
            r0 = 11101(0x2b5d, float:1.5556E-41)
            if (r1 != r0) goto L2a
            java.lang.String r1 = "action_login"
            return r1
        L2a:
            r0 = 10100(0x2774, float:1.4153E-41)
            if (r1 != r0) goto L31
            java.lang.String r1 = "action_request"
            return r1
        L31:
            r0 = 10114(0x2782, float:1.4173E-41)
            if (r1 == r0) goto L37
            r1 = 0
            return r1
        L37:
            java.lang.String r1 = "action_common_channel"
            return r1
    }

    public static java.lang.String a(android.app.Activity r4) {
            java.lang.String r0 = "openSDK_LOG.SystemUtils"
            android.content.Context r1 = r4.getApplicationContext()
            java.lang.String r1 = r1.getPackageName()
            android.content.pm.PackageManager r4 = r4.getPackageManager()
            r2 = 128(0x80, float:1.8E-43)
            r3 = 0
            android.content.pm.ApplicationInfo r4 = r4.getApplicationInfo(r1, r2)     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            r1.<init>()     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r2 = "apkPath="
            r1.append(r2)     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r2 = r4.sourceDir     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            r1.append(r2)     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            com.tencent.open.log.SLog.i(r0, r1)     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            java.lang.String r4 = r4.sourceDir     // Catch: java.lang.Exception -> L2e android.content.pm.PackageManager.NameNotFoundException -> L35
            return r4
        L2e:
            r4 = move-exception
            java.lang.String r1 = "Exception"
            com.tencent.open.log.SLog.e(r0, r1, r4)
            return r3
        L35:
            r4 = move-exception
            java.lang.String r1 = "NameNotFoundException"
            com.tencent.open.log.SLog.e(r0, r1, r4)
            return r3
    }

    public static java.lang.String a(android.app.Activity r7, java.lang.String r8) {
            java.lang.String r0 = ""
            java.lang.String r1 = "openSDK_LOG.SystemUtils"
            if (r7 != 0) goto Lc
            java.lang.String r7 = "getEncryptPkgName activity==null !!!!!!"
            com.tencent.open.log.SLog.e(r1, r7)
            return r0
        Lc:
            byte[] r8 = com.tencent.open.utils.e.a(r8)     // Catch: java.lang.Exception -> L35
            if (r8 != 0) goto L18
            java.lang.String r7 = "getEncryptPkgName shaBytes==null !!!!!!"
            com.tencent.open.log.SLog.e(r1, r7)     // Catch: java.lang.Exception -> L35
            return r0
        L18:
            r2 = 8
            byte[] r3 = new byte[r2]     // Catch: java.lang.Exception -> L35
            r4 = 5
            r5 = 0
            java.lang.System.arraycopy(r8, r4, r3, r5, r2)     // Catch: java.lang.Exception -> L35
            r4 = 16
            byte[] r6 = new byte[r4]     // Catch: java.lang.Exception -> L35
            java.lang.System.arraycopy(r8, r2, r6, r5, r4)     // Catch: java.lang.Exception -> L35
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Exception -> L35
            java.lang.String r8 = com.tencent.open.utils.e.a(r6)     // Catch: java.lang.Exception -> L35
            java.lang.String r7 = com.tencent.open.utils.e.a(r7, r8, r3)     // Catch: java.lang.Exception -> L35
            return r7
        L35:
            r7 = move-exception
            java.lang.String r8 = "getEncryptPkgName"
            com.tencent.open.log.SLog.e(r1, r8, r7)
            return r0
    }

    public static java.lang.String a(android.content.Context r4) {
            android.content.pm.ApplicationInfo r0 = r4.getApplicationInfo()
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Throwable -> L11
            java.lang.CharSequence r1 = r0.loadLabel(r1)     // Catch: java.lang.Throwable -> L11
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L11
            return r4
        L11:
            r1 = move-exception
            java.lang.String r2 = "openSDK_LOG.SystemUtils"
            java.lang.String r3 = "getAppName exception"
            com.tencent.open.log.SLog.e(r2, r3, r1)
            int r1 = r0.labelRes     // Catch: java.lang.Throwable -> L29
            if (r1 > 0) goto L24
            java.lang.CharSequence r4 = r0.nonLocalizedLabel     // Catch: java.lang.Throwable -> L29
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L29
            goto L28
        L24:
            java.lang.String r4 = r4.getString(r1)     // Catch: java.lang.Throwable -> L29
        L28:
            return r4
        L29:
            r4 = move-exception
            java.lang.String r0 = "getAppName getLabel exception"
            com.tencent.open.log.SLog.e(r2, r0, r4)
            java.lang.String r4 = ""
            return r4
    }

    public static java.lang.String a(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = c()
            java.lang.String r0 = com.tencent.open.utils.h.a(r2, r0, r3)
            if (r0 == 0) goto L14
            java.lang.String r1 = "UNKNOWN"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L13
            goto L14
        L13:
            return r0
        L14:
            android.content.pm.PackageInfo r2 = e(r2, r3)
            if (r2 != 0) goto L32
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "getAppVersionName return null. package= "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "openSDK_LOG.SystemUtils"
            com.tencent.open.log.SLog.e(r3, r2)
            r2 = 0
            return r2
        L32:
            java.lang.String r2 = r2.versionName
            return r2
    }

    public static void a() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tencent.a.a.a> r0 = com.tencent.open.utils.k.a
            r0.clear()
            return
    }

    public static void a(java.lang.String r1) {
            if (r1 != 0) goto L3
            return
        L3:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tencent.a.a.a> r0 = com.tencent.open.utils.k.a
            r0.remove(r1)
            return
    }

    public static boolean a(android.content.Context r5, android.content.Intent r6) {
            java.lang.String r0 = "openSDK_LOG.SystemUtils"
            r1 = 1
            r2 = 0
            if (r5 == 0) goto L47
            if (r6 != 0) goto L9
            goto L47
        L9:
            android.content.pm.PackageManager r5 = r5.getPackageManager()
            java.util.List r5 = r5.queryIntentActivities(r6, r2)
            if (r5 == 0) goto L1a
            int r3 = r5.size()
            if (r3 <= 0) goto L1a
            goto L1b
        L1a:
            r1 = 0
        L1b:
            if (r1 != 0) goto L46
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isActivityExist false. result="
            r2.append(r3)
            if (r5 != 0) goto L2c
            java.lang.String r5 = "null"
            goto L34
        L2c:
            int r5 = r5.size()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
        L34:
            r2.append(r5)
            java.lang.String r5 = " Intent= "
            r2.append(r5)
            r2.append(r6)
            java.lang.String r5 = r2.toString()
            com.tencent.open.log.SLog.e(r0, r5)
        L46:
            return r1
        L47:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "isActivityExist params error! ["
            r3.append(r4)
            if (r5 != 0) goto L55
            r5 = 1
            goto L56
        L55:
            r5 = 0
        L56:
            r3.append(r5)
            java.lang.String r5 = ","
            r3.append(r5)
            if (r6 != 0) goto L61
            goto L62
        L61:
            r1 = 0
        L62:
            r3.append(r1)
            java.lang.String r5 = "]"
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            com.tencent.open.log.SLog.e(r0, r5)
            return r2
    }

    public static boolean a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "openSDK_LOG.SystemUtils"
            java.lang.String r1 = "OpenUi, validateAppSignatureForPackage"
            com.tencent.open.log.SLog.v(r0, r1)
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2d
            r1 = 64
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r4, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2d
            android.content.pm.Signature[] r3 = r3.signatures
            int r4 = r3.length
            r1 = 0
        L16:
            if (r1 >= r4) goto L2d
            r2 = r3[r1]
            java.lang.String r2 = r2.toCharsString()
            java.lang.String r2 = com.tencent.open.utils.m.g(r2)
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L2a
            r3 = 1
            return r3
        L2a:
            int r1 = r1 + 1
            goto L16
        L2d:
            return r0
    }

    public static boolean a(java.lang.String r10, java.lang.String r11, int r12) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->extractSecureLib, libName: "
            r0.append(r1)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SystemUtils"
            com.tencent.open.log.SLog.i(r1, r0)
            android.content.Context r0 = com.tencent.open.utils.g.a()
            r2 = 0
            if (r0 != 0) goto L23
            java.lang.String r10 = "-->extractSecureLib, global context is null. "
            com.tencent.open.log.SLog.i(r1, r10)
            return r2
        L23:
            java.lang.String r3 = "secure_lib"
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r2)
            java.io.File r4 = new java.io.File
            java.io.File r5 = r0.getFilesDir()
            r4.<init>(r5, r11)
            boolean r5 = r4.exists()
            r6 = 1
            java.lang.String r7 = "version"
            if (r5 != 0) goto L50
            java.io.File r5 = r4.getParentFile()
            if (r5 == 0) goto L73
            boolean r5 = r5.mkdirs()
            if (r5 == 0) goto L73
            r4.createNewFile()     // Catch: java.io.IOException -> L4b
            goto L73
        L4b:
            r4 = move-exception
            r4.printStackTrace()
            goto L73
        L50:
            int r4 = r3.getInt(r7, r2)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r8 = "-->extractSecureLib, libVersion: "
            r5.append(r8)
            r5.append(r12)
            java.lang.String r8 = " | oldVersion: "
            r5.append(r8)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.tencent.open.log.SLog.i(r1, r5)
            if (r12 != r4) goto L73
            return r6
        L73:
            r4 = 0
            android.content.res.AssetManager r5 = r0.getAssets()     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> La7
            java.io.InputStream r10 = r5.open(r10)     // Catch: java.lang.Throwable -> La4 java.lang.Exception -> La7
            java.io.FileOutputStream r4 = r0.openFileOutput(r11, r2)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            a(r10, r4)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            android.content.SharedPreferences$Editor r11 = r3.edit()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.putInt(r7, r12)     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            r11.commit()     // Catch: java.lang.Throwable -> L9a java.lang.Exception -> L9f
            if (r10 == 0) goto L94
            r10.close()     // Catch: java.io.IOException -> L93
            goto L94
        L93:
        L94:
            if (r4 == 0) goto L99
            r4.close()     // Catch: java.io.IOException -> L99
        L99:
            return r6
        L9a:
            r11 = move-exception
            r9 = r4
            r4 = r10
            r10 = r9
            goto Lbc
        L9f:
            r11 = move-exception
            r9 = r4
            r4 = r10
            r10 = r9
            goto La9
        La4:
            r11 = move-exception
            r10 = r4
            goto Lbc
        La7:
            r11 = move-exception
            r10 = r4
        La9:
            java.lang.String r12 = "-->extractSecureLib, when copy lib execption."
            com.tencent.open.log.SLog.e(r1, r12, r11)     // Catch: java.lang.Throwable -> Lbb
            if (r4 == 0) goto Lb5
            r4.close()     // Catch: java.io.IOException -> Lb4
            goto Lb5
        Lb4:
        Lb5:
            if (r10 == 0) goto Lba
            r10.close()     // Catch: java.io.IOException -> Lba
        Lba:
            return r2
        Lbb:
            r11 = move-exception
        Lbc:
            if (r4 == 0) goto Lc3
            r4.close()     // Catch: java.io.IOException -> Lc2
            goto Lc3
        Lc2:
        Lc3:
            if (r10 == 0) goto Lc8
            r10.close()     // Catch: java.io.IOException -> Lc8
        Lc8:
            throw r11
    }

    public static int b(java.lang.String r1) {
            java.lang.String r0 = "shareToQQ"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lb
            r1 = 10103(0x2777, float:1.4157E-41)
            return r1
        Lb:
            java.lang.String r0 = "shareToQzone"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L16
            r1 = 10104(0x2778, float:1.4159E-41)
            return r1
        L16:
            java.lang.String r0 = "addToQQFavorites"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L21
            r1 = 10105(0x2779, float:1.416E-41)
            return r1
        L21:
            java.lang.String r0 = "sendToMyComputer"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L2c
            r1 = 10106(0x277a, float:1.4162E-41)
            return r1
        L2c:
            java.lang.String r0 = "shareToTroopBar"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L37
            r1 = 10107(0x277b, float:1.4163E-41)
            return r1
        L37:
            java.lang.String r0 = "action_login"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L42
            r1 = 11101(0x2b5d, float:1.5556E-41)
            return r1
        L42:
            java.lang.String r0 = "action_request"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L4d
            r1 = 10100(0x2774, float:1.4153E-41)
            return r1
        L4d:
            r1 = -1
            return r1
    }

    public static java.lang.String b(android.content.Context r7, java.lang.String r8) {
            java.lang.String r0 = "_"
            java.lang.String r1 = ""
            java.lang.String r2 = "openSDK_LOG.SystemUtils"
            java.lang.String r3 = "OpenUi, getSignValidString"
            com.tencent.open.log.SLog.v(r2, r3)
            java.lang.String r3 = r7.getPackageName()     // Catch: java.lang.Exception -> L8c
            android.content.pm.PackageManager r7 = r7.getPackageManager()     // Catch: java.lang.Exception -> L8c
            r4 = 64
            android.content.pm.PackageInfo r7 = r7.getPackageInfo(r3, r4)     // Catch: java.lang.Exception -> L8c
            android.content.pm.Signature[] r7 = r7.signatures     // Catch: java.lang.Exception -> L8c
            java.lang.String r4 = "MD5"
            java.security.MessageDigest r4 = java.security.MessageDigest.getInstance(r4)     // Catch: java.lang.Exception -> L8c
            r5 = 0
            r7 = r7[r5]     // Catch: java.lang.Exception -> L8c
            byte[] r7 = r7.toByteArray()     // Catch: java.lang.Exception -> L8c
            r4.update(r7)     // Catch: java.lang.Exception -> L8c
            byte[] r7 = r4.digest()     // Catch: java.lang.Exception -> L8c
            java.lang.String r7 = com.tencent.open.utils.m.a(r7)     // Catch: java.lang.Exception -> L8c
            r4.reset()     // Catch: java.lang.Exception -> L8c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8c
            r5.<init>()     // Catch: java.lang.Exception -> L8c
            java.lang.String r6 = "-->sign: "
            r5.append(r6)     // Catch: java.lang.Exception -> L8c
            r5.append(r7)     // Catch: java.lang.Exception -> L8c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L8c
            com.tencent.open.log.SLog.v(r2, r5)     // Catch: java.lang.Exception -> L8c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8c
            r5.<init>()     // Catch: java.lang.Exception -> L8c
            r5.append(r3)     // Catch: java.lang.Exception -> L8c
            r5.append(r0)     // Catch: java.lang.Exception -> L8c
            r5.append(r7)     // Catch: java.lang.Exception -> L8c
            r5.append(r0)     // Catch: java.lang.Exception -> L8c
            r5.append(r8)     // Catch: java.lang.Exception -> L8c
            r5.append(r1)     // Catch: java.lang.Exception -> L8c
            java.lang.String r7 = r5.toString()     // Catch: java.lang.Exception -> L8c
            byte[] r7 = com.tencent.open.utils.m.j(r7)     // Catch: java.lang.Exception -> L8c
            r4.update(r7)     // Catch: java.lang.Exception -> L8c
            byte[] r7 = r4.digest()     // Catch: java.lang.Exception -> L8c
            java.lang.String r1 = com.tencent.open.utils.m.a(r7)     // Catch: java.lang.Exception -> L8c
            r4.reset()     // Catch: java.lang.Exception -> L8c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8c
            r7.<init>()     // Catch: java.lang.Exception -> L8c
            java.lang.String r8 = "-->signEncryped: "
            r7.append(r8)     // Catch: java.lang.Exception -> L8c
            r7.append(r1)     // Catch: java.lang.Exception -> L8c
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L8c
            com.tencent.open.log.SLog.v(r2, r7)     // Catch: java.lang.Exception -> L8c
            goto L92
        L8c:
            r7 = move-exception
            java.lang.String r8 = "OpenUi, getSignValidString error"
            com.tencent.open.log.SLog.e(r2, r8, r7)
        L92:
            return r1
    }

    private static boolean b() {
            r0 = 0
            java.lang.Class<android.os.Environment> r1 = android.os.Environment.class
            java.lang.String r2 = "isExternalStorageLegacy"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L19
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L19
            java.lang.Class<android.os.Environment> r2 = android.os.Environment.class
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L19
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L19
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Throwable -> L19
            boolean r0 = r1.booleanValue()     // Catch: java.lang.Throwable -> L19
        L19:
            return r0
    }

    public static boolean b(android.content.Context r2) {
            java.lang.String r0 = "com.tencent.mobileqq"
            boolean r2 = g(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isQQInstalled "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SystemUtils"
            com.tencent.open.log.SLog.i(r1, r0)
            return r2
    }

    public static boolean b(android.content.Context r4, android.content.Intent r5) {
            r0 = 0
            if (r4 == 0) goto L41
            if (r5 != 0) goto L6
            goto L41
        L6:
            android.content.ComponentName r5 = r5.getComponent()
            java.lang.String r1 = "openSDK_LOG.SystemUtils"
            if (r5 != 0) goto L14
            java.lang.String r4 = "isAgentActivityExist? component null"
            com.tencent.open.log.SLog.i(r1, r4)
            return r0
        L14:
            java.lang.String r5 = r5.getPackageName()
            java.lang.String r4 = a(r4, r5)
            if (r4 == 0) goto L25
            boolean r2 = r4.isEmpty()
            if (r2 != 0) goto L25
            r0 = 1
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isAgentActivityExist? packageName = "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = ", appVersionName= "
            r2.append(r5)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.tencent.open.log.SLog.i(r1, r4)
        L41:
            return r0
    }

    public static int c(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "com.tencent.mobileqq"
            java.lang.String r1 = a(r1, r0)
            int r1 = a(r1, r2)
            return r1
    }

    private static java.lang.String c() {
            java.lang.String r0 = com.tencent.open.b.b.b()
            if (r0 == 0) goto Lc
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L22
        Lc:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getAppId error: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "openSDK_LOG.SystemUtils"
            com.tencent.open.log.SLog.e(r2, r1)
        L22:
            return r0
    }

    public static boolean c(android.content.Context r3) {
            java.lang.String r0 = "com.tencent.mobileqq"
            boolean r0 = g(r3, r0)
            r1 = 1
            java.lang.String r2 = "openSDK_LOG.SystemUtils"
            if (r0 == 0) goto L11
            java.lang.String r3 = "isQQBranchInstalled: qq"
            com.tencent.open.log.SLog.i(r2, r3)
            return r1
        L11:
            java.lang.String r0 = "com.tencent.tim"
            boolean r0 = g(r3, r0)
            if (r0 == 0) goto L1f
            java.lang.String r3 = "isQQBranchInstalled: tim"
            com.tencent.open.log.SLog.i(r2, r3)
            return r1
        L1f:
            java.lang.String r0 = "com.tencent.minihd.qq"
            boolean r3 = g(r3, r0)
            if (r3 == 0) goto L2d
            java.lang.String r3 = "isQQBranchInstalled: pad"
            com.tencent.open.log.SLog.i(r2, r3)
            return r1
        L2d:
            java.lang.String r3 = "isQQBranchInstalled: disable speed"
            com.tencent.open.log.SLog.i(r2, r3)
            r3 = 0
            return r3
    }

    public static int d(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "com.tencent.tim"
            java.lang.String r1 = a(r1, r0)
            int r1 = a(r1, r2)
            return r1
    }

    public static boolean d(android.content.Context r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            int r2 = r2.targetSdkVersion
            r1 = 29
            if (r2 < r1) goto L19
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r1) goto L19
            boolean r2 = b()
            if (r2 != 0) goto L19
            r0 = 1
        L19:
            return r0
    }

    private static android.content.pm.PackageInfo e(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            if (r3 == 0) goto L44
            if (r4 != 0) goto L6
            goto L44
        L6:
            java.lang.Class<com.tencent.open.utils.k> r1 = com.tencent.open.utils.k.class
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tencent.a.a.a> r2 = com.tencent.open.utils.k.a     // Catch: java.lang.Throwable -> L41
            boolean r2 = r2.containsKey(r4)     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L31
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tencent.a.a.a> r3 = com.tencent.open.utils.k.a     // Catch: java.lang.Throwable -> L41
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L41
            com.tencent.a.a.a r3 = (com.tencent.a.a.a) r3     // Catch: java.lang.Throwable -> L41
            if (r3 != 0) goto L24
            java.lang.String r3 = "openSDK_LOG.SystemUtils"
            java.lang.String r4 = "getTargetPackageInfo wrapper is null"
            com.tencent.open.log.SLog.e(r3, r4)     // Catch: java.lang.Throwable -> L41
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L41
            return r0
        L24:
            android.content.pm.PackageInfo r3 = r3.b     // Catch: java.lang.Throwable -> L41
            if (r3 != 0) goto L2f
            java.lang.String r4 = "openSDK_LOG.SystemUtils"
            java.lang.String r0 = "getTargetPackageInfo wrapper packageInfo is null"
            com.tencent.open.log.SLog.e(r4, r0)     // Catch: java.lang.Throwable -> L41
        L2f:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L41
            return r3
        L31:
            android.content.pm.PackageInfo r3 = f(r3, r4)     // Catch: java.lang.Throwable -> L41
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tencent.a.a.a> r0 = com.tencent.open.utils.k.a     // Catch: java.lang.Throwable -> L41
            com.tencent.a.a.a r2 = new com.tencent.a.a.a     // Catch: java.lang.Throwable -> L41
            r2.<init>(r4, r3)     // Catch: java.lang.Throwable -> L41
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L41
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L41
            return r3
        L41:
            r3 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L41
            throw r3
        L44:
            return r0
    }

    private static android.content.pm.PackageInfo f(android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "openSDK_LOG.SystemUtils"
            android.content.pm.PackageManager r3 = r3.getPackageManager()
            r1 = 0
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r4, r1)     // Catch: java.lang.Exception -> L22
            if (r3 != 0) goto L21
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L22
            r1.<init>()     // Catch: java.lang.Exception -> L22
            java.lang.String r2 = "realGetPackageInfo null. packageName= "
            r1.append(r2)     // Catch: java.lang.Exception -> L22
            r1.append(r4)     // Catch: java.lang.Exception -> L22
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L22
            com.tencent.open.log.SLog.e(r0, r4)     // Catch: java.lang.Exception -> L22
        L21:
            return r3
        L22:
            r3 = move-exception
            java.lang.String r4 = "realGetPackageInfo exception"
            com.tencent.open.log.SLog.e(r0, r4, r3)
            r3 = 0
            return r3
    }

    private static boolean g(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = c()
            java.lang.String r0 = com.tencent.open.utils.h.a(r2, r0, r3)
            r1 = 1
            if (r0 == 0) goto Lc
            return r1
        Lc:
            android.content.pm.PackageInfo r2 = e(r2, r3)
            if (r2 == 0) goto L13
            goto L14
        L13:
            r1 = 0
        L14:
            return r1
    }
}
