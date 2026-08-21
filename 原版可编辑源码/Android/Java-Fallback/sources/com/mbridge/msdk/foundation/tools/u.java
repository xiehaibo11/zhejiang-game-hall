package com.mbridge.msdk.foundation.tools;

public final class u {
    public static final long a() {
            r0 = 0
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L14
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L14
            long r2 = r2 - r4
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 <= 0) goto L14
            r4 = 10
            long r2 = r2 / r4
            long r2 = r2 * r4
            return r2
        L14:
            return r0
    }
}
