package com.kwad.sdk.api.loader;

public class d implements java.lang.Thread.UncaughtExceptionHandler {
    private static com.kwad.sdk.api.loader.d aih;
    private boolean DEBUG;
    private java.lang.Thread.UncaughtExceptionHandler aii;
    private int aij;
    private final java.util.concurrent.atomic.AtomicBoolean aik;
    private long ail;
    private android.content.Context mContext;

    private d(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.DEBUG = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            r1.aik = r0
            r1.mContext = r2
            return
    }

    public static com.kwad.sdk.api.loader.d ax(android.content.Context r2) {
            com.kwad.sdk.api.loader.d r0 = com.kwad.sdk.api.loader.d.aih
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.api.loader.d> r0 = com.kwad.sdk.api.loader.d.class
            monitor-enter(r0)
            com.kwad.sdk.api.loader.d r1 = com.kwad.sdk.api.loader.d.aih     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.api.loader.d r1 = new com.kwad.sdk.api.loader.d     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.api.loader.d.aih = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.kwad.sdk.api.loader.d r2 = com.kwad.sdk.api.loader.d.aih
            return r2
    }

    public final void bP(int r3) {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.ail = r0
            r2.aij = r3
            boolean r3 = r2.DEBUG
            if (r3 == 0) goto L13
            java.lang.String r3 = "test.chen"
            java.lang.String r0 = "startCheck:"
            android.util.Log.d(r3, r0)
        L13:
            return
    }

    public final void cancel() {
            r2 = this;
            boolean r0 = r2.DEBUG
            if (r0 == 0) goto Lb
            java.lang.String r0 = "test.chen"
            java.lang.String r1 = "AutoRevertHandler cancel:"
            android.util.Log.d(r0, r1)
        Lb:
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.aik
            r1 = 1
            r0.set(r1)
            return
    }

    public final void setDefaultUncaughtExceptionHandler(java.lang.Thread.UncaughtExceptionHandler r1) {
            r0 = this;
            if (r1 == r0) goto L4
            r0.aii = r1
        L4:
            return
    }

    @Override
    public void uncaughtException(java.lang.Thread r5, java.lang.Throwable r6) {
            r4 = this;
            boolean r0 = r4.DEBUG     // Catch: java.lang.Throwable -> L7a
            if (r0 == 0) goto L31
            java.lang.String r0 = "test.chen"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
            java.lang.String r2 = "AutoRevertHandler uncaughtException, mStartCheckTime:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L7a
            long r2 = r4.ail     // Catch: java.lang.Throwable -> L7a
            r1.append(r2)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r2 = ",mMaxDuration:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L7a
            int r2 = r4.aij     // Catch: java.lang.Throwable -> L7a
            r1.append(r2)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r2 = ",mIsCancel:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L7a
            java.util.concurrent.atomic.AtomicBoolean r2 = r4.aik     // Catch: java.lang.Throwable -> L7a
            boolean r2 = r2.get()     // Catch: java.lang.Throwable -> L7a
            r1.append(r2)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L7a
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L7a
        L31:
            java.util.concurrent.atomic.AtomicBoolean r0 = r4.aik     // Catch: java.lang.Throwable -> L7a
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L7a
            if (r0 != 0) goto L72
            long r0 = r4.ail     // Catch: java.lang.Throwable -> L7a
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L72
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7a
            long r2 = r4.ail     // Catch: java.lang.Throwable -> L7a
            long r0 = r0 - r2
            int r2 = r4.aij     // Catch: java.lang.Throwable -> L7a
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L7a
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L72
            java.lang.String r0 = "filterStack"
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L7a
            r3 = 0
            r2[r3] = r6     // Catch: java.lang.Throwable -> L7a
            java.lang.Object r0 = com.kwad.sdk.api.c.c(r0, r2)     // Catch: java.lang.Throwable -> L7a
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> L7a
            if (r0 == 0) goto L64
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> L7a
            goto L65
        L64:
            r0 = r1
        L65:
            android.content.Context r2 = r4.mContext     // Catch: java.lang.Throwable -> L7a
            if (r2 == 0) goto L72
            if (r0 == 0) goto L72
            android.content.Context r0 = r4.mContext     // Catch: java.lang.Throwable -> L7a
            java.lang.String r2 = com.kwad.sdk.api.loader.g.air     // Catch: java.lang.Throwable -> L7a
            com.kwad.sdk.api.loader.t.a(r0, r2, r1)     // Catch: java.lang.Throwable -> L7a
        L72:
            java.lang.Thread$UncaughtExceptionHandler r0 = r4.aii
            if (r0 == 0) goto L85
            r0.uncaughtException(r5, r6)
            return
        L7a:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L86
            java.lang.Thread$UncaughtExceptionHandler r0 = r4.aii
            if (r0 == 0) goto L85
            r0.uncaughtException(r5, r6)
        L85:
            return
        L86:
            r0 = move-exception
            java.lang.Thread$UncaughtExceptionHandler r1 = r4.aii
            if (r1 == 0) goto L8e
            r1.uncaughtException(r5, r6)
        L8e:
            throw r0
    }
}
