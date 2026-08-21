package com.kwad.sdk.core.imageloader.utils;

public final class IoUtils {
    public static final int CONTINUE_LOADING_PERCENTAGE = 75;
    public static final int DEFAULT_BUFFER_SIZE = 32768;
    public static final int DEFAULT_IMAGE_TOTAL_SIZE = 512000;

    public interface CopyListener {
        boolean onBytesCopied(int r1, int r2);
    }

    private IoUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean copyStream(java.io.InputStream r1, java.io.OutputStream r2, com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener r3) {
            r0 = 32768(0x8000, float:4.5918E-41)
            boolean r1 = copyStream(r1, r2, r3, r0)
            return r1
    }

    public static boolean copyStream(java.io.InputStream r6, java.io.OutputStream r7, com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener r8, int r9) {
            int r0 = r6.available()
            if (r0 > 0) goto L9
            r0 = 512000(0x7d000, float:7.17465E-40)
        L9:
            byte[] r1 = new byte[r9]
            r2 = 0
            boolean r3 = shouldStopLoading(r8, r2, r0)
            if (r3 == 0) goto L13
            return r2
        L13:
            r3 = r2
        L14:
            int r4 = r6.read(r1, r2, r9)
            r5 = -1
            if (r4 == r5) goto L26
            r7.write(r1, r2, r4)
            int r3 = r3 + r4
            boolean r4 = shouldStopLoading(r8, r3, r0)
            if (r4 == 0) goto L14
            return r2
        L26:
            r7.flush()
            r6 = 1
            return r6
    }

    public static java.lang.String inputStreamToString(java.io.InputStream r6) {
            r0 = 1024(0x400, float:1.435E-42)
            char[] r1 = new char[r0]
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 0
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            java.lang.String r5 = "UTF-8"
            r4.<init>(r6, r5)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
        L11:
            r6 = 0
            int r5 = r4.read(r1, r6, r0)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2d
            if (r5 < 0) goto L1c
            r2.append(r1, r6, r5)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2d
            goto L11
        L1c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            java.lang.String r6 = r2.toString()
            return r6
        L24:
            r6 = move-exception
            r3 = r4
            goto L28
        L27:
            r6 = move-exception
        L28:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            throw r6
        L2c:
            r4 = r3
        L2d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            return r3
    }

    public static void readAndCloseStream(java.io.InputStream r4) {
            r0 = 32768(0x8000, float:4.5918E-41)
            byte[] r1 = new byte[r0]
        L5:
            r2 = 0
            int r2 = r4.read(r1, r2, r0)     // Catch: java.lang.Throwable -> L11 java.io.IOException -> L16
            r3 = -1
            if (r2 != r3) goto L5
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            return
        L11:
            r0 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            throw r0
        L16:
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            return
    }

    private static boolean shouldStopLoading(com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener r0, int r1, int r2) {
            if (r0 == 0) goto L11
            boolean r0 = r0.onBytesCopied(r1, r2)
            if (r0 != 0) goto L11
            int r1 = r1 * 100
            int r1 = r1 / r2
            r0 = 75
            if (r1 >= r0) goto L11
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }
}
