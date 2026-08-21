package com.sigmob.sdk.videocache;

class k extends java.net.ProxySelector {
    private static final java.util.List<java.net.Proxy> a = null;
    private final java.net.ProxySelector b;
    private final java.lang.String c;
    private final int d;

    static {
            r0 = 1
            java.net.Proxy[] r0 = new java.net.Proxy[r0]
            java.net.Proxy r1 = java.net.Proxy.NO_PROXY
            r2 = 0
            r0[r2] = r1
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.sigmob.sdk.videocache.k.a = r0
            return
    }

    k(java.net.ProxySelector r1, java.lang.String r2, int r3) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.sigmob.sdk.videocache.n.a(r1)
            java.net.ProxySelector r1 = (java.net.ProxySelector) r1
            r0.b = r1
            java.lang.Object r1 = com.sigmob.sdk.videocache.n.a(r2)
            java.lang.String r1 = (java.lang.String) r1
            r0.c = r1
            r0.d = r3
            return
    }

    static void a(java.lang.String r2, int r3) {
            java.net.ProxySelector r0 = java.net.ProxySelector.getDefault()
            com.sigmob.sdk.videocache.k r1 = new com.sigmob.sdk.videocache.k
            r1.<init>(r0, r2, r3)
            java.net.ProxySelector.setDefault(r1)
            return
    }

    @Override
    public void connectFailed(java.net.URI r2, java.net.SocketAddress r3, java.io.IOException r4) {
            r1 = this;
            java.net.ProxySelector r0 = r1.b
            r0.connectFailed(r2, r3, r4)
            return
    }

    @Override
    public java.util.List<java.net.Proxy> select(java.net.URI r3) {
            r2 = this;
            java.lang.String r0 = r2.c
            java.lang.String r1 = r3.getHost()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L16
            int r0 = r2.d
            int r1 = r3.getPort()
            if (r0 != r1) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            if (r0 == 0) goto L1c
            java.util.List<java.net.Proxy> r3 = com.sigmob.sdk.videocache.k.a
            goto L22
        L1c:
            java.net.ProxySelector r0 = r2.b
            java.util.List r3 = r0.select(r3)
        L22:
            return r3
    }
}
