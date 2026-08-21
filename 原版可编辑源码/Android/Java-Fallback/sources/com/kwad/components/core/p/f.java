package com.kwad.components.core.p;

public final class f {
    private static volatile boolean PE;
    private static volatile boolean PF;
    private static android.content.Context PG;
    private static final java.util.List<com.kwad.components.core.p.f.a> PH = null;





    public interface a {
        void a(com.kwad.sdk.core.response.model.SdkConfigData r1);

        void on();
    }

    static {
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.components.core.p.f.PH = r0
            return
    }

    public static synchronized void a(android.content.Context r2, com.kwad.components.core.p.f.a r3) {
            java.lang.Class<com.kwad.components.core.p.f> r0 = com.kwad.components.core.p.f.class
            monitor-enter(r0)
            boolean r1 = com.kwad.components.core.p.f.PE     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L10
            java.lang.String r2 = "ConfigRequestManager"
            java.lang.String r3 = "config request manager has init-ed"
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)
            return
        L10:
            r1 = 1
            com.kwad.components.core.p.f.PE = r1     // Catch: java.lang.Throwable -> L2e
            com.kwad.components.core.p.f.PG = r2     // Catch: java.lang.Throwable -> L2e
            java.util.List<com.kwad.components.core.p.f$a> r2 = com.kwad.components.core.p.f.PH     // Catch: java.lang.Throwable -> L2e
            r2.add(r3)     // Catch: java.lang.Throwable -> L2e
            java.util.List<com.kwad.components.core.p.f$a> r2 = com.kwad.components.core.p.f.PH     // Catch: java.lang.Throwable -> L2e
            com.kwad.components.core.p.f$1 r3 = new com.kwad.components.core.p.f$1     // Catch: java.lang.Throwable -> L2e
            r3.<init>()     // Catch: java.lang.Throwable -> L2e
            r2.add(r3)     // Catch: java.lang.Throwable -> L2e
            com.kwad.components.core.p.f$2 r2 = new com.kwad.components.core.p.f$2     // Catch: java.lang.Throwable -> L2e
            r2.<init>()     // Catch: java.lang.Throwable -> L2e
            com.kwad.sdk.utils.g.execute(r2)     // Catch: java.lang.Throwable -> L2e
            monitor-exit(r0)
            return
        L2e:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static void a(com.kwad.components.core.p.f.a r1) {
            java.util.List<com.kwad.components.core.p.f$a> r0 = com.kwad.components.core.p.f.PH
            r0.add(r1)
            boolean r0 = isLoaded()
            if (r0 == 0) goto Le
            r1.on()
        Le:
            boolean r0 = com.kwad.components.core.p.f.PF
            if (r0 == 0) goto L19
            com.kwad.sdk.core.response.model.SdkConfigData r0 = com.kwad.sdk.core.config.d.zw()
            r1.a(r0)
        L19:
            return
    }

    static boolean aD(boolean r0) {
            r0 = 1
            com.kwad.components.core.p.f.PF = r0
            return r0
    }

    static java.util.List aR() {
            java.util.List<com.kwad.components.core.p.f$a> r0 = com.kwad.components.core.p.f.PH
            return r0
    }

    private static boolean isLoaded() {
            boolean r0 = com.kwad.sdk.core.config.d.isLoaded()
            return r0
    }

    public static void pF() {
            java.lang.String r0 = "ConfigRequestManager"
            java.lang.String r1 = "load()"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.p.f$3 r0 = new com.kwad.components.core.p.f$3
            r0.<init>()
            com.kwad.components.core.p.f$4 r1 = new com.kwad.components.core.p.f$4
            r1.<init>()
            r0.request(r1)
            return
    }

    static android.content.Context pG() {
            android.content.Context r0 = com.kwad.components.core.p.f.PG
            return r0
    }
}
