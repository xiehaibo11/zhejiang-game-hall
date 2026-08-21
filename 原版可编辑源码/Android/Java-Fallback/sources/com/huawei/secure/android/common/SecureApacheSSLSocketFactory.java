package com.huawei.secure.android.common;

@java.lang.Deprecated
public class SecureApacheSSLSocketFactory extends org.apache.http.conn.ssl.SSLSocketFactory {
    public static final org.apache.http.conn.ssl.X509HostnameVerifier BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = null;
    public static final org.apache.http.conn.ssl.X509HostnameVerifier STRICT_HOSTNAME_VERIFIER = null;
    private static volatile com.huawei.secure.android.common.SecureApacheSSLSocketFactory c;
    private javax.net.ssl.SSLContext a;
    private android.content.Context b;

    static {
            org.apache.http.conn.ssl.BrowserCompatHostnameVerifier r0 = new org.apache.http.conn.ssl.BrowserCompatHostnameVerifier
            r0.<init>()
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory.BROWSER_COMPATIBLE_HOSTNAME_VERIFIER = r0
            org.apache.http.conn.ssl.StrictHostnameVerifier r0 = new org.apache.http.conn.ssl.StrictHostnameVerifier
            r0.<init>()
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory.STRICT_HOSTNAME_VERIFIER = r0
            r0 = 0
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory.c = r0
            return
    }

    private SecureApacheSSLSocketFactory(java.security.KeyStore r1) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private SecureApacheSSLSocketFactory(java.security.KeyStore r3, android.content.Context r4) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException, java.security.cert.CertificateException, java.io.IOException, java.lang.IllegalAccessException {
            r2 = this;
            r2.<init>(r3)
            r2.b = r4
            javax.net.ssl.SSLContext r3 = com.huawei.secure.android.common.ssl.SSLUtil.setSSLContext()
            r2.a = r3
            com.huawei.secure.android.common.SecureX509TrustManager r3 = new com.huawei.secure.android.common.SecureX509TrustManager
            android.content.Context r4 = r2.b
            r3.<init>(r4)
            javax.net.ssl.SSLContext r4 = r2.a
            r0 = 1
            javax.net.ssl.X509TrustManager[] r0 = new javax.net.ssl.X509TrustManager[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 0
            r4.init(r3, r0, r3)
            return
    }

    @java.lang.Deprecated
    public SecureApacheSSLSocketFactory(java.security.KeyStore r2, java.io.InputStream r3, java.lang.String r4) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException, java.security.cert.CertificateException, java.io.IOException {
            r1 = this;
            r1.<init>(r2)
            javax.net.ssl.SSLContext r2 = com.huawei.secure.android.common.ssl.SSLUtil.setSSLContext()
            r1.a = r2
            com.huawei.secure.android.common.HiCloudX509TrustManager r2 = new com.huawei.secure.android.common.HiCloudX509TrustManager
            r2.<init>(r3, r4)
            javax.net.ssl.SSLContext r3 = r1.a
            r4 = 1
            javax.net.ssl.X509TrustManager[] r4 = new javax.net.ssl.X509TrustManager[r4]
            r0 = 0
            r4[r0] = r2
            r2 = 0
            r3.init(r2, r4, r2)
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
    public static com.huawei.secure.android.common.SecureApacheSSLSocketFactory getInstance(java.security.KeyStore r2, android.content.Context r3) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException, java.security.cert.CertificateException, java.io.IOException, java.lang.IllegalAccessException {
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory r0 = com.huawei.secure.android.common.SecureApacheSSLSocketFactory.c
            if (r0 != 0) goto L17
            java.lang.Class<com.huawei.secure.android.common.SecureApacheSSLSocketFactory> r0 = com.huawei.secure.android.common.SecureApacheSSLSocketFactory.class
            monitor-enter(r0)
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory r1 = com.huawei.secure.android.common.SecureApacheSSLSocketFactory.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory r1 = new com.huawei.secure.android.common.SecureApacheSSLSocketFactory     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L14
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.huawei.secure.android.common.SecureApacheSSLSocketFactory r2 = com.huawei.secure.android.common.SecureApacheSSLSocketFactory.c
            return r2
    }

    @Override
    public java.net.Socket createSocket() throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.a
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r0 = r0.createSocket()
            r1.a(r0)
            return r0
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r2, java.lang.String r3, int r4, boolean r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.a
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            r1.a(r2)
            return r2
    }
}
