package com.huawei.secure.android.common.util;

public class ZipUtil {
    private static final java.lang.String a = "ZipUtil";
    private static final int b = 104857600;
    private static final int c = 100;
    private static final int d = 4096;
    private static final java.lang.String e = "../";
    private static final java.lang.String f = "..\\";

    public ZipUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.List<java.io.File> a(java.io.File r16, java.io.File r17, long r18, boolean r20) {
            r0 = r16
            r1 = r17
            java.lang.String r2 = "ZipUtil"
            r3 = 0
            if (r0 == 0) goto L130
            if (r1 != 0) goto Ld
            goto L130
        Ld:
            r4 = 1
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r6 = 0
            java.util.zip.ZipFile r7 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L103 java.io.IOException -> L105
            r7.<init>(r0)     // Catch: java.lang.Throwable -> L103 java.io.IOException -> L105
            java.util.Enumeration r0 = r7.entries()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            r8 = r6
        L1e:
            boolean r9 = r0.hasMoreElements()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r9 == 0) goto Lf3
            java.lang.Object r9 = r0.nextElement()     // Catch: java.lang.IllegalArgumentException -> Lec java.lang.Throwable -> Lfd java.io.IOException -> L100
            java.util.zip.ZipEntry r9 = (java.util.zip.ZipEntry) r9     // Catch: java.lang.IllegalArgumentException -> Lec java.lang.Throwable -> Lfd java.io.IOException -> L100
            java.lang.String r10 = r9.getName()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r11 == 0) goto L35
            goto L1e
        L35:
            java.text.Normalizer$Form r11 = java.text.Normalizer.Form.NFKC     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            java.lang.String r10 = java.text.Normalizer.normalize(r10, r11)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            boolean r11 = e(r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r11 == 0) goto L5b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            r0.<init>()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            java.lang.String r1 = "zipPath is a invalid path: "
            r0.append(r1)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            java.lang.String r1 = d(r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            r0.append(r1)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            android.util.Log.e(r2, r0)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            goto Lf4
        L5b:
            java.lang.String r11 = "\\\\"
            java.lang.String r12 = "/"
            java.lang.String r10 = r10.replaceAll(r11, r12)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            java.io.File r11 = new java.io.File     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            r11.<init>(r1, r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r20 == 0) goto L79
            boolean r10 = r11.exists()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r10 == 0) goto L79
            boolean r10 = r11.isFile()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r10 == 0) goto L79
            e(r11)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
        L79:
            r5.add(r11)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            boolean r10 = r9.isDirectory()     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r10 == 0) goto L8f
            boolean r9 = a(r11)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r9 != 0) goto L1e
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r7)
            a(r5)
            return r3
        L8f:
            boolean r10 = b(r11)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            if (r10 != 0) goto L9c
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r7)
            a(r5)
            return r3
        L9c:
            java.io.BufferedInputStream r10 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> Ldf
            java.io.InputStream r9 = r7.getInputStream(r9)     // Catch: java.lang.Throwable -> Ldf
            r10.<init>(r9)     // Catch: java.lang.Throwable -> Ldf
            java.io.FileOutputStream r9 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Ldc
            r9.<init>(r11)     // Catch: java.lang.Throwable -> Ldc
            java.io.BufferedOutputStream r11 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> Ld8
            r11.<init>(r9)     // Catch: java.lang.Throwable -> Ld8
            r12 = 1024(0x400, float:1.435E-42)
            byte[] r12 = new byte[r12]     // Catch: java.lang.Throwable -> Ld6
        Lb3:
            int r13 = r10.read(r12)     // Catch: java.lang.Throwable -> Ld6
            r14 = -1
            if (r13 == r14) goto Lcb
            int r8 = r8 + r13
            long r14 = (long) r8     // Catch: java.lang.Throwable -> Ld6
            int r14 = (r14 > r18 ? 1 : (r14 == r18 ? 0 : -1))
            if (r14 <= 0) goto Lc7
            java.lang.String r12 = "unzipFileNew: over than top size"
            android.util.Log.e(r2, r12)     // Catch: java.lang.Throwable -> Ld6
            r4 = r6
            goto Lcb
        Lc7:
            r11.write(r12, r6, r13)     // Catch: java.lang.Throwable -> Ld6
            goto Lb3
        Lcb:
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r11)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r9)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            goto L1e
        Ld6:
            r0 = move-exception
            goto Lda
        Ld8:
            r0 = move-exception
            r11 = r3
        Lda:
            r3 = r9
            goto Le2
        Ldc:
            r0 = move-exception
            r11 = r3
            goto Le2
        Ldf:
            r0 = move-exception
            r10 = r3
            r11 = r10
        Le2:
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r10)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r11)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r3)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            throw r0     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
        Lec:
            java.lang.String r9 = "entries.nextElement IllegalArgumentException"
            android.util.Log.e(r2, r9)     // Catch: java.lang.Throwable -> Lfd java.io.IOException -> L100
            goto L1e
        Lf3:
            r6 = r4
        Lf4:
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r7)
            if (r6 != 0) goto L124
            a(r5)
            goto L124
        Lfd:
            r0 = move-exception
            r3 = r7
            goto L127
        L100:
            r0 = move-exception
            r3 = r7
            goto L106
        L103:
            r0 = move-exception
            goto L127
        L105:
            r0 = move-exception
        L106:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L125
            r1.<init>()     // Catch: java.lang.Throwable -> L125
            java.lang.String r4 = "unzip new IOException : "
            r1.append(r4)     // Catch: java.lang.Throwable -> L125
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L125
            r1.append(r0)     // Catch: java.lang.Throwable -> L125
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L125
            android.util.Log.e(r2, r0)     // Catch: java.lang.Throwable -> L125
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r3)
            a(r5)
        L124:
            return r5
        L125:
            r0 = move-exception
            r4 = r6
        L127:
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r3)
            if (r4 != 0) goto L12f
            a(r5)
        L12f:
            throw r0
        L130:
            return r3
    }

    private static void a(java.io.FileInputStream r0, java.io.BufferedOutputStream r1, java.util.zip.ZipInputStream r2, java.io.FileOutputStream r3) {
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r0)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r1)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r2)
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r3)
            return
    }

    private static void a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1c
            boolean r1 = e(r1)
            if (r1 != 0) goto Ld
            goto L1c
        Ld:
            java.lang.String r1 = "ZipUtil"
            java.lang.String r0 = "IllegalArgumentException--path is not a standard path"
            android.util.Log.e(r1, r0)
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "path is not a standard path"
            r1.<init>(r0)
            throw r1
        L1c:
            return
    }

    private static boolean a(java.io.File r1) {
            if (r1 == 0) goto L17
            boolean r0 = r1.exists()
            if (r0 == 0) goto Lf
            boolean r1 = r1.isDirectory()
            if (r1 == 0) goto L17
            goto L15
        Lf:
            boolean r1 = r1.mkdirs()
            if (r1 == 0) goto L17
        L15:
            r1 = 1
            goto L18
        L17:
            r1 = 0
        L18:
            return r1
    }

    private static boolean a(java.lang.String r11, long r12, int r14) {
            java.lang.String r0 = "close zipFile IOException "
            java.lang.String r1 = "ZipUtil"
            r2 = 0
            r3 = 0
            java.util.zip.ZipFile r4 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L50 java.io.IOException -> L52
            r4.<init>(r11)     // Catch: java.lang.Throwable -> L50 java.io.IOException -> L52
            java.util.Enumeration r11 = r4.entries()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            r5 = 0
            r3 = r2
        L12:
            boolean r7 = r11.hasMoreElements()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            r8 = 1
            if (r7 == 0) goto L45
            java.lang.Object r7 = r11.nextElement()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.util.zip.ZipEntry r7 = (java.util.zip.ZipEntry) r7     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            long r9 = r7.getSize()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            long r5 = r5 + r9
            int r3 = r3 + r8
            java.lang.String r8 = r7.getName()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            boolean r8 = e(r8)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            if (r8 != 0) goto L3f
            if (r3 >= r14) goto L3f
            int r8 = (r5 > r12 ? 1 : (r5 == r12 ? 0 : -1))
            if (r8 > 0) goto L3f
            long r7 = r7.getSize()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            r9 = -1
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 != 0) goto L12
        L3f:
            java.lang.String r11 = "File name is invalid or too many files or too big"
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r11)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            goto L46
        L45:
            r2 = r8
        L46:
            r4.close()     // Catch: java.io.IOException -> L71
            goto L74
        L4a:
            r11 = move-exception
            r3 = r4
            goto L75
        L4d:
            r11 = move-exception
            r3 = r4
            goto L53
        L50:
            r11 = move-exception
            goto L75
        L52:
            r11 = move-exception
        L53:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r12.<init>()     // Catch: java.lang.Throwable -> L50
            java.lang.String r13 = "not a valid zip file, IOException : "
            r12.append(r13)     // Catch: java.lang.Throwable -> L50
            java.lang.String r11 = r11.getMessage()     // Catch: java.lang.Throwable -> L50
            r12.append(r11)     // Catch: java.lang.Throwable -> L50
            java.lang.String r11 = r12.toString()     // Catch: java.lang.Throwable -> L50
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r11)     // Catch: java.lang.Throwable -> L50
            if (r3 == 0) goto L74
            r3.close()     // Catch: java.io.IOException -> L71
            goto L74
        L71:
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r0)
        L74:
            return r2
        L75:
            if (r3 == 0) goto L7e
            r3.close()     // Catch: java.io.IOException -> L7b
            goto L7e
        L7b:
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r0)
        L7e:
            throw r11
    }

    private static boolean a(java.lang.String r3, java.lang.String r4, long r5, int r7) throws com.huawei.secure.android.common.util.SecurityCommonException {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            java.lang.String r2 = "ZipUtil"
            if (r0 != 0) goto L38
            boolean r0 = e(r3)
            if (r0 == 0) goto L10
            goto L38
        L10:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L32
            boolean r4 = e(r4)
            if (r4 == 0) goto L1d
            goto L32
        L1d:
            boolean r3 = a(r3, r5, r7)
            if (r3 == 0) goto L25
            r3 = 1
            return r3
        L25:
            java.lang.String r3 = "zip file contains valid chars or too many files"
            com.huawei.secure.android.common.util.LogsUtil.e(r2, r3)
            com.huawei.secure.android.common.util.SecurityCommonException r3 = new com.huawei.secure.android.common.util.SecurityCommonException
            java.lang.String r4 = "unsecure zipfile!"
            r3.<init>(r4)
            throw r3
        L32:
            java.lang.String r3 = "target directory is not valid"
            com.huawei.secure.android.common.util.LogsUtil.e(r2, r3)
            return r1
        L38:
            java.lang.String r3 = "zip file is not valid"
            com.huawei.secure.android.common.util.LogsUtil.e(r2, r3)
            return r1
    }

    private static boolean a(java.util.List<java.io.File> r2) {
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L16
        L4:
            boolean r0 = r2.hasNext()     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L14
            java.lang.Object r0 = r2.next()     // Catch: java.lang.Exception -> L16
            java.io.File r0 = (java.io.File) r0     // Catch: java.lang.Exception -> L16
            e(r0)     // Catch: java.lang.Exception -> L16
            goto L4
        L14:
            r2 = 1
            return r2
        L16:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unzip fail delete file failed"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "ZipUtil"
            com.huawei.secure.android.common.util.LogsUtil.e(r0, r2)
            r2 = 0
            return r2
    }

    private static java.io.File b(java.lang.String r1) {
            a(r1)
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            return r0
    }

    private static boolean b(java.io.File r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2.exists()
            if (r1 == 0) goto Lf
            boolean r2 = r2.isFile()
            return r2
        Lf:
            java.io.File r1 = r2.getParentFile()
            boolean r1 = a(r1)
            if (r1 != 0) goto L1a
            return r0
        L1a:
            boolean r2 = r2.createNewFile()     // Catch: java.io.IOException -> L1f
            return r2
        L1f:
            java.lang.String r2 = "ZipUtil"
            java.lang.String r1 = "createOrExistsFile IOException "
            android.util.Log.e(r2, r1)
            return r0
    }

    private static java.io.File c(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            goto Lc
        L8:
            java.io.File r1 = b(r1)
        Lc:
            return r1
    }

    private static void c(java.io.File r1) {
            if (r1 != 0) goto L3
            return
        L3:
            boolean r1 = r1.delete()
            if (r1 != 0) goto L10
            java.lang.String r1 = "ZipUtil"
            java.lang.String r0 = "delete file error"
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r0)
        L10:
            return
    }

    private static java.lang.String d(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return r2
        L7:
            java.lang.String r0 = java.io.File.separator
            int r0 = r2.lastIndexOf(r0)
            r1 = -1
            if (r0 != r1) goto L11
            goto L17
        L11:
            int r0 = r0 + 1
            java.lang.String r2 = r2.substring(r0)
        L17:
            return r2
    }

    private static void d(java.io.File r1) {
            if (r1 == 0) goto L16
            boolean r0 = r1.exists()
            if (r0 == 0) goto L9
            goto L16
        L9:
            boolean r1 = r1.mkdirs()
            if (r1 != 0) goto L16
            java.lang.String r1 = "ZipUtil"
            java.lang.String r0 = "mkdirs error , files exists or IOException."
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r0)
        L16:
            return
    }

    private static void e(java.io.File r4) {
            if (r4 != 0) goto L3
            return
        L3:
            boolean r0 = r4.isFile()
            if (r0 == 0) goto Ld
            c(r4)
            return
        Ld:
            boolean r0 = r4.isDirectory()
            if (r0 == 0) goto L30
            java.io.File[] r0 = r4.listFiles()
            if (r0 == 0) goto L2d
            int r1 = r0.length
            if (r1 != 0) goto L1d
            goto L2d
        L1d:
            int r1 = r0.length
            r2 = 0
        L1f:
            if (r2 >= r1) goto L29
            r3 = r0[r2]
            e(r3)
            int r2 = r2 + 1
            goto L1f
        L29:
            c(r4)
            goto L30
        L2d:
            c(r4)
        L30:
            return
    }

    private static boolean e(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 1
            if (r0 == 0) goto Lf
            java.lang.String r2 = "ZipUtil"
            java.lang.String r0 = "isContainInvalidStr: name is null"
            android.util.Log.e(r2, r0)
            return r1
        Lf:
            java.lang.String r0 = "../"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = "..\\"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".."
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = "./"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = ".\\.\\"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L41
            java.lang.String r0 = "%00"
            boolean r2 = r2.contains(r0)
            if (r2 == 0) goto L40
            goto L41
        L40:
            r1 = 0
        L41:
            return r1
    }

    @java.lang.Deprecated
    public static boolean unZip(java.lang.String r17, java.lang.String r18, long r19, int r21, boolean r22) throws com.huawei.secure.android.common.util.SecurityCommonException {
            r0 = r18
            java.lang.String r1 = "ZipUtil"
            boolean r2 = a(r17, r18, r19, r21)
            r3 = 0
            if (r2 != 0) goto Lc
            return r3
        Lc:
            java.lang.String r2 = java.io.File.separator
            boolean r2 = r0.endsWith(r2)
            if (r2 == 0) goto L2f
            int r2 = r18.length()
            java.lang.String r4 = java.io.File.separator
            int r4 = r4.length()
            if (r2 <= r4) goto L2f
            int r2 = r18.length()
            java.lang.String r4 = java.io.File.separator
            int r4 = r4.length()
            int r2 = r2 - r4
            java.lang.String r0 = r0.substring(r3, r2)
        L2f:
            r2 = 1
            r4 = 4096(0x1000, float:5.74E-42)
            byte[] r5 = new byte[r4]
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r7 = 0
            java.io.FileInputStream r8 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L125 java.io.IOException -> L12a
            r9 = r17
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L125 java.io.IOException -> L12a
            java.util.zip.ZipInputStream r9 = new java.util.zip.ZipInputStream     // Catch: java.lang.Throwable -> L119 java.io.IOException -> L11f
            java.io.BufferedInputStream r10 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L119 java.io.IOException -> L11f
            r10.<init>(r8)     // Catch: java.lang.Throwable -> L119 java.io.IOException -> L11f
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L119 java.io.IOException -> L11f
            r11 = r3
            r10 = r7
        L4d:
            java.util.zip.ZipEntry r12 = r9.getNextEntry()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            if (r12 == 0) goto L10a
            java.lang.String r13 = r12.getName()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.lang.String r14 = "\\\\"
            java.lang.String r15 = "/"
            java.lang.String r13 = r13.replaceAll(r14, r15)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.io.File r14 = new java.io.File     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            r14.<init>(r0, r13)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.text.Normalizer$Form r15 = java.text.Normalizer.Form.NFKC     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.lang.String r13 = java.text.Normalizer.normalize(r13, r15)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            boolean r15 = e(r13)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            if (r15 == 0) goto L8b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            r0.<init>()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.lang.String r2 = "zipPath is a invalid path: "
            r0.append(r2)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.lang.String r2 = d(r13)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            r0.append(r2)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            android.util.Log.e(r1, r0)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            r2 = r3
            goto L10a
        L8b:
            if (r22 == 0) goto L9c
            boolean r13 = r14.exists()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            if (r13 == 0) goto L9c
            boolean r13 = r14.isFile()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            if (r13 == 0) goto L9c
            e(r14)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
        L9c:
            boolean r12 = r12.isDirectory()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            if (r12 == 0) goto La9
            d(r14)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            r6.add(r14)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            goto Lf0
        La9:
            java.io.File r12 = r14.getParentFile()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            if (r12 == 0) goto Lb8
            boolean r13 = r12.exists()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            if (r13 != 0) goto Lb8
            d(r12)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
        Lb8:
            java.io.FileOutputStream r12 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            r12.<init>(r14)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            java.io.BufferedOutputStream r10 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L106 java.io.IOException -> L108
            r10.<init>(r12)     // Catch: java.lang.Throwable -> L106 java.io.IOException -> L108
        Lc2:
            int r7 = r9.read(r5, r3, r4)     // Catch: java.lang.Throwable -> L100 java.io.IOException -> L102
            r13 = -1
            if (r7 == r13) goto Le2
            int r11 = r11 + r7
            long r3 = (long) r11
            int r3 = (r3 > r19 ? 1 : (r3 == r19 ? 0 : -1))
            if (r3 <= 0) goto Ldb
            java.lang.String r2 = "unzip  over than top size"
            android.util.Log.e(r1, r2)     // Catch: java.io.IOException -> Ld7 java.lang.Throwable -> L100
            r2 = 0
            r3 = 0
            goto Le2
        Ld7:
            r0 = move-exception
            r7 = r12
            r3 = 0
            goto L104
        Ldb:
            r3 = 0
            r10.write(r5, r3, r7)     // Catch: java.lang.Throwable -> L100 java.io.IOException -> L102
            r4 = 4096(0x1000, float:5.74E-42)
            goto Lc2
        Le2:
            r6.add(r14)     // Catch: java.lang.Throwable -> L100 java.io.IOException -> L102
            r10.flush()     // Catch: java.lang.Throwable -> L100 java.io.IOException -> L102
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r10)     // Catch: java.lang.Throwable -> L100 java.io.IOException -> L102
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r12)     // Catch: java.lang.Throwable -> L100 java.io.IOException -> L102
            r7 = r10
            r10 = r12
        Lf0:
            r9.closeEntry()     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> Lf9
            r4 = 4096(0x1000, float:5.74E-42)
            goto L4d
        Lf7:
            r0 = move-exception
            goto L112
        Lf9:
            r0 = move-exception
            r16 = r10
            r10 = r7
            r7 = r16
            goto L104
        L100:
            r0 = move-exception
            goto L11d
        L102:
            r0 = move-exception
            r7 = r12
        L104:
            r12 = r7
            goto L123
        L106:
            r0 = move-exception
            goto L113
        L108:
            r0 = move-exception
            goto L117
        L10a:
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r9)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            com.huawei.secure.android.common.util.IOUtil.closeSecure(r8)     // Catch: java.lang.Throwable -> Lf7 java.io.IOException -> L115
            r3 = r2
            goto L149
        L112:
            r12 = r10
        L113:
            r10 = r7
            goto L11d
        L115:
            r0 = move-exception
            r12 = r10
        L117:
            r10 = r7
            goto L123
        L119:
            r0 = move-exception
            r9 = r7
            r10 = r9
            r12 = r10
        L11d:
            r7 = r8
            goto L153
        L11f:
            r0 = move-exception
            r9 = r7
            r10 = r9
            r12 = r10
        L123:
            r7 = r8
            goto L12e
        L125:
            r0 = move-exception
            r9 = r7
            r10 = r9
            r12 = r10
            goto L153
        L12a:
            r0 = move-exception
            r9 = r7
            r10 = r9
            r12 = r10
        L12e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L152
            r2.<init>()     // Catch: java.lang.Throwable -> L152
            java.lang.String r4 = "Unzip IOException : "
            r2.append(r4)     // Catch: java.lang.Throwable -> L152
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L152
            r2.append(r0)     // Catch: java.lang.Throwable -> L152
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L152
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r0)     // Catch: java.lang.Throwable -> L152
            r8 = r7
            r7 = r10
            r10 = r12
        L149:
            a(r8, r7, r9, r10)
            if (r3 != 0) goto L151
            a(r6)
        L151:
            return r3
        L152:
            r0 = move-exception
        L153:
            a(r7, r10, r9, r12)
            throw r0
    }

    @java.lang.Deprecated
    public static boolean unZip(java.lang.String r6, java.lang.String r7, boolean r8) throws com.huawei.secure.android.common.util.SecurityCommonException {
            r2 = 104857600(0x6400000, double:5.1806538E-316)
            r4 = 100
            r0 = r6
            r1 = r7
            r5 = r8
            boolean r6 = unZip(r0, r1, r2, r4, r5)
            return r6
    }

    public static java.util.List<java.io.File> unZipNew(java.lang.String r1, java.lang.String r2, long r3, int r5, boolean r6) throws com.huawei.secure.android.common.util.SecurityCommonException {
            boolean r5 = a(r1, r2, r3, r5)
            if (r5 != 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r5 = java.io.File.separator
            boolean r5 = r2.endsWith(r5)
            if (r5 == 0) goto L2c
            int r5 = r2.length()
            java.lang.String r0 = java.io.File.separator
            int r0 = r0.length()
            if (r5 <= r0) goto L2c
            int r5 = r2.length()
            java.lang.String r0 = java.io.File.separator
            int r0 = r0.length()
            int r5 = r5 - r0
            r0 = 0
            java.lang.String r2 = r2.substring(r0, r5)
        L2c:
            java.io.File r1 = c(r1)
            java.io.File r2 = c(r2)
            java.util.List r1 = a(r1, r2, r3, r6)
            return r1
    }

    public static java.util.List<java.io.File> unZipNew(java.lang.String r6, java.lang.String r7, boolean r8) throws com.huawei.secure.android.common.util.SecurityCommonException {
            r2 = 104857600(0x6400000, double:5.1806538E-316)
            r4 = 100
            r0 = r6
            r1 = r7
            r5 = r8
            java.util.List r6 = unZipNew(r0, r1, r2, r4, r5)
            return r6
    }
}
