package com.kwad.sdk.core.imageloader.utils;

public final class L {
    private static final java.lang.String LOG_FORMAT = "%1$s\n%2$s";
    private static volatile boolean writeDebugLogs = false;
    private static volatile boolean writeLogs = true;

    static {
            return
    }

    private L() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(java.lang.String r2, java.lang.Object... r3) {
            boolean r0 = com.kwad.sdk.core.imageloader.utils.L.writeDebugLogs
            if (r0 == 0) goto L9
            r0 = 3
            r1 = 0
            log(r0, r1, r2, r3)
        L9:
            return
    }

    @java.lang.Deprecated
    public static void disableLogging() {
            r0 = 0
            writeLogs(r0)
            return
    }

    public static void e(java.lang.String r2, java.lang.Object... r3) {
            r0 = 6
            r1 = 0
            log(r0, r1, r2, r3)
            return
    }

    public static void e(java.lang.Throwable r3) {
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 6
            r2 = 0
            log(r1, r3, r2, r0)
            return
    }

    public static void e(java.lang.Throwable r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 6
            log(r0, r1, r2, r3)
            return
    }

    @java.lang.Deprecated
    public static void enableLogging() {
            r0 = 1
            writeLogs(r0)
            return
    }

    public static void i(java.lang.String r2, java.lang.Object... r3) {
            r0 = 4
            r1 = 0
            log(r0, r1, r2, r3)
            return
    }

    private static void log(int r1, java.lang.Throwable r2, java.lang.String r3, java.lang.Object... r4) {
            boolean r0 = com.kwad.sdk.core.imageloader.utils.L.writeLogs
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r4.length
            if (r0 <= 0) goto Lc
            java.lang.String r3 = java.lang.String.format(r3, r4)
        Lc:
            if (r2 != 0) goto Lf
            goto L28
        Lf:
            if (r3 != 0) goto L15
            java.lang.String r3 = r2.getMessage()
        L15:
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r0 = 0
            r4[r0] = r3
            r3 = 1
            r4[r3] = r2
            java.lang.String r2 = "%1$s\n%2$s"
            java.lang.String r3 = java.lang.String.format(r2, r4)
        L28:
            java.lang.String r2 = com.kwad.sdk.core.imageloader.core.ImageLoader.TAG
            android.util.Log.println(r1, r2, r3)
            return
    }

    public static void w(java.lang.String r2, java.lang.Object... r3) {
            r0 = 5
            r1 = 0
            log(r0, r1, r2, r3)
            return
    }

    public static void writeDebugLogs(boolean r0) {
            com.kwad.sdk.core.imageloader.utils.L.writeDebugLogs = r0
            return
    }

    public static void writeLogs(boolean r0) {
            com.kwad.sdk.core.imageloader.utils.L.writeLogs = r0
            return
    }
}
