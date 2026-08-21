package com.qihoo360.mobilesafe.api;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class Tasks {
    private static java.lang.Object sLock;
    private static android.os.Handler sMainHandler;
    private static android.os.Handler sThreadHandler;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.qihoo360.mobilesafe.api.Tasks.sLock = r0
            return
    }

    public Tasks() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final void cancelTask(java.lang.Runnable r1) {
            initThread()
            android.os.Handler r0 = com.qihoo360.mobilesafe.api.Tasks.sMainHandler
            r0.removeCallbacks(r1)
            return
    }

    public static final void cancelThreadTask(java.lang.Runnable r1) {
            initThread()
            android.os.Handler r0 = com.qihoo360.mobilesafe.api.Tasks.sThreadHandler
            r0.removeCallbacks(r1)
            return
    }

    public static final void init() {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.qihoo360.mobilesafe.api.Tasks.sMainHandler = r0
            return
    }

    public static final void init(android.os.Handler r0) {
            com.qihoo360.mobilesafe.api.Tasks.sMainHandler = r0
            return
    }

    private static final void initThread() {
            java.lang.Object r0 = com.qihoo360.mobilesafe.api.Tasks.sLock
            monitor-enter(r0)
            android.os.Handler r1 = com.qihoo360.mobilesafe.api.Tasks.sThreadHandler     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1c
            android.os.HandlerThread r1 = new android.os.HandlerThread     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "daemon-handler-thread"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            r1.start()     // Catch: java.lang.Throwable -> L1e
            android.os.Handler r2 = new android.os.Handler     // Catch: java.lang.Throwable -> L1e
            android.os.Looper r1 = r1.getLooper()     // Catch: java.lang.Throwable -> L1e
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L1e
            com.qihoo360.mobilesafe.api.Tasks.sThreadHandler = r2     // Catch: java.lang.Throwable -> L1e
        L1c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r1
    }

    public static final boolean post2Thread(java.lang.Runnable r1) {
            initThread()
            android.os.Handler r0 = com.qihoo360.mobilesafe.api.Tasks.sThreadHandler
            boolean r1 = r0.post(r1)
            return r1
    }

    public static final boolean post2UI(java.lang.Runnable r1) {
            android.os.Handler r0 = com.qihoo360.mobilesafe.api.Tasks.sMainHandler
            boolean r1 = r0.post(r1)
            return r1
    }

    public static final boolean postDelayed2Thread(java.lang.Runnable r1, long r2) {
            initThread()
            android.os.Handler r0 = com.qihoo360.mobilesafe.api.Tasks.sThreadHandler
            boolean r1 = r0.postDelayed(r1, r2)
            return r1
    }

    public static final boolean postDelayed2UI(java.lang.Runnable r1, long r2) {
            android.os.Handler r0 = com.qihoo360.mobilesafe.api.Tasks.sMainHandler
            boolean r1 = r0.postDelayed(r1, r2)
            return r1
    }
}
