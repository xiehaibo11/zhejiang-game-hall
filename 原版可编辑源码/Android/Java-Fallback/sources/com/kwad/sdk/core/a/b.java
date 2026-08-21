package com.kwad.sdk.core.a;

public final class b {
    public static final java.nio.charset.Charset UTF_8 = null;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.kwad.sdk.core.a.b.UTF_8 = r0
            return
    }

    public static byte[] a(java.lang.String r1, byte[] r2) {
            java.nio.charset.Charset r0 = com.kwad.sdk.core.a.b.UTF_8
            byte[] r1 = r1.getBytes(r0)
            r0 = 2
            byte[] r1 = a(r1, r2, r0)
            return r1
    }

    private static byte[] a(byte[] r2, byte[] r3, int r4) {
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = "AES"
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L15
            java.lang.String r2 = "AES/ECB/PKCS5Padding"
            javax.crypto.Cipher r2 = javax.crypto.Cipher.getInstance(r2)     // Catch: java.lang.Exception -> L15
            r2.init(r4, r0)     // Catch: java.lang.Exception -> L15
            byte[] r2 = r2.doFinal(r3)     // Catch: java.lang.Exception -> L15
            return r2
        L15:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    public static byte[] d(byte[] r1, byte[] r2) {
            r0 = 1
            byte[] r1 = a(r1, r2, r0)
            return r1
    }

    private static void e(java.io.InputStream r5, java.io.OutputStream r6) {
            r0 = 0
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L23
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L23
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r6]     // Catch: java.lang.Throwable -> L20
        La:
            r2 = 0
            int r3 = r5.read(r0, r2, r6)     // Catch: java.lang.Throwable -> L20
            r4 = -1
            if (r3 == r4) goto L16
            r1.write(r0, r2, r3)     // Catch: java.lang.Throwable -> L20
            goto La
        L16:
            r1.finish()     // Catch: java.lang.Throwable -> L20
            r1.flush()     // Catch: java.lang.Throwable -> L20
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return
        L20:
            r5 = move-exception
            r0 = r1
            goto L24
        L23:
            r5 = move-exception
        L24:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r5
    }

    private static void f(java.io.InputStream r5, java.io.OutputStream r6) {
            r0 = 0
            java.util.zip.GZIPInputStream r1 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L1d
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L1d
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r5]     // Catch: java.lang.Throwable -> L1a
        La:
            r2 = 0
            int r3 = r1.read(r0, r2, r5)     // Catch: java.lang.Throwable -> L1a
            r4 = -1
            if (r3 == r4) goto L16
            r6.write(r0, r2, r3)     // Catch: java.lang.Throwable -> L1a
            goto La
        L16:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return
        L1a:
            r5 = move-exception
            r0 = r1
            goto L1e
        L1d:
            r5 = move-exception
        L1e:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r5
    }

    public static byte[] f(byte[] r3) {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L23
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L23
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L1e
            r3.<init>()     // Catch: java.lang.Throwable -> L1e
            e(r1, r3)     // Catch: java.lang.Throwable -> L1c
            byte[] r0 = r3.toByteArray()     // Catch: java.lang.Throwable -> L1c
            r3.flush()     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L1c:
            r0 = move-exception
            goto L27
        L1e:
            r3 = move-exception
            r2 = r0
            r0 = r3
            r3 = r2
            goto L27
        L23:
            r3 = move-exception
            r1 = r0
            r0 = r3
            r3 = r1
        L27:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }

    public static byte[] g(byte[] r3) {
            r0 = 0
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L23
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L23
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L1e
            r3.<init>()     // Catch: java.lang.Throwable -> L1e
            f(r1, r3)     // Catch: java.lang.Throwable -> L1c
            byte[] r0 = r3.toByteArray()     // Catch: java.lang.Throwable -> L1c
            r3.flush()     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
        L1c:
            r0 = move-exception
            goto L27
        L1e:
            r3 = move-exception
            r2 = r0
            r0 = r3
            r3 = r2
            goto L27
        L23:
            r3 = move-exception
            r1 = r0
            r0 = r3
            r3 = r1
        L27:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }
}
