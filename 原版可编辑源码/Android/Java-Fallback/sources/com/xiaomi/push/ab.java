package com.xiaomi.push;

public class ab {
    public static final java.lang.String[] a = null;

    static {
            java.lang.String r0 = "jpg"
            java.lang.String r1 = "png"
            java.lang.String r2 = "bmp"
            java.lang.String r3 = "gif"
            java.lang.String r4 = "webp"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4}
            com.xiaomi.push.ab.a = r0
            return
    }

    public static java.lang.String a(java.io.File r6) {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            r1 = 0
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r3 = 2048(0x800, float:2.87E-42)
            char[] r3 = new char[r3]     // Catch: java.io.IOException -> L30 java.lang.Throwable -> L61
        L19:
            int r4 = r2.read(r3)     // Catch: java.io.IOException -> L30 java.lang.Throwable -> L61
            r5 = -1
            if (r4 == r5) goto L25
            r5 = 0
            r0.write(r3, r5, r4)     // Catch: java.io.IOException -> L30 java.lang.Throwable -> L61
            goto L19
        L25:
            java.lang.String r6 = r0.toString()     // Catch: java.io.IOException -> L30 java.lang.Throwable -> L61
            a(r2)
            a(r0)
            return r6
        L30:
            r3 = move-exception
            goto L36
        L32:
            r6 = move-exception
            goto L63
        L34:
            r3 = move-exception
            r2 = r1
        L36:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61
            r4.<init>()     // Catch: java.lang.Throwable -> L61
            java.lang.String r5 = "read file :"
            r4.append(r5)     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> L61
            r4.append(r6)     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = " failure :"
            r4.append(r6)     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = r3.getMessage()     // Catch: java.lang.Throwable -> L61
            r4.append(r6)     // Catch: java.lang.Throwable -> L61
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Throwable -> L61
            com.xiaomi.channel.commonutils.logger.b.c(r6)     // Catch: java.lang.Throwable -> L61
            a(r2)
            a(r0)
            return r1
        L61:
            r6 = move-exception
            r1 = r2
        L63:
            a(r1)
            a(r0)
            throw r6
    }

    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    public static void a(java.io.File r3, java.io.File r4) {
            r0 = 0
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L1d java.io.FileNotFoundException -> L3b
            r2 = 0
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L1d java.io.FileNotFoundException -> L3b
            java.util.zip.ZipOutputStream r3 = new java.util.zip.ZipOutputStream     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L1d java.io.FileNotFoundException -> L3b
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L1b java.io.IOException -> L1d java.io.FileNotFoundException -> L3b
            a(r3, r4, r0, r0)     // Catch: java.lang.Throwable -> L13 java.io.IOException -> L16 java.io.FileNotFoundException -> L19
            a(r3)
            goto L3e
        L13:
            r4 = move-exception
            r0 = r3
            goto L37
        L16:
            r4 = move-exception
            r0 = r3
            goto L1e
        L19:
            r0 = r3
            goto L3b
        L1b:
            r4 = move-exception
            goto L37
        L1d:
            r4 = move-exception
        L1e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b
            r3.<init>()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r1 = "zip file failure + "
            r3.append(r1)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L1b
            r3.append(r4)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1b
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Throwable -> L1b
            goto L3b
        L37:
            a(r0)
            throw r4
        L3b:
            a(r0)
        L3e:
            return
    }

    public static void a(java.io.File r4, java.lang.String r5) {
            boolean r0 = r4.exists()
            if (r0 != 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mkdir "
            r0.append(r1)
            java.lang.String r1 = r4.getAbsolutePath()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            java.io.File r0 = r4.getParentFile()
            r0.mkdirs()
        L25:
            r0 = 0
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L42 java.io.IOException -> L44
            r1.write(r5)     // Catch: java.lang.Throwable -> L3c java.io.IOException -> L3f
            a(r1)
            goto L6c
        L3c:
            r4 = move-exception
            r0 = r1
            goto L6d
        L3f:
            r5 = move-exception
            r0 = r1
            goto L45
        L42:
            r4 = move-exception
            goto L6d
        L44:
            r5 = move-exception
        L45:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            r1.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "write file :"
            r1.append(r2)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> L42
            r1.append(r4)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = " failure :"
            r1.append(r4)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r5.getMessage()     // Catch: java.lang.Throwable -> L42
            r1.append(r4)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L42
            com.xiaomi.channel.commonutils.logger.b.c(r4)     // Catch: java.lang.Throwable -> L42
            a(r0)
        L6c:
            return
        L6d:
            a(r0)
            throw r4
    }

    public static void a(java.util.zip.ZipOutputStream r7, java.io.File r8, java.lang.String r9, java.io.FileFilter r10) {
            java.lang.String r0 = ""
            if (r9 != 0) goto L5
            r9 = r0
        L5:
            r1 = 0
            boolean r2 = r8.isDirectory()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r3 = 0
            if (r2 == 0) goto L98
            if (r10 == 0) goto L14
            java.io.File[] r2 = r8.listFiles(r10)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            goto L18
        L14:
            java.io.File[] r2 = r8.listFiles()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
        L18:
            java.util.zip.ZipEntry r4 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r5.<init>()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r5.append(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r6 = java.io.File.separator     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r5.append(r6)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r7.putNextEntry(r4)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            if (r4 == 0) goto L38
            goto L49
        L38:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r0.<init>()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r0.append(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r9 = java.io.File.separator     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r0.append(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
        L49:
            r9 = r3
        L4a:
            int r4 = r2.length     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            if (r9 >= r4) goto L6a
            r4 = r2[r9]     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r5.<init>()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r5.append(r0)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r6 = r2[r9]     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r6 = r6.getName()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r5.append(r6)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            a(r7, r4, r5, r1)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            int r9 = r9 + 1
            goto L4a
        L6a:
            com.xiaomi.push.ac r9 = new com.xiaomi.push.ac     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r9.<init>()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.io.File[] r8 = r8.listFiles(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            if (r8 == 0) goto L102
            int r9 = r8.length     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
        L76:
            if (r3 >= r9) goto L102
            r2 = r8[r3]     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r4.<init>()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r4.append(r0)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r5 = java.io.File.separator     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r4.append(r5)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r5 = r2.getName()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r4.append(r5)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            a(r7, r2, r4, r10)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            int r3 = r3 + 1
            goto L76
        L98:
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            if (r10 != 0) goto La7
            java.util.zip.ZipEntry r10 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r10.<init>(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
        La3:
            r7.putNextEntry(r10)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            goto Lcb
        La7:
            java.util.Date r9 = new java.util.Date     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r9.<init>()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.util.zip.ZipEntry r10 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r0.<init>()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            long r4 = r9.getTime()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r9 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r0.append(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r9 = ".txt"
            r0.append(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r10.<init>(r9)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            goto La3
        Lcb:
            java.io.FileInputStream r9 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r9.<init>(r8)     // Catch: java.lang.Throwable -> Le7 java.io.IOException -> Le9
            r8 = 1024(0x400, float:1.435E-42)
            byte[] r8 = new byte[r8]     // Catch: java.lang.Throwable -> Le1 java.io.IOException -> Le4
        Ld4:
            int r10 = r9.read(r8)     // Catch: java.lang.Throwable -> Le1 java.io.IOException -> Le4
            r0 = -1
            if (r10 == r0) goto Ldf
            r7.write(r8, r3, r10)     // Catch: java.lang.Throwable -> Le1 java.io.IOException -> Le4
            goto Ld4
        Ldf:
            r1 = r9
            goto L102
        Le1:
            r7 = move-exception
            r1 = r9
            goto L106
        Le4:
            r7 = move-exception
            r1 = r9
            goto Lea
        Le7:
            r7 = move-exception
            goto L106
        Le9:
            r7 = move-exception
        Lea:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le7
            r8.<init>()     // Catch: java.lang.Throwable -> Le7
            java.lang.String r9 = "zipFiction failed with exception:"
            r8.append(r9)     // Catch: java.lang.Throwable -> Le7
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Le7
            r8.append(r7)     // Catch: java.lang.Throwable -> Le7
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> Le7
            com.xiaomi.channel.commonutils.logger.b.d(r7)     // Catch: java.lang.Throwable -> Le7
        L102:
            a(r1)
            return
        L106:
            a(r1)
            throw r7
    }

    public static boolean a(java.io.File r3) {
            r0 = 0
            boolean r1 = r3.isDirectory()     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L8
            return r0
        L8:
            boolean r1 = r3.exists()     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L10
            r3 = 1
            return r3
        L10:
            java.io.File r1 = r3.getParentFile()     // Catch: java.lang.Throwable -> L26
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L26
            if (r2 != 0) goto L21
            boolean r1 = r1.mkdirs()     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto L21
            return r0
        L21:
            boolean r3 = r3.createNewFile()     // Catch: java.lang.Throwable -> L26
            return r3
        L26:
            r3 = move-exception
            r3.printStackTrace()
            return r0
    }

    public static byte[] a(byte[] r2) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L1b
            r0.<init>()     // Catch: java.lang.Exception -> L1b
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Exception -> L1b
            r1.<init>(r0)     // Catch: java.lang.Exception -> L1b
            r1.write(r2)     // Catch: java.lang.Exception -> L1b
            r1.finish()     // Catch: java.lang.Exception -> L1b
            r1.close()     // Catch: java.lang.Exception -> L1b
            byte[] r1 = r0.toByteArray()     // Catch: java.lang.Exception -> L1b
            r0.close()     // Catch: java.lang.Exception -> L1b
            r2 = r1
        L1b:
            return r2
    }

    public static void b(java.io.File r3, java.io.File r4) {
            java.lang.String r0 = r3.getAbsolutePath()
            java.lang.String r1 = r4.getAbsolutePath()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lf
            return
        Lf:
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L36
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L36
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L32
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L32
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L30
        L1e:
            int r0 = r1.read(r4)     // Catch: java.lang.Throwable -> L30
            if (r0 < 0) goto L29
            r2 = 0
            r3.write(r4, r2, r0)     // Catch: java.lang.Throwable -> L30
            goto L1e
        L29:
            r1.close()
            r3.close()
            return
        L30:
            r4 = move-exception
            goto L34
        L32:
            r4 = move-exception
            r3 = r0
        L34:
            r0 = r1
            goto L38
        L36:
            r4 = move-exception
            r3 = r0
        L38:
            if (r0 == 0) goto L3d
            r0.close()
        L3d:
            if (r3 == 0) goto L42
            r3.close()
        L42:
            throw r4
    }
}
