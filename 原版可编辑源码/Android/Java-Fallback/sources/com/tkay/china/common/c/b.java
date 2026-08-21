package com.tkay.china.common.c;

public final class b {
    private static final java.lang.String a = "tkay_myoffer_download";

    public b() {
            r0 = this;
            r0.<init>()
            return
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

    public static java.lang.String a() {
            android.content.Context r0 = e()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 18
            java.lang.String r3 = "tkay_myoffer_download"
            if (r0 < r2) goto L4d
            android.content.Context r0 = e()     // Catch: java.lang.Throwable -> L4d
            java.io.File r0 = r0.getExternalFilesDir(r1)     // Catch: java.lang.Throwable -> L4d
            if (r0 == 0) goto L4d
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r4.<init>()     // Catch: java.lang.Throwable -> L4d
            java.util.UUID r5 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L4d
            r4.append(r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L4d
            r2.<init>(r0, r4)     // Catch: java.lang.Throwable -> L4d
            boolean r4 = r2.exists()     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L38
            r2.delete()     // Catch: java.lang.Throwable -> L4d
        L38:
            boolean r4 = r2.mkdirs()     // Catch: java.lang.Throwable -> L4d
            if (r4 == 0) goto L45
            r2.delete()     // Catch: java.lang.Throwable -> L4d
            java.io.File r1 = r0.getAbsoluteFile()     // Catch: java.lang.Throwable -> L4d
        L45:
            if (r1 == 0) goto L4d
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L4d
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L4d
            r1 = r0
        L4d:
            if (r1 != 0) goto L74
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = e()
            java.io.File r1 = r1.getFilesDir()
            java.io.File r1 = r1.getAbsoluteFile()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
        L74:
            java.lang.String r0 = r1.getAbsolutePath()
            return r0
    }

    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = a()
            if (r0 == 0) goto L1f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = java.io.File.separator
            r1.append(r0)
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            return r2
        L1f:
            r2 = 0
            return r2
    }

    private static java.lang.String b(java.lang.String r0) {
            java.lang.String r0 = com.tkay.core.common.l.f.a(r0)
            return r0
    }

    private static boolean b() {
            long r0 = c()
            r2 = 104857600(0x6400000, double:5.1806538E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    private static long c() {
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

    private static long d() {
            r0 = 0
            java.io.File r2 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Error -> L1a java.lang.Exception -> L1b
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Error -> L1a java.lang.Exception -> L1b
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Error -> L1a java.lang.Exception -> L1b
            r3.<init>(r2)     // Catch: java.lang.Error -> L1a java.lang.Exception -> L1b
            int r2 = r3.getBlockSize()     // Catch: java.lang.Error -> L1a java.lang.Exception -> L1b
            long r4 = (long) r2     // Catch: java.lang.Error -> L1a java.lang.Exception -> L1b
            int r0 = r3.getAvailableBlocks()     // Catch: java.lang.Error -> L1a java.lang.Exception -> L1b
            long r0 = (long) r0
            long r0 = r0 * r4
        L1a:
            return r0
        L1b:
            r2 = move-exception
            r2.printStackTrace()
            return r0
    }

    private static android.content.Context e() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Ld
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> Ld
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Exception -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    private static boolean f() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r1.equals(r0)
            return r0
    }

    private static boolean g() {
            android.content.Context r0 = e()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.content.pm.PackageManager r2 = r0.getPackageManager()     // Catch: java.lang.Exception -> L1b
            java.lang.String r3 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> L1b
            int r0 = r2.checkPermission(r3, r0)     // Catch: java.lang.Exception -> L1b
            if (r0 != 0) goto L1f
            r0 = 1
            r1 = r0
            goto L1f
        L1b:
            r0 = move-exception
            r0.printStackTrace()
        L1f:
            return r1
    }
}
