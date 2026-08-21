package com.mbridge.msdk.foundation.tools;

public final class ac {
    static boolean a = false;
    static java.lang.String b = "";
    public static char[] c = null;
    private static boolean d = false;
    private static int e = -1;
    private static int f = -1;
    private static int g = -1;
    private static int h = -1;

    static {
            r0 = 14
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [80, 97, 99, 107, 97, 103, 101, 77, 97, 110, 97, 103, 101, 114} // fill-array
            com.mbridge.msdk.foundation.tools.ac.c = r0
            return
    }

    public static int a() {
            java.lang.String r0 = "freeExternalSize"
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L46
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L46
            r2 = 0
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L46
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r1, r0, r2)     // Catch: java.lang.Throwable -> L46
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L46
            long r2 = r2.longValue()     // Catch: java.lang.Throwable -> L46
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L46
            long r2 = r4 - r2
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 > 0) goto L2c
            int r2 = com.mbridge.msdk.foundation.tools.ac.f     // Catch: java.lang.Throwable -> L46
            r3 = -1
            if (r2 != r3) goto L50
        L2c:
            long r2 = d()     // Catch: java.lang.Throwable -> L46
            r6 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r6
            long r2 = r2 / r6
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L46
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L46
            com.mbridge.msdk.foundation.tools.ac.f = r2     // Catch: java.lang.Throwable -> L46
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L46
            com.mbridge.msdk.foundation.tools.ag.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L46
            goto L50
        L46:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "SameSDCardTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L50:
            int r0 = com.mbridge.msdk.foundation.tools.ac.f
            return r0
    }

    private static java.io.File a(java.io.File r3) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.UUID r2 = java.util.UUID.randomUUID()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r3, r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L23
            r0.delete()
        L23:
            boolean r1 = r0.mkdirs()
            if (r1 == 0) goto L31
            r0.delete()
            java.io.File r3 = r3.getAbsoluteFile()
            goto L32
        L31:
            r3 = 0
        L32:
            return r3
    }

    public static void a(android.content.Context r2) {
            boolean r0 = com.mbridge.msdk.foundation.tools.ac.d
            if (r0 != 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L26
            r0.<init>()     // Catch: java.lang.Exception -> L26
            java.io.File r1 = r2.getFilesDir()     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Exception -> L26
            r0.append(r1)     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Exception -> L26
            r0.append(r1)     // Catch: java.lang.Exception -> L26
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L26
            com.mbridge.msdk.foundation.tools.ac.b = r0     // Catch: java.lang.Exception -> L26
            r0 = 0
            com.mbridge.msdk.foundation.tools.ac.a = r0     // Catch: java.lang.Exception -> L26
            b(r2)     // Catch: java.lang.Exception -> L26
            goto L44
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L44
            r0.<init>()     // Catch: java.lang.Exception -> L44
            java.io.File r1 = r2.getFilesDir()     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Exception -> L44
            r0.append(r1)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Exception -> L44
            r0.append(r1)     // Catch: java.lang.Exception -> L44
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L44
            com.mbridge.msdk.foundation.tools.ac.b = r0     // Catch: java.lang.Exception -> L44
            b(r2)     // Catch: java.lang.Exception -> L44
        L44:
            r2 = 1
            com.mbridge.msdk.foundation.tools.ac.d = r2
        L47:
            return
    }

    public static int b() {
            int r0 = com.mbridge.msdk.foundation.tools.ac.e
            r1 = -1
            if (r0 != r1) goto L23
            java.lang.Long r0 = new java.lang.Long     // Catch: java.lang.Throwable -> L19
            long r1 = e()     // Catch: java.lang.Throwable -> L19
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            long r1 = r1 / r3
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L19
            com.mbridge.msdk.foundation.tools.ac.e = r0     // Catch: java.lang.Throwable -> L19
            goto L23
        L19:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "SameSDCardTool"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L23:
            int r0 = com.mbridge.msdk.foundation.tools.ac.e
            return r0
    }

    private static void b(android.content.Context r1) {
            java.lang.String r1 = c(r1)
            com.mbridge.msdk.foundation.same.b.d r0 = new com.mbridge.msdk.foundation.same.b.d
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.b.e.a(r0)
            com.mbridge.msdk.foundation.same.b.e r1 = com.mbridge.msdk.foundation.same.b.e.a()
            r1.b()
            return
    }

    private static java.lang.String c(android.content.Context r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 18
            if (r0 < r2) goto L1a
            java.io.File r0 = r6.getExternalFilesDir(r1)     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L1a
            java.io.File r0 = a(r0)     // Catch: java.lang.Throwable -> L12
            goto L1b
        L12:
            r0 = move-exception
            java.lang.String r2 = "common-exception"
            java.lang.String r3 = "hasSDCard is failed"
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r0)
        L1a:
            r0 = r1
        L1b:
            boolean r2 = com.mbridge.msdk.foundation.tools.ac.a
            if (r2 == 0) goto L6f
            if (r0 != 0) goto L5e
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
        L5e:
            long r2 = d()
            r4 = 31457280(0x1e00000, double:1.55419614E-316)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L6b
            r2 = 1
            goto L6c
        L6b:
            r2 = 0
        L6c:
            if (r2 != 0) goto L6f
            goto L70
        L6f:
            r1 = r0
        L70:
            if (r1 == 0) goto L78
            boolean r0 = r1.exists()
            if (r0 != 0) goto L80
        L78:
            java.io.File r6 = r6.getFilesDir()
            java.io.File r1 = r6.getAbsoluteFile()
        L80:
            java.lang.String r6 = r1.getAbsolutePath()
            return r6
    }

    private static boolean c() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = "mounted"
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Exception -> Le
            if (r0 == 0) goto L15
            r0 = 1
            return r0
        Le:
            java.lang.String r0 = ""
            java.lang.String r1 = "hasSDCard is failed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L15:
            r0 = 0
            return r0
    }

    private static long d() {
            boolean r0 = c()
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

    private static long e() {
            boolean r0 = c()
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
}
