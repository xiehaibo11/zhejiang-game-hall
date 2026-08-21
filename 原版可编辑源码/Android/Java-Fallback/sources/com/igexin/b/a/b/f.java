package com.igexin.b.a.b;

public final class f {
    public static int a(int r2, byte[] r3, int r4) {
            int r0 = r2 >> 24
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r3[r4] = r0
            int r0 = r4 + 1
            int r1 = r2 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r3[r0] = r1
            int r0 = r4 + 2
            int r1 = r2 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r3[r0] = r1
            int r4 = r4 + 3
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r3[r4] = r2
            r2 = 4
            return r2
    }

    public static int a(long r6, byte[] r8, int r9) {
            r0 = 56
            long r0 = r6 >> r0
            r2 = 255(0xff, double:1.26E-321)
            long r0 = r0 & r2
            int r0 = (int) r0
            byte r0 = (byte) r0
            r8[r9] = r0
            int r0 = r9 + 1
            r1 = 48
            long r4 = r6 >> r1
            long r4 = r4 & r2
            int r1 = (int) r4
            byte r1 = (byte) r1
            r8[r0] = r1
            int r0 = r9 + 2
            r1 = 40
            long r4 = r6 >> r1
            long r4 = r4 & r2
            int r1 = (int) r4
            byte r1 = (byte) r1
            r8[r0] = r1
            int r0 = r9 + 3
            r1 = 32
            long r4 = r6 >> r1
            long r4 = r4 & r2
            int r1 = (int) r4
            byte r1 = (byte) r1
            r8[r0] = r1
            int r0 = r9 + 4
            r1 = 24
            long r4 = r6 >> r1
            long r4 = r4 & r2
            int r1 = (int) r4
            byte r1 = (byte) r1
            r8[r0] = r1
            int r0 = r9 + 5
            r1 = 16
            long r4 = r6 >> r1
            long r4 = r4 & r2
            int r1 = (int) r4
            byte r1 = (byte) r1
            r8[r0] = r1
            int r0 = r9 + 6
            r1 = 8
            long r4 = r6 >> r1
            long r4 = r4 & r2
            int r4 = (int) r4
            byte r4 = (byte) r4
            r8[r0] = r4
            int r9 = r9 + 7
            long r6 = r6 & r2
            int r6 = (int) r6
            byte r6 = (byte) r6
            r8[r9] = r6
            return r1
    }

