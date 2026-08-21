package com.kwad.sdk.api.loader;

final class b {
    private static void D(java.lang.String r1, java.lang.String r2) {
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r1)
            java.io.FileOutputStream r1 = new java.io.FileOutputStream
            r1.<init>(r2)
            d(r0, r1)
            return
    }

    private static void E(java.lang.String r6, java.lang.String r7) {
            boolean r0 = com.kwad.sdk.api.loader.w.is64Bit()
            if (r0 == 0) goto L9
            java.lang.String r0 = "lib/arm64-v8a/"
            goto Lb
        L9:
            java.lang.String r0 = "lib/armeabi-v7a/"
        Lb:
            r1 = 0
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L68
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L68
            java.util.Enumeration r6 = r2.entries()     // Catch: java.lang.Throwable -> L65
        L15:
            boolean r1 = r6.hasMoreElements()     // Catch: java.lang.Throwable -> L65
            if (r1 == 0) goto L61
            java.lang.Object r1 = r6.nextElement()     // Catch: java.lang.Throwable -> L65
            java.util.zip.ZipEntry r1 = (java.util.zip.ZipEntry) r1     // Catch: java.lang.Throwable -> L65
            boolean r3 = r1.isDirectory()     // Catch: java.lang.Throwable -> L65
            if (r3 != 0) goto L15
            java.lang.String r3 = r1.getName()     // Catch: java.lang.Throwable -> L65
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L65
            if (r4 != 0) goto L15
            java.lang.String r4 = "../"
            boolean r4 = r3.contains(r4)     // Catch: java.lang.Throwable -> L65
            if (r4 != 0) goto L15
            java.lang.String r4 = ".so"
            boolean r4 = r3.endsWith(r4)     // Catch: java.lang.Throwable -> L65
            if (r4 == 0) goto L15
            boolean r4 = r3.startsWith(r0)     // Catch: java.lang.Throwable -> L65
            if (r4 == 0) goto L15
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L65
            int r5 = r0.length()     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = r3.substring(r5)     // Catch: java.lang.Throwable -> L65
            r4.<init>(r7, r3)     // Catch: java.lang.Throwable -> L65
            java.io.InputStream r1 = r2.getInputStream(r1)     // Catch: java.lang.Throwable -> L65
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L65
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L65
            d(r1, r3)     // Catch: java.lang.Throwable -> L65
            goto L15
        L61:
            r2.close()     // Catch: java.lang.Exception -> L64
        L64:
            return
        L65:
            r6 = move-exception
            r1 = r2
            goto L69
        L68:
            r6 = move-exception
        L69:
            if (r1 == 0) goto L6e
            r1.close()     // Catch: java.lang.Exception -> L6e
        L6e:
            throw r6
    }

    static boolean a(android.content.Context r3, java.lang.ClassLoader r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = com.kwad.sdk.api.loader.h.o(r3, r6)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            h(r1)
            java.lang.String r1 = com.kwad.sdk.api.loader.h.q(r3, r6)
            java.lang.String r2 = com.kwad.sdk.api.loader.h.r(r3, r6)
            java.lang.String r6 = com.kwad.sdk.api.loader.h.s(r3, r6)
            D(r5, r1)     // Catch: java.lang.Exception -> L2c
            E(r5, r6)     // Catch: java.lang.Exception -> L2c
            com.kwad.sdk.api.loader.k r3 = com.kwad.sdk.api.loader.k.b(r3, r4, r1, r2, r6)     // Catch: java.lang.Exception -> L2c
            com.kwad.sdk.api.core.IKsAdSDK r3 = r3.ys()     // Catch: java.lang.Exception -> L2c
            if (r3 == 0) goto L2a
            r3 = 1
            return r3
        L2a:
            r3 = 0
            return r3
        L2c:
            r3 = move-exception
            java.io.File r4 = new java.io.File
            r4.<init>(r1)
            h(r4)
            java.io.File r4 = new java.io.File
            r4.<init>(r2)
            h(r4)
            java.io.File r4 = new java.io.File
            r4.<init>(r6)
            h(r4)
            java.io.File r4 = new java.io.File
            r4.<init>(r0)
            h(r4)
            throw r3
    }

    private static void c(java.io.InputStream r3, java.io.OutputStream r4) {
            r0 = 8192(0x2000, float:1.148E-41)
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

    private static void d(java.io.InputStream r1, java.io.OutputStream r2) {
            c(r1, r2)     // Catch: java.lang.Throwable -> Lc
            if (r1 == 0) goto L8
            r1.close()     // Catch: java.lang.Exception -> L8
        L8:
            r2.close()     // Catch: java.lang.Exception -> Lb
        Lb:
            return
        Lc:
            r0 = move-exception
            if (r1 == 0) goto L12
            r1.close()     // Catch: java.lang.Exception -> L12
        L12:
            r2.close()     // Catch: java.lang.Exception -> L15
        L15:
            throw r0
    }

    private static void h(java.io.File r3) {
            boolean r0 = r3.isFile()
            if (r0 == 0) goto La
            r3.delete()
            return
        La:
            java.io.File[] r3 = r3.listFiles()
            if (r3 == 0) goto L1f
            int r0 = r3.length
            if (r0 <= 0) goto L1f
            int r0 = r3.length
            r1 = 0
        L15:
            if (r1 >= r0) goto L1f
            r2 = r3[r1]
            h(r2)
            int r1 = r1 + 1
            goto L15
        L1f:
            return
    }
}
