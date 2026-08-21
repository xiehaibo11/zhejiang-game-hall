package com.mbridge.msdk.dycreator.bus;

final class PendingPost {
    private static final java.util.List<com.mbridge.msdk.dycreator.bus.PendingPost> d = null;
    java.lang.Object a;
    com.mbridge.msdk.dycreator.bus.Subscription b;
    com.mbridge.msdk.dycreator.bus.PendingPost c;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.dycreator.bus.PendingPost.d = r0
            return
    }

    private PendingPost(java.lang.Object r1, com.mbridge.msdk.dycreator.bus.Subscription r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    static com.mbridge.msdk.dycreator.bus.PendingPost a(com.mbridge.msdk.dycreator.bus.Subscription r3, java.lang.Object r4) {
            java.util.List<com.mbridge.msdk.dycreator.bus.PendingPost> r0 = com.mbridge.msdk.dycreator.bus.PendingPost.d
            monitor-enter(r0)
            java.util.List<com.mbridge.msdk.dycreator.bus.PendingPost> r1 = com.mbridge.msdk.dycreator.bus.PendingPost.d     // Catch: java.lang.Throwable -> L25
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L25
            if (r1 <= 0) goto L1e
            java.util.List<com.mbridge.msdk.dycreator.bus.PendingPost> r2 = com.mbridge.msdk.dycreator.bus.PendingPost.d     // Catch: java.lang.Throwable -> L25
            int r1 = r1 + (-1)
            java.lang.Object r1 = r2.remove(r1)     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.dycreator.bus.PendingPost r1 = (com.mbridge.msdk.dycreator.bus.PendingPost) r1     // Catch: java.lang.Throwable -> L25
            r1.a = r4     // Catch: java.lang.Throwable -> L25
            r1.b = r3     // Catch: java.lang.Throwable -> L25
            r3 = 0
            r1.c = r3     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            return r1
        L1e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.dycreator.bus.PendingPost r0 = new com.mbridge.msdk.dycreator.bus.PendingPost
            r0.<init>(r4, r3)
            return r0
        L25:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            throw r3
    }

    static void a(com.mbridge.msdk.dycreator.bus.PendingPost r3) {
            r0 = 0
            r3.a = r0
            r3.b = r0
            r3.c = r0
            java.util.List<com.mbridge.msdk.dycreator.bus.PendingPost> r0 = com.mbridge.msdk.dycreator.bus.PendingPost.d
            monitor-enter(r0)
            java.util.List<com.mbridge.msdk.dycreator.bus.PendingPost> r1 = com.mbridge.msdk.dycreator.bus.PendingPost.d     // Catch: java.lang.Throwable -> L1b
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L1b
            r2 = 10000(0x2710, float:1.4013E-41)
            if (r1 >= r2) goto L19
            java.util.List<com.mbridge.msdk.dycreator.bus.PendingPost> r1 = com.mbridge.msdk.dycreator.bus.PendingPost.d     // Catch: java.lang.Throwable -> L1b
            r1.add(r3)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return
        L1b:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r3
    }
}
