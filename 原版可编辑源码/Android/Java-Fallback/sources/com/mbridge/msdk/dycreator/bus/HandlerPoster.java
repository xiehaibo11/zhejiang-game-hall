package com.mbridge.msdk.dycreator.bus;

final class HandlerPoster extends android.os.Handler {
    private final com.mbridge.msdk.dycreator.bus.PendingPostQueue a;
    private final int b;
    private final com.mbridge.msdk.dycreator.bus.EventBus c;
    private boolean d;

    HandlerPoster(com.mbridge.msdk.dycreator.bus.EventBus r1, android.os.Looper r2, int r3) {
            r0 = this;
            r0.<init>(r2)
            r0.c = r1
            r0.b = r3
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r1 = new com.mbridge.msdk.dycreator.bus.PendingPostQueue
            r1.<init>()
            r0.a = r1
            return
    }

    final void a(com.mbridge.msdk.dycreator.bus.Subscription r1, java.lang.Object r2) {
            r0 = this;
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = com.mbridge.msdk.dycreator.bus.PendingPost.a(r1, r2)
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r2 = r0.a     // Catch: java.lang.Throwable -> L26
            r2.a(r1)     // Catch: java.lang.Throwable -> L26
            boolean r1 = r0.d     // Catch: java.lang.Throwable -> L26
            if (r1 != 0) goto L24
            r1 = 1
            r0.d = r1     // Catch: java.lang.Throwable -> L26
            android.os.Message r1 = r0.obtainMessage()     // Catch: java.lang.Throwable -> L26
            boolean r1 = r0.sendMessage(r1)     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L1c
            goto L24
        L1c:
            com.mbridge.msdk.dycreator.bus.EventBusException r1 = new com.mbridge.msdk.dycreator.bus.EventBusException     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = "Could not send handler message"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L26
            throw r1     // Catch: java.lang.Throwable -> L26
        L24:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r1
    }

    @Override
    public final void handleMessage(android.os.Message r7) {
            r6 = this;
            r7 = 0
            long r0 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> L48
        L5:
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r2 = r6.a     // Catch: java.lang.Throwable -> L48
            com.mbridge.msdk.dycreator.bus.PendingPost r2 = r2.a()     // Catch: java.lang.Throwable -> L48
            if (r2 != 0) goto L21
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L48
            com.mbridge.msdk.dycreator.bus.PendingPostQueue r2 = r6.a     // Catch: java.lang.Throwable -> L1e
            com.mbridge.msdk.dycreator.bus.PendingPost r2 = r2.a()     // Catch: java.lang.Throwable -> L1e
            if (r2 != 0) goto L1c
            r6.d = r7     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L1e
            r6.d = r7
            return
        L1c:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L1e
            goto L21
        L1e:
            r0 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L1e
            throw r0     // Catch: java.lang.Throwable -> L48
        L21:
            com.mbridge.msdk.dycreator.bus.EventBus r3 = r6.c     // Catch: java.lang.Throwable -> L48
            r3.a(r2)     // Catch: java.lang.Throwable -> L48
            long r2 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> L48
            long r2 = r2 - r0
            int r4 = r6.b     // Catch: java.lang.Throwable -> L48
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L48
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 < 0) goto L5
            android.os.Message r0 = r6.obtainMessage()     // Catch: java.lang.Throwable -> L48
            boolean r0 = r6.sendMessage(r0)     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L40
            r7 = 1
            r6.d = r7
            return
        L40:
            com.mbridge.msdk.dycreator.bus.EventBusException r0 = new com.mbridge.msdk.dycreator.bus.EventBusException     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = "Could not send handler message"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L48
            throw r0     // Catch: java.lang.Throwable -> L48
        L48:
            r0 = move-exception
            r6.d = r7
            throw r0
    }
}
