package com.tkay.core.common.l;

public final class j {
    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long a(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L9
            return r1
        L9:
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            if (r3 != 0) goto L15
            return r1
        L15:
            boolean r3 = r0.isDirectory()     // Catch: java.lang.Throwable -> L24
            if (r3 == 0) goto L20
            long r1 = c(r0)     // Catch: java.lang.Throwable -> L24
            goto L24
        L20:
            long r1 = b(r0)     // Catch: java.lang.Throwable -> L24
        L24:
            return r1
    }

    public static java.io.File a(android.content.Context r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 18
            if (r0 < r2) goto L14
            java.io.File r0 = r6.getExternalFilesDir(r1)     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L14
            java.io.File r0 = a(r0)     // Catch: java.lang.Throwable -> L14
            if (r0 == 0) goto L15
            return r0
        L14:
            r0 = r1
        L15:
            if (r0 != 0) goto L57
            boolean r2 = b(r6)
            if (r2 == 0) goto L57
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getPath()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = r6.getPackageName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            java.io.File r0 = a(r2)
            long r2 = b()
            r4 = 31457280(0x1e00000, double:1.55419614E-316)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L53
            r2 = 1
            goto L54
        L53:
            r2 = 0
        L54:
            if (r2 != 0) goto L57
            goto L58
        L57:
            r1 = r0
        L58:
            if (r1 != 0) goto L6b
            java.io.File r6 = r6.getFilesDir()
            java.io.File r6 = r6.getAbsoluteFile()
            java.lang.String r6 = r6.getAbsolutePath()
            java.io.File r1 = new java.io.File
            r1.<init>(r6)
        L6b:
            return r1
    }

    private static java.io.File a(java.io.File r3) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.UUID r2 = java.util.UUID.randomUUID()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r3, r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L1e
            r0.delete()
        L1e:
            boolean r1 = r0.mkdirs()
            if (r1 == 0) goto L2c
            r0.delete()
            java.io.File r3 = r3.getAbsoluteFile()
            goto L2d
        L2c:
            r3 = 0
        L2d:
            return r3
    }

    private static boolean a() {
            long r0 = b()
            r2 = 31457280(0x1e00000, double:1.55419614E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    private static long b() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r1.equals(r0)
            r1 = 0
            if (r0 == 0) goto L2b
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L27 java.lang.Error -> L2b
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Exception -> L27 java.lang.Error -> L2b
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L27 java.lang.Error -> L2b
            r3.<init>(r0)     // Catch: java.lang.Exception -> L27 java.lang.Error -> L2b
            int r0 = r3.getBlockSize()     // Catch: java.lang.Exception -> L27 java.lang.Error -> L2b
            long r4 = (long) r0     // Catch: java.lang.Exception -> L27 java.lang.Error -> L2b
            int r0 = r3.getAvailableBlocks()     // Catch: java.lang.Exception -> L27 java.lang.Error -> L2b
            long r0 = (long) r0
            long r0 = r0 * r4
            return r0
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            return r1
    }

    private static long b(java.io.File r4) {
            r0 = 0
            r2 = 0
            boolean r3 = r4.exists()     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            if (r3 == 0) goto L1b
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            int r4 = r3.available()     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L18
            long r0 = (long) r4
            r2 = r3
            goto L1e
        L15:
            r4 = move-exception
            r2 = r3
            goto L35
        L18:
            r4 = move-exception
            r2 = r3
            goto L2c
        L1b:
            r4.createNewFile()     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
        L1e:
            if (r2 == 0) goto L34
            r2.close()     // Catch: java.lang.Exception -> L24
            goto L34
        L24:
            r4 = move-exception
            r4.printStackTrace()
            goto L34
        L29:
            r4 = move-exception
            goto L35
        L2b:
            r4 = move-exception
        L2c:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L29
            if (r2 == 0) goto L34
            r2.close()     // Catch: java.lang.Exception -> L24
        L34:
            return r0
        L35:
            if (r2 == 0) goto L3f
            r2.close()     // Catch: java.lang.Exception -> L3b
            goto L3f
        L3b:
            r0 = move-exception
            r0.printStackTrace()
        L3f:
            throw r4
    }

    private static java.lang.String b(java.lang.String r0) {
            java.lang.String r0 = com.tkay.core.common.l.f.a(r0)
            return r0
    }

    private static boolean b(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Exception -> L17
            java.lang.String r2 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Exception -> L17
            int r3 = r1.checkPermission(r2, r3)     // Catch: java.lang.Exception -> L17
            if (r3 != 0) goto L1b
            r3 = 1
            r0 = r3
            goto L1b
        L17:
            r3 = move-exception
            r3.printStackTrace()
        L1b:
            return r0
    }

    private static long c(java.io.File r5) {
            java.io.File[] r5 = r5.listFiles()
            r0 = 0
            if (r5 == 0) goto L25
            r2 = 0
        L9:
            int r3 = r5.length
            if (r2 >= r3) goto L25
            r3 = r5[r2]
            boolean r3 = r3.isDirectory()
            if (r3 == 0) goto L1b
            r3 = r5[r2]
            long r3 = c(r3)
            goto L21
        L1b:
            r3 = r5[r2]
            long r3 = b(r3)
        L21:
            long r0 = r0 + r3
            int r2 = r2 + 1
            goto L9
        L25:
            return r0
    }

    private static boolean c() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r1.equals(r0)
            return r0
    }
}
