package com.kwad.sdk.utils;

public final class o {
    private static boolean aIk;
    private static boolean aIl;

    public static boolean HX() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 2
            boolean r0 = r0.R(r1)
            r0 = r0 ^ 1
            boolean r1 = com.kwad.sdk.utils.o.aIk
            r0 = r0 & r1
            return r0
    }

    public static boolean HY() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 4
            boolean r0 = r0.R(r1)
            r0 = r0 ^ 1
            boolean r1 = com.kwad.sdk.utils.o.aIk
            r0 = r0 & r1
            return r0
    }

    public static boolean HZ() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            boolean r0 = r0.xv()
            if (r0 == 0) goto L14
            boolean r0 = com.kwad.sdk.utils.o.aIk
            if (r0 == 0) goto L14
            r0 = 1
            return r0
        L14:
            r0 = 0
            return r0
    }

    public static boolean Ia() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 16
            boolean r0 = r0.R(r1)
            r0 = r0 ^ 1
            boolean r1 = com.kwad.sdk.utils.o.aIk
            r0 = r0 & r1
            return r0
    }

    public static boolean Ib() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 4096(0x1000, double:2.0237E-320)
            boolean r0 = r0.R(r1)
            r0 = r0 ^ 1
            boolean r1 = com.kwad.sdk.utils.o.aIk
            r0 = r0 & r1
            return r0
    }

    public static boolean Ic() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 1
            boolean r0 = r0.R(r1)
            r0 = r0 ^ 1
            boolean r1 = com.kwad.sdk.utils.o.aIk
            r0 = r0 & r1
            return r0
    }

    public static boolean Id() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 128(0x80, double:6.3E-322)
            boolean r0 = r0.R(r1)
            r0 = r0 ^ 1
            boolean r1 = com.kwad.sdk.utils.o.aIk
            r0 = r0 & r1
            return r0
    }

    public static boolean Ie() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 128(0x80, double:6.3E-322)
            boolean r0 = r0.R(r1)
            r0 = r0 ^ 1
            boolean r1 = com.kwad.sdk.utils.o.aIk
            r0 = r0 & r1
            return r0
    }

    public static synchronized void bE(boolean r1) {
            java.lang.Class<com.kwad.sdk.utils.o> r1 = com.kwad.sdk.utils.o.class
            monitor-enter(r1)
            boolean r0 = com.kwad.sdk.utils.o.aIl     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L9
            monitor-exit(r1)
            return
        L9:
            r0 = 1
            com.kwad.sdk.utils.o.aIl = r0     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.utils.o.aIk = r0     // Catch: java.lang.Throwable -> L1b
            java.lang.Class<com.kwad.sdk.service.a.b> r0 = com.kwad.sdk.service.a.b.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)     // Catch: java.lang.Throwable -> L1b
            com.kwad.sdk.service.a.b r0 = (com.kwad.sdk.service.a.b) r0     // Catch: java.lang.Throwable -> L1b
            r0.xq()     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r1)
            return
        L1b:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
