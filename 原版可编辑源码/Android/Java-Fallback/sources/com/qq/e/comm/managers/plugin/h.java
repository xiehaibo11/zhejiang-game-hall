package com.qq.e.comm.managers.plugin;

class h {
    private static java.lang.String a;
    private static java.lang.String b;

    static {
            java.lang.String r0 = "e_qq_com_plugin"
            java.lang.String r0 = com.qq.e.comm.managers.plugin.b.a(r0)
            com.qq.e.comm.managers.plugin.h.a = r0
            java.lang.String r0 = "e_qq_com_dex"
            java.lang.String r0 = com.qq.e.comm.managers.plugin.b.a(r0)
            com.qq.e.comm.managers.plugin.h.b = r0
            return
    }

    static java.io.File a(android.content.Context r2) {
            java.lang.String r0 = com.qq.e.comm.managers.plugin.h.b
            r1 = 0
            java.io.File r2 = r2.getDir(r0, r1)
            return r2
    }

    static java.lang.String a() {
            java.lang.String r0 = "gdt_plugin"
            return r0
    }

    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Exception -> L5
        L5:
            return
    }

    static void a(java.lang.String r3, java.io.File r4) throws java.io.IOException {
            if (r4 == 0) goto L2d
            java.io.File r0 = r4.getParentFile()
            if (r0 == 0) goto L11
            boolean r1 = r0.exists()
            if (r1 != 0) goto L11
            r0.mkdirs()
        L11:
            r0 = 0
            java.io.OutputStreamWriter r1 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> L28
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L28
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = "UTF-8"
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L28
            r1.write(r3)     // Catch: java.lang.Throwable -> L25
            a(r1)
            return
        L25:
            r3 = move-exception
            r0 = r1
            goto L29
        L28:
            r3 = move-exception
        L29:
            a(r0)
            throw r3
        L2d:
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r4 = "Target File Can not be null in StringUtil.writeTo"
            r3.<init>(r4)
            throw r3
    }

    public static boolean a(java.io.File r2, java.io.File r3) {
            r0 = 0
            if (r2 == 0) goto L1d
            boolean r1 = r2.exists()
            if (r1 != 0) goto La
            goto L1d
        La:
            boolean r1 = r2.renameTo(r3)
            if (r1 != 0) goto L1b
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1a
            boolean r2 = a(r1, r3)     // Catch: java.lang.Throwable -> L1a
            return r2
        L1a:
            return r0
        L1b:
            r2 = 1
            return r2
        L1d:
            return r0
    }

    public static boolean a(java.io.InputStream r4, java.io.File r5) throws java.lang.Throwable {
            r0 = 0
            if (r4 == 0) goto L65
            if (r5 != 0) goto L6
            goto L65
        L6:
            r1 = 0
            java.io.File r2 = r5.getParentFile()     // Catch: java.lang.Throwable -> L56
            if (r2 == 0) goto L38
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L56
            if (r3 != 0) goto L38
            boolean r3 = r2.mkdirs()     // Catch: java.lang.Throwable -> L56
            if (r3 != 0) goto L38
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56
            r5.<init>()     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "parent dir not exists "
            r5.append(r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L56
            r5.append(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L56
            com.qq.e.comm.util.GDTLogger.e(r5)     // Catch: java.lang.Throwable -> L56
            a(r4)
            a(r1)
            return r0
        L38:
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L56
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L56
            r5 = 16384(0x4000, float:2.2959E-41)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L53
        L41:
            int r1 = r4.read(r5)     // Catch: java.lang.Throwable -> L53
            if (r1 <= 0) goto L4b
            r2.write(r5, r0, r1)     // Catch: java.lang.Throwable -> L53
            goto L41
        L4b:
            a(r4)
            a(r2)
            r4 = 1
            return r4
        L53:
            r5 = move-exception
            r1 = r2
            goto L57
        L56:
            r5 = move-exception
        L57:
            java.lang.String r0 = "Exception while copy from InputStream to File"
            com.qq.e.comm.util.GDTLogger.e(r0, r5)     // Catch: java.lang.Throwable -> L5d
            throw r5     // Catch: java.lang.Throwable -> L5d
        L5d:
            r5 = move-exception
            a(r4)
            a(r1)
            throw r5
        L65:
            return r0
    }

    static java.io.File b(android.content.Context r3) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.qq.e.comm.managers.plugin.h.a
            r2 = 0
            java.io.File r3 = r3.getDir(r1, r2)
            java.lang.String r1 = "update_lc"
            r0.<init>(r3, r1)
            return r0
    }

    static java.io.File c(android.content.Context r3) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.qq.e.comm.managers.plugin.h.a
            r2 = 0
            java.io.File r3 = r3.getDir(r1, r2)
            java.lang.String r1 = "gdt_plugin.next"
            r0.<init>(r3, r1)
            return r0
    }

    static java.io.File d(android.content.Context r3) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.qq.e.comm.managers.plugin.h.a
            r2 = 0
            java.io.File r3 = r3.getDir(r1, r2)
            java.lang.String r1 = "gdt_plugin.next.sig"
            r0.<init>(r3, r1)
            return r0
    }

    static java.io.File e(android.content.Context r3) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.qq.e.comm.managers.plugin.h.a
            r2 = 0
            java.io.File r3 = r3.getDir(r1, r2)
            java.lang.String r1 = "gdt_plugin.jar"
            r0.<init>(r3, r1)
            return r0
    }

    static java.io.File f(android.content.Context r3) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.qq.e.comm.managers.plugin.h.a
            r2 = 0
            java.io.File r3 = r3.getDir(r1, r2)
            java.lang.String r1 = "gdt_plugin.jar.sig"
            r0.<init>(r3, r1)
            return r0
    }
}
