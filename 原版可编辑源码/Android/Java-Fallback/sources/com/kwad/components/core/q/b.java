package com.kwad.components.core.q;

public class b {
    private static volatile com.kwad.components.core.q.b Qs = null;
    private static volatile int Qt = 204800;
    static volatile boolean Qu = true;
    static volatile boolean Qv;
    static volatile java.util.Set<com.kwad.components.core.q.c> Qw;

    static {
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            java.util.Set r0 = java.util.Collections.newSetFromMap(r0)
            java.util.Set r0 = java.util.Collections.synchronizedSet(r0)
            com.kwad.components.core.q.b.Qw = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized void a(com.kwad.components.core.q.c r2) {
            java.lang.Class<com.kwad.components.core.q.b> r0 = com.kwad.components.core.q.b.class
            monitor-enter(r0)
            java.util.Set<com.kwad.components.core.q.c> r1 = com.kwad.components.core.q.b.Qw     // Catch: java.lang.Throwable -> L12
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L10
            java.util.Set<com.kwad.components.core.q.c> r1 = com.kwad.components.core.q.b.Qw     // Catch: java.lang.Throwable -> L12
            r1.remove(r2)     // Catch: java.lang.Throwable -> L12
        L10:
            monitor-exit(r0)
            return
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static void e(boolean r0, int r1) {
            if (r1 <= 0) goto L6
            int r1 = r1 * 1024
            com.kwad.components.core.q.b.Qt = r1
        L6:
            com.kwad.components.core.q.b.Qu = r0
            return
    }

    public static com.kwad.components.core.q.b pL() {
            com.kwad.components.core.q.b r0 = com.kwad.components.core.q.b.Qs
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.q.b> r0 = com.kwad.components.core.q.b.class
            monitor-enter(r0)
            com.kwad.components.core.q.b r1 = com.kwad.components.core.q.b.Qs     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.q.b r1 = new com.kwad.components.core.q.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.q.b.Qs = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.q.b r0 = com.kwad.components.core.q.b.Qs
            return r0
    }

    public static boolean pM() {
            boolean r0 = com.kwad.components.core.q.b.Qu
            return r0
    }

    public static int pN() {
            int r0 = com.kwad.components.core.q.b.Qt
            int r0 = r0 / 1024
            return r0
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.core.SpeedLimitApi> r0 = com.kwad.sdk.api.core.SpeedLimitApi.class
            java.lang.Class<com.kwad.components.core.q.a> r1 = com.kwad.components.core.q.a.class
            com.kwad.sdk.service.b.b(r0, r1)     // Catch: java.lang.Throwable -> L7
        L7:
            return
    }

    private static synchronized java.io.InputStream wrap(java.io.InputStream r3) {
            java.lang.Class<com.kwad.components.core.q.b> r0 = com.kwad.components.core.q.b.class
            monitor-enter(r0)
            java.util.Set<com.kwad.components.core.q.c> r1 = com.kwad.components.core.q.b.Qw     // Catch: java.lang.Throwable -> L1a
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L1a
            int r2 = com.kwad.components.core.q.b.Qt     // Catch: java.lang.Throwable -> L1a
            int r1 = r1 + 1
            int r2 = r2 / r1
            com.kwad.components.core.q.c r1 = new com.kwad.components.core.q.c     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L1a
            java.util.Set<com.kwad.components.core.q.c> r3 = com.kwad.components.core.q.b.Qw     // Catch: java.lang.Throwable -> L1a
            r3.add(r1)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)
            return r1
        L1a:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static java.io.InputStream wrapInputStream(java.io.InputStream r0) {
            java.io.InputStream r0 = wrap(r0)
            return r0
    }

    public final synchronized int pO() {
            r4 = this;
            monitor-enter(r4)
            r0 = 0
            java.util.Set<com.kwad.components.core.q.c> r1 = com.kwad.components.core.q.b.Qw     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L1e
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L1e
        L8:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L1e
            if (r2 == 0) goto L1e
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L1e
            com.kwad.components.core.q.c r2 = (com.kwad.components.core.q.c) r2     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L1e
            long r2 = r2.pP()     // Catch: java.lang.Throwable -> L1b java.lang.Exception -> L1e
            int r2 = (int) r2
            int r0 = r0 + r2
            goto L8
        L1b:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
        L1e:
            monitor-exit(r4)
            return r0
    }
}
