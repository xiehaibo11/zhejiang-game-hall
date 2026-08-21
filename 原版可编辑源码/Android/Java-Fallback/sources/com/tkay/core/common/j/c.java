package com.tkay.core.common.j;

public class c implements com.tkay.core.common.j.a {
    private static final java.lang.String a = "TimeOutHandlerImpl";
    private static volatile com.tkay.core.common.j.c b;
    private final android.os.Handler c;
    private final android.os.Handler d;

    private c() {
            r2 = this;
            r2.<init>()
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "tkay_timeout_handler_thread"
            r0.<init>(r1)
            r0.start()
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r0 = r0.getLooper()
            r1.<init>(r0)
            r2.d = r1
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.c = r0
            return
    }

    private android.os.Handler a(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L5
            android.os.Handler r1 = r0.c
            return r1
        L5:
            android.os.Handler r1 = r0.d
            return r1
    }

    public static com.tkay.core.common.j.a a() {
            com.tkay.core.common.j.c r0 = com.tkay.core.common.j.c.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.j.c> r0 = com.tkay.core.common.j.c.class
            monitor-enter(r0)
            com.tkay.core.common.j.c r1 = com.tkay.core.common.j.c.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.j.c r1 = new com.tkay.core.common.j.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.j.c.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.j.c r0 = com.tkay.core.common.j.c.b
            return r0
    }

    @Override
    public final void a(com.tkay.core.common.j.b r2) {
            r1 = this;
            android.os.Handler r0 = r1.c
            if (r0 == 0) goto L7
            r0.removeCallbacks(r2)
        L7:
            android.os.Handler r0 = r1.d
            if (r0 == 0) goto Le
            r0.removeCallbacks(r2)
        Le:
            return
    }

    @Override
    public final void a(com.tkay.core.common.j.b r2, long r3) {
            r1 = this;
            r0 = 1
            r1.a(r2, r3, r0)
            return
    }

    @Override
    public final void a(com.tkay.core.common.j.b r3, long r4, boolean r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "sendTimeOutMsg() >>> delayMillis="
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = " isMainThread="
            r0.append(r1)
            r0.append(r6)
            android.os.Handler r6 = r2.a(r6)
            if (r6 != 0) goto L19
            return
        L19:
            r6.postDelayed(r3, r4)
            return
    }
}
