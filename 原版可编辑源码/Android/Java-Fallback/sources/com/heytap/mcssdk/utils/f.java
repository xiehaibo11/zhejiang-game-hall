package com.heytap.mcssdk.utils;

public class f {
    private static final java.util.concurrent.ExecutorService a = null;
    private static android.os.Handler b;

    static {
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            com.heytap.mcssdk.utils.f.a = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.heytap.mcssdk.utils.f.b = r0
            return
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.Runnable r1) {
            java.util.concurrent.ExecutorService r0 = com.heytap.mcssdk.utils.f.a
            r0.execute(r1)
            return
    }

    public static void b(java.lang.Runnable r1) {
            android.os.Handler r0 = com.heytap.mcssdk.utils.f.b
            r0.post(r1)
            return
    }
}
