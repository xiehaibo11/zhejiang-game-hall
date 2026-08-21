package com.huawei.secure.android.common.ssl.hostname;

public class StrictHostnameVerifier implements javax.net.ssl.HostnameVerifier {
    public StrictHostnameVerifier() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean verify(java.lang.String r5, javax.net.ssl.SSLSession r6) {
            r4 = this;
            java.lang.String r0 = ""
            r1 = 0
            java.security.cert.Certificate[] r6 = r6.getPeerCertificates()     // Catch: javax.net.ssl.SSLException -> L2c
            r6 = r6[r1]     // Catch: javax.net.ssl.SSLException -> L2c
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6     // Catch: javax.net.ssl.SSLException -> L2c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: javax.net.ssl.SSLException -> L2c
            r2.<init>()     // Catch: javax.net.ssl.SSLException -> L2c
            java.lang.String r3 = "verify: certificate is : "
            r2.append(r3)     // Catch: javax.net.ssl.SSLException -> L2c
            java.security.Principal r3 = r6.getSubjectDN()     // Catch: javax.net.ssl.SSLException -> L2c
            java.lang.String r3 = r3.getName()     // Catch: javax.net.ssl.SSLException -> L2c
            r2.append(r3)     // Catch: javax.net.ssl.SSLException -> L2c
            java.lang.String r2 = r2.toString()     // Catch: javax.net.ssl.SSLException -> L2c
            com.huawei.secure.android.common.ssl.util.g.a(r0, r2)     // Catch: javax.net.ssl.SSLException -> L2c
            r2 = 1
            com.huawei.secure.android.common.ssl.hostname.b.a(r5, r6, r2)     // Catch: javax.net.ssl.SSLException -> L2c
            return r2
        L2c:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r2 = "SSLException : "
            r6.append(r2)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r0, r5)
            return r1
    }
}
