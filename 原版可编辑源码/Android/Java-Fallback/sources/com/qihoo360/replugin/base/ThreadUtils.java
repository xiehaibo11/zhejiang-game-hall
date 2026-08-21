package com.qihoo360.replugin.base;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ThreadUtils {
    private static android.os.Handler sHandler;


    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.qihoo360.replugin.base.ThreadUtils.sHandler = r0
            return
    }

    public ThreadUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T syncToMainThread(java.util.concurrent.Callable<T> r2, int r3) throws java.lang.Throwable {
            android.os.Handler r0 = com.qihoo360.replugin.base.ThreadUtils.sHandler
            android.os.Looper r0 = r0.getLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto L11
            java.lang.Object r2 = r2.call()
            return r2
        L11:
            java.lang.Object r2 = syncToMainThreadByOthers(r2, r3)
            return r2
    }

    private static <T> T syncToMainThreadByOthers(java.util.concurrent.Callable<T> r5, int r6) throws java.lang.Throwable {
            java.util.concurrent.atomic.AtomicReference r0 = new java.util.concurrent.atomic.AtomicReference
            r0.<init>()
            java.util.concurrent.atomic.AtomicReference r1 = new java.util.concurrent.atomic.AtomicReference
            r1.<init>()
            java.util.concurrent.CountDownLatch r2 = new java.util.concurrent.CountDownLatch
            r3 = 1
            r2.<init>(r3)
            android.os.Handler r3 = com.qihoo360.replugin.base.ThreadUtils.sHandler
            com.qihoo360.replugin.base.ThreadUtils$1 r4 = new com.qihoo360.replugin.base.ThreadUtils$1
            r4.<init>(r0, r5, r1, r2)
            r3.post(r4)
            long r5 = (long) r6
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.InterruptedException -> L20
            r2.await(r5, r3)     // Catch: java.lang.InterruptedException -> L20
        L20:
            java.lang.Object r5 = r1.get()
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            if (r5 != 0) goto L2d
            java.lang.Object r5 = r0.get()
            return r5
        L2d:
            throw r5
    }
}
