package com.cmic.gen.sdk.c;

public class c extends com.cmic.gen.sdk.c.a {
    private static final java.lang.String[] a = null;
    private final com.cmic.gen.sdk.a b;

    static {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            java.lang.String r2 = "TLSv1.2"
            r0[r1] = r2
            com.cmic.gen.sdk.c.c.a = r0
            return
    }

    public c(javax.net.ssl.SSLSocketFactory r1, com.cmic.gen.sdk.a r2) {
            r0 = this;
            r0.<init>()
            r0.delegate = r1
            r0.b = r2
            return
    }

    private java.net.Socket a(java.net.Socket r8) {
            r7 = this;
            boolean r0 = r8 instanceof javax.net.ssl.SSLSocket
            if (r0 == 0) goto L3b
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 >= r1) goto L3b
            java.lang.String r0 = "Tls12SocketFactory"
            java.lang.String r1 = "5.0以下启动tls 1.2"
            com.cmic.gen.sdk.e.c.b(r0, r1)
            r0 = r8
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            java.lang.String[] r1 = r0.getEnabledProtocols()
            int r2 = r1.length
            r3 = 0
            r4 = 0
        L1b:
            if (r4 >= r2) goto L27
            r5 = r1[r4]
            java.lang.String r6 = "enableProtocol"
            com.cmic.gen.sdk.e.c.a(r6, r5)
            int r4 = r4 + 1
            goto L1b
        L27:
            java.lang.String[] r1 = com.cmic.gen.sdk.c.c.a
            r0.setEnabledProtocols(r1)
            r1 = 2
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.String r2 = "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA"
            r1[r3] = r2
            java.lang.String r2 = "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"
            r3 = 1
            r1[r3] = r2
            r0.setEnabledCipherSuites(r1)
        L3b:
            com.cmic.gen.sdk.a r0 = r7.b
            java.net.InetAddress r1 = r8.getLocalAddress()
            java.lang.String r1 = r1.getHostAddress()
            java.lang.String r2 = "socketip"
            r0.a(r2, r1)
            return r8
    }

    @Override
    public java.net.Socket createSocket() throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.net.Socket r0 = r0.createSocket()
            java.net.Socket r0 = r1.a(r0)
            return r0
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r2, int r3) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.net.Socket r2 = r0.createSocket(r2, r3)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r2, int r3) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.net.Socket r2 = r0.createSocket(r2, r3)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r2, java.lang.String r3, int r4, boolean r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.lang.String[] getDefaultCipherSuites() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.lang.String[] r0 = r0.getDefaultCipherSuites()
            return r0
    }

    @Override
    public java.lang.String[] getSupportedCipherSuites() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.delegate
            java.lang.String[] r0 = r0.getSupportedCipherSuites()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "Tls12SocketFactory"
            return r0
    }
}
