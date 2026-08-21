package com.huawei.secure.android.common.ssl;

public class WebViewSSLCheck {
    private static final java.lang.String a = "WebViewSSLCheck";

    static {
            return
    }

    public WebViewSSLCheck() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkServerCertificateNew(android.webkit.SslErrorHandler r1, android.net.http.SslError r2, android.content.Context r3) {
            r0 = 0
            checkServerCertificateNew(r1, r2, r0, r3, r0)
            return
    }

    public static void checkServerCertificateNew(android.webkit.SslErrorHandler r4, android.net.http.SslError r5, java.lang.String r6, android.content.Context r7, com.huawei.secure.android.common.ssl.WebViewSSLCheckThread.Callback r8) {
            java.lang.String r0 = com.huawei.secure.android.common.ssl.WebViewSSLCheck.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = " error type : "
            r1.append(r2)
            int r2 = r5.getPrimaryError()
            r1.append(r2)
            java.lang.String r2 = " , cn is : "
            r1.append(r2)
            android.net.http.SslCertificate r2 = r5.getCertificate()
            android.net.http.SslCertificate$DName r2 = r2.getIssuedTo()
            java.lang.String r2 = r2.getCName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            android.net.http.SslCertificate r5 = r5.getCertificate()
            java.security.cert.X509Certificate r5 = com.huawei.secure.android.common.ssl.util.b.a(r5)
            com.huawei.secure.android.common.ssl.util.j r0 = new com.huawei.secure.android.common.ssl.util.j
            r0.<init>(r7)
            java.security.cert.X509Certificate r0 = r0.a()
            java.lang.String r1 = com.huawei.secure.android.common.ssl.WebViewSSLCheck.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkServerCertificateNew: error certificate is : "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r1, r2)
            boolean r5 = com.huawei.secure.android.common.ssl.util.b.a(r0, r5)
            if (r5 == 0) goto L6c
            java.lang.String r5 = com.huawei.secure.android.common.ssl.WebViewSSLCheck.a
            java.lang.String r0 = "checkServerCertificateNew: proceed"
            com.huawei.secure.android.common.ssl.util.g.c(r5, r0)
            if (r8 == 0) goto L68
            r8.onProceed(r7, r6)
            goto L6b
        L68:
            r4.proceed()
        L6b:
            return
        L6c:
            java.lang.String r5 = com.huawei.secure.android.common.ssl.WebViewSSLCheck.a
            java.lang.String r0 = "checkServerCertificateNew: cancel"
            com.huawei.secure.android.common.ssl.util.g.b(r5, r0)
            if (r8 == 0) goto L79
            r8.onCancel(r7, r6)
            goto L7c
        L79:
            r4.cancel()
        L7c:
            return
    }

    public static boolean checkServerCertificateNew(java.lang.String r0, android.net.http.SslError r1) {
            java.security.cert.X509Certificate r0 = com.huawei.secure.android.common.ssl.util.b.a(r0)
            boolean r0 = checkServerCertificateNew(r0, r1)
            return r0
    }

    public static boolean checkServerCertificateNew(java.security.cert.X509Certificate r0, android.net.http.SslError r1) {
            android.net.http.SslCertificate r1 = r1.getCertificate()
            java.security.cert.X509Certificate r1 = com.huawei.secure.android.common.ssl.util.b.a(r1)
            boolean r0 = com.huawei.secure.android.common.ssl.util.b.a(r0, r1)
            return r0
    }
}
