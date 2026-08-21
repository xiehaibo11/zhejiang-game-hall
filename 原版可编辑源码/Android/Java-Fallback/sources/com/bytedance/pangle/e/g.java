package com.bytedance.pangle.e;

public final class g {

    public static class a extends java.io.File {
        public a(java.io.File r1, java.lang.String r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    private static int a(java.lang.String r2) {
            android.content.SharedPreferences r0 = a()
            r1 = 0
            int r2 = r0.getInt(r2, r1)
            return r2
    }

    public static android.content.SharedPreferences a() {
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r1 = "plugin-multidex.version"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            return r0
    }

    public static java.lang.String a(java.lang.String r7, int r8) {
            int r0 = b(r7, r8)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 1
            r3 = r2
        Lb:
            if (r3 > r0) goto L52
            java.lang.String r4 = ".dex"
            java.lang.String r5 = "classes"
            if (r3 != r2) goto L23
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r5)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            goto L35
        L23:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r5)
            r6.append(r3)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
        L35:
            java.lang.String r5 = com.bytedance.pangle.d.c.i(r7, r8)
            java.io.File r6 = new java.io.File
            r6.<init>(r5)
            com.bytedance.pangle.e.g$a r5 = new com.bytedance.pangle.e.g$a
            r5.<init>(r6, r4)
            java.lang.String r4 = r5.getAbsolutePath()
            r1.append(r4)
            java.lang.String r4 = ":"
            r1.append(r4)
            int r3 = r3 + 1
            goto Lb
        L52:
            int r7 = r1.length()
            if (r7 == 0) goto L64
            int r7 = r1.length()
            int r7 = r7 - r2
            int r8 = r1.length()
            r1.delete(r7, r8)
        L64:
            java.lang.String r7 = r1.toString()
            return r7
    }

    private static void a(java.io.Closeable r2) {
            r2.close()     // Catch: java.io.IOException -> L4
            return
        L4:
            r2 = move-exception
            java.lang.String r0 = "Zeus/install_pangle"
            java.lang.String r1 = "Plugin-MultiDex Failed to close resource"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r1, r2)
            return
    }

    public static void a(java.io.File r6) {
            boolean r0 = r6.exists()
            if (r0 != 0) goto L7
            return
        L7:
            java.io.File[] r6 = r6.listFiles()
            if (r6 == 0) goto L58
            int r0 = r6.length
            if (r0 != 0) goto L11
            goto L58
        L11:
            int r0 = r6.length
            r1 = 0
        L13:
            if (r1 >= r0) goto L58
            r2 = r6[r1]
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Plugin-MultiDex Trying to delete old file "
            r3.<init>(r4)
            java.lang.String r4 = r2.getPath()
            r3.append(r4)
            java.lang.String r4 = " of size "
            r3.append(r4)
            long r4 = r2.length()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "Zeus/install_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r4, r3)
            boolean r3 = r2.delete()
            if (r3 != 0) goto L55
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r5 = "Plugin-MultiDex Failed to delete old file "
            r3.<init>(r5)
            java.lang.String r2 = r2.getPath()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r4, r2)
        L55:
            int r1 = r1 + 1
            goto L13
        L58:
            return
    }

    public static void a(java.util.zip.ZipFile r3, java.util.zip.ZipEntry r4, com.bytedance.pangle.e.g.a r5, java.lang.String r6) {
            java.io.InputStream r3 = r3.getInputStream(r4)
            java.lang.String r4 = java.lang.String.valueOf(r6)
            java.lang.String r6 = "tmp-"
            java.lang.String r4 = r6.concat(r4)
            java.io.File r6 = r5.getParentFile()
            java.lang.String r0 = ".dex"
            java.io.File r4 = java.io.File.createTempFile(r4, r0, r6)
            java.io.BufferedOutputStream r6 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> La5
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> La5
            r0.<init>(r4)     // Catch: java.lang.Throwable -> La5
            r6.<init>(r0)     // Catch: java.lang.Throwable -> La5
            r0 = 1048576(0x100000, float:1.469368E-39)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L9d
        L26:
            int r1 = r3.read(r0)     // Catch: java.lang.Throwable -> L9d
            r2 = -1
            if (r1 == r2) goto L32
            r2 = 0
            r6.write(r0, r2, r1)     // Catch: java.lang.Throwable -> L9d
            goto L26
        L32:
            r6.flush()     // Catch: java.lang.Throwable -> La5
            r6.close()     // Catch: java.lang.Throwable -> La5
            boolean r6 = r4.setReadOnly()     // Catch: java.lang.Throwable -> La5
            if (r6 == 0) goto L74
            boolean r6 = r4.renameTo(r5)     // Catch: java.lang.Throwable -> La5
            if (r6 == 0) goto L4b
            a(r3)
            r4.delete()
            return
        L4b:
            java.io.IOException r6 = new java.io.IOException     // Catch: java.lang.Throwable -> La5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "Failed to rename \""
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> La5
            r0.append(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "\" to \""
            r0.append(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Throwable -> La5
            r0.append(r5)     // Catch: java.lang.Throwable -> La5
            java.lang.String r5 = "\""
            r0.append(r5)     // Catch: java.lang.Throwable -> La5
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> La5
            r6.<init>(r5)     // Catch: java.lang.Throwable -> La5
            throw r6     // Catch: java.lang.Throwable -> La5
        L74:
            java.io.IOException r6 = new java.io.IOException     // Catch: java.lang.Throwable -> La5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "Failed to mark readonly \""
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> La5
            r0.append(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "\" (tmp of \""
            r0.append(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Throwable -> La5
            r0.append(r5)     // Catch: java.lang.Throwable -> La5
            java.lang.String r5 = "\")"
            r0.append(r5)     // Catch: java.lang.Throwable -> La5
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> La5
            r6.<init>(r5)     // Catch: java.lang.Throwable -> La5
            throw r6     // Catch: java.lang.Throwable -> La5
        L9d:
            r5 = move-exception
            r6.flush()     // Catch: java.lang.Throwable -> La5
            r6.close()     // Catch: java.lang.Throwable -> La5
            throw r5     // Catch: java.lang.Throwable -> La5
        La5:
            r5 = move-exception
            a(r3)
            r4.delete()
            throw r5
    }

    private static int b(java.lang.String r1, int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = ".dex.number"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            int r1 = a(r1)
            return r1
    }
}
