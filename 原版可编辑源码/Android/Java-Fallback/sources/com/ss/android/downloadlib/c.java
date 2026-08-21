package com.ss.android.downloadlib;

public class c {
    private static volatile com.ss.android.downloadlib.c rg;
    private com.ss.android.download.api.config.c df;

    static {
            return
    }

    private c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.df = r0
            return
    }

    public static com.ss.android.downloadlib.c rg() {
            com.ss.android.downloadlib.c r0 = com.ss.android.downloadlib.c.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.c> r0 = com.ss.android.downloadlib.c.class
            monitor-enter(r0)
            com.ss.android.downloadlib.c r1 = com.ss.android.downloadlib.c.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.c r1 = new com.ss.android.downloadlib.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.c.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.c r0 = com.ss.android.downloadlib.c.rg
            return r0
    }

    public com.ss.android.download.api.config.c df() {
            r1 = this;
            com.ss.android.download.api.config.c r0 = r1.df
            return r0
    }
}
