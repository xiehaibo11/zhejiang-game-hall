package com.tkay.expressad.foundation.h;

public final class r {
    static boolean a = false;
    static java.lang.String b = "";
    public static char[] c = null;
    private static final java.lang.String d = "common-exception";
    private static final java.lang.String e = "SameSDCardTool";
    private static boolean f = false;
    private static int g = -1;
    private static int h = -1;
    private static int i = -1;
    private static int j = -1;
    private static java.lang.String k;

    static {
            r0 = 14
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [80, 97, 99, 107, 97, 103, 101, 77, 97, 110, 97, 103, 101, 114} // fill-array
            com.tkay.expressad.foundation.h.r.c = r0
            return
    }

    public r() {
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
            java.lang.String r0 = com.tkay.expressad.foundation.h.r.k
            return r0
    }

    public static void a(android.content.Context r4) {
            boolean r0 = com.tkay.expressad.foundation.h.r.f
            if (r0 != 0) goto L5a
            r0 = 1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            java.io.File r2 = r4.getFilesDir()     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Exception -> L3a
            r1.append(r2)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Exception -> L3a
            r1.append(r2)     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3a
            com.tkay.expressad.foundation.h.r.b = r1     // Catch: java.lang.Exception -> L3a
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r3 = r4.getPackageName()     // Catch: java.lang.Exception -> L3a
            int r1 = r1.checkPermission(r2, r3)     // Catch: java.lang.Exception -> L3a
            if (r1 != 0) goto L33
            com.tkay.expressad.foundation.h.r.a = r0     // Catch: java.lang.Exception -> L3a
            goto L36
        L33:
            r1 = 0
            com.tkay.expressad.foundation.h.r.a = r1     // Catch: java.lang.Exception -> L3a
        L36:
            b(r4)     // Catch: java.lang.Exception -> L3a
            goto L58
        L3a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L58
            r1.<init>()     // Catch: java.lang.Exception -> L58
            java.io.File r2 = r4.getFilesDir()     // Catch: java.lang.Exception -> L58
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Exception -> L58
            r1.append(r2)     // Catch: java.lang.Exception -> L58
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Exception -> L58
            r1.append(r2)     // Catch: java.lang.Exception -> L58
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L58
            com.tkay.expressad.foundation.h.r.b = r1     // Catch: java.lang.Exception -> L58
            b(r4)     // Catch: java.lang.Exception -> L58
        L58:
            com.tkay.expressad.foundation.h.r.f = r0
        L5a:
            return
    }

    public static boolean a(long r2) {
            long r0 = e()
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto La
            r2 = 1
            return r2
        La:
            r2 = 0
            return r2
    }

    private static void b(android.content.Context r1) {
            java.lang.String r1 = c(r1)
            com.tkay.expressad.foundation.h.r.k = r1
            com.tkay.expressad.foundation.g.c.d r0 = new com.tkay.expressad.foundation.g.c.d
            r0.<init>(r1)
            com.tkay.expressad.foundation.g.c.f.a(r0)
            com.tkay.expressad.foundation.g.c.f r1 = com.tkay.expressad.foundation.g.c.f.a()
            r1.b()
            return
    }

    public static boolean b() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = "mounted"
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Exception -> Le
            if (r0 == 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }

    private static java.lang.String c(android.content.Context r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 18
            if (r0 < r2) goto L12
            java.io.File r0 = r6.getExternalFilesDir(r1)     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L12
            java.io.File r0 = a(r0)     // Catch: java.lang.Throwable -> L12
            goto L13
        L12:
            r0 = r1
        L13:
            boolean r2 = com.tkay.expressad.foundation.h.r.a
            if (r2 == 0) goto L67
            if (r0 != 0) goto L56
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getPath()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "Android"
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "data"
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = r6.getPackageName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            java.io.File r0 = a(r2)
        L56:
            long r2 = e()
            r4 = 31457280(0x1e00000, double:1.55419614E-316)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L63
            r2 = 1
            goto L64
        L63:
            r2 = 0
        L64:
            if (r2 != 0) goto L67
            goto L68
        L67:
            r1 = r0
        L68:
            if (r1 == 0) goto L70
            boolean r0 = r1.exists()
            if (r0 != 0) goto L78
        L70:
            java.io.File r6 = r6.getFilesDir()
            java.io.File r1 = r6.getAbsoluteFile()
        L78:
            java.lang.String r6 = r1.getAbsolutePath()
            return r6
    }

