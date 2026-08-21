package com.kwad.sdk.utils;

public class g {
    private static volatile java.util.concurrent.Executor aHY;
    private static volatile java.util.concurrent.ScheduledExecutorService aHZ;

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void execute(java.lang.Runnable r2) {
            java.util.concurrent.Executor r0 = com.kwad.sdk.utils.g.aHY
            if (r0 != 0) goto L16
            java.lang.Class<com.kwad.sdk.utils.g> r0 = com.kwad.sdk.utils.g.class
            monitor-enter(r0)
            java.util.concurrent.Executor r1 = com.kwad.sdk.utils.g.aHY     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto L11
            java.util.concurrent.ExecutorService r1 = com.kwad.sdk.core.threads.GlobalThreadPools.CZ()     // Catch: java.lang.Throwable -> L13
            com.kwad.sdk.utils.g.aHY = r1     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            goto L16
        L13:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r2
        L16:
            java.util.concurrent.Executor r0 = com.kwad.sdk.utils.g.aHY
            r0.execute(r2)
            return
    }

    public static void schedule(java.lang.Runnable r2, long r3, java.util.concurrent.TimeUnit r5) {
            java.util.concurrent.ScheduledExecutorService r0 = com.kwad.sdk.utils.g.aHZ
            if (r0 != 0) goto L16
            java.lang.Class<com.kwad.sdk.utils.g> r0 = com.kwad.sdk.utils.g.class
            monitor-enter(r0)
            java.util.concurrent.ScheduledExecutorService r1 = com.kwad.sdk.utils.g.aHZ     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto L11
            java.util.concurrent.ScheduledExecutorService r1 = com.kwad.sdk.core.threads.GlobalThreadPools.Da()     // Catch: java.lang.Throwable -> L13
            com.kwad.sdk.utils.g.aHZ = r1     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            goto L16
        L13:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r2
        L16:
            java.util.concurrent.ScheduledExecutorService r0 = com.kwad.sdk.utils.g.aHZ
            r0.schedule(r2, r3, r5)
            return
    }
}
