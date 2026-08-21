package com.loopj.android.http;

import cz.msebera.android.httpclient.HttpVersion;
import cz.msebera.android.httpclient.conn.scheme.PlainSocketFactory;
import cz.msebera.android.httpclient.conn.scheme.Scheme;
import cz.msebera.android.httpclient.conn.scheme.SchemeRegistry;
import cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory;
import cz.msebera.android.httpclient.impl.client.DefaultHttpClient;
import cz.msebera.android.httpclient.impl.conn.tsccm.ThreadSafeClientConnManager;
import cz.msebera.android.httpclient.params.BasicHttpParams;
import cz.msebera.android.httpclient.params.HttpProtocolParams;
import java.io.IOException;
import java.net.Socket;
import java.security.KeyManagementException;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.UnrecoverableKeyException;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: classes2.dex */
public class MySSLSocketFactory extends SSLSocketFactory {
    final SSLContext sslContext;

    public MySSLSocketFactory(KeyStore keyStore) throws NoSuchAlgorithmException, UnrecoverableKeyException, KeyManagementException, KeyStoreException {
        super(keyStore);
        this.sslContext = SSLContext.getInstance("TLS");
        this.sslContext.init(null, new TrustManager[]{new X509TrustManager() { // from class: com.loopj.android.http.MySSLSocketFactory.1
            @Override // javax.net.ssl.X509TrustManager
            public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) throws CertificateException {
            }

            @Override // javax.net.ssl.X509TrustManager
            public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) throws CertificateException {
            }

            @Override // javax.net.ssl.X509TrustManager
            public X509Certificate[] getAcceptedIssuers() {
                return null;
            }
        }}, null);
    }

    /* JADX WARN: Removed duplicated region for block: B:51:0x004a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.security.KeyStore getKeystoreOfCA(java.io.InputStream r3) throws java.lang.Throwable {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loopj.android.http.MySSLSocketFactory.getKeystoreOfCA(java.io.InputStream):java.security.KeyStore");
    }

    public static KeyStore getKeystore() {
        KeyStore keyStore = null;
        try {
            KeyStore keyStore2 = KeyStore.getInstance(KeyStore.getDefaultType());
            try {
                keyStore2.load(null, null);
                return keyStore2;
            } catch (Throwable th) {
                th = th;
                keyStore = keyStore2;
                th.printStackTrace();
                return keyStore;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    public static SSLSocketFactory getFixedSocketFactory() {
        try {
            MySSLSocketFactory mySSLSocketFactory = new MySSLSocketFactory(getKeystore());
            mySSLSocketFactory.setHostnameVerifier(SSLSocketFactory.ALLOW_ALL_HOSTNAME_VERIFIER);
            return mySSLSocketFactory;
        } catch (Throwable th) {
            th.printStackTrace();
            return SSLSocketFactory.getSocketFactory();
        }
    }

    public static DefaultHttpClient getNewHttpClient(KeyStore keyStore) {
        try {
            MySSLSocketFactory mySSLSocketFactory = new MySSLSocketFactory(keyStore);
            SchemeRegistry schemeRegistry = new SchemeRegistry();
            schemeRegistry.register(new Scheme("http", PlainSocketFactory.getSocketFactory(), 80));
            schemeRegistry.register(new Scheme("https", mySSLSocketFactory, 443));
            BasicHttpParams basicHttpParams = new BasicHttpParams();
            HttpProtocolParams.setVersion(basicHttpParams, HttpVersion.HTTP_1_1);
            HttpProtocolParams.setContentCharset(basicHttpParams, "UTF-8");
            return new DefaultHttpClient(new ThreadSafeClientConnManager(basicHttpParams, schemeRegistry), basicHttpParams);
        } catch (Exception unused) {
            return new DefaultHttpClient();
        }
    }

    @Override // cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory, cz.msebera.android.httpclient.conn.scheme.LayeredSocketFactory
    public Socket createSocket(Socket socket, String str, int i, boolean z) throws IOException {
        return this.sslContext.getSocketFactory().createSocket(socket, str, i, z);
    }

    @Override // cz.msebera.android.httpclient.conn.ssl.SSLSocketFactory, cz.msebera.android.httpclient.conn.scheme.SocketFactory
    public Socket createSocket() throws IOException {
        return this.sslContext.getSocketFactory().createSocket();
    }

    public void fixHttpsURLConnection() {
        HttpsURLConnection.setDefaultSSLSocketFactory(this.sslContext.getSocketFactory());
    }
}