    private static boolean c() {
            boolean r0 = com.tkay.expressad.foundation.h.r.a
            return r0
    }

    private static int d() {
            java.lang.String r0 = "freeExternalSize"
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L46
            android.content.Context r1 = r1.d()     // Catch: java.lang.Throwable -> L46
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L46
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r1, r0, r2)     // Catch: java.lang.Throwable -> L46
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L46
            long r2 = r2.longValue()     // Catch: java.lang.Throwable -> L46
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L46
            long r2 = r4 - r2
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 > 0) goto L2c
            int r2 = com.tkay.expressad.foundation.h.r.h     // Catch: java.lang.Throwable -> L46
            r3 = -1
            if (r2 != r3) goto L4a
        L2c:
            long r2 = e()     // Catch: java.lang.Throwable -> L46
            r6 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r6
            long r2 = r2 / r6
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L46
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L46
            com.tkay.expressad.foundation.h.r.h = r2     // Catch: java.lang.Throwable -> L46
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L46
            com.tkay.expressad.foundation.h.v.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L46
            goto L4a
        L46:
            r0 = move-exception
            r0.getMessage()
        L4a:
            int r0 = com.tkay.expressad.foundation.h.r.h
            return r0
    }

    private static long d(android.content.Context r5) {
            java.io.File r5 = r5.getFilesDir()     // Catch: java.lang.Exception -> L1c
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Exception -> L1c
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Exception -> L1c
            r0.<init>(r5)     // Catch: java.lang.Exception -> L1c
            r0.restat(r5)     // Catch: java.lang.Exception -> L1c
            int r5 = r0.getBlockSize()     // Catch: java.lang.Exception -> L1c
            long r1 = (long) r5     // Catch: java.lang.Exception -> L1c
            int r5 = r0.getAvailableBlocks()     // Catch: java.lang.Exception -> L1c
            long r3 = (long) r5
            long r3 = r3 * r1
            goto L1e
        L1c:
            r3 = 0
        L1e:
            return r3
    }

    private static long e() {
            boolean r0 = b()
            r1 = 0
            if (r0 == 0) goto L25
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L21
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Exception -> L21
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L21
            r3.<init>(r0)     // Catch: java.lang.Exception -> L21
            int r0 = r3.getBlockSize()     // Catch: java.lang.Exception -> L21
            long r4 = (long) r0     // Catch: java.lang.Exception -> L21
            int r0 = r3.getAvailableBlocks()     // Catch: java.lang.Exception -> L21
            long r0 = (long) r0
            long r0 = r0 * r4
            return r0
        L21:
            r0 = move-exception
            r0.printStackTrace()
        L25:
            return r1
    }

    private static boolean f() {
            long r0 = e()
            r2 = 31457280(0x1e00000, double:1.55419614E-316)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r0 = 1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    private static int g() {
            int r0 = com.tkay.expressad.foundation.h.r.g
            r1 = -1
            if (r0 != r1) goto L1d
            java.lang.Long r0 = new java.lang.Long     // Catch: java.lang.Throwable -> L19
            long r1 = h()     // Catch: java.lang.Throwable -> L19
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            long r1 = r1 / r3
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.foundation.h.r.g = r0     // Catch: java.lang.Throwable -> L19
            goto L1d
        L19:
            r0 = move-exception
            r0.getMessage()
        L1d:
            int r0 = com.tkay.expressad.foundation.h.r.g
            return r0
    }

    private static long h() {
            boolean r0 = b()
            r1 = 0
            if (r0 == 0) goto L25
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L21
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Exception -> L21
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L21
            r3.<init>(r0)     // Catch: java.lang.Exception -> L21
            int r0 = r3.getBlockSize()     // Catch: java.lang.Exception -> L21
            long r4 = (long) r0     // Catch: java.lang.Exception -> L21
            int r0 = r3.getBlockCount()     // Catch: java.lang.Exception -> L21
            long r0 = (long) r0
            long r0 = r0 * r4
            return r0
        L21:
            r0 = move-exception
            r0.printStackTrace()
        L25:
            return r1
    }

    private static int i() {
            java.lang.String r0 = "TotalDataSize"
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L5a
            android.content.Context r1 = r1.d()     // Catch: java.lang.Throwable -> L5a
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L5a
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r1, r0, r2)     // Catch: java.lang.Throwable -> L5a
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L5a
            long r2 = r2.longValue()     // Catch: java.lang.Throwable -> L5a
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5a
            long r2 = r4 - r2
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 > 0) goto L2c
            int r2 = com.tkay.expressad.foundation.h.r.i     // Catch: java.lang.Throwable -> L5a
            r3 = -1
            if (r2 != r3) goto L5e
        L2c:
            java.io.File r2 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L5a
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L5a
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L5a
            int r2 = r3.getBlockSize()     // Catch: java.lang.Throwable -> L5a
            long r6 = (long) r2     // Catch: java.lang.Throwable -> L5a
            int r2 = r3.getBlockCount()     // Catch: java.lang.Throwable -> L5a
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L5a
            long r2 = r2 * r6
            r6 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r6
            long r2 = r2 / r6
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L5a
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.foundation.h.r.i = r2     // Catch: java.lang.Throwable -> L5a
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.foundation.h.v.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L5a
            goto L5e
        L5a:
            r0 = move-exception
            r0.getMessage()
        L5e:
            int r0 = com.tkay.expressad.foundation.h.r.i
            return r0
    }

    private static int j() {
            java.lang.String r0 = "FreeDataSize"
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()     // Catch: java.lang.Throwable -> L5a
            android.content.Context r1 = r1.d()     // Catch: java.lang.Throwable -> L5a
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L5a
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r1, r0, r2)     // Catch: java.lang.Throwable -> L5a
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L5a
            long r2 = r2.longValue()     // Catch: java.lang.Throwable -> L5a
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5a
            long r2 = r4 - r2
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 > 0) goto L2c
            int r2 = com.tkay.expressad.foundation.h.r.j     // Catch: java.lang.Throwable -> L5a
            r3 = -1
            if (r2 != r3) goto L5e
        L2c:
            java.io.File r2 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L5a
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L5a
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L5a
            int r2 = r3.getBlockSize()     // Catch: java.lang.Throwable -> L5a
            long r6 = (long) r2     // Catch: java.lang.Throwable -> L5a
            int r2 = r3.getAvailableBlocks()     // Catch: java.lang.Throwable -> L5a
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L5a
            long r2 = r2 * r6
            r6 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r6
            long r2 = r2 / r6
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L5a
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.foundation.h.r.j = r2     // Catch: java.lang.Throwable -> L5a
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L5a
            com.tkay.expressad.foundation.h.v.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L5a
            goto L5e
        L5a:
            r0 = move-exception
            r0.getMessage()
        L5e:
            int r0 = com.tkay.expressad.foundation.h.r.j
            return r0
    }

    private static long k() {
            java.io.File r0 = android.os.Environment.getDataDirectory()
            android.os.StatFs r1 = new android.os.StatFs
            java.lang.String r0 = r0.getPath()
            r1.<init>(r0)
            int r0 = r1.getBlockSize()
            long r2 = (long) r0
            int r0 = r1.getAvailableBlocks()
            long r0 = (long) r0
            long r0 = r0 * r2
            return r0
    }

    private static long l() {
            java.io.File r0 = android.os.Environment.getDataDirectory()
            android.os.StatFs r1 = new android.os.StatFs
            java.lang.String r0 = r0.getPath()
            r1.<init>(r0)
            int r0 = r1.getBlockSize()
            long r2 = (long) r0
            int r0 = r1.getBlockCount()
            long r0 = (long) r0
            long r0 = r0 * r2
            return r0
    }
}