    public static int a(byte[] r0, int r1) {
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    public static int a(byte[] r0, int r1, byte[] r2, int r3, int r4) {
            java.lang.System.arraycopy(r0, r1, r2, r3, r4)
            return r4
    }

    public static java.lang.String a(java.lang.String[] r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            r2 = r4[r1]
            java.lang.String r3 = ""
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L1a
            r1 = r4[r1]
            r0.append(r1)
            java.lang.String r1 = "://"
            r0.append(r1)
        L1a:
            r1 = 1
            r2 = r4[r1]
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L28
            r1 = r4[r1]
            r0.append(r1)
        L28:
            r1 = 2
            r2 = r4[r1]
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L3b
            r2 = 58
            r0.append(r2)
            r1 = r4[r1]
            r0.append(r1)
        L3b:
            r1 = 3
            r2 = r4[r1]
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L58
            r2 = r4[r1]
            r0.append(r2)
            r1 = r4[r1]
            java.lang.String r2 = "/"
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L58
            r1 = 47
            r0.append(r1)
        L58:
            r1 = 4
            r2 = r4[r1]
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L66
            r1 = r4[r1]
            r0.append(r1)
        L66:
            r1 = 5
            r2 = r4[r1]
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L79
            r2 = 63
            r0.append(r2)
            r4 = r4[r1]
            r0.append(r4)
        L79:
            java.lang.String r4 = r0.toString()
            return r4
    }

    private static void a(java.io.InputStream r3, java.io.OutputStream r4) {
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
        L4:
            int r1 = r3.read(r0)
            r2 = -1
            if (r1 == r2) goto L10
            r2 = 0
            r4.write(r0, r2, r1)
            goto L4
        L10:
            return
    }

    public static void a(java.io.InputStream r1, java.io.OutputStream r2, int r3) {
            com.igexin.b.a.b.a r0 = new com.igexin.b.a.b.a
            r0.<init>(r2, r3)
            a(r1, r0)
            r0.a()
            return
    }

    public static byte[] a(int r5) {
            r0 = 0
            r1 = r0
            r2 = r1
        L3:
            r3 = r5 & 127(0x7f, float:1.78E-43)
            r4 = 24
            int r3 = r3 << r4
            r1 = r1 | r3
            int r5 = r5 >>> 7
            int r2 = r2 + 1
            if (r5 <= 0) goto L14
            int r1 = r1 >>> 8
            r3 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 | r3
        L14:
            if (r5 > 0) goto L3
            byte[] r5 = new byte[r2]
        L18:
            if (r0 >= r2) goto L24
            int r3 = r1 >>> r4
            byte r3 = (byte) r3
            r5[r0] = r3
            int r4 = r4 + (-8)
            int r0 = r0 + 1
            goto L18
        L24:
            return r5
    }

    public static byte[] a(byte[] r0) {
            byte[] r0 = c(r0)
            return r0
    }

    public static java.lang.String[] a(java.lang.String r9) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = r9.toLowerCase()
            r0.<init>(r1)
            r1 = 6
            java.lang.String[] r2 = new java.lang.String[r1]
            r3 = 0
            r4 = r3
        Le:
            if (r4 >= r1) goto L17
            java.lang.String r5 = ""
            r2[r4] = r5
            int r4 = r4 + 1
            goto Le
        L17:
            java.lang.String r1 = ":"
            int r1 = r9.indexOf(r1)
            r4 = 1
            if (r1 <= 0) goto L2b
            java.lang.String r9 = r9.substring(r3, r1)
            r2[r3] = r9
            int r1 = r1 + r4
            r0.delete(r3, r1)
            goto L2d
        L2b:
            if (r1 == 0) goto Le1
        L2d:
            int r9 = r0.length()
            r1 = 2
            r5 = 47
            if (r9 < r1) goto L86
            char r9 = r0.charAt(r3)
            if (r9 != r5) goto L86
            char r9 = r0.charAt(r4)
            if (r9 != r5) goto L86
            r0.delete(r3, r1)
            java.lang.String r9 = r0.toString()
            int r9 = r9.indexOf(r5)
            if (r9 >= 0) goto L53
            int r9 = r0.length()
        L53:
            if (r9 == 0) goto L86
            java.lang.String r6 = r0.toString()
            r7 = 58
            int r6 = r6.lastIndexOf(r7)
            if (r6 < 0) goto L78
            if (r6 > r9) goto L70
            java.lang.String r7 = r0.toString()
            int r8 = r6 + 1
            java.lang.String r7 = r7.substring(r8, r9)
            r2[r1] = r7
            goto L79
        L70:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "url format error - port"
            r9.<init>(r0)
            throw r9
        L78:
            r6 = r9
        L79:
            java.lang.String r1 = r0.toString()
            java.lang.String r1 = r1.substring(r3, r6)
            r2[r4] = r1
            r0.delete(r3, r9)
        L86:
            int r9 = r0.length()
            r1 = 3
            if (r9 <= 0) goto Ldc
            java.lang.String r9 = r0.toString()
            int r0 = r9.lastIndexOf(r5)
            r5 = 63
            if (r0 <= 0) goto La0
            java.lang.String r6 = r9.substring(r3, r0)
            r2[r1] = r6
            goto Lb3
        La0:
            if (r0 != 0) goto Lb3
            int r0 = r9.indexOf(r5)
            if (r0 > 0) goto Lab
            r2[r1] = r9
            return r2
        Lab:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "url format error - path"
            r9.<init>(r0)
            throw r9
        Lb3:
            int r1 = r9.length()
            int r1 = r1 - r4
            if (r0 >= r1) goto Le0
            int r0 = r0 + r4
            int r1 = r9.length()
            java.lang.String r9 = r9.substring(r0, r1)
            int r0 = r9.indexOf(r5)
            r1 = 4
            if (r0 < 0) goto Ld9
            java.lang.String r3 = r9.substring(r3, r0)
            r2[r1] = r3
            r1 = 5
            int r0 = r0 + r4
            java.lang.String r9 = r9.substring(r0)
            r2[r1] = r9
            goto Le0
        Ld9:
            r2[r1] = r9
            goto Le0
        Ldc:
            java.lang.String r9 = "/"
            r2[r1] = r9
        Le0:
            return r2
        Le1:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "url format error - protocol"
            r9.<init>(r0)
            throw r9
    }

    public static int b(int r1, byte[] r2, int r3) {
            int r0 = r1 >> 8
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r2[r3] = r0
            int r3 = r3 + 1
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2[r3] = r1
            r1 = 2
            return r1
    }

