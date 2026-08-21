package com.tencent.open.a;

public class h extends javax.net.ssl.SSLSocketFactory {
    private javax.net.ssl.SSLSocketFactory a;
    private javax.net.ssl.TrustManager[] b;

    public h() throws java.security.KeyManagementException, java.security.NoSuchAlgorithmException, java.security.KeyStoreException {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "TLS"
            javax.net.ssl.SSLContext r0 = javax.net.ssl.SSLContext.getInstance(r0)
            javax.net.ssl.TrustManager[] r1 = r3.b()
            r3.b = r1
            r2 = 0
            r0.init(r2, r1, r2)
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            r3.a = r0
            return
    }

    private java.net.Socket a(java.net.Socket r3) {
            r2 = this;
            boolean r0 = r3 instanceof javax.net.ssl.SSLSocket
            if (r0 == 0) goto Le
            r0 = r3
            javax.net.ssl.SSLSocket r0 = (javax.net.ssl.SSLSocket) r0
            java.lang.String[] r1 = r0.getSupportedProtocols()
            r0.setEnabledProtocols(r1)
        Le:
            return r3
    }

    private javax.net.ssl.TrustManager[] b() {
            r5 = this;
            java.lang.String r0 = "openSDK_LOG.Tls2SupportedSocketFactory"
            r1 = 0
            java.lang.String r2 = javax.net.ssl.TrustManagerFactory.getDefaultAlgorithm()     // Catch: java.security.GeneralSecurityException -> L3b
            javax.net.ssl.TrustManagerFactory r2 = javax.net.ssl.TrustManagerFactory.getInstance(r2)     // Catch: java.security.GeneralSecurityException -> L3b
            r3 = r1
            java.security.KeyStore r3 = (java.security.KeyStore) r3     // Catch: java.security.GeneralSecurityException -> L3b
            r2.init(r3)     // Catch: java.security.GeneralSecurityException -> L3b
            javax.net.ssl.TrustManager[] r2 = r2.getTrustManagers()     // Catch: java.security.GeneralSecurityException -> L3b
            int r3 = r2.length     // Catch: java.security.GeneralSecurityException -> L3b
            r4 = 1
            if (r3 != r4) goto L22
            r3 = 0
            r3 = r2[r3]     // Catch: java.security.GeneralSecurityException -> L3b
            boolean r3 = r3 instanceof javax.net.ssl.X509TrustManager     // Catch: java.security.GeneralSecurityException -> L3b
            if (r3 != 0) goto L21
            goto L22
        L21:
            return r2
        L22:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.security.GeneralSecurityException -> L3b
            r3.<init>()     // Catch: java.security.GeneralSecurityException -> L3b
            java.lang.String r4 = "Unexpected default trust managers: "
            r3.append(r4)     // Catch: java.security.GeneralSecurityException -> L3b
            java.lang.String r2 = java.util.Arrays.toString(r2)     // Catch: java.security.GeneralSecurityException -> L3b
            r3.append(r2)     // Catch: java.security.GeneralSecurityException -> L3b
            java.lang.String r2 = r3.toString()     // Catch: java.security.GeneralSecurityException -> L3b
            com.tencent.open.log.SLog.e(r0, r2)     // Catch: java.security.GeneralSecurityException -> L3b
            return r1
        L3b:
            java.lang.String r2 = "The system has no TLS. Just give up."
            com.tencent.open.log.SLog.e(r0, r2)
            return r1
    }

    public javax.net.ssl.TrustManager a() {
            r2 = this;
            javax.net.ssl.TrustManager[] r0 = r2.b
            if (r0 == 0) goto Lb
            int r1 = r0.length
            if (r1 <= 0) goto Lb
            r1 = 0
            r0 = r0[r1]
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r2, int r3) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            java.net.Socket r2 = r0.createSocket(r2, r3)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r2, int r3) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            java.net.Socket r2 = r0.createSocket(r2, r3)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.net.InetAddress r2, int r3, java.net.InetAddress r4, int r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r2, java.lang.String r3, int r4, boolean r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            java.net.Socket r2 = r1.a(r2)
            return r2
    }

    @Override
    public java.lang.String[] getDefaultCipherSuites() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            java.lang.String[] r0 = r0.getDefaultCipherSuites()
            return r0
    }

    @Override
    public java.lang.String[] getSupportedCipherSuites() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.a
            java.lang.String[] r0 = r0.getSupportedCipherSuites()
            return r0
    }
}
