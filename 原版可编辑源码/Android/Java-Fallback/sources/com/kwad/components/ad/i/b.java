package com.kwad.components.ad.i;

public class b implements com.kwad.sdk.core.network.i.a {
    private static volatile com.kwad.components.ad.i.b GK;

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.i.b lP() {
            com.kwad.components.ad.i.b r0 = com.kwad.components.ad.i.b.GK
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.ad.i.b> r0 = com.kwad.components.ad.i.b.class
            monitor-enter(r0)
            com.kwad.components.ad.i.b r1 = com.kwad.components.ad.i.b.GK     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.ad.i.b r1 = new com.kwad.components.ad.i.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.ad.i.b.GK = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.ad.i.b r0 = com.kwad.components.ad.i.b.GK
            return r0
    }

    @Override
    public final void a(com.kwad.sdk.core.network.g r4, int r5) {
            r3 = this;
            boolean r0 = r4 instanceof com.kwad.components.core.p.a
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.sdk.core.network.f r0 = com.kwad.sdk.core.network.f.aoU
            int r0 = r0.errorCode
            if (r5 != r0) goto Lc
            return
        Lc:
            r0 = 21004(0x520c, float:2.9433E-41)
            com.kwad.sdk.internal.api.SceneImpl r4 = r4.getScene()
            if (r4 == 0) goto L39
            long r1 = r4.getPosId()
            com.kwad.sdk.core.network.f r4 = com.kwad.sdk.core.network.f.aoP
            int r4 = r4.errorCode
            if (r5 != r4) goto L21
            r0 = 21001(0x5209, float:2.9429E-41)
            goto L32
        L21:
            com.kwad.sdk.core.network.f r4 = com.kwad.sdk.core.network.f.aoT
            int r4 = r4.errorCode
            if (r5 != r4) goto L2a
            r0 = 21003(0x520b, float:2.9431E-41)
            goto L32
        L2a:
            if (r5 <= 0) goto L32
            r4 = 1000(0x3e8, float:1.401E-42)
            if (r5 >= r4) goto L32
            r0 = 21002(0x520a, float:2.943E-41)
        L32:
            com.kwad.components.core.o.a r4 = com.kwad.components.core.o.a.pA()
            r4.a(r1, r0)
        L39:
            return
    }

    public final void init() {
            r1 = this;
            com.kwad.sdk.core.network.i r0 = com.kwad.sdk.core.network.i.Bh()
            r0.a(r1)
            return
    }
}
