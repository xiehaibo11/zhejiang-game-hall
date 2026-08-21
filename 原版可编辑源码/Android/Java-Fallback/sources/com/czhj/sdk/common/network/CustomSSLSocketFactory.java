package com.czhj.sdk.common.network;

public class CustomSSLSocketFactory extends javax.net.ssl.SSLSocketFactory {
    private static final javax.net.ssl.TrustManager[] b = null;
    private javax.net.ssl.SSLSocketFactory a;


    static {
            r0 = 1
            javax.net.ssl.TrustManager[] r0 = new javax.net.ssl.TrustManager[r0]
            com.czhj.sdk.common.network.CustomSSLSocketFactory$1 r1 = new com.czhj.sdk.common.network.CustomSSLSocketFactory$1
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            com.czhj.sdk.common.network.CustomSSLSocketFactory.b = r0
            return
    }

    private CustomSSLSocketFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.net.SSLCertificateSocketFactory r2, javax.net.ssl.SSLSocket r3, java.lang.String r4) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L10
            r2.setHostname(r3, r4)
            goto L26
        L10:
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r2 = new com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder     // Catch: java.lang.Throwable -> L21
            java.lang.String r0 = "setHostname"
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L21
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            com.czhj.sdk.common.utils.ReflectionUtil$MethodBuilder r2 = r2.addParam(r3, r4)     // Catch: java.lang.Throwable -> L21
            r2.execute()     // Catch: java.lang.Throwable -> L21
            goto L26
        L21:
            java.lang.String r2 = "Unable to call setHostname() on the socket"
            com.czhj.sdk.logger.SigmobLog.d(r2)
        L26:
            return
    }

    private void a(java.net.Socket r2) {
            r1 = this;
            boolean r0 = r2 instanceof javax.net.ssl.SSLSocket
            if (r0 == 0) goto Ld
            javax.net.ssl.SSLSocket r2 = (javax.net.ssl.SSLSocket) r2
            java.lang.String[] r0 = r2.getSupportedProtocols()
            r2.setEnabledProtocols(r0)
        Ld:
            return
    }

    private void a(java.net.Socket r3, java.lang.String r4) throws java.io.IOException {
            r2 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
            javax.net.ssl.SSLSocketFactory r0 = r2.a
            if (r0 == 0) goto L23
            boolean r1 = r3 instanceof javax.net.ssl.SSLSocket
            if (r1 == 0) goto L22
            javax.net.ssl.SSLSocket r3 = (javax.net.ssl.SSLSocket) r3     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r0 instanceof android.net.SSLCertificateSocketFactory     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L22
            android.net.SSLCertificateSocketFactory r0 = (android.net.SSLCertificateSocketFactory) r0     // Catch: java.lang.Throwable -> L1a
            a(r0, r3, r4)     // Catch: java.lang.Throwable -> L1a
            a(r3, r4)     // Catch: java.lang.Throwable -> L1a
            goto L22
        L1a:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L22:
            return
        L23:
            java.net.SocketException r3 = new java.net.SocketException
            java.lang.String r4 = "SSLSocketFactory was null. Unable to create socket."
            r3.<init>(r4)
            throw r3
    }

    private static void a(javax.net.ssl.SSLSocket r1, java.lang.String r2) throws java.io.IOException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            r1.startHandshake()
            javax.net.ssl.HostnameVerifier r0 = javax.net.ssl.HttpsURLConnection.getDefaultHostnameVerifier()
            javax.net.ssl.SSLSession r1 = r1.getSession()
            boolean r1 = r0.verify(r2, r1)
            if (r1 == 0) goto L15
            return
        L15:
            javax.net.ssl.SSLHandshakeException r1 = new javax.net.ssl.SSLHandshakeException
            java.lang.String r2 = "Server Name Identification failed."
            r1.<init>(r2)
            throw r1
    }

    public static com.czhj.sdk.common.network.CustomSSLSocketFactory getDefault(int r2) {
            com.czhj.sdk.common.network.CustomSSLSocketFactory r0 = new com.czhj.sdk.common.network.CustomSSLSocketFactory
            r0.<init>()
            r1 = 0
            javax.net.ssl.SSLSocketFactory r2 = android.net.SSLCertificateSocketFactory.getDefault(r2, r1)
            r0.a = r2
            return r0
    }

    public static com.czhj.sdk.common.network.CustomSSLSocketFactory getForceValid() {
            com.czhj.sdk.common.network.CustomSSLSocketFactory r0 = new com.czhj.sdk.common.network.CustomSSLSocketFactory
            r0.<init>()
            r1 = 0
            java.lang.String r2 = "SSL"
            javax.net.ssl.SSLContext r2 = javax.net.ssl.SSLContext.getInstance(r2)     // Catch: java.security.NoSuchAlgorithmException -> L1b java.security.KeyManagementException -> L22
            javax.net.ssl.TrustManager[] r3 = com.czhj.sdk.common.network.CustomSSLSocketFactory.b     // Catch: java.security.NoSuchAlgorithmException -> L17 java.security.KeyManagementException -> L19
            java.security.SecureRandom r4 = new java.security.SecureRandom     // Catch: java.security.NoSuchAlgorithmException -> L17 java.security.KeyManagementException -> L19
            r4.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L17 java.security.KeyManagementException -> L19
            r2.init(r1, r3, r4)     // Catch: java.security.NoSuchAlgorithmException -> L17 java.security.KeyManagementException -> L19
            goto L2b
        L17:
            r3 = move-exception
            goto L1d
        L19:
            r3 = move-exception
            goto L24
        L1b:
            r3 = move-exception
            r2 = r1
        L1d:
            java.lang.String r3 = r3.getMessage()
            goto L28
        L22:
            r3 = move-exception
            r2 = r1
        L24:
            java.lang.String r3 = r3.getMessage()
        L28:
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L2b:
            if (r2 != 0) goto L2e
            return r1
        L2e:
            javax.net.ssl.SSLSocketFactory r1 = r2.getSocketFactory()
            r0.a = r1
            return r0
    }

    @java.lang.Deprecated
    void a(javax.net.ssl.SSLSocketFactory r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public java.net.Socket createSocket() throws java.io.IOException {
            r2 = this;
            javax.net.ssl.SSLSocketFactory r0 = r2.a
            if (r0 == 0) goto Lc
            java.net.Socket r0 = r0.createSocket()
            r2.a(r0)
            return r0
        Lc:
            java.net.SocketException r0 = new java.net.SocketException
            java.lang.String r1 = "SSLSocketFactory was null. Unable to create socket."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r2, int r3) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            if (r0 == 0) goto Lc
            java.net.Socket r2 = r0.createSocket(r2, r3)
            r1.a(r2)
            return r2
        Lc:
            java.net.SocketException r2 = new java.net.SocketException
            java.lang.String r3 = "SSLSocketFactory was null. Unable to create socket."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            if (r0 == 0) goto Lc
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            r1.a(r2)
            return r2
        Lc:
            java.net.SocketException r2 = new java.net.SocketException
            java.lang.String r3 = "SSLSocketFactory was null. Unable to create socket."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r2, int r3) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            if (r0 == 0) goto Lc
            java.net.Socket r2 = r0.createSocket(r2, r3)
            r1.a(r2)
            return r2
        Lc:
            java.net.SocketException r2 = new java.net.SocketException
            java.lang.String r3 = "SSLSocketFactory was null. Unable to create socket."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            if (r0 == 0) goto Lc
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            r1.a(r2)
            return r2
        Lc:
            java.net.SocketException r2 = new java.net.SocketException
            java.lang.String r3 = "SSLSocketFactory was null. Unable to create socket."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r3, java.lang.String r4, int r5, boolean r6) throws java.io.IOException {
            r2 = this;
            javax.net.ssl.SSLSocketFactory r0 = r2.a
            if (r0 == 0) goto L2c
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 >= r1) goto L22
            if (r6 == 0) goto L11
            if (r3 == 0) goto L11
            r3.close()
        L11:
            javax.net.ssl.SSLSocketFactory r3 = r2.a
            java.net.InetAddress r6 = com.czhj.sdk.common.network.InetAddressUtils.getInetAddressByName(r4)
            java.net.Socket r3 = r3.createSocket(r6, r5)
            r2.a(r3)
            r2.a(r3, r4)
            return r3
        L22:
            javax.net.ssl.SSLSocketFactory r0 = r2.a
            java.net.Socket r3 = r0.createSocket(r3, r4, r5, r6)
            r2.a(r3)
            return r3
        L2c:
            java.net.SocketException r3 = new java.net.SocketException
            java.lang.String r4 = "SSLSocketFactory was null. Unable to create socket."
            r3.<init>(r4)
            throw r3
    }

    @Override
    public java.lang.String[] getDefaultCipherSuites() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            if (r0 != 0) goto L8
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
        L8:
            java.lang.String[] r0 = r0.getDefaultCipherSuites()
            return r0
    }

    @Override
    public java.lang.String[] getSupportedCipherSuites() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            if (r0 != 0) goto L8
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
        L8:
            java.lang.String[] r0 = r0.getSupportedCipherSuites()
            return r0
    }
}
