package com.kwad.components.core.offline.init;

public final class b {
    private static final java.util.concurrent.atomic.AtomicBoolean IP = null;


    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            com.kwad.components.core.offline.init.b.IP = r0
            return
    }

    @com.ksad.annotation.invoker.ForInvoker(methodId = "initOC")
    public static void ah(android.content.Context r0) {
            com.kwad.components.offline.adLive.a.am(r0)
            com.kwad.components.offline.obiwan.a.am(r0)
            com.kwad.components.offline.tk.b.am(r0)
            return
    }

    public static void init(android.content.Context r2) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.core.offline.init.b.IP
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.core.offline.init.b.IP
            r1 = 1
            r0.set(r1)
            com.kwad.components.offline.api.OfflineHostProvider r0 = com.kwad.components.offline.api.OfflineHostProvider.get()
            com.kwad.components.core.offline.init.a.g r1 = new com.kwad.components.core.offline.init.a.g
            r1.<init>()
            r0.init(r2, r1)
            com.kwad.components.core.offline.init.b$1 r0 = new com.kwad.components.core.offline.init.b$1
            r0.<init>(r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }
}
