package com.huawei.secure.android.common.ssl;

public class SecureSSLSocketFactory extends javax.net.ssl.SSLSocketFactory {

    @java.lang.Deprecated
    public static final org.apache.http.conn.ssl.X509HostnameVerifier BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = null;

    @java.lang.Deprecated
    public static final org.apache.http.conn.ssl.X509HostnameVerifier STRICT_HOSTNAME_VERIFIER = null;
    private static final java.lang.String i = null;
    private static volatile com.huawei.secure.android.common.ssl.SecureSSLSocketFactory j;
    private javax.net.ssl.SSLContext a;
    private javax.net.ssl.SSLSocket b;
    private android.content.Context c;
    private java.lang.String[] d;
    private javax.net.ssl.X509TrustManager e;
    private java.lang.String[] f;
    private java.lang.String[] g;
    private java.lang.String[] h;

    static {
            org.apache.http.conn.ssl.BrowserCompatHostnameVerifier r0 = new org.apache.http.conn.ssl.BrowserCompatHostnameVerifier
            r0.<init>()
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = r0
            org.apache.http.conn.ssl.StrictHostnameVerifier r0 = new org.apache.http.conn.ssl.StrictHostnameVerifier
            r0.<init>()
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.STRICT_HOSTNAME_VERIFIER = r0
            java.lang.Class<com.huawei.secure.android.common.ssl.SecureSSLSocketFactory> r0 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.class
            java.lang.String r0 = r0.getSimpleName()
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i = r0
            r0 = 0
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j = r0
            return
    }

    private SecureSSLSocketFactory(android.content.Context r5) throws java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.io.IOException, java.security.KeyManagementException {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r0
            if (r5 != 0) goto L12
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r0 = "SecureSSLSocketFactory: context is null"
            com.huawei.secure.android.common.ssl.util.g.b(r5, r0)
            return
        L12:
            r4.setContext(r5)
            javax.net.ssl.SSLContext r1 = com.huawei.secure.android.common.ssl.SSLUtil.setSSLContext()
            r4.setSslContext(r1)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r5 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.getInstance(r5)
            r4.e = r5
            javax.net.ssl.SSLContext r1 = r4.a
            r2 = 1
            javax.net.ssl.X509TrustManager[] r2 = new javax.net.ssl.X509TrustManager[r2]
            r3 = 0
            r2[r3] = r5
            r1.init(r0, r2, r0)
            return
    }

    public SecureSSLSocketFactory(java.io.InputStream r4, java.lang.String r5) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.security.KeyManagementException, java.lang.IllegalArgumentException {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.a = r0
            r3.b = r0
            javax.net.ssl.SSLContext r1 = com.huawei.secure.android.common.ssl.SSLUtil.setSSLContext()
            r3.a = r1
            com.huawei.secure.android.common.ssl.HiCloudX509TrustManager r1 = new com.huawei.secure.android.common.ssl.HiCloudX509TrustManager
            r1.<init>(r4, r5)
            r3.setX509TrustManager(r1)
            javax.net.ssl.SSLContext r4 = r3.a
            r5 = 1
            javax.net.ssl.X509TrustManager[] r5 = new javax.net.ssl.X509TrustManager[r5]
            r2 = 0
            r5[r2] = r1
            r4.init(r0, r5, r0)
            return
    }

    public SecureSSLSocketFactory(javax.net.ssl.X509TrustManager r5) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.lang.IllegalArgumentException {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r0
            javax.net.ssl.SSLContext r1 = com.huawei.secure.android.common.ssl.SSLUtil.setSSLContext()
            r4.a = r1
            r4.setX509TrustManager(r5)
            javax.net.ssl.SSLContext r1 = r4.a
            r2 = 1
            javax.net.ssl.X509TrustManager[] r2 = new javax.net.ssl.X509TrustManager[r2]
            r3 = 0
            r2[r3] = r5
            r1.init(r0, r2, r0)
            return
    }

