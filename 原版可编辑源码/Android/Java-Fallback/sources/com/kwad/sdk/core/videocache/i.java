package com.kwad.sdk.core.videocache;

final class i extends java.net.ProxySelector {
    private static final java.util.List<java.net.Proxy> awJ = null;
    private final java.net.ProxySelector awK;
    private final java.lang.String awL;
    private final int awM;

    static {
            r0 = 1
            java.net.Proxy[] r0 = new java.net.Proxy[r0]
            java.net.Proxy r1 = java.net.Proxy.NO_PROXY
            r2 = 0
            r0[r2] = r1
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.kwad.sdk.core.videocache.i.awJ = r0
            return
    }

    private i(java.net.ProxySelector r1, java.lang.String r2, int r3) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.kwad.sdk.utils.ao.checkNotNull(r1)
            java.net.ProxySelector r1 = (java.net.ProxySelector) r1
            r0.awK = r1
            java.lang.String r1 = com.kwad.sdk.utils.ao.fE(r2)
            r0.awL = r1
            r0.awM = r3
            return
    }

    static void install(java.lang.String r2, int r3) {
            java.net.ProxySelector r0 = java.net.ProxySelector.getDefault()
            com.kwad.sdk.core.videocache.i r1 = new com.kwad.sdk.core.videocache.i
            r1.<init>(r0, r2, r3)
            java.net.ProxySelector.setDefault(r1)
            return
    }

    @Override
    public final void connectFailed(java.net.URI r2, java.net.SocketAddress r3, java.io.IOException r4) {
            r1 = this;
            java.net.ProxySelector r0 = r1.awK
            r0.connectFailed(r2, r3, r4)
            return
    }

    @Override
    public final java.util.List<java.net.Proxy> select(java.net.URI r3) {
            r2 = this;
            java.lang.String r0 = r2.awL
            java.lang.String r1 = r3.getHost()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L16
            int r0 = r2.awM
            int r1 = r3.getPort()
            if (r0 != r1) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            if (r0 == 0) goto L1c
            java.util.List<java.net.Proxy> r3 = com.kwad.sdk.core.videocache.i.awJ
            return r3
        L1c:
            java.net.ProxySelector r0 = r2.awK
            java.util.List r3 = r0.select(r3)
            return r3
    }
}
