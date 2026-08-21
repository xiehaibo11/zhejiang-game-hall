package com.kwad.sdk.pngencrypt.chunk;

public final class b {
    public static final byte[] aFn = null;
    public static final byte[] aFo = null;
    public static final byte[] aFp = null;
    public static final byte[] aFq = null;
    private static byte[] aFr;
    public static java.util.regex.Pattern aFs;

    static {
            java.lang.String r0 = "IHDR"
            byte[] r0 = fg(r0)
            com.kwad.sdk.pngencrypt.chunk.b.aFn = r0
            java.lang.String r0 = "PLTE"
            byte[] r0 = fg(r0)
            com.kwad.sdk.pngencrypt.chunk.b.aFo = r0
            java.lang.String r0 = "IDAT"
            byte[] r0 = fg(r0)
            com.kwad.sdk.pngencrypt.chunk.b.aFp = r0
            java.lang.String r0 = "IEND"
            byte[] r0 = fg(r0)
            com.kwad.sdk.pngencrypt.chunk.b.aFq = r0
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            com.kwad.sdk.pngencrypt.chunk.b.aFr = r0
            java.lang.String r0 = "[a-zA-Z][a-zA-Z][A-Z][a-zA-Z]"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.sdk.pngencrypt.chunk.b.aFs = r0
            return
    }

    public static java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> a(java.util.List<com.kwad.sdk.pngencrypt.chunk.PngChunk> r3, com.kwad.sdk.pngencrypt.chunk.c r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L9:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r3.next()
            com.kwad.sdk.pngencrypt.chunk.PngChunk r1 = (com.kwad.sdk.pngencrypt.chunk.PngChunk) r1
            boolean r2 = r4.a(r1)
            if (r2 == 0) goto L9
            r0.add(r1)
            goto L9
        L1f:
            return r0
    }

    public static byte[] b(byte[] r1, int r2, int r3, boolean r4) {
            r4 = 0
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3f
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3f
            java.util.zip.InflaterInputStream r1 = new java.util.zip.InflaterInputStream     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L36
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L36
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2d
            r2.<init>()     // Catch: java.lang.Throwable -> L28 java.lang.Exception -> L2d
            i(r1, r2)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return r3
        L24:
            r3 = move-exception
            goto L2a
        L26:
            r3 = move-exception
            goto L2f
        L28:
            r3 = move-exception
            r2 = r4
        L2a:
            r4 = r1
            r1 = r2
            goto L57
        L2d:
            r3 = move-exception
            r2 = r4
        L2f:
            r4 = r1
            r1 = r2
            goto L43
        L32:
            r3 = move-exception
            r1 = r4
            r2 = r1
            goto L57
        L36:
            r3 = move-exception
            r1 = r4
            r2 = r1
            goto L43
        L3a:
            r3 = move-exception
            r1 = r4
            r2 = r1
            r0 = r2
            goto L57
        L3f:
            r3 = move-exception
            r1 = r4
            r2 = r1
            r0 = r2
        L43:
            com.kwad.sdk.core.e.c.printStackTrace(r3)     // Catch: java.lang.Throwable -> L56
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
        L56:
            r3 = move-exception
        L57:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r3
    }

    public static java.lang.String d(byte[] r2, int r3, int r4) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = com.kwad.sdk.pngencrypt.n.aEV
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    public static java.lang.String e(byte[] r2, int r3, int r4) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = com.kwad.sdk.pngencrypt.n.aEW
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    public static byte[] fg(java.lang.String r1) {
            java.nio.charset.Charset r0 = com.kwad.sdk.pngencrypt.n.aEV
            byte[] r1 = r1.getBytes(r0)
            return r1
    }

    public static boolean fh(java.lang.String r1) {
            r0 = 0
            char r1 = r1.charAt(r0)
            boolean r1 = java.lang.Character.isUpperCase(r1)
            return r1
    }

    public static boolean fi(java.lang.String r1) {
            r0 = 1
            char r1 = r1.charAt(r0)
            boolean r1 = java.lang.Character.isUpperCase(r1)
            return r1
    }

    public static boolean fj(java.lang.String r1) {
            r0 = 3
            char r1 = r1.charAt(r0)
            boolean r1 = java.lang.Character.isUpperCase(r1)
            if (r1 != 0) goto Ld
            r1 = 1
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public static java.lang.String i(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = com.kwad.sdk.pngencrypt.n.aEV
            r0.<init>(r2, r1)
            return r0
    }

    public static java.lang.String i(byte[] r1, int r2) {
            if (r1 == 0) goto Le
            int r2 = r1.length
            r0 = 8
            if (r2 >= r0) goto L8
            goto Le
        L8:
            r2 = 4
            java.lang.String r1 = d(r1, r2, r2)
            return r1
        Le:
            java.lang.String r1 = "?"
            return r1
    }

    private static void i(java.io.InputStream r4, java.io.OutputStream r5) {
            byte[] r0 = com.kwad.sdk.pngencrypt.chunk.b.aFr
            monitor-enter(r0)
        L3:
            byte[] r1 = com.kwad.sdk.pngencrypt.chunk.b.aFr     // Catch: java.lang.Throwable -> L14
            int r1 = r4.read(r1)     // Catch: java.lang.Throwable -> L14
            if (r1 <= 0) goto L12
            byte[] r2 = com.kwad.sdk.pngencrypt.chunk.b.aFr     // Catch: java.lang.Throwable -> L14
            r3 = 0
            r5.write(r2, r3, r1)     // Catch: java.lang.Throwable -> L14
            goto L3
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r4
    }

    public static java.lang.String j(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = com.kwad.sdk.pngencrypt.n.aEW
            r0.<init>(r2, r1)
            return r0
    }
}
