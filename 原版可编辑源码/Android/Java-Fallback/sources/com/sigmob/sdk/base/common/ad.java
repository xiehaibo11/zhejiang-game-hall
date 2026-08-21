package com.sigmob.sdk.base.common;

public class ad {
    private static volatile com.sigmob.sdk.base.common.ad a;
    private android.os.HandlerThread b;
    private android.os.Handler c;

    private ad() {
            r2 = this;
            r2.<init>()
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "SigmobHandler"
            r0.<init>(r1)
            r2.b = r0
            r0.start()
            android.os.Handler r0 = new android.os.Handler
            android.os.HandlerThread r1 = r2.b
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r1)
            r2.c = r0
            return
    }

    public static com.sigmob.sdk.base.common.ad a() {
            java.lang.Class<com.sigmob.sdk.base.common.ad> r0 = com.sigmob.sdk.base.common.ad.class
            monitor-enter(r0)
            com.sigmob.sdk.base.common.ad r1 = com.sigmob.sdk.base.common.ad.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.sigmob.sdk.base.common.ad r1 = new com.sigmob.sdk.base.common.ad     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.sigmob.sdk.base.common.ad.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            com.sigmob.sdk.base.common.ad r0 = com.sigmob.sdk.base.common.ad.a
            return r0
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    public final boolean a(java.lang.Runnable r2) {
            r1 = this;
            android.os.Handler r0 = r1.c
            boolean r2 = r0.post(r2)
            return r2
    }
}