    private void a(java.net.Socket r5) {
            r4 = this;
            java.lang.String[] r0 = r4.h
            boolean r0 = com.huawei.secure.android.common.ssl.util.a.a(r0)
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L1b
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r3 = "set protocols"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r3)
            r0 = r5
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            java.lang.String[] r3 = r4.h
            com.huawei.secure.android.common.ssl.SSLUtil.setEnabledProtocols(r0, r3)
            r0 = r1
            goto L1c
        L1b:
            r0 = r2
        L1c:
            java.lang.String[] r3 = r4.g
            boolean r3 = com.huawei.secure.android.common.ssl.util.a.a(r3)
            if (r3 == 0) goto L2f
            java.lang.String[] r3 = r4.f
            boolean r3 = com.huawei.secure.android.common.ssl.util.a.a(r3)
            if (r3 != 0) goto L2d
            goto L2f
        L2d:
            r1 = r2
            goto L4f
        L2f:
            java.lang.String r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r3 = "set white cipher or black cipher"
            com.huawei.secure.android.common.ssl.util.g.c(r2, r3)
            r2 = r5
            javax.net.ssl.SSLSocket r2 = (javax.net.ssl.SSLSocket) r2
            com.huawei.secure.android.common.ssl.SSLUtil.setEnabledProtocols(r2)
            java.lang.String[] r3 = r4.g
            boolean r3 = com.huawei.secure.android.common.ssl.util.a.a(r3)
            if (r3 != 0) goto L4a
            java.lang.String[] r3 = r4.g
            com.huawei.secure.android.common.ssl.SSLUtil.setWhiteListCipherSuites(r2, r3)
            goto L4f
        L4a:
            java.lang.String[] r3 = r4.f
            com.huawei.secure.android.common.ssl.SSLUtil.setBlackListCipherSuites(r2, r3)
        L4f:
            if (r0 != 0) goto L5e
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r2 = "set default protocols"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r2)
            r0 = r5
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            com.huawei.secure.android.common.ssl.SSLUtil.setEnabledProtocols(r0)
        L5e:
            if (r1 != 0) goto L6c
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r1 = "set default cipher suites"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            javax.net.ssl.SSLSocket r5 = (javax.net.ssl.SSLSocket) r5
            com.huawei.secure.android.common.ssl.SSLUtil.setEnableSafeCipherSuites(r5)
        L6c:
            return
    }

    static void a(javax.net.ssl.X509TrustManager r5) {
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r1 = "ssf update socket factory trust manager"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            long r0 = java.lang.System.currentTimeMillis()
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r2 = new com.huawei.secure.android.common.ssl.SecureSSLSocketFactory     // Catch: java.security.KeyManagementException -> L13 java.security.NoSuchAlgorithmException -> L1b
            r2.<init>(r5)     // Catch: java.security.KeyManagementException -> L13 java.security.NoSuchAlgorithmException -> L1b
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j = r2     // Catch: java.security.KeyManagementException -> L13 java.security.NoSuchAlgorithmException -> L1b
            goto L22
        L13:
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r2 = "KeyManagementException"
            com.huawei.secure.android.common.ssl.util.g.b(r5, r2)
            goto L22
        L1b:
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r2 = "NoSuchAlgorithmException"
            com.huawei.secure.android.common.ssl.util.g.b(r5, r2)
        L22:
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "update: cost : "
            r2.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            r2.append(r3)
            java.lang.String r0 = " ms"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r5, r0)
            return
    }

    public static com.huawei.secure.android.common.ssl.SecureSSLSocketFactory getInstance(android.content.Context r5) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.lang.IllegalAccessException, java.security.KeyManagementException, java.lang.IllegalArgumentException {
            long r0 = java.lang.System.currentTimeMillis()
            com.huawei.secure.android.common.ssl.util.c.a(r5)
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j
            if (r2 != 0) goto L1e
            java.lang.Class<com.huawei.secure.android.common.ssl.SecureSSLSocketFactory> r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.class
            monitor-enter(r2)
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r3 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j     // Catch: java.lang.Throwable -> L1b
            if (r3 != 0) goto L19
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r3 = new com.huawei.secure.android.common.ssl.SecureSSLSocketFactory     // Catch: java.lang.Throwable -> L1b
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L1b
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j = r3     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            goto L1e
        L1b:
            r5 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            throw r5
        L1e:
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j
            android.content.Context r2 = r2.c
            if (r2 != 0) goto L2b
            if (r5 == 0) goto L2b
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r2 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j
            r2.setContext(r5)
        L2b:
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getInstance: cost : "
            r2.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            r2.append(r3)
            java.lang.String r0 = " ms"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r5, r0)
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r5 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.j
            return r5
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r3, int r4) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r1 = "createSocket: host , port"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            javax.net.ssl.SSLContext r0 = r2.a
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r3 = r0.createSocket(r3, r4)
            boolean r4 = r3 instanceof javax.net.ssl.SSLSocket
            if (r4 == 0) goto L29
            r2.a(r3)
            r4 = r3
            javax.net.ssl.SSLSocket r4 = (javax.net.ssl.SSLSocket) r4
            r2.b = r4
            java.lang.String[] r4 = r4.getEnabledCipherSuites()
            java.lang.Object r4 = r4.clone()
            java.lang.String[] r4 = (java.lang.String[]) r4
            r2.d = r4
        L29:
            return r3
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r1, int r2, java.net.InetAddress r3, int r4) throws java.io.IOException, java.net.UnknownHostException {
            r0 = this;
            java.net.Socket r1 = r0.createSocket(r1, r2)
            return r1
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r1, int r2) throws java.io.IOException {
            r0 = this;
            java.lang.String r1 = r1.getHostAddress()
            java.net.Socket r1 = r0.createSocket(r1, r2)
            return r1
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r1, int r2, java.net.InetAddress r3, int r4) throws java.io.IOException {
            r0 = this;
            java.lang.String r1 = r1.getHostAddress()
            java.net.Socket r1 = r0.createSocket(r1, r2)
            return r1
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r3, java.lang.String r4, int r5, boolean r6) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.i
            java.lang.String r1 = "createSocket s host port autoClose"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            javax.net.ssl.SSLContext r0 = r2.a
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r3 = r0.createSocket(r3, r4, r5, r6)
            boolean r4 = r3 instanceof javax.net.ssl.SSLSocket
            if (r4 == 0) goto L29
            r2.a(r3)
            r4 = r3
            javax.net.ssl.SSLSocket r4 = (javax.net.ssl.SSLSocket) r4
            r2.b = r4
            java.lang.String[] r4 = r4.getEnabledCipherSuites()
            java.lang.Object r4 = r4.clone()
            java.lang.String[] r4 = (java.lang.String[]) r4
            r2.d = r4
        L29:
            return r3
    }

    public java.lang.String[] getBlackCiphers() {
            r1 = this;
            java.lang.String[] r0 = r1.f
            return r0
    }

    public java.security.cert.X509Certificate[] getChain() {
            r2 = this;
            javax.net.ssl.X509TrustManager r0 = r2.e
            boolean r1 = r0 instanceof com.huawei.secure.android.common.ssl.SecureX509TrustManager
            if (r1 == 0) goto Ld
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r0 = (com.huawei.secure.android.common.ssl.SecureX509TrustManager) r0
            java.security.cert.X509Certificate[] r0 = r0.getChain()
            return r0
        Ld:
            r0 = 0
            java.security.cert.X509Certificate[] r0 = new java.security.cert.X509Certificate[r0]
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.c
            return r0
    }

    @Override
    public java.lang.String[] getDefaultCipherSuites() {
            r1 = this;
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
    }

    public java.lang.String[] getProtocols() {
            r1 = this;
            java.lang.String[] r0 = r1.h
            return r0
    }

    public javax.net.ssl.SSLContext getSslContext() {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.a
            return r0
    }

    public javax.net.ssl.SSLSocket getSslSocket() {
            r1 = this;
            javax.net.ssl.SSLSocket r0 = r1.b
            return r0
    }

    @Override
    public java.lang.String[] getSupportedCipherSuites() {
            r1 = this;
            java.lang.String[] r0 = r1.d
            if (r0 == 0) goto L5
            return r0
        L5:
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
    }

    public java.lang.String[] getWhiteCiphers() {
            r1 = this;
            java.lang.String[] r0 = r1.g
            return r0
    }

    public javax.net.ssl.X509TrustManager getX509TrustManager() {
            r1 = this;
            javax.net.ssl.X509TrustManager r0 = r1.e
            return r0
    }

    public void setBlackCiphers(java.lang.String[] r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setContext(android.content.Context r1) {
            r0 = this;
            android.content.Context r1 = r1.getApplicationContext()
            r0.c = r1
            return
    }

    public void setProtocols(java.lang.String[] r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setSslContext(javax.net.ssl.SSLContext r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setWhiteCiphers(java.lang.String[] r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setX509TrustManager(javax.net.ssl.X509TrustManager r1) {
            r0 = this;
            r0.e = r1
            return
    }
}
