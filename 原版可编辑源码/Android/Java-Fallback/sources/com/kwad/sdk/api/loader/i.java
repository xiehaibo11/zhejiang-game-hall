package com.kwad.sdk.api.loader;

public final class i {
    public static void b(java.lang.String r6, java.io.File r7) {
            r0 = 0
            boolean r1 = r7.exists()     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto La
            com.kwad.sdk.api.loader.h.j(r7)     // Catch: java.lang.Throwable -> L48
        La:
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L48
            r2 = 0
            r1.<init>(r7, r2)     // Catch: java.lang.Throwable -> L48
            java.net.HttpURLConnection r6 = bW(r6)     // Catch: java.lang.Throwable -> L44
            java.io.BufferedInputStream r7 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L3d
            java.io.InputStream r3 = r6.getInputStream()     // Catch: java.lang.Throwable -> L3d
            r7.<init>(r3)     // Catch: java.lang.Throwable -> L3d
            r0 = 10240(0x2800, float:1.4349E-41)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L38
        L21:
            int r3 = r7.read(r0)     // Catch: java.lang.Throwable -> L38
            r4 = -1
            if (r3 == r4) goto L2c
            r1.write(r0, r2, r3)     // Catch: java.lang.Throwable -> L38
            goto L21
        L2c:
            closeQuietly(r1)
            closeQuietly(r7)
            if (r6 == 0) goto L37
            r6.disconnect()
        L37:
            return
        L38:
            r0 = move-exception
            r5 = r1
            r1 = r6
            r6 = r0
            goto L42
        L3d:
            r7 = move-exception
            r5 = r1
            r1 = r6
            r6 = r7
            r7 = r0
        L42:
            r0 = r5
            goto L4b
        L44:
            r6 = move-exception
            r7 = r0
            r0 = r1
            goto L4a
        L48:
            r6 = move-exception
            r7 = r0
        L4a:
            r1 = r7
        L4b:
            closeQuietly(r0)
            closeQuietly(r7)
            if (r1 == 0) goto L56
            r1.disconnect()
        L56:
            throw r6
    }

    private static java.net.HttpURLConnection bW(java.lang.String r2) {
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            java.net.URLConnection r2 = r0.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            com.kwad.sdk.api.core.TLSConnectionUtils.wrapHttpURLConnection(r2)
            java.lang.String r0 = "Accept-Language"
            java.lang.String r1 = "zh-CN"
            r2.setRequestProperty(r0, r1)
            r0 = 10000(0x2710, float:1.4013E-41)
            r2.setConnectTimeout(r0)
            r0 = 120000(0x1d4c0, float:1.68156E-40)
            r2.setReadTimeout(r0)
            r0 = 0
            r2.setUseCaches(r0)
            r0 = 1
            r2.setDoInput(r0)
            java.lang.String r0 = "Connection"
            java.lang.String r1 = "keep-alive"
            r2.setRequestProperty(r0, r1)
            java.lang.String r0 = "Charset"
            java.lang.String r1 = "UTF-8"
            r2.setRequestProperty(r0, r1)
            return r2
    }

    private static void closeQuietly(java.io.Closeable r0) {
            if (r0 == 0) goto L6
            r0.close()     // Catch: java.io.IOException -> L6
        L6:
            return
    }
}
