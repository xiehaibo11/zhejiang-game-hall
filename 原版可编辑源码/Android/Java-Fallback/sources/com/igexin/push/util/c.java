package com.igexin.push.util;

public class c {
    public static void a() {
            java.lang.String r0 = "|"
            r1 = 0
            r2 = 0
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r4 = com.igexin.push.core.d.R     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            boolean r4 = r3.exists()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r4 != 0) goto L3a
            boolean r4 = r3.createNewFile()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r4 != 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r0.<init>()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r4 = "FileUtils | create file : "
            r0.append(r4)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r0.append(r3)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r3 = " failed !!!"
            r0.append(r3)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            com.igexin.push.util.h.a(r2)
            return
        L3a:
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r4 = com.igexin.push.core.d.R     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r2.<init>()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r4 = "v01"
            r2.append(r4)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r4 = com.igexin.push.core.d.z     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r2.append(r4)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r2)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            long r5 = com.igexin.push.core.d.t     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r5)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r0)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r2 = com.igexin.push.core.d.a     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r2)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r0)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r2 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r2)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r0)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r0 = r0.e(r2)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r4.append(r0)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            java.lang.String r2 = com.igexin.push.core.d.E     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            byte[] r0 = com.igexin.b.a.a.a.d(r0, r2)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            r3.write(r0)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L99
            com.igexin.push.util.h.a(r3)
            goto Lbc
        L96:
            r0 = move-exception
            r2 = r3
            goto Lbd
        L99:
            r0 = move-exception
            r2 = r3
            goto L9f
        L9c:
            r0 = move-exception
            goto Lbd
        L9e:
            r0 = move-exception
        L9f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c
            r3.<init>()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r4 = "FileUtils | "
            r3.append(r4)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9c
            r3.append(r0)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L9c
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L9c
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L9c
            com.igexin.push.util.h.a(r2)
        Lbc:
            return
        Lbd:
            com.igexin.push.util.h.a(r2)
            throw r0
    }

    public static void a(java.io.File r4, java.lang.String... r5) {
            boolean r0 = r4.exists()
            if (r0 == 0) goto L2e
            java.io.File[] r4 = r4.listFiles()
            if (r4 == 0) goto L2e
            int r0 = r4.length
            if (r0 <= 0) goto L2e
            r0 = 0
            if (r5 == 0) goto L16
            java.util.List r0 = java.util.Arrays.asList(r5)
        L16:
            int r5 = r4.length
            r1 = 0
        L18:
            if (r1 >= r5) goto L2e
            r2 = r4[r1]
            if (r0 == 0) goto L28
            java.lang.String r3 = r2.getName()
            boolean r3 = r0.contains(r3)
            if (r3 != 0) goto L2b
        L28:
            r2.delete()
        L2b:
            int r1 = r1 + 1
            goto L18
        L2e:
            return
    }

    public static void a(byte[] r3, java.lang.String r4, boolean r5) {
            r0 = 0
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L1e
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L1e
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L1e
            r1.<init>(r2, r5)     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L1e
            r1.write(r3)     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            r1.close()     // Catch: java.lang.Exception -> L23
            goto L23
        L12:
            r3 = move-exception
            r0 = r1
            goto L18
        L15:
            r0 = r1
            goto L1e
        L17:
            r3 = move-exception
        L18:
            if (r0 == 0) goto L1d
            r0.close()     // Catch: java.lang.Exception -> L1d
        L1d:
            throw r3
        L1e:
            if (r0 == 0) goto L23
            r0.close()     // Catch: java.lang.Exception -> L23
        L23:
            return
    }

    public static boolean a(android.content.Context r1) {
            com.igexin.sdk.a.c r0 = new com.igexin.sdk.a.c
            r0.<init>(r1)
            boolean r1 = r0.b()
            r1 = r1 ^ 1
            return r1
    }

    public static byte[] a(java.lang.String r6) {
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r0 = r0.exists()
            r1 = 0
            r2 = 0
            if (r0 != 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "FileUtils|get data from file = "
            r0.append(r3)
            r0.append(r6)
            java.lang.String r6 = " file not exist ######"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r6, r0)
            return r2
        L29:
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L58
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L58
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L52
            r6.<init>()     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L52
        L37:
            int r4 = r3.read(r0)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            r5 = -1
            if (r4 == r5) goto L42
            r6.write(r0, r1, r4)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            goto L37
        L42:
            byte[] r2 = r6.toByteArray()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            r3.close()     // Catch: java.lang.Exception -> L49
        L49:
            r6.close()     // Catch: java.lang.Exception -> L7d
            goto L7d
        L4d:
            r0 = move-exception
            goto L5b
        L4f:
            r0 = move-exception
            r6 = r2
            goto L7f
        L52:
            r0 = move-exception
            r6 = r2
            goto L5b
        L55:
            r0 = move-exception
            r6 = r2
            goto L80
        L58:
            r0 = move-exception
            r6 = r2
            r3 = r6
        L5b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r4.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r5 = "FileUtils|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7e
            r4.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L7e
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L7e
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L7e
            if (r3 == 0) goto L7a
            r3.close()     // Catch: java.lang.Exception -> L7a
        L7a:
            if (r6 == 0) goto L7d
            goto L49
        L7d:
            return r2
        L7e:
            r0 = move-exception
        L7f:
            r2 = r3
        L80:
            if (r2 == 0) goto L85
            r2.close()     // Catch: java.lang.Exception -> L85
        L85:
            if (r6 == 0) goto L8a
            r6.close()     // Catch: java.lang.Exception -> L8a
        L8a:
            throw r0
    }

    public static java.lang.String b() {
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r0 = r0.b(r1)
            return r0
    }

    public static java.lang.String b(android.content.Context r8) {
            r0 = 0
            r1 = 0
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            r4.<init>()     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.io.File r8 = r8.getFilesDir()     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.lang.String r8 = r8.getPath()     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            r4.append(r8)     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.lang.String r8 = "/"
            r4.append(r8)     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.lang.String r8 = "gt_safe.pid"
            r4.append(r8)     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            r3.<init>(r8)     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.lang.String r8 = "rw"
            r2.<init>(r3, r8)     // Catch: java.lang.Throwable -> Lc0 java.lang.Exception -> Lc5
            java.nio.channels.FileChannel r8 = r2.getChannel()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lbc
            java.nio.channels.FileLock r8 = r8.lock()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lbc
            boolean r3 = r8.isValid()     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            if (r3 == 0) goto La0
            r3 = 128(0x80, float:1.8E-43)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            r4.<init>()     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
        L43:
            int r5 = r2.read(r3)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            r6 = -1
            if (r5 == r6) goto L4e
            r4.write(r3, r1, r5)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            goto L43
        L4e:
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            byte[] r4 = r4.toByteArray()     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            r0.<init>()     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            java.lang.String r4 = "FileUtils|old safeCode = "
            r0.append(r4)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            r0.append(r3)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            com.igexin.b.a.c.b.a(r0, r4)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            if (r0 == 0) goto L99
            r0 = 16
            java.lang.String r0 = com.igexin.push.util.l.a(r0)     // Catch: java.lang.Exception -> L9b java.lang.Throwable -> Laf
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            r3.<init>()     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            java.lang.String r4 = "FileUtils|new safeCode = "
            r3.append(r4)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            r3.append(r0)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            java.lang.String r3 = "utf-8"
            byte[] r3 = r0.getBytes(r3)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            r2.write(r3)     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb1
            goto La0
        L99:
            r0 = r3
            goto La0
        L9b:
            r0 = move-exception
            r7 = r2
            r2 = r0
            r0 = r7
            goto Lc9
        La0:
            com.igexin.push.util.h.a(r2)
            if (r8 == 0) goto Lf2
            boolean r1 = r8.isValid()
            if (r1 == 0) goto Lf2
            r8.release()     // Catch: java.io.IOException -> Lf2
            goto Lf2
        Laf:
            r0 = move-exception
            goto Lf6
        Lb1:
            r3 = move-exception
            r7 = r3
            r3 = r0
            r0 = r2
            r2 = r7
            goto Lc9
        Lb7:
            r8 = move-exception
            r7 = r0
            r0 = r8
            r8 = r7
            goto Lf6
        Lbc:
            r3 = move-exception
            r8 = r0
            r0 = r2
            goto Lc7
        Lc0:
            r8 = move-exception
            r2 = r0
            r0 = r8
            r8 = r2
            goto Lf6
        Lc5:
            r3 = move-exception
            r8 = r0
        Lc7:
            r2 = r3
            r3 = r8
        Lc9:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r4.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = "FileUtils|get safeCode err = "
            r4.append(r5)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf3
            r4.append(r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> Lf3
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lf3
            com.igexin.b.a.c.b.a(r2, r1)     // Catch: java.lang.Throwable -> Lf3
            com.igexin.push.util.h.a(r0)
            if (r8 == 0) goto Lf1
            boolean r0 = r8.isValid()
            if (r0 == 0) goto Lf1
            r8.release()     // Catch: java.io.IOException -> Lf1
        Lf1:
            r0 = r3
        Lf2:
            return r0
        Lf3:
            r1 = move-exception
            r2 = r0
            r0 = r1
        Lf6:
            com.igexin.push.util.h.a(r2)
            if (r8 == 0) goto L104
            boolean r1 = r8.isValid()
            if (r1 == 0) goto L104
            r8.release()     // Catch: java.io.IOException -> L104
        L104:
            throw r0
    }

    public static java.lang.String c() {
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r0 = r0.a(r1)
            return r0
    }

    public static java.lang.String c(android.content.Context r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "gtpush"
            java.io.File r2 = r2.getExternalFilesDir(r1)
            r0.append(r2)
            java.lang.String r2 = "/log/"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static long d() {
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            long r0 = r0.c(r1)
            return r0
    }

    public static void e() {
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r2 = com.igexin.push.core.d.A
            r0.a(r1, r2)
            return
    }

    public static void f() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.io.File r1 = r1.getFilesDir()
            java.lang.String r1 = r1.getPath()
            r0.append(r1)
            java.lang.String r1 = "/init.pid"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            r2 = 0
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            if (r3 == 0) goto L52
            java.lang.String r3 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            int r4 = r3.length     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            r5 = r1
        L32:
            int r6 = r3.length     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            if (r5 >= r6) goto L42
            r6 = r3[r5]     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            byte[] r7 = com.igexin.push.core.d.V     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            r7 = r7[r5]     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            r6 = r6 ^ r7
            byte r6 = (byte) r6     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            r4[r5] = r6     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            int r5 = r5 + 1
            goto L32
        L42:
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L58 java.lang.Exception -> L5a
            r3.write(r4)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4f
            r2 = r3
            goto L52
        L4c:
            r0 = move-exception
            r2 = r3
            goto L79
        L4f:
            r0 = move-exception
            r2 = r3
            goto L5b
        L52:
            if (r2 == 0) goto L78
        L54:
            r2.close()     // Catch: java.lang.Exception -> L78
            goto L78
        L58:
            r0 = move-exception
            goto L79
        L5a:
            r0 = move-exception
        L5b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            r3.<init>()     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = "FileUtils|"
            r3.append(r4)     // Catch: java.lang.Throwable -> L58
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L58
            r3.append(r0)     // Catch: java.lang.Throwable -> L58
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L58
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L58
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L58
            if (r2 == 0) goto L78
            goto L54
        L78:
            return
        L79:
            if (r2 == 0) goto L7e
            r2.close()     // Catch: java.lang.Exception -> L7e
        L7e:
            throw r0
    }
}
