package com.loopj.android.http;

public class MySSLSocketFactory extends cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory {
    final javax.net.ssl.SSLContext sslContext;


    public MySSLSocketFactory(java.security.KeyStore r4) throws java.security.NoSuchAlgorithmException, java.security.KeyManagementException, java.security.KeyStoreException, java.security.UnrecoverableKeyException {
            r3 = this;
            r3.<init>(r4)
            java.lang.String r4 = "TLS"
            javax.net.ssl.SSLContext r4 = javax.net.ssl.SSLContext.getInstance(r4)
            r3.sslContext = r4
            com.loopj.android.http.MySSLSocketFactory$1 r4 = new com.loopj.android.http.MySSLSocketFactory$1
            r4.<init>(r3)
            javax.net.ssl.SSLContext r0 = r3.sslContext
            r1 = 1
            javax.net.ssl.TrustManager[] r1 = new javax.net.ssl.TrustManager[r1]
            r2 = 0
            r1[r2] = r4
            r4 = 0
            r0.init(r4, r1, r4)
            return
    }

    public static cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory getFixedSocketFactory() {
            com.loopj.android.http.MySSLSocketFactory r0 = new com.loopj.android.http.MySSLSocketFactory     // Catch: java.lang.Throwable -> Lf
            java.security.KeyStore r1 = getKeystore()     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lf
            cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier r1 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.ALLOW_ALL_HOSTNAME_VERIFIER     // Catch: java.lang.Throwable -> Lf
            r0.setHostnameVerifier(r1)     // Catch: java.lang.Throwable -> Lf
            goto L17
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory r0 = cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory.getSocketFactory()
        L17:
            return r0
    }

    public static java.security.KeyStore getKeystore() {
            r0 = 0
            java.lang.String r1 = java.security.KeyStore.getDefaultType()     // Catch: java.lang.Throwable -> L13
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Throwable -> L13
            r1.load(r0, r0)     // Catch: java.lang.Throwable -> Le
            r0 = r1
            goto L17
        Le:
            r0 = move-exception
            r2 = r1
            r1 = r0
            r0 = r2
            goto L14
        L13:
            r1 = move-exception
        L14:
            r1.printStackTrace()
        L17:
            return r0
    }

    public static java.security.KeyStore getKeystoreOfCA(java.io.InputStream r3) {
            r0 = 0
            java.lang.String r1 = "X.509"
            java.security.cert.CertificateFactory r1 = java.security.cert.CertificateFactory.getInstance(r1)     // Catch: java.lang.Throwable -> L1b java.security.cert.CertificateException -> L1d
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L1b java.security.cert.CertificateException -> L1d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1b java.security.cert.CertificateException -> L1d
            java.security.cert.Certificate r3 = r1.generateCertificate(r2)     // Catch: java.security.cert.CertificateException -> L19 java.lang.Throwable -> L46
            r2.close()     // Catch: java.io.IOException -> L14
            goto L2d
        L14:
            r1 = move-exception
            r1.printStackTrace()
            goto L2d
        L19:
            r3 = move-exception
            goto L1f
        L1b:
            r3 = move-exception
            goto L48
        L1d:
            r3 = move-exception
            r2 = r0
        L1f:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L2c
            r2.close()     // Catch: java.io.IOException -> L28
            goto L2c
        L28:
            r3 = move-exception
            r3.printStackTrace()
        L2c:
            r3 = r0
        L2d:
            java.lang.String r1 = java.security.KeyStore.getDefaultType()
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Exception -> L40
            r1.load(r0, r0)     // Catch: java.lang.Exception -> L3e
            java.lang.String r0 = "ca"
            r1.setCertificateEntry(r0, r3)     // Catch: java.lang.Exception -> L3e
            goto L45
        L3e:
            r3 = move-exception
            goto L42
        L40:
            r3 = move-exception
            r1 = r0
        L42:
            r3.printStackTrace()
        L45:
            return r1
        L46:
            r3 = move-exception
            r0 = r2
        L48:
            if (r0 == 0) goto L52
            r0.close()     // Catch: java.io.IOException -> L4e
            goto L52
        L4e:
            r0 = move-exception
            r0.printStackTrace()
        L52:
            throw r3
    }

    public static cz.msebera.android.httpclient.impl.client.DefaultHttpClient getNewHttpClient(java.security.KeyStore r5) {
            com.loopj.android.http.MySSLSocketFactory r0 = new com.loopj.android.http.MySSLSocketFactory     // Catch: java.lang.Exception -> L40
            r0.<init>(r5)     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.conn.scheme.SchemeRegistry r5 = new cz.msebera.android.httpclient.conn.scheme.SchemeRegistry     // Catch: java.lang.Exception -> L40
            r5.<init>()     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = "http"
            cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory r3 = cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory.getSocketFactory()     // Catch: java.lang.Exception -> L40
            r4 = 80
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Exception -> L40
            r5.register(r1)     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.conn.scheme.Scheme r1 = new cz.msebera.android.httpclient.conn.scheme.Scheme     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = "https"
            r3 = 443(0x1bb, float:6.21E-43)
            r1.<init>(r2, r0, r3)     // Catch: java.lang.Exception -> L40
            r5.register(r1)     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.params.BasicHttpParams r0 = new cz.msebera.android.httpclient.params.BasicHttpParams     // Catch: java.lang.Exception -> L40
            r0.<init>()     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.HttpVersion r1 = cz.msebera.android.httpclient.HttpVersion.HTTP_1_1     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.params.HttpProtocolParams.setVersion(r0, r1)     // Catch: java.lang.Exception -> L40
            java.lang.String r1 = "UTF-8"
            cz.msebera.android.httpclient.params.HttpProtocolParams.setContentCharset(r0, r1)     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager r1 = new cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager     // Catch: java.lang.Exception -> L40
            r1.<init>(r0, r5)     // Catch: java.lang.Exception -> L40
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r5 = new cz.msebera.android.httpclient.impl.client.DefaultHttpClient     // Catch: java.lang.Exception -> L40
            r5.<init>(r1, r0)     // Catch: java.lang.Exception -> L40
            return r5
        L40:
            cz.msebera.android.httpclient.impl.client.DefaultHttpClient r5 = new cz.msebera.android.httpclient.impl.client.DefaultHttpClient
            r5.<init>()
            return r5
    }

    @Override
    public java.net.Socket createSocket() throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.sslContext
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r0 = r0.createSocket()
            return r0
    }

    @Override
    public java.net.Socket createSocket(java.net.Socket r2, java.lang.String r3, int r4, boolean r5) throws java.io.IOException {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.sslContext
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            java.net.Socket r2 = r0.createSocket(r2, r3, r4, r5)
            return r2
    }

    public void fixHttpsURLConnection() {
            r1 = this;
            javax.net.ssl.SSLContext r0 = r1.sslContext
            javax.net.ssl.SSLSocketFactory r0 = r0.getSocketFactory()
            javax.net.ssl.HttpsURLConnection.setDefaultSSLSocketFactory(r0)
            return
    }
}
