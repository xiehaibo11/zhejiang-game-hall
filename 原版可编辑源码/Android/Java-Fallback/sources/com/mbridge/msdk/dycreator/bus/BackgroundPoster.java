package com.mbridge.msdk.dycreator.bus;

final class BackgroundPoster implements java.lang.Runnable {
    private final com.mbridge.msdk.dycreator.bus.PendingPostQueue a;
    private volatile boolean b;
    private final com.mbridge.msdk.dycreator.bus.EventBus c;

    BackgroundPoster(com.mbridge.msdk.dycreator.bus.EventBus r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r1 = new com.mbridge.msdk.dycreator.bus.PendingPostQueue
            r1.<init>()
            r0.a = r1
            return
    }

    public final void enqueue(com.mbridge.msdk.dycreator.bus.Subscription r1, java.lang.Object r2) {
            r0 = this;
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = com.mbridge.msdk.dycreator.bus.PendingPost.a(r1, r2)
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r2 = r0.a     // Catch: java.lang.Throwable -> L18
            r2.a(r1)     // Catch: java.lang.Throwable -> L18
            boolean r1 = r0.b     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            r1 = 1
            r0.b = r1     // Catch: java.lang.Throwable -> L18
            java.util.concurrent.ExecutorService r1 = com.mbridge.msdk.dycreator.bus.EventBus.a     // Catch: java.lang.Throwable -> L18
            r1.execute(r0)     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return
        L18:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r1
    }

    @Override
    public final void run() {
            r5 = this;
        L0:
            r0 = 0
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r1 = r5.a     // Catch: java.lang.Throwable -> L25 java.lang.InterruptedException -> L27
            r2 = 1000(0x3e8, float:1.401E-42)
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = r1.a(r2)     // Catch: java.lang.Throwable -> L25 java.lang.InterruptedException -> L27
            if (r1 != 0) goto L1f
            monitor-enter(r5)     // Catch: java.lang.Throwable -> L25 java.lang.InterruptedException -> L27
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r1 = r5.a     // Catch: java.lang.Throwable -> L1c
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = r1.a()     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L1a
            r5.b = r0     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L1c
            r5.b = r0
            return
        L1a:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L1c
            goto L1f
        L1c:
            r1 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L1c
            throw r1     // Catch: java.lang.Throwable -> L25 java.lang.InterruptedException -> L27
        L1f:
            com.mbridge.msdk.dycreator.bus.EventBus r2 = r5.c     // Catch: java.lang.Throwable -> L25 java.lang.InterruptedException -> L27
            r2.a(r1)     // Catch: java.lang.Throwable -> L25 java.lang.InterruptedException -> L27
            goto L0
        L25:
            r1 = move-exception
            goto L49
        L27:
            r1 = move-exception
            java.lang.String r2 = "Event"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25
            r3.<init>()     // Catch: java.lang.Throwable -> L25
            java.lang.Thread r4 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L25
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L25
            r3.append(r4)     // Catch: java.lang.Throwable -> L25
            java.lang.String r4 = " was interruppted"
            r3.append(r4)     // Catch: java.lang.Throwable -> L25
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L25
            android.util.Log.w(r2, r3, r1)     // Catch: java.lang.Throwable -> L25
            r5.b = r0
            return
        L49:
            r5.b = r0
            throw r1
    }
}
