package com.mbridge.msdk.dycreator.bus;

final class PendingPostQueue {
    private com.mbridge.msdk.dycreator.bus.PendingPost a;
    private com.mbridge.msdk.dycreator.bus.PendingPost b;

    PendingPostQueue() {
            r0 = this;
            r0.<init>()
            return
    }

    final synchronized com.mbridge.msdk.dycreator.bus.PendingPost a() {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.dycreator.bus.PendingPost r0 = r2.a     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = r2.a     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L12
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = r2.a     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = r1.c     // Catch: java.lang.Throwable -> L14
            r2.a = r1     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            r1 = 0
            r2.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r2)
            return r0
        L14:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    final synchronized com.mbridge.msdk.dycreator.bus.PendingPost a(int r3) throws java.lang.InterruptedException {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.dycreator.bus.PendingPost r0 = r2.a     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto L9
            long r0 = (long) r3     // Catch: java.lang.Throwable -> Lf
            r2.wait(r0)     // Catch: java.lang.Throwable -> Lf
        L9:
            com.mbridge.msdk.dycreator.bus.PendingPost r3 = r2.a()     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r2)
            return r3
        Lf:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    final synchronized void a(com.mbridge.msdk.dycreator.bus.PendingPost r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto L25
            com.mbridge.msdk.dycreator.bus.PendingPost r0 = r1.b     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto Le
            com.mbridge.msdk.dycreator.bus.PendingPost r0 = r1.b     // Catch: java.lang.Throwable -> L23
            r0.c = r2     // Catch: java.lang.Throwable -> L23
            r1.b = r2     // Catch: java.lang.Throwable -> L23
            goto L16
        Le:
            com.mbridge.msdk.dycreator.bus.PendingPost r0 = r1.a     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L1b
            r1.b = r2     // Catch: java.lang.Throwable -> L23
            r1.a = r2     // Catch: java.lang.Throwable -> L23
        L16:
            r1.notifyAll()     // Catch: java.lang.Throwable -> L23
            monitor-exit(r1)
            return
        L1b:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = "Head present, but no tail"
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L23
            throw r2     // Catch: java.lang.Throwable -> L23
        L23:
            r2 = move-exception
            goto L2d
        L25:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = "null cannot be enqueued"
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L23
            throw r2     // Catch: java.lang.Throwable -> L23
        L2d:
            monitor-exit(r1)
            throw r2
    }
}
