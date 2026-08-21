package com.kwad.sdk.utils;

public final class bj {
    private static final android.os.Handler aKp = null;
    private static long jM = 400;

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.aKp = r0
            return
    }

    public static void a(android.content.Context r2, android.os.Vibrator r3) {
            long r0 = com.kwad.sdk.utils.bj.jM
            vibrate(r2, r3, r0)
            return
    }

    public static void a(java.lang.Runnable r0, java.lang.Object r1, long r2) {
            android.os.Handler r1 = com.kwad.sdk.utils.bj.aKp
            android.os.Message r0 = android.os.Message.obtain(r1, r0)
            r1 = 0
            r0.obj = r1
            android.os.Handler r1 = com.kwad.sdk.utils.bj.aKp
            r1.sendMessageDelayed(r0, r2)
            return
    }

    public static void b(android.content.Context r1, android.os.Vibrator r2) {
            if (r2 == 0) goto Ld
            java.lang.String r0 = "android.permission.VIBRATE"
            int r1 = com.kwad.sdk.utils.al.ao(r1, r0)
            if (r1 != 0) goto Ld
            r2.cancel()
        Ld:
            return
    }

    public static void b(java.lang.Runnable r1) {
            android.os.Handler r0 = com.kwad.sdk.utils.bj.aKp
            r0.removeCallbacks(r1)
            return
    }

    public static void c(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    public static void postOnUiThread(java.lang.Runnable r1) {
            android.os.Handler r0 = com.kwad.sdk.utils.bj.aKp
            r0.post(r1)
            return
    }

    public static void runOnUiThread(java.lang.Runnable r2) {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Le
            r2.run()
            return
        Le:
            android.os.Handler r0 = com.kwad.sdk.utils.bj.aKp
            r0.post(r2)
            return
    }

    public static void runOnUiThreadDelay(java.lang.Runnable r1, long r2) {
            android.os.Handler r0 = com.kwad.sdk.utils.bj.aKp
            r0.postDelayed(r1, r2)
            return
    }

    public static void vibrate(android.content.Context r1, android.os.Vibrator r2, long r3) {
            if (r2 == 0) goto L21
            java.lang.String r0 = "android.permission.VIBRATE"
            int r1 = com.kwad.sdk.utils.al.ao(r1, r0)     // Catch: java.lang.Throwable -> L1d
            if (r1 != 0) goto L21
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1d
            r0 = 26
            if (r1 < r0) goto L19
            r1 = -1
            android.os.VibrationEffect r1 = android.os.VibrationEffect.createOneShot(r3, r1)     // Catch: java.lang.Throwable -> L1d
            r2.vibrate(r1)     // Catch: java.lang.Throwable -> L1d
            goto L21
        L19:
            r2.vibrate(r3)     // Catch: java.lang.Throwable -> L1d
            goto L21
        L1d:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L21:
            return
    }
}
