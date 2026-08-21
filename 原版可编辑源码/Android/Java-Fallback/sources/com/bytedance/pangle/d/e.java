package com.bytedance.pangle.d;

public final class e {
    private static java.util.concurrent.Executor a;
    private static final java.lang.Object b = null;
    private static android.os.Handler c;



    static {
            com.bytedance.pangle.d.e$1 r0 = new com.bytedance.pangle.d.e$1
            r0.<init>()
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newCachedThreadPool(r0)
            com.bytedance.pangle.d.e.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.bytedance.pangle.d.e.b = r0
            r0 = 0
            com.bytedance.pangle.d.e.c = r0
            return
    }

    private static android.os.Handler a() {
            java.lang.Object r0 = com.bytedance.pangle.d.e.b
            monitor-enter(r0)
            android.os.Handler r1 = com.bytedance.pangle.d.e.c     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L16
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            com.bytedance.pangle.d.e.c = r1     // Catch: java.lang.Throwable -> L16
        L12:
            android.os.Handler r1 = com.bytedance.pangle.d.e.c     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
    }

    public static java.util.concurrent.ExecutorService a(int r1) {
            com.bytedance.pangle.d.e$2 r0 = new com.bytedance.pangle.d.e$2
            r0.<init>()
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newFixedThreadPool(r1, r0)
            return r1
    }

    public static void a(java.lang.Runnable r1) {
            java.util.concurrent.Executor r0 = com.bytedance.pangle.d.e.a
            r0.execute(r1)
            return
    }

    public static void b(java.lang.Runnable r2) {
            android.os.Handler r0 = a()
            android.os.Looper r0 = r0.getLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto L12
            r2.run()
            return
        L12:
            android.os.Handler r0 = a()
            r0.post(r2)
            return
    }
}
