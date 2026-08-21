package com.huawei.secure.android.common.ssl.util;

public class BksUtil {
    private static final java.lang.String a = "BksUtil";
    private static final java.lang.String b = "com.huawei.hwid";
    private static final java.lang.String c = "com.huawei.hwid";
    private static final java.lang.String d = "com.huawei.hms";
    private static final java.lang.String e = "com.huawei.hwid.tv";
    private static final android.net.Uri f = null;
    private static final java.lang.String g = "files/hmsrootcas.bks";
    private static final java.lang.String h = "4.0.2.300";
    private static final java.lang.String i = "aegis";
    private static final java.lang.String j = "hmsrootcas.bks";
    private static final long k = 604800000;
    private static final java.lang.String l = "last_update_time";
    private static final java.lang.String m = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05";
    private static final java.lang.String n = "3517262215D8D3008CBF888750B6418EDC4D562AC33ED6874E0D73ABA667BC3C";
    private static final java.lang.String o = "E49D5C2C0E11B3B1B96CA56C6DE2A14EC7DAB5CCC3B5F300D03E5B4DBA44F539";
    private static final java.lang.String[] p = null;
    private static final java.lang.String q = "";
    private static final java.lang.String r = "bks_hash";

    static {
            java.lang.String r0 = "content://com.huawei.hwid"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.huawei.secure.android.common.ssl.util.BksUtil.f = r0
            java.lang.String r0 = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05"
            java.lang.String r1 = "E49D5C2C0E11B3B1B96CA56C6DE2A14EC7DAB5CCC3B5F300D03E5B4DBA44F539"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.huawei.secure.android.common.ssl.util.BksUtil.p = r0
            return
    }

