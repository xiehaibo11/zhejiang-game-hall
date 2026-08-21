package com.kwad.sdk.crash.utils;

public final class h {
    public static final char aBU = 0;
    public static final java.lang.String aBV = null;

    static {
            char r0 = java.io.File.separatorChar
            com.kwad.sdk.crash.utils.h.aBU = r0
            r0 = 0
            com.kwad.sdk.crash.utils.StringBuilderWriter r1 = new com.kwad.sdk.crash.utils.StringBuilderWriter     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2f
            r2 = 4
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2f
            java.io.PrintWriter r2 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L25
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L25
            r2.println()     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L41
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L1e java.lang.Throwable -> L41
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            goto L3e
        L1e:
            r0 = move-exception
            goto L33
        L20:
            r2 = move-exception
            r3 = r2
            r2 = r0
            r0 = r3
            goto L42
        L25:
            r2 = move-exception
            r3 = r2
            r2 = r0
            r0 = r3
            goto L33
        L2a:
            r1 = move-exception
            r2 = r0
            r0 = r1
            r1 = r2
            goto L42
        L2f:
            r1 = move-exception
            r2 = r0
            r0 = r1
            r1 = r2
        L33:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L41
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            java.lang.String r0 = "\n"
        L3e:
            com.kwad.sdk.crash.utils.h.aBV = r0
            return
        L41:
            r0 = move-exception
        L42:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }

    public static java.lang.String F(android.content.Context r1, java.lang.String r2) {
            r0 = 0
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.lang.Throwable -> L19
            java.io.InputStream r0 = r1.open(r2)     // Catch: java.lang.Throwable -> L19
            java.nio.charset.Charset r1 = java.nio.charset.Charset.defaultCharset()     // Catch: java.lang.Throwable -> L19
            java.nio.charset.Charset r1 = com.kwad.sdk.crash.utils.a.a(r1)     // Catch: java.lang.Throwable -> L19
            java.lang.String r1 = a(r0, r1)     // Catch: java.lang.Throwable -> L19
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r1
        L19:
            r1 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r1
    }

    public static java.lang.String I(java.io.File r3) {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream
            java.io.FileInputStream r2 = new java.io.FileInputStream
            r2.<init>(r3)
            r1.<init>(r2)
            java.nio.charset.Charset r3 = com.kwad.sdk.crash.utils.a.UTF_8
            r0.<init>(r1, r3)
            java.lang.String r3 = a(r0)
            return r3
    }

    public static long J(java.io.File r5) {
            boolean r0 = r5.exists()     // Catch: java.lang.Exception -> L2b
            if (r0 == 0) goto L2b
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Exception -> L2b
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Exception -> L2b
            r0.<init>(r5)     // Catch: java.lang.Exception -> L2b
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L2b
            r1 = 18
            if (r5 >= r1) goto L21
            int r5 = r0.getBlockSize()     // Catch: java.lang.Exception -> L2b
            long r1 = (long) r5     // Catch: java.lang.Exception -> L2b
            int r5 = r0.getAvailableBlocks()     // Catch: java.lang.Exception -> L2b
            long r3 = (long) r5     // Catch: java.lang.Exception -> L2b
            long r1 = r1 * r3
            return r1
        L21:
            long r1 = r0.getBlockSizeLong()     // Catch: java.lang.Exception -> L2b
            long r3 = r0.getAvailableBlocksLong()     // Catch: java.lang.Exception -> L2b
            long r1 = r1 * r3
            return r1
        L2b:
            r0 = 0
            return r0
    }

    public static long K(java.io.File r5) {
            boolean r0 = r5.exists()     // Catch: java.lang.Exception -> L2b
            if (r0 == 0) goto L2b
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Exception -> L2b
            java.lang.String r5 = r5.getAbsolutePath()     // Catch: java.lang.Exception -> L2b
            r0.<init>(r5)     // Catch: java.lang.Exception -> L2b
            int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L2b
            r1 = 18
            if (r5 >= r1) goto L21
            int r5 = r0.getBlockSize()     // Catch: java.lang.Exception -> L2b
            long r1 = (long) r5     // Catch: java.lang.Exception -> L2b
            int r5 = r0.getBlockCount()     // Catch: java.lang.Exception -> L2b
            long r3 = (long) r5     // Catch: java.lang.Exception -> L2b
            long r1 = r1 * r3
            return r1
        L21:
            long r1 = r0.getBlockSizeLong()     // Catch: java.lang.Exception -> L2b
            long r3 = r0.getBlockCountLong()     // Catch: java.lang.Exception -> L2b
            long r1 = r1 * r3
            return r1
        L2b:
            r0 = 0
            return r0
    }

    private static int a(java.io.Reader r2, java.io.Writer r3) {
            long r2 = b(r2, r3)
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r2 = -1
            return r2
        Ld:
            int r2 = (int) r2
            return r2
    }

    private static long a(java.io.InputStream r4, java.io.OutputStream r5, byte[] r6) {
            r0 = 0
        L2:
            r2 = -1
            int r3 = r4.read(r6)
            if (r2 == r3) goto L10
            r2 = 0
            r5.write(r6, r2, r3)
            long r2 = (long) r3
            long r0 = r0 + r2
            goto L2
        L10:
            return r0
    }

