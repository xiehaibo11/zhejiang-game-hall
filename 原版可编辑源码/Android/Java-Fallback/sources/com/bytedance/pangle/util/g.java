package com.bytedance.pangle.util;

public final class g {
    public static java.lang.String a;
    static java.lang.String b;

    public static java.lang.String a(android.content.Context r1) {
            java.lang.String r0 = com.bytedance.pangle.util.g.b
            if (r0 != 0) goto L19
            java.io.File r1 = r1.getCacheDir()
            java.io.File r1 = r1.getParentFile()
            if (r1 == 0) goto L19
            java.lang.String r1 = r1.getCanonicalPath()     // Catch: java.io.IOException -> L15
            com.bytedance.pangle.util.g.b = r1     // Catch: java.io.IOException -> L15
            goto L19
        L15:
            r1 = move-exception
            r1.printStackTrace()
        L19:
            java.lang.String r1 = com.bytedance.pangle.util.g.b
            return r1
    }

    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }

    public static void a(java.io.File r3) {
            if (r3 == 0) goto L3d
            boolean r0 = r3.exists()
            if (r0 != 0) goto L9
            goto L3d
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            r2 = 0
            if (r0 < r1) goto L23
            java.lang.String r3 = r3.getAbsolutePath()
            java.lang.String[] r0 = new java.lang.String[r2]     // Catch: java.io.IOException -> L22
            java.nio.file.Path r3 = java.nio.file.Paths.get(r3, r0)     // Catch: java.io.IOException -> L22
            com.bytedance.pangle.util.h$1 r0 = new com.bytedance.pangle.util.h$1     // Catch: java.io.IOException -> L22
            r0.<init>()     // Catch: java.io.IOException -> L22
            java.nio.file.Files.walkFileTree(r3, r0)     // Catch: java.io.IOException -> L22
        L22:
            return
        L23:
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto L3a
            java.io.File[] r0 = r3.listFiles()
            if (r0 == 0) goto L3a
        L2f:
            int r1 = r0.length
            if (r2 >= r1) goto L3a
            r1 = r0[r2]
            a(r1)
            int r2 = r2 + 1
            goto L2f
        L3a:
            r3.delete()
        L3d:
            return
    }

    public static void a(java.io.InputStream r0, java.io.OutputStream r1) {
            b(r0, r1)
            return
    }

    public static void a(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            a(r0)
            return
    }

    public static void a(java.lang.String r8, java.lang.String r9) {
            java.io.File r0 = new java.io.File
            r0.<init>(r8)
            java.io.File r8 = new java.io.File
            r8.<init>(r9)
            boolean r9 = r0.exists()
            if (r9 == 0) goto La4
            boolean r9 = r0.isDirectory()
            if (r9 == 0) goto L9c
            boolean r9 = r8.exists()
            if (r9 != 0) goto L1f
            r8.mkdirs()
        L1f:
            boolean r9 = r8.isDirectory()
            if (r9 == 0) goto L94
            java.io.File[] r9 = r0.listFiles()
            if (r9 == 0) goto L93
            int r0 = r9.length
            if (r0 != 0) goto L2f
            goto L93
        L2f:
            int r0 = r9.length
            r1 = 0
            r2 = r1
        L32:
            if (r2 >= r0) goto L93
            r3 = r9[r2]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r8)
            java.lang.String r5 = java.io.File.separator
            r4.append(r5)
            java.lang.String r5 = r3.getName()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            boolean r5 = r3.isDirectory()
            if (r5 == 0) goto L5c
            java.lang.String r3 = r3.getAbsolutePath()
            a(r3, r4)
            goto L90
        L5c:
            java.io.File r5 = new java.io.File
            r5.<init>(r4)
            boolean r5 = r5.exists()
            if (r5 != 0) goto L90
            java.io.BufferedInputStream r5 = new java.io.BufferedInputStream
            java.io.FileInputStream r6 = new java.io.FileInputStream
            r6.<init>(r3)
            r5.<init>(r6)
            java.io.BufferedOutputStream r3 = new java.io.BufferedOutputStream
            java.io.FileOutputStream r6 = new java.io.FileOutputStream
            r6.<init>(r4)
            r3.<init>(r6)
            r4 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r4]
        L7f:
            int r6 = r5.read(r4)
            r7 = -1
            if (r6 == r7) goto L8a
            r3.write(r4, r1, r6)
            goto L7f
        L8a:
            r3.close()
            r5.close()
        L90:
            int r2 = r2 + 1
            goto L32
        L93:
            return
        L94:
            java.lang.Exception r8 = new java.lang.Exception
            java.lang.String r9 = "目标文件夹不是目录"
            r8.<init>(r9)
            throw r8
        L9c:
            java.lang.Exception r8 = new java.lang.Exception
            java.lang.String r9 = "源文件夹不是目录"
            r8.<init>(r9)
            throw r8
        La4:
            java.lang.Exception r8 = new java.lang.Exception
            java.lang.String r9 = "文件夹不存在"
            r8.<init>(r9)
            throw r8
    }

    public static void a(java.util.zip.ZipFile r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.io.IOException -> L5
        L5:
            return
    }

    private static void b(java.io.InputStream r3, java.io.OutputStream r4) {
            if (r3 == 0) goto L31
            if (r4 != 0) goto L5
            goto L31
        L5:
            java.io.BufferedInputStream r0 = new java.io.BufferedInputStream
            r0.<init>(r3)
            java.io.BufferedOutputStream r3 = new java.io.BufferedOutputStream
            r3.<init>(r4)
            r4 = 1048576(0x100000, float:1.469368E-39)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L29
        L13:
            int r1 = r0.read(r4)     // Catch: java.lang.Throwable -> L29
            r2 = -1
            if (r1 == r2) goto L1f
            r2 = 0
            r3.write(r4, r2, r1)     // Catch: java.lang.Throwable -> L29
            goto L13
        L1f:
            r3.flush()     // Catch: java.lang.Throwable -> L29
            r0.close()
            r3.close()
            return
        L29:
            r4 = move-exception
            r0.close()
            r3.close()
            throw r4
        L31:
            return
    }
}
