package com.tkay.expressad.exoplayer;

public final class l {
    public static final java.lang.String a = "ExoPlayer";
    public static final java.lang.String b = "2.8.4";
    public static final java.lang.String c = "ExoPlayerLib/2.8.4";
    public static final int d = 2008004;
    public static final boolean e = true;
    public static final boolean f = true;
    private static final java.util.HashSet<java.lang.String> g = null;
    private static java.lang.String h;

    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.tkay.expressad.exoplayer.l.g = r0
            java.lang.String r0 = "goog.exo.core"
            com.tkay.expressad.exoplayer.l.h = r0
            return
    }

    private l() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized java.lang.String a() {
            java.lang.Class<com.tkay.expressad.exoplayer.l> r0 = com.tkay.expressad.exoplayer.l.class
            monitor-enter(r0)
            java.lang.String r1 = com.tkay.expressad.exoplayer.l.h     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static synchronized void a(java.lang.String r3) {
            java.lang.Class<com.tkay.expressad.exoplayer.l> r0 = com.tkay.expressad.exoplayer.l.class
            monitor-enter(r0)
            java.util.HashSet<java.lang.String> r1 = com.tkay.expressad.exoplayer.l.g     // Catch: java.lang.Throwable -> L25
            boolean r1 = r1.add(r3)     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L23
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25
            r1.<init>()     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = com.tkay.expressad.exoplayer.l.h     // Catch: java.lang.Throwable -> L25
            r1.append(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = ", "
            r1.append(r2)     // Catch: java.lang.Throwable -> L25
            r1.append(r3)     // Catch: java.lang.Throwable -> L25
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L25
            com.tkay.expressad.exoplayer.l.h = r3     // Catch: java.lang.Throwable -> L25
        L23:
            monitor-exit(r0)
            return
        L25:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
