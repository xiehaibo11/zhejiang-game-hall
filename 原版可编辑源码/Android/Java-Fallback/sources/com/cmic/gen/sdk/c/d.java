package com.cmic.gen.sdk.c;

public class d extends com.cmic.gen.sdk.c.a {
    private static final java.lang.String[] b = null;
    javax.net.ssl.HostnameVerifier a;
    private final java.lang.String c;
    private final javax.net.ssl.HttpsURLConnection d;
    private final android.net.Network e;
    private final com.cmic.gen.sdk.a f;

    static {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            java.lang.String r2 = "TLSv1.2"
            r0[r1] = r2
            com.cmic.gen.sdk.c.d.b = r0
            return
    }

    public d(javax.net.ssl.HttpsURLConnection r2, android.net.Network r3, com.cmic.gen.sdk.a r4) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.cmic.gen.sdk.c.d> r0 = com.cmic.gen.sdk.c.d.class
            java.lang.String r0 = r0.getSimpleName()
            r1.c = r0
            javax.net.ssl.HostnameVerifier r0 = javax.net.ssl.HttpsURLConnection.getDefaultHostnameVerifier()
            r1.a = r0
            r1.d = r2
            r1.e = r3
            r1.f = r4
            return
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r1, int r2) throws java.io.IOException, java.net.UnknownHostException {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r1, int r2, java.net.InetAddress r3, int r4) throws java.io.IOException, java.net.UnknownHostException {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r1, int r2) throws java.io.IOException {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r1, int r2, java.net.InetAddress r3, int r4) throws java.io.IOException {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r5, java.lang.String r6, int r7, boolean r8) throws java.io.IOException {
            r4 = this;
            javax.net.ssl.HttpsURLConnection r7 = r4.d
            java.lang.String r0 = "Host"
            java.lang.String r7 = r7.getRequestProperty(r0)
            if (r7 != 0) goto Lb
            goto Lc
        Lb:
            r6 = r7
        Lc:
            java.lang.String r7 = r4.c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "customized createSocket. host: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.cmic.gen.sdk.e.c.b(r7, r0)
            java.lang.String r7 = r4.c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "plainSocket localAddress: "
            r0.append(r1)
            java.net.InetAddress r1 = r5.getLocalAddress()
            java.lang.String r1 = r1.getHostAddress()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.cmic.gen.sdk.e.c.b(r7, r0)
            if (r8 == 0) goto L4c
            java.lang.String r7 = r4.c
            java.lang.String r8 = "plainSocket close"
            com.cmic.gen.sdk.e.c.b(r7, r8)
            r5.close()
        L4c:
            r7 = 0
            javax.net.SocketFactory r8 = android.net.SSLCertificateSocketFactory.getDefault(r7)
            android.net.SSLCertificateSocketFactory r8 = (android.net.SSLCertificateSocketFactory) r8
            java.net.Socket r0 = r8.createSocket()
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            android.net.Network r1 = r4.e
            if (r1 == 0) goto L68
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L68
            android.net.Network r1 = r4.e
            r1.bindSocket(r0)
        L68:
            java.net.SocketAddress r5 = r5.getRemoteSocketAddress()
            r0.connect(r5)
            com.cmic.gen.sdk.a r5 = r4.f
            java.net.InetAddress r1 = r0.getLocalAddress()
            java.lang.String r1 = r1.getHostAddress()
            java.lang.String r2 = "socketip"
            r5.a(r2, r1)
            java.lang.String[] r5 = r0.getSupportedProtocols()
            r0.setEnabledProtocols(r5)
            int r5 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            r2 = 1
            if (r5 >= r1) goto La6
            java.lang.String r5 = r4.c
            java.lang.String r1 = "5.0以下启动tls 1.2"
            com.cmic.gen.sdk.e.c.b(r5, r1)
            java.lang.String[] r5 = com.cmic.gen.sdk.c.d.b
            r0.setEnabledProtocols(r5)
            r5 = 2
            java.lang.String[] r5 = new java.lang.String[r5]
            java.lang.String r1 = "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA"
            r5[r7] = r1
            java.lang.String r1 = "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"
            r5[r2] = r1
            r0.setEnabledCipherSuites(r5)
        La6:
            int r5 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r5 < r1) goto Lb7
            java.lang.String r5 = r4.c
            java.lang.String r7 = "Setting SNI hostname"
            com.cmic.gen.sdk.e.c.b(r5, r7)
            r8.setHostname(r0, r6)
            goto Le1
        Lb7:
            java.lang.String r5 = r4.c
            java.lang.String r8 = "No documented SNI support on Android <4.2, trying with reflection"
            com.cmic.gen.sdk.e.c.b(r5, r8)
            java.lang.Class r5 = r0.getClass()     // Catch: java.lang.Exception -> Ld6
            java.lang.String r8 = "setHostname"
            java.lang.Class[] r1 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> Ld6
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r1[r7] = r3     // Catch: java.lang.Exception -> Ld6
            java.lang.reflect.Method r5 = r5.getMethod(r8, r1)     // Catch: java.lang.Exception -> Ld6
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> Ld6
            r8[r7] = r6     // Catch: java.lang.Exception -> Ld6
            r5.invoke(r0, r8)     // Catch: java.lang.Exception -> Ld6
            goto Le1
        Ld6:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r5 = r4.c
            java.lang.String r7 = "SNI not useable"
            com.cmic.gen.sdk.e.c.a(r5, r7)
        Le1:
            javax.net.ssl.SSLSession r5 = r0.getSession()
            javax.net.ssl.HostnameVerifier r7 = r4.a
            boolean r7 = r7.verify(r6, r5)
            if (r7 == 0) goto L120
            java.lang.String r6 = r4.c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Established "
            r7.append(r8)
            java.lang.String r8 = r5.getProtocol()
            r7.append(r8)
            java.lang.String r8 = " connection with "
            r7.append(r8)
            java.lang.String r8 = r5.getPeerHost()
            r7.append(r8)
            java.lang.String r8 = " using "
            r7.append(r8)
            java.lang.String r5 = r5.getCipherSuite()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            com.cmic.gen.sdk.e.c.b(r6, r5)
            return r0
        L120:
            javax.net.ssl.SSLPeerUnverifiedException r5 = new javax.net.ssl.SSLPeerUnverifiedException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Cannot verify hostname: "
            r7.append(r8)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r5.<init>(r6)
            throw r5
    }

    @Override
    public java.lang.String[] getDefaultCipherSuites() {
            r1 = this;
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
    }

    @Override
    public java.lang.String[] getSupportedCipherSuites() {
            r1 = this;
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
    }
}