    public static short b(byte[] r1, int r2) {
            r0 = r1[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            int r2 = r2 + 1
            r1 = r1[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 | r0
            short r1 = (short) r1
            return r1
    }

    public static byte[] b(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            int r1 = r3 >> 24
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r3 >> 16
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r1 = r3 >> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r1 = 3
            r0[r1] = r3
            return r0
    }

    public static byte[] b(byte[] r0) {
            byte[] r0 = d(r0)
            return r0
    }

    public static int c(int r0, byte[] r1, int r2) {
            byte r0 = (byte) r0
            r1[r2] = r0
            r0 = 1
            return r0
    }

    public static int c(byte[] r1, int r2) {
            r0 = r1[r2]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            int r2 = r2 + 1
            r1 = r1[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 | r0
            return r1
    }

    public static byte[] c(byte[] r3) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L1c
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L1c
            r2.write(r3)     // Catch: java.lang.Throwable -> L1d
            r2.finish()     // Catch: java.lang.Throwable -> L1d
            byte[] r1 = r0.toByteArray()     // Catch: java.lang.Throwable -> L1d
        L15:
            r2.close()     // Catch: java.lang.Exception -> L18
        L18:
            r0.close()     // Catch: java.lang.Exception -> L20
            goto L20
        L1c:
            r2 = r1
        L1d:
            if (r2 == 0) goto L18
            goto L15
        L20:
            return r1
    }

    public static int d(byte[] r2, int r3) {
            r0 = r2[r3]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            int r1 = r3 + 1
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r3 + 2
            r1 = r2[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r3 = r3 + 3
            r2 = r2[r3]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r2 = r2 | r0
            return r2
    }

    public static byte[] d(byte[] r5) {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r5)
            r5 = 0
            java.util.zip.GZIPInputStream r1 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L2b
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L29
            r2.<init>()     // Catch: java.lang.Throwable -> L29
        L10:
            int r3 = r1.read()     // Catch: java.lang.Throwable -> L2d
            r4 = -1
            if (r3 == r4) goto L1b
            r2.write(r3)     // Catch: java.lang.Throwable -> L2d
            goto L10
        L1b:
            byte[] r5 = r2.toByteArray()     // Catch: java.lang.Throwable -> L2d
            r2.close()     // Catch: java.lang.Exception -> L22
        L22:
            r1.close()     // Catch: java.lang.Exception -> L25
        L25:
            r0.close()     // Catch: java.lang.Exception -> L35
            goto L35
        L29:
            r2 = r5
            goto L2d
        L2b:
            r1 = r5
            r2 = r1
        L2d:
            if (r2 == 0) goto L32
            r2.close()     // Catch: java.lang.Exception -> L32
        L32:
            if (r1 == 0) goto L25
            goto L22
        L35:
            return r5
    }

    public static long e(byte[] r7, int r8) {
            r0 = r7[r8]
            long r0 = (long) r0
            r2 = 255(0xff, double:1.26E-321)
            long r0 = r0 & r2
            r4 = 56
            long r0 = r0 << r4
            int r4 = r8 + 1
            r4 = r7[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 48
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r8 + 2
            r4 = r7[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 40
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r8 + 3
            r4 = r7[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 32
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r8 + 4
            r4 = r7[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 24
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r8 + 5
            r4 = r7[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 16
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r4 = r8 + 6
            r4 = r7[r4]
            long r4 = (long) r4
            long r4 = r4 & r2
            r6 = 8
            long r4 = r4 << r6
            long r0 = r0 | r4
            int r8 = r8 + 7
            r7 = r7[r8]
            long r7 = (long) r7
            long r7 = r7 & r2
            long r7 = r7 | r0
            return r7
    }

    public static byte[] f(byte[] r3, int r4) {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r3)
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream
            r3.<init>()
            a(r0, r3, r4)     // Catch: java.lang.Throwable -> L18
            r0.close()     // Catch: java.lang.Throwable -> L10
        L10:
            r3.close()     // Catch: java.lang.Throwable -> L13
        L13:
            byte[] r3 = r3.toByteArray()
            return r3
        L18:
            r4 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "Unexpected I/O error"
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L21
            throw r1     // Catch: java.lang.Throwable -> L21
        L21:
            r4 = move-exception
            r0.close()     // Catch: java.lang.Throwable -> L25
        L25:
            r3.close()     // Catch: java.lang.Throwable -> L28
        L28:
            throw r4
    }
}
