package com.kwad.sdk.service;

public final class b {
    private static final java.util.Map<java.lang.Class<?>, java.lang.Class<?>> aHA = null;
    private static boolean aHB;
    private static boolean aHC;
    private static final java.util.Map<java.lang.Class<?>, java.lang.Class<?>> aHz = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.service.b.aHz = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.service.b.aHA = r0
            r0 = 0
            com.kwad.sdk.service.b.aHB = r0
            com.kwad.sdk.service.b.aHC = r0
            return
    }

    private static synchronized void HA() {
            java.lang.Class<com.kwad.sdk.service.b> r0 = com.kwad.sdk.service.b.class
            monitor-enter(r0)
            boolean r1 = com.kwad.sdk.service.b.aHC     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return
        L9:
            HB()     // Catch: java.lang.Throwable -> L11
            r1 = 1
            com.kwad.sdk.service.b.aHC = r1     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)
            return
        L11:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @com.ksad.annotation.invoker.ForInvoker(methodId = "initModeImplForInvoker")
    private static void HB() {
            com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl.register()
            com.kwad.components.core.internal.api.d.register()
            com.kwad.components.core.internal.api.VideoPlayConfigImpl.register()
            com.kwad.components.core.q.b.register()
            com.kwad.sdk.internal.api.SceneImpl.register()
            return
    }

    private static synchronized void Hy() {
            java.lang.Class<com.kwad.sdk.service.b> r0 = com.kwad.sdk.service.b.class
            monitor-enter(r0)
            boolean r1 = com.kwad.sdk.service.b.aHB     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return
        L9:
            Hz()     // Catch: java.lang.Throwable -> L11
            r1 = 1
            com.kwad.sdk.service.b.aHB = r1     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)
            return
        L11:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @com.ksad.annotation.invoker.ForInvoker(methodId = "initComponentProxyForInvoker")
    private static void Hz() {
            com.kwad.components.ad.feed.FeedDownloadActivityProxy.register()
            com.kwad.components.ad.fullscreen.KsFullScreenLandScapeVideoActivityProxy.register()
            com.kwad.components.ad.fullscreen.KsFullScreenVideoActivityProxy.register()
            com.kwad.components.ad.reward.KSRewardLandScapeVideoActivityProxy.register()
            com.kwad.components.ad.reward.KSRewardVideoActivityProxy.register()
            com.kwad.components.core.page.a.register()
            com.kwad.components.core.page.AdWebViewActivityProxy.register()
            com.kwad.components.core.page.AdWebViewVideoActivityProxy.register()
            com.kwad.components.core.page.d.register()
            com.kwad.components.core.s.a.a.register()
            com.kwad.framework.filedownloader.services.FileDownloadServiceProxy.register()
            com.kwad.sdk.collector.b.a.register()
            com.kwad.sdk.service.a.register()
            return
    }

    public static void a(java.lang.Class<?> r1, java.lang.Class<?> r2) {
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.kwad.sdk.service.b.aHz
            r0.put(r1, r2)
            return
    }

    public static void b(java.lang.Class r1, java.lang.Class r2) {
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.kwad.sdk.service.b.aHA
            r0.put(r1, r2)
            return
    }

    public static java.lang.Class<?> g(java.lang.Class<?> r1) {
            Hy()
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.kwad.sdk.service.b.aHz
            java.lang.Object r1 = r0.get(r1)
            java.lang.Class r1 = (java.lang.Class) r1
            return r1
    }

    public static java.lang.Class<?> h(java.lang.Class<?> r1) {
            HA()
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.kwad.sdk.service.b.aHA
            java.lang.Object r1 = r0.get(r1)
            java.lang.Class r1 = (java.lang.Class) r1
            return r1
    }

    public static void init() {
            Hy()
            HA()
            return
    }
}