    private BksUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = -1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            java.lang.String r2 = "BksUtil"
            if (r3 == 0) goto L1c
            java.lang.String r3 = "The directory  has already exists"
            com.huawei.secure.android.common.ssl.util.g.e(r2, r3)
            r3 = 1
            return r3
        L1c:
            boolean r3 = r0.mkdirs()
            if (r3 == 0) goto L29
            java.lang.String r3 = "create directory  success"
            com.huawei.secure.android.common.ssl.util.g.a(r2, r3)
            r3 = 0
            return r3
        L29:
            java.lang.String r3 = "create directory  failed"
            com.huawei.secure.android.common.ssl.util.g.b(r2, r3)
            return r1
    }

    private static java.lang.String a(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = "aegis"
            r2 = 24
            if (r0 < r2) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r3 = r3.createDeviceProtectedStorageContext()
            java.io.File r3 = r3.getFilesDir()
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            goto L41
        L25:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r3 = r3.getApplicationContext()
            java.io.File r3 = r3.getFilesDir()
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = r0.toString()
        L41:
            return r3
    }

    private static java.lang.String a(byte[] r6) {
            if (r6 == 0) goto L2e
            int r0 = r6.length
            if (r0 != 0) goto L6
            goto L2e
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r6.length
            r2 = 0
        Ld:
            if (r2 >= r1) goto L29
            r3 = r6[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            int r4 = r3.length()
            r5 = 1
            if (r4 != r5) goto L23
            r4 = 48
            r0.append(r4)
        L23:
            r0.append(r3)
            int r2 = r2 + 1
            goto Ld
        L29:
            java.lang.String r6 = r0.toString()
            return r6
        L2e:
            java.lang.String r6 = ""
            return r6
    }

    private static void a(java.io.InputStream r6, android.content.Context r7) {
            java.lang.String r0 = "BksUtil"
            if (r6 == 0) goto L5a
            if (r7 != 0) goto L7
            goto L5a
        L7:
            java.lang.String r7 = a(r7)
            java.io.File r1 = new java.io.File
            r1.<init>(r7)
            boolean r1 = r1.exists()
            if (r1 != 0) goto L19
            a(r7)
        L19:
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "hmsrootcas.bks"
            r1.<init>(r7, r2)
            boolean r7 = r1.exists()
            if (r7 == 0) goto L29
            r1.delete()
        L29:
            r7 = 0
            java.lang.String r2 = "write output stream "
            com.huawei.secure.android.common.ssl.util.g.c(r0, r2)     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L55
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L55
            r2.<init>(r1)     // Catch: java.io.IOException -> L4c java.lang.Throwable -> L55
            r7 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r7]     // Catch: java.lang.Throwable -> L48 java.io.IOException -> L4b
        L38:
            r3 = 0
            int r4 = r6.read(r1, r3, r7)     // Catch: java.lang.Throwable -> L48 java.io.IOException -> L4b
            r5 = -1
            if (r4 == r5) goto L44
            r2.write(r1, r3, r4)     // Catch: java.lang.Throwable -> L48 java.io.IOException -> L4b
            goto L38
        L44:
            com.huawei.secure.android.common.ssl.util.f.a(r2)
            goto L54
        L48:
            r6 = move-exception
            r7 = r2
            goto L56
        L4b:
            r7 = r2
        L4c:
            java.lang.String r6 = " IOException"
            com.huawei.secure.android.common.ssl.util.g.b(r0, r6)     // Catch: java.lang.Throwable -> L55
            com.huawei.secure.android.common.ssl.util.f.a(r7)
        L54:
            return
        L55:
            r6 = move-exception
        L56:
            com.huawei.secure.android.common.ssl.util.f.a(r7)
            throw r6
        L5a:
            return
    }

    private static boolean a(int r1) {
            r0 = 40002300(0x26262fc, float:1.6632265E-37)
            if (r1 < r0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            return r1
    }

    private static byte[] a(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            java.lang.String r1 = "BksUtil"
            if (r3 == 0) goto L59
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto Lc
            goto L59
        Lc:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L23 android.content.pm.PackageManager.NameNotFoundException -> L3d
            if (r3 == 0) goto L56
            r2 = 64
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r4, r2)     // Catch: java.lang.Exception -> L23 android.content.pm.PackageManager.NameNotFoundException -> L3d
            if (r3 == 0) goto L56
            android.content.pm.Signature[] r3 = r3.signatures     // Catch: java.lang.Exception -> L23 android.content.pm.PackageManager.NameNotFoundException -> L3d
            r3 = r3[r0]     // Catch: java.lang.Exception -> L23 android.content.pm.PackageManager.NameNotFoundException -> L3d
            byte[] r3 = r3.toByteArray()     // Catch: java.lang.Exception -> L23 android.content.pm.PackageManager.NameNotFoundException -> L3d
            return r3
        L23:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "get pm exception : "
            r4.append(r2)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.e(r1, r3)
            goto L56
        L3d:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "PackageManager.NameNotFoundException : "
            r4.append(r2)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.e(r1, r3)
        L56:
            byte[] r3 = new byte[r0]
            return r3
        L59:
            java.lang.String r3 = "packageName is null or context is null"
            android.util.Log.e(r1, r3)
            byte[] r3 = new byte[r0]
            return r3
    }

    private static java.lang.String b(android.content.Context r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = a(r1)
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "hmsrootcas.bks"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    private static java.lang.String b(byte[] r2) {
            java.lang.String r0 = ""
            if (r2 != 0) goto L5
            return r0
        L5:
            java.lang.String r1 = "SHA-256"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.security.NoSuchAlgorithmException -> L17
            r1.update(r2)     // Catch: java.security.NoSuchAlgorithmException -> L17
            byte[] r2 = r1.digest()     // Catch: java.security.NoSuchAlgorithmException -> L17
            java.lang.String r2 = a(r2)     // Catch: java.security.NoSuchAlgorithmException -> L17
            return r2
        L17:
            java.lang.String r2 = "BksUtil"
            java.lang.String r1 = "inputstraem exception"
            com.huawei.secure.android.common.ssl.util.g.b(r2, r1)
            return r0
    }

    private static boolean b(android.content.Context r0, java.lang.String r1) {
            byte[] r0 = a(r0, r1)
            java.lang.String r0 = c(r0)
            java.lang.String r1 = "E49D5C2C0E11B3B1B96CA56C6DE2A14EC7DAB5CCC3B5F300D03E5B4DBA44F539"
            boolean r0 = r1.equalsIgnoreCase(r0)
            return r0
    }

    private static boolean b(java.lang.String r10) {
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "hms version code is : "
            r0.append(r2)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "BksUtil"
            com.huawei.secure.android.common.ssl.util.g.c(r2, r0)
            java.lang.String r0 = "\\."
            java.lang.String[] r10 = r10.split(r0)
            java.lang.String r3 = "4.0.2.300"
            java.lang.String[] r0 = r3.split(r0)
            int r3 = r10.length
            int r4 = r0.length
            int r5 = java.lang.Math.max(r3, r4)
            r6 = r1
        L31:
            r7 = 1
            if (r6 >= r5) goto L6f
            if (r6 >= r3) goto L3f
            r8 = r10[r6]     // Catch: java.lang.Exception -> L3d
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Exception -> L3d
            goto L40
        L3d:
            r10 = move-exception
            goto L49
        L3f:
            r8 = r1
        L40:
            if (r6 >= r4) goto L65
            r9 = r0[r6]     // Catch: java.lang.Exception -> L3d
            int r9 = java.lang.Integer.parseInt(r9)     // Catch: java.lang.Exception -> L3d
            goto L66
        L49:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = " exception : "
            r0.append(r3)
            java.lang.String r10 = r10.getMessage()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r2, r10)
            if (r6 < r4) goto L64
            r1 = r7
        L64:
            return r1
        L65:
            r9 = r1
        L66:
            if (r8 >= r9) goto L69
            return r1
        L69:
            if (r8 <= r9) goto L6c
            return r7
        L6c:
            int r6 = r6 + 1
            goto L31
        L6f:
            return r7
    }

    private static java.lang.String c(byte[] r3) {
            java.lang.String r0 = ""
            if (r3 == 0) goto L32
            int r1 = r3.length
            if (r1 != 0) goto L8
            goto L32
        L8:
            java.lang.String r1 = "SHA-256"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.security.NoSuchAlgorithmException -> L17
            byte[] r3 = r1.digest(r3)     // Catch: java.security.NoSuchAlgorithmException -> L17
            java.lang.String r0 = a(r3)     // Catch: java.security.NoSuchAlgorithmException -> L17
            goto L32
        L17:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "NoSuchAlgorithmException"
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "BksUtil"
            android.util.Log.e(r1, r3)
        L32:
            return r0
    }

    private static boolean c(android.content.Context r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = a(r1)
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "hmsrootcas.bks"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            return r1
    }

    private static boolean c(android.content.Context r5, java.lang.String r6) {
            byte[] r5 = a(r5, r6)
            java.lang.String[] r6 = com.huawei.secure.android.common.ssl.util.BksUtil.p
            int r0 = r6.length
            r1 = 0
            r2 = r1
        L9:
            if (r2 >= r0) goto L1c
            r3 = r6[r2]
            java.lang.String r4 = c(r5)
            boolean r3 = r3.equalsIgnoreCase(r4)
            if (r3 == 0) goto L19
            r5 = 1
            return r5
        L19:
            int r2 = r2 + 1
            goto L9
        L1c:
            return r1
    }

    public static synchronized java.io.InputStream getBksFromTss(android.content.Context r7) {
            java.lang.Class<com.huawei.secure.android.common.ssl.util.BksUtil> r0 = com.huawei.secure.android.common.ssl.util.BksUtil.class
            monitor-enter(r0)
            java.lang.String r1 = "BksUtil"
            java.lang.String r2 = "get bks from tss begin"
            com.huawei.secure.android.common.ssl.util.g.c(r1, r2)     // Catch: java.lang.Throwable -> L107
            if (r7 == 0) goto Lf
            com.huawei.secure.android.common.ssl.util.c.a(r7)     // Catch: java.lang.Throwable -> L107
        Lf:
            android.content.Context r7 = com.huawei.secure.android.common.ssl.util.c.a()     // Catch: java.lang.Throwable -> L107
            r1 = 0
            if (r7 != 0) goto L1f
            java.lang.String r7 = "BksUtil"
            java.lang.String r2 = "context is null"
            com.huawei.secure.android.common.ssl.util.g.b(r7, r2)     // Catch: java.lang.Throwable -> L107
            monitor-exit(r0)
            return r1
        L1f:
            java.lang.String r2 = "com.huawei.hwid"
            java.lang.String r2 = com.huawei.secure.android.common.ssl.util.h.a(r2)     // Catch: java.lang.Throwable -> L107
            boolean r2 = b(r2)     // Catch: java.lang.Throwable -> L107
            if (r2 != 0) goto L55
            java.lang.String r2 = "com.huawei.hms"
            java.lang.String r2 = com.huawei.secure.android.common.ssl.util.h.a(r2)     // Catch: java.lang.Throwable -> L107
            boolean r2 = b(r2)     // Catch: java.lang.Throwable -> L107
            if (r2 != 0) goto L55
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L107
            r7.<init>()     // Catch: java.lang.Throwable -> L107
            java.lang.String r2 = "hms version code is too low : "
            r7.append(r2)     // Catch: java.lang.Throwable -> L107
            java.lang.String r2 = "com.huawei.hwid"
            java.lang.String r2 = com.huawei.secure.android.common.ssl.util.h.a(r2)     // Catch: java.lang.Throwable -> L107
            r7.append(r2)     // Catch: java.lang.Throwable -> L107
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L107
            java.lang.String r2 = "BksUtil"
            com.huawei.secure.android.common.ssl.util.g.b(r2, r7)     // Catch: java.lang.Throwable -> L107
            monitor-exit(r0)
            return r1
        L55:
            java.lang.String r2 = "com.huawei.hwid"
            boolean r2 = c(r7, r2)     // Catch: java.lang.Throwable -> L107
            if (r2 != 0) goto L6e
            java.lang.String r2 = "com.huawei.hms"
            boolean r2 = b(r7, r2)     // Catch: java.lang.Throwable -> L107
            if (r2 != 0) goto L6e
            java.lang.String r7 = "BksUtil"
            java.lang.String r2 = "hms sign error"
            com.huawei.secure.android.common.ssl.util.g.b(r7, r2)     // Catch: java.lang.Throwable -> L107
            monitor-exit(r0)
            return r1
        L6e:
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L107
            r2.<init>()     // Catch: java.lang.Throwable -> L107
            android.net.Uri r3 = com.huawei.secure.android.common.ssl.util.BksUtil.f     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le5
            java.lang.String r4 = "files/hmsrootcas.bks"
            android.net.Uri r3 = android.net.Uri.withAppendedPath(r3, r4)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le5
            android.content.ContentResolver r4 = r7.getContentResolver()     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le5
            java.io.InputStream r3 = r4.openInputStream(r3)     // Catch: java.lang.Throwable -> Le2 java.lang.Exception -> Le5
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> Lfc
        L87:
            int r5 = r3.read(r4)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> Lfc
            r6 = -1
            if (r5 <= r6) goto L93
            r6 = 0
            r2.write(r4, r6, r5)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> Lfc
            goto L87
        L93:
            r2.flush()     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> Lfc
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> Lfc
            byte[] r5 = r2.toByteArray()     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> Lfc
            r4.<init>(r5)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> Lfc
            java.lang.String r1 = "bks_hash"
            java.lang.String r5 = ""
            java.lang.String r1 = com.huawei.secure.android.common.ssl.util.i.a(r1, r5, r7)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            byte[] r5 = r2.toByteArray()     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            java.lang.String r5 = b(r5)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            boolean r6 = c(r7)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            if (r6 == 0) goto Lc4
            boolean r1 = r1.equals(r5)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            if (r1 != 0) goto Lbc
            goto Lc4
        Lbc:
            java.lang.String r1 = "BksUtil"
            java.lang.String r5 = "bks not update"
            com.huawei.secure.android.common.ssl.util.g.c(r1, r5)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            goto Ld3
        Lc4:
            java.lang.String r1 = "BksUtil"
            java.lang.String r6 = "update bks and sp"
            com.huawei.secure.android.common.ssl.util.g.c(r1, r6)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            a(r4, r7)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
            java.lang.String r1 = "bks_hash"
            com.huawei.secure.android.common.ssl.util.i.b(r1, r5, r7)     // Catch: java.lang.Throwable -> Ldd java.lang.Exception -> Le0
        Ld3:
            com.huawei.secure.android.common.ssl.util.f.a(r3)     // Catch: java.lang.Throwable -> L107
            com.huawei.secure.android.common.ssl.util.f.a(r2)     // Catch: java.lang.Throwable -> L107
            com.huawei.secure.android.common.ssl.util.f.a(r4)     // Catch: java.lang.Throwable -> L107
            goto Lf6
        Ldd:
            r7 = move-exception
            r1 = r4
            goto Lfd
        Le0:
            r1 = r4
            goto Le6
        Le2:
            r7 = move-exception
            r3 = r1
            goto Lfd
        Le5:
            r3 = r1
        Le6:
            java.lang.String r4 = "BksUtil"
            java.lang.String r5 = "Get bks from HMS_VERSION_CODE exception : No content provider"
            com.huawei.secure.android.common.ssl.util.g.b(r4, r5)     // Catch: java.lang.Throwable -> Lfc
            com.huawei.secure.android.common.ssl.util.f.a(r3)     // Catch: java.lang.Throwable -> L107
            com.huawei.secure.android.common.ssl.util.f.a(r2)     // Catch: java.lang.Throwable -> L107
            com.huawei.secure.android.common.ssl.util.f.a(r1)     // Catch: java.lang.Throwable -> L107
        Lf6:
            java.io.InputStream r7 = getFilesBksIS(r7)     // Catch: java.lang.Throwable -> L107
            monitor-exit(r0)
            return r7
        Lfc:
            r7 = move-exception
        Lfd:
            com.huawei.secure.android.common.ssl.util.f.a(r3)     // Catch: java.lang.Throwable -> L107
            com.huawei.secure.android.common.ssl.util.f.a(r2)     // Catch: java.lang.Throwable -> L107
            com.huawei.secure.android.common.ssl.util.f.a(r1)     // Catch: java.lang.Throwable -> L107
            throw r7     // Catch: java.lang.Throwable -> L107
        L107:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    public static java.io.InputStream getFilesBksIS(android.content.Context r2) {
            boolean r0 = c(r2)
            if (r0 == 0) goto L1c
            java.lang.String r0 = "BksUtil"
            java.lang.String r1 = "getFilesBksIS "
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L17
            java.lang.String r2 = b(r2)     // Catch: java.io.FileNotFoundException -> L17
            r1.<init>(r2)     // Catch: java.io.FileNotFoundException -> L17
            return r1
        L17:
            java.lang.String r2 = "FileNotFoundExceptio: "
            com.huawei.secure.android.common.ssl.util.g.b(r0, r2)
        L1c:
            r2 = 0
            return r2
    }
}
