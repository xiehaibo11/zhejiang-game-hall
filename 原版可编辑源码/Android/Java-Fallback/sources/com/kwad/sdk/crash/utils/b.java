package com.kwad.sdk.crash.utils;

public final class b {
    public static void a(java.net.URLConnection r1) {
            boolean r0 = r1 instanceof java.net.HttpURLConnection
            if (r0 == 0) goto L9
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1
            r1.disconnect()
        L9:
            return
    }

    public static void closeQuietly(java.io.Closeable r0) {
            if (r0 == 0) goto L6
            r0.close()     // Catch: java.lang.Throwable -> L6
        L6:
            return
    }

    public static void closeQuietly(java.util.zip.ZipFile r0) {
            if (r0 != 0) goto L3
            return
        L3:
            r0.close()     // Catch: java.io.IOException -> L6
        L6:
            return
    }
}
