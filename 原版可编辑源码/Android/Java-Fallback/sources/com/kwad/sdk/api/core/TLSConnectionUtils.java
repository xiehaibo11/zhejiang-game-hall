package com.kwad.sdk.api.core;

public class TLSConnectionUtils {
    public TLSConnectionUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static javax.net.ssl.SSLSocketFactory systemDefaultSslSocketFactory(javax.net.ssl.X509TrustManager r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "TLS"
            javax.net.ssl.SSLContext r1 = javax.net.ssl.SSLContext.getInstance(r1)     // Catch: java.security.GeneralSecurityException -> L18
            r2 = 1
            javax.net.ssl.TrustManager[] r2 = new javax.net.ssl.TrustManager[r2]     // Catch: java.security.GeneralSecurityException -> L18
            r3 = 0
            r2[r3] = r4     // Catch: java.security.GeneralSecurityException -> L18
            r1.init(r0, r2, r0)     // Catch: java.security.GeneralSecurityException -> L18
            javax.net.ssl.SSLSocketFactory r4 = r1.getSocketFactory()     // Catch: java.security.GeneralSecurityException -> L18
            return r4
        L18:
            return r0
    }

    private static javax.net.ssl.X509TrustManager systemDefaultTrustManager() {
            r0 = 0
            java.lang.String r1 = javax.net.ssl.TrustManagerFactory.getDefaultAlgorithm()     // Catch: java.security.GeneralSecurityException -> L38
            javax.net.ssl.TrustManagerFactory r1 = javax.net.ssl.TrustManagerFactory.getInstance(r1)     // Catch: java.security.GeneralSecurityException -> L38
            r1.init(r0)     // Catch: java.security.GeneralSecurityException -> L38
            javax.net.ssl.TrustManager[] r1 = r1.getTrustManagers()     // Catch: java.security.GeneralSecurityException -> L38
            int r2 = r1.length     // Catch: java.security.GeneralSecurityException -> L38
            r3 = 1
            if (r2 != r3) goto L20
            r2 = 0
            r3 = r1[r2]     // Catch: java.security.GeneralSecurityException -> L38
            boolean r3 = r3 instanceof javax.net.ssl.X509TrustManager     // Catch: java.security.GeneralSecurityException -> L38
            if (r3 == 0) goto L20
            r1 = r1[r2]     // Catch: java.security.GeneralSecurityException -> L38
            javax.net.ssl.X509TrustManager r1 = (javax.net.ssl.X509TrustManager) r1     // Catch: java.security.GeneralSecurityException -> L38
            return r1
        L20:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.security.GeneralSecurityException -> L38
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.security.GeneralSecurityException -> L38
            java.lang.String r4 = "Unexpected default trust managers:"
            r3.<init>(r4)     // Catch: java.security.GeneralSecurityException -> L38
            java.lang.String r1 = java.util.Arrays.toString(r1)     // Catch: java.security.GeneralSecurityException -> L38
            r3.append(r1)     // Catch: java.security.GeneralSecurityException -> L38
            java.lang.String r1 = r3.toString()     // Catch: java.security.GeneralSecurityException -> L38
            r2.<init>(r1)     // Catch: java.security.GeneralSecurityException -> L38
            throw r2     // Catch: java.security.GeneralSecurityException -> L38
        L38:
            return r0
    }

    public static void wrapHttpURLConnection(java.net.URLConnection r1) {
            boolean r0 = r1 instanceof javax.net.ssl.HttpsURLConnection
            if (r0 != 0) goto L5
            return
        L5:
            javax.net.ssl.HttpsURLConnection r1 = (javax.net.ssl.HttpsURLConnection) r1
            javax.net.ssl.X509TrustManager r0 = systemDefaultTrustManager()
            javax.net.ssl.SSLSocketFactory r0 = systemDefaultSslSocketFactory(r0)
            if (r0 == 0) goto L14
            r1.setSSLSocketFactory(r0)
        L14:
            return
    }
}
