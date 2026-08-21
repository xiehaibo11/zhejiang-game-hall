package com.bumptech.glide.util;

public final class LogTime {
    private static final double MILLIS_MULTIPLIER = 0.0d;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r3 = 17
            if (r3 > r0) goto L11
            r3 = 4621819117588971520(0x4024000000000000, double:10.0)
            r5 = 4618441417868443648(0x4018000000000000, double:6.0)
            double r3 = java.lang.Math.pow(r3, r5)
            double r1 = r1 / r3
        L11:
            com.bumptech.glide.util.LogTime.MILLIS_MULTIPLIER = r1
            return
    }

    private LogTime() {
            r0 = this;
            r0.<init>()
            return
    }

    public static double getElapsedMillis(long r2) {
            long r0 = getLogTime()
            long r0 = r0 - r2
            double r2 = (double) r0
            double r0 = com.bumptech.glide.util.LogTime.MILLIS_MULTIPLIER
            java.lang.Double.isNaN(r2)
            double r2 = r2 * r0
            return r2
    }

    public static long getLogTime() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r1 > r0) goto Lb
            long r0 = android.os.SystemClock.elapsedRealtimeNanos()
            return r0
        Lb:
            long r0 = java.lang.System.currentTimeMillis()
            return r0
    }
}
