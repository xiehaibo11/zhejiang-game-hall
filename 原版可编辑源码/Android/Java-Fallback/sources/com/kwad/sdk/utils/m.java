package com.kwad.sdk.utils;

public final class m {
    public static void a(java.io.File[] r1, java.lang.String r2) {
            r0 = -1
            a(r1, r2, r0)
            return
    }

    private static void a(java.io.File[] r7, java.lang.String r8, int r9) {
            r9 = 0
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
            java.util.zip.ZipOutputStream r8 = new java.util.zip.ZipOutputStream     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
            r8.<init>(r1)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r1 = new byte[r0]     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L69
            r2 = 0
            r3 = r2
        L16:
            int r4 = r7.length     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L69
            if (r3 >= r4) goto L57
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L69
            r5 = r7[r3]     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L69
            r4.<init>(r5)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L69
            java.io.BufferedInputStream r5 = new java.io.BufferedInputStream     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L69
            r5.<init>(r4, r0)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L69
            r9 = r7[r3]     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            java.lang.String r9 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            java.util.zip.ZipEntry r4 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            java.lang.String r6 = "/"
            int r6 = r9.lastIndexOf(r6)     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            int r6 = r6 + 1
            java.lang.String r9 = r9.substring(r6)     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            r4.<init>(r9)     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            r8.putNextEntry(r4)     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
        L3f:
            int r9 = r5.read(r1, r2, r0)     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            r4 = -1
            if (r9 == r4) goto L4a
            r8.write(r1, r2, r9)     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            goto L3f
        L4a:
            r5.close()     // Catch: java.lang.Throwable -> L51 java.lang.Exception -> L54
            int r3 = r3 + 1
            r9 = r5
            goto L16
        L51:
            r7 = move-exception
            r9 = r5
            goto L6a
        L54:
            r7 = move-exception
            r9 = r5
            goto L65
        L57:
            com.kwad.sdk.crash.utils.b.closeQuietly(r9)
            com.kwad.sdk.crash.utils.b.closeQuietly(r8)
            return
        L5e:
            r7 = move-exception
            goto L65
        L60:
            r7 = move-exception
            r8 = r9
            goto L6a
        L63:
            r7 = move-exception
            r8 = r9
        L65:
            com.kwad.sdk.core.e.c.printStackTrace(r7)     // Catch: java.lang.Throwable -> L69
            goto L57
        L69:
            r7 = move-exception
        L6a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r9)
            com.kwad.sdk.crash.utils.b.closeQuietly(r8)
            throw r7
    }

    public static byte[] k(byte[] r4) {
            r0 = 0
            if (r4 == 0) goto L44
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L40
            int r2 = r4.length     // Catch: java.io.IOException -> L40
            r1.<init>(r2)     // Catch: java.io.IOException -> L40
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L34
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L34
            r2.write(r4)     // Catch: java.lang.Throwable -> L28
            r2.flush()     // Catch: java.lang.Throwable -> L28
            r2.close()     // Catch: java.lang.Throwable -> L28
            r1.flush()     // Catch: java.lang.Throwable -> L28
            r1.close()     // Catch: java.lang.Throwable -> L28
            byte[] r0 = r1.toByteArray()     // Catch: java.lang.Throwable -> L28
            r2.close()     // Catch: java.lang.Throwable -> L34
            r1.close()     // Catch: java.io.IOException -> L40
            goto L44
        L28:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L2a
        L2a:
            r3 = move-exception
            r2.close()     // Catch: java.lang.Throwable -> L2f
            goto L33
        L2f:
            r2 = move-exception
            r4.addSuppressed(r2)     // Catch: java.lang.Throwable -> L34
        L33:
            throw r3     // Catch: java.lang.Throwable -> L34
        L34:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L36
        L36:
            r2 = move-exception
            r1.close()     // Catch: java.lang.Throwable -> L3b
            goto L3f
        L3b:
            r1 = move-exception
            r4.addSuppressed(r1)     // Catch: java.io.IOException -> L40
        L3f:
            throw r2     // Catch: java.io.IOException -> L40
        L40:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L44:
            return r0
    }
}
