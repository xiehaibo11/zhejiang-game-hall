package com.bytedance.pangle.d;

public final class c {
    private static java.io.File a;
    private static java.io.File b;
    private static java.io.File c;

    static {
            return
    }

    public static java.lang.String a() {
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.io.File r1 = com.bytedance.pangle.d.c.b
            if (r1 != 0) goto L2d
            com.bytedance.pangle.GlobalParam r1 = com.bytedance.pangle.GlobalParam.getInstance()
            java.io.File r1 = r1.getDownloadDir()
            if (r1 != 0) goto L2b
            java.io.File r1 = new java.io.File
            java.io.File r0 = r0.getFilesDir()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = ".pangle"
            r2.<init>(r3)
            java.lang.String r3 = com.bytedance.pangle.g.b
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r0, r2)
        L2b:
            com.bytedance.pangle.d.c.b = r1
        L2d:
            java.io.File r0 = com.bytedance.pangle.d.c.b
            java.lang.String r0 = a(r0)
            return r0
    }

    private static java.lang.String a(java.io.File r1) {
            if (r1 == 0) goto L10
            boolean r0 = r1.exists()
            if (r0 != 0) goto Lb
            r1.mkdirs()
        Lb:
            java.lang.String r1 = r1.getPath()
            return r1
        L10:
            r1 = 0
            return r1
    }

    public static java.lang.String a(java.lang.String r2) {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = a(r0)
            return r2
    }

    public static java.lang.String a(java.lang.String r4, int r5) {
            d()
            java.io.File r0 = com.bytedance.pangle.d.c.a
            r1 = 2
            java.lang.String[] r2 = new java.lang.String[r1]
            r3 = 0
            r2[r3] = r4
            java.lang.String r4 = java.lang.String.valueOf(r5)
            java.lang.String r5 = "version-"
            java.lang.String r4 = r5.concat(r4)
            r5 = 1
            r2[r5] = r4
        L18:
            if (r3 >= r1) goto L2b
            r4 = r2[r3]
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L28
            java.io.File r5 = new java.io.File
            r5.<init>(r0, r4)
            r0 = r5
        L28:
            int r3 = r3 + 1
            goto L18
        L2b:
            if (r0 == 0) goto L32
            java.lang.String r4 = r0.getPath()
            return r4
        L32:
            r4 = 0
            return r4
    }

    private static java.lang.String a(java.lang.String... r5) {
            d()
            java.io.File r0 = com.bytedance.pangle.d.c.a
            int r1 = r5.length
            if (r1 <= 0) goto L1d
            int r1 = r5.length
            r2 = 0
        La:
            if (r2 >= r1) goto L1d
            r3 = r5[r2]
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L1a
            java.io.File r4 = new java.io.File
            r4.<init>(r0, r3)
            r0 = r4
        L1a:
            int r2 = r2 + 1
            goto La
        L1d:
            java.lang.String r5 = a(r0)
            return r5
    }

    public static java.lang.String b() {
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.io.File r1 = com.bytedance.pangle.d.c.c
            if (r1 != 0) goto L23
            java.io.File r1 = new java.io.File
            java.io.File r0 = r0.getFilesDir()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = ".pangle"
            r2.<init>(r3)
            java.lang.String r3 = com.bytedance.pangle.g.a
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r0, r2)
            com.bytedance.pangle.d.c.c = r1
        L23:
            java.io.File r0 = com.bytedance.pangle.d.c.c
            java.lang.String r0 = a(r0)
            return r0
    }

    public static java.lang.String b(java.lang.String r2, int r3) {
            r0 = 3
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "version-"
            java.lang.String r2 = r3.concat(r2)
            r3 = 1
            r0[r3] = r2
            r2 = 2
            java.lang.String r3 = "apk"
            r0[r2] = r3
            java.lang.String r2 = a(r0)
            java.io.File r3 = new java.io.File
            java.lang.String r0 = "base-1.apk"
            r3.<init>(r2, r0)
            java.lang.String r2 = r3.getPath()
            return r2
    }

    public static java.lang.String c() {
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r1 = "mounted"
            java.lang.String r2 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> L2b
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L2b
            if (r1 == 0) goto L2f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = ".pangle"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = com.bytedance.pangle.g.b     // Catch: java.lang.Exception -> L2b
            r1.append(r2)     // Catch: java.lang.Exception -> L2b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2b
            java.io.File r0 = r0.getExternalFilesDir(r1)     // Catch: java.lang.Exception -> L2b
            if (r0 == 0) goto L2f
            java.lang.String r0 = a(r0)     // Catch: java.lang.Exception -> L2b
            return r0
        L2b:
            r0 = move-exception
            r0.printStackTrace()
        L2f:
            r0 = 0
            return r0
    }

    public static java.lang.String c(java.lang.String r6, int r7) {
            boolean r0 = com.bytedance.pangle.util.i.h()
            r1 = 2
            java.lang.String r2 = "version-"
            r3 = 1
            r4 = 0
            r5 = 3
            if (r0 == 0) goto L2f
            r0 = 5
            java.lang.String[] r0 = new java.lang.String[r0]
            r0[r4] = r6
            java.lang.String r6 = java.lang.String.valueOf(r7)
            java.lang.String r6 = r2.concat(r6)
            r0[r3] = r6
            java.lang.String r6 = "apk"
            r0[r1] = r6
            java.lang.String r6 = "oat"
            r0[r5] = r6
            r6 = 4
            java.lang.String r7 = com.bytedance.pangle.e.b.a()
            r0[r6] = r7
            java.lang.String r6 = a(r0)
            return r6
        L2f:
            java.lang.String[] r0 = new java.lang.String[r5]
            r0[r4] = r6
            java.lang.String r6 = java.lang.String.valueOf(r7)
            java.lang.String r6 = r2.concat(r6)
            r0[r3] = r6
            java.lang.String r6 = "dalvik-cache"
            r0[r1] = r6
            java.lang.String r6 = a(r0)
            return r6
    }

    public static java.lang.String d(java.lang.String r2, int r3) {
            r0 = 3
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "version-"
            java.lang.String r2 = r3.concat(r2)
            r3 = 1
            r0[r3] = r2
            r2 = 2
            java.lang.String r3 = "lib"
            r0[r2] = r3
            java.lang.String r2 = a(r0)
            return r2
    }

    private static void d() {
            java.io.File r0 = com.bytedance.pangle.d.c.a
            if (r0 != 0) goto L26
            java.io.File r0 = new java.io.File
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()
            java.io.File r1 = r1.getFilesDir()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "pangle"
            r2.<init>(r3)
            java.lang.String r3 = com.bytedance.pangle.g.c
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            com.bytedance.pangle.d.c.a = r0
            a(r0)
        L26:
            return
    }

    public static java.lang.String e(java.lang.String r2, int r3) {
            r0 = 4
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "version-"
            java.lang.String r2 = r3.concat(r2)
            r3 = 1
            r0[r3] = r2
            r2 = 2
            java.lang.String r3 = "apk"
            r0[r2] = r3
            r2 = 3
            java.lang.String r3 = "temp"
            r0[r2] = r3
            java.lang.String r2 = a(r0)
            java.io.File r3 = new java.io.File
            java.lang.String r0 = "base-1.apk"
            r3.<init>(r2, r0)
            java.lang.String r2 = r3.getPath()
            return r2
    }

    public static java.lang.String f(java.lang.String r2, int r3) {
            r0 = 3
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "version-"
            java.lang.String r2 = r3.concat(r2)
            r3 = 1
            r0[r3] = r2
            r2 = 2
            java.lang.String r3 = "apk"
            r0[r2] = r3
            java.lang.String r2 = a(r0)
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            java.lang.String r2 = r3.getPath()
            return r2
    }

    public static java.lang.String g(java.lang.String r2, int r3) {
            r0 = 4
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "version-"
            java.lang.String r2 = r3.concat(r2)
            r3 = 1
            r0[r3] = r2
            r2 = 2
            java.lang.String r3 = "apk"
            r0[r2] = r3
            r2 = 3
            java.lang.String r3 = "temp"
            r0[r2] = r3
            java.lang.String r2 = a(r0)
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            java.lang.String r2 = r3.getPath()
            return r2
    }

    public static java.lang.String h(java.lang.String r6, int r7) {
            boolean r0 = com.bytedance.pangle.util.i.h()
            r1 = 2
            java.lang.String r2 = "version-"
            r3 = 1
            r4 = 0
            r5 = 3
            if (r0 == 0) goto L34
            r0 = 6
            java.lang.String[] r0 = new java.lang.String[r0]
            r0[r4] = r6
            java.lang.String r6 = java.lang.String.valueOf(r7)
            java.lang.String r6 = r2.concat(r6)
            r0[r3] = r6
            java.lang.String r6 = "apk"
            r0[r1] = r6
            java.lang.String r6 = "temp"
            r0[r5] = r6
            r6 = 4
            java.lang.String r7 = "oat"
            r0[r6] = r7
            r6 = 5
            java.lang.String r7 = com.bytedance.pangle.e.b.a()
            r0[r6] = r7
            java.lang.String r6 = a(r0)
            return r6
        L34:
            java.lang.String[] r0 = new java.lang.String[r5]
            r0[r4] = r6
            java.lang.String r6 = java.lang.String.valueOf(r7)
            java.lang.String r6 = r2.concat(r6)
            r0[r3] = r6
            java.lang.String r6 = "dalvik-cache"
            r0[r1] = r6
            java.lang.String r6 = a(r0)
            return r6
    }

    public static java.lang.String i(java.lang.String r2, int r3) {
            r0 = 3
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = java.lang.String.valueOf(r3)
            java.lang.String r3 = "version-"
            java.lang.String r2 = r3.concat(r2)
            r3 = 1
            r0[r3] = r2
            r2 = 2
            java.lang.String r3 = "secondary-dexes"
            r0[r2] = r3
            java.lang.String r2 = a(r0)
            return r2
    }
}
