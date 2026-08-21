package com.kwad.sdk.utils;

public final class an {
    private static volatile com.kwad.sdk.utils.an aIW;
    private volatile boolean aIX;
    private volatile long aIY;
    private volatile android.os.PowerManager aIZ;

    static {
            com.kwad.sdk.utils.an r0 = new com.kwad.sdk.utils.an
            r0.<init>()
            com.kwad.sdk.utils.an.aIW = r0
            return
    }

    public an() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.aIY = r0
            return
    }

    public static com.kwad.sdk.utils.an IP() {
            com.kwad.sdk.utils.an r0 = com.kwad.sdk.utils.an.aIW
            return r0
    }

    public final boolean cr(android.content.Context r5) {
            r4 = this;
            long r0 = r4.aIY
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L18
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.aIY
            long r0 = r0 - r2
            r2 = 600(0x258, double:2.964E-321)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L18
            boolean r5 = r4.aIX
            return r5
        L18:
            r0 = 0
            android.os.PowerManager r1 = r4.aIZ
            if (r1 != 0) goto L37
            if (r5 == 0) goto L37
            monitor-enter(r4)
            android.os.PowerManager r1 = r4.aIZ     // Catch: java.lang.Throwable -> L34
            if (r1 != 0) goto L32
            android.content.Context r5 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = "power"
            java.lang.Object r5 = r5.getSystemService(r1)     // Catch: java.lang.Throwable -> L34
            android.os.PowerManager r5 = (android.os.PowerManager) r5     // Catch: java.lang.Throwable -> L34
            r4.aIZ = r5     // Catch: java.lang.Throwable -> L34
        L32:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L34
            goto L37
        L34:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L34
            throw r5
        L37:
            android.os.PowerManager r5 = r4.aIZ
            if (r5 == 0) goto L4e
            int r5 = android.os.Build.VERSION.SDK_INT
            r0 = 20
            if (r5 < r0) goto L48
            android.os.PowerManager r5 = r4.aIZ
            boolean r0 = r5.isInteractive()
            goto L4e
        L48:
            android.os.PowerManager r5 = r4.aIZ
            boolean r0 = r5.isScreenOn()
        L4e:
            r4.aIX = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.aIY = r0
            boolean r5 = r4.aIX
            return r5
    }
}
