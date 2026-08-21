package com.huawei.secure.android.common;

@java.lang.Deprecated
public class SecureSSLSocketFactory extends javax.net.ssl.SSLSocketFactory {
    public static final org.apache.http.conn.ssl.X509HostnameVerifier BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = null;
    public static final org.apache.http.conn.ssl.X509HostnameVerifier STRICT_HOSTNAME_VERIFIER = null;
    private static volatile com.huawei.secure.android.common.SecureSSLSocketFactory c;
    private javax.net.ssl.SSLContext a;
    private android.content.Context b;

    static {
            org.apache.http.conn.ssl.BrowserCompatHostnameVerifier r0 = new org.apache.http.conn.ssl.BrowserCompatHostnameVerifier
            r0.<init>()
            com.huawei.secure.android.common.SecureSSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = r0
            org.apache.http.conn.ssl.StrictHostnameVerifier r0 = new org.apache.http.conn.ssl.StrictHostnameVerifier
            r0.<init>()
            com.huawei.secure.android.common.SecureSSLSocketFactory.STRICT_HOSTNAME_VERIFIER = r0
            r0 = 0
            com.huawei.secure.android.common.SecureSSLSocketFactory.c = r0
            return
    }

    private SecureSSLSocketFactory(android.content.Context r5) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.security.KeyManagementException, java.lang.IllegalAccessException {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r5
            javax.net.ssl.SSLContext r5 = com.huawei.secure.android.common.ssl.SSLUtil.setSSLContext()
            r4.a = r5
            com.huawei.secure.android.common.SecureX509TrustManager r5 = new com.huawei.secure.android.common.SecureX509TrustManager
            android.content.Context r1 = r4.b
            r5.<init>(r1)
            javax.net.ssl.SSLContext r1 = r4.a
            r2 = 1
            javax.net.ssl.X509TrustManager[] r2 = new javax.net.ssl.X509TrustManager[r2]
            r3 = 0
            r2[r3] = r5
            r1.init(r0, r2, r0)
            return
    }

    @java.lang.Deprecated
    public SecureSSLSocketFactory(java.io.InputStream r4, java.lang.String r5) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.security.KeyManagementException {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.a = r0
            javax.net.ssl.SSLContext r1 = com.huawei.secure.android.common.ssl.SSLUtil.setSSLContext()
            r3.a = r1
            com.huawei.secure.android.common.HiCloudX509TrustManager r1 = new com.huawei.secure.android.common.HiCloudX509TrustManager
            r1.<init>(r4, r5)
            javax.net.ssl.SSLContext r4 = r3.a
            r5 = 1
            javax.net.ssl.X509TrustManager[] r5 = new javax.net.ssl.X509TrustManager[r5]
            r2 = 0
            r5[r2] = r1
            r4.init(r0, r5, r0)
            return
    }

    private void a(java.net.Socket r1) {
            r0 = this;
            javax.net.ssl.SSLSocket r1 = (javax.net.ssl.SSLSocket) r1
            com.huawei.secure.android.common.ssl.SSLUtil.setEnabledProtocols(r1)
            com.huawei.secure.android.common.ssl.SSLUtil.setEnableSafeCipherSuites(r1)
            return
    }

    @java.lang.Deprecated
    public static com.huawei.secure.android.common.SecureSSLSocketFactory getInstance(android.content.Context r2) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.KeyStoreException, java.lang.IllegalAccessException, java.security.KeyManagementException {
            com.huawei.secure.android.common.SecureSSLSocketFactory r0 = com.huawei.secure.android.common.SecureSSLSocketFactory.c
            if (r0 != 0) goto L17
            java.lang.Class<com.huawei.secure.android.common.SecureSSLSocketFactory> r0 = com.huawei.secure.android.common.SecureSSLSocketFactory.class
            monitor-enter(r0)
            com.huawei.secure.android.common.SecureSSLSocketFactory r1 = com.huawei.secure.android.common.SecureSSLSocketFactory.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.huawei.secure.android.common.SecureSSLSocketFactory r1 = new com.huawei.secure.android.common.SecureSSLSocketFactory     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.huawei.secure.android.common.SecureSSLSocketFactory.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.huawei.secure.android.common.SecureSSLSocketFactory r2 = com.huawei.secure.android.common.SecureSSLSocketFactory.c
            return r2
    }

    @Override
    public java.net.Socket createSocket(java.lang.String r2, int r3) throws java.io.IOException, java.net.UnknownHostException {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.a
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r2 = r0.createSocket(r2, r3)
            boolean r3 = r2 instanceof javax.net.ssl.SSLSocket
            if (r3 == 0) goto L11
            r1.a(r2)
        L11:
            return r2
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
    public java.net.Socket createSocket(java.net.Socket r2, java.lang.String r3, int r4, boolean r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.a
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            boolean r3 = r2 instanceof javax.net.ssl.SSLSocket
            if (r3 == 0) goto L11
            r1.a(r2)
        L11:
            return r2
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