    private static long a(java.io.Reader r4, java.io.Writer r5, char[] r6) {
            r0 = 0
        L2:
            r2 = -1
            int r3 = r4.read(r6)
            if (r2 == r3) goto L10
            r2 = 0
            r5.write(r6, r2, r3)
            long r2 = (long) r3
            long r0 = r0 + r2
            goto L2
        L10:
            return r0
    }

    public static java.lang.String a(java.io.InputStream r4) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r1]
        L9:
            int r2 = r4.read(r1)     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L2d
            r3 = -1
            if (r2 == r3) goto L15
            r3 = 0
            r0.write(r1, r3, r2)     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L2d
            goto L9
        L15:
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L2d
            byte[] r2 = r0.toByteArray()     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L2d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L25 java.io.IOException -> L2d
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r1
        L25:
            r1 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r1
        L2d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            r4 = 0
            return r4
    }

    public static java.lang.String a(java.io.InputStream r1, java.nio.charset.Charset r2) {
            com.kwad.sdk.crash.utils.StringBuilderWriter r0 = new com.kwad.sdk.crash.utils.StringBuilderWriter
            r0.<init>()
            a(r1, r0, r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    private static java.lang.String a(java.io.Reader r5) {
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            java.io.StringWriter r1 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L27
            r1.<init>()     // Catch: java.lang.Throwable -> L27
            r0 = 1024(0x400, float:1.435E-42)
            char[] r0 = new char[r0]     // Catch: java.lang.Throwable -> L25
        Le:
            int r2 = r5.read(r0)     // Catch: java.lang.Throwable -> L25
            r3 = -1
            if (r2 == r3) goto L1a
            r3 = 0
            r1.write(r0, r3, r2)     // Catch: java.lang.Throwable -> L25
            goto Le
        L1a:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L25
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L25:
            r0 = move-exception
            goto L2b
        L27:
            r1 = move-exception
            r4 = r1
            r1 = r0
            r0 = r4
        L2b:
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }

    private static void a(java.io.InputStream r1, java.io.Writer r2, java.nio.charset.Charset r3) {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.nio.charset.Charset r3 = com.kwad.sdk.crash.utils.a.a(r3)
            r0.<init>(r1, r3)
            a(r0, r2)
            return
    }

    public static void a(java.lang.String r0, java.io.OutputStream r1, java.nio.charset.Charset r2) {
            if (r0 == 0) goto Ld
            java.nio.charset.Charset r2 = com.kwad.sdk.crash.utils.a.a(r2)
            byte[] r0 = r0.getBytes(r2)
            r1.write(r0)
        Ld:
            return
    }

    private static long b(java.io.Reader r1, java.io.Writer r2) {
            r0 = 4096(0x1000, float:5.74E-42)
            char[] r0 = new char[r0]
            long r1 = a(r1, r2, r0)
            return r1
    }

    public static java.lang.String b(java.io.Reader r1) {
            com.kwad.sdk.crash.utils.StringBuilderWriter r0 = new com.kwad.sdk.crash.utils.StringBuilderWriter
            r0.<init>()
            a(r1, r0)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String c(java.io.InputStream r4) {
            r0 = 0
            java.io.InputStreamReader r1 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L1f
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L1f
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L1a
            r2 = 1024(0x400, float:1.435E-42)
            r4.<init>(r1, r2)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = a(r4)     // Catch: java.lang.Throwable -> L18
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L18:
            r0 = move-exception
            goto L23
        L1a:
            r4 = move-exception
            r3 = r0
            r0 = r4
            r4 = r3
            goto L23
        L1f:
            r4 = move-exception
            r1 = r0
            r0 = r4
            r4 = r1
        L23:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }

    public static java.lang.String d(java.io.InputStream r1) {
            java.nio.charset.Charset r0 = java.nio.charset.Charset.defaultCharset()
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static int g(java.io.InputStream r2, java.io.OutputStream r3) {
            long r2 = h(r2, r3)
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r2 = -1
            return r2
        Ld:
            int r2 = (int) r2
            return r2
    }

    public static long getAvailableBytes(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            r0 = 0
            return r0
        L9:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            long r0 = J(r0)
            return r0
    }

    public static long getTotalBytes(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            r0 = 0
            return r0
        L9:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            long r0 = K(r0)
            return r0
    }

    private static long h(java.io.InputStream r1, java.io.OutputStream r2) {
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            long r1 = a(r1, r2, r0)
            return r1
    }

    public static void k(java.lang.String r1, java.lang.String r2, boolean r3) {
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L25
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L25
            boolean r0 = r3.exists()     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L15
            java.io.File r0 = r3.getParentFile()     // Catch: java.lang.Throwable -> L25
            r0.mkdirs()     // Catch: java.lang.Throwable -> L25
            r3.createNewFile()     // Catch: java.lang.Throwable -> L25
        L15:
            java.io.FileWriter r3 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L25
            r0 = 0
            r3.<init>(r1, r0)     // Catch: java.lang.Throwable -> L25
            r3.write(r2)     // Catch: java.lang.Throwable -> L26
            r3.flush()     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return
        L25:
            r3 = 0
        L26:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return
    }
}
