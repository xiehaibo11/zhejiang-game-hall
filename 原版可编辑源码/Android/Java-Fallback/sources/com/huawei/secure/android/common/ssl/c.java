package com.huawei.secure.android.common.ssl;

public class c implements javax.net.ssl.X509TrustManager {
    private static final java.lang.String c = "WebViewX509TrustManger";
    private java.security.cert.X509Certificate a;
    private java.util.List<javax.net.ssl.X509TrustManager> b;

    public c(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            if (r2 == 0) goto L25
            com.huawei.secure.android.common.ssl.util.c.a(r2)
            com.huawei.secure.android.common.ssl.util.j r0 = new com.huawei.secure.android.common.ssl.util.j
            r0.<init>(r2)
            java.security.cert.X509Certificate r2 = r0.b()
            r1.a = r2
            if (r2 == 0) goto L1d
            return
        L1d:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "WebViewX509TrustManger cannot get cbg root ca"
            r2.<init>(r0)
            throw r2
        L25:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "WebViewX509TrustManger context is null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void checkClientTrusted(java.security.cert.X509Certificate[] r3, java.lang.String r4) throws java.security.cert.CertificateException {
            r2 = this;
            java.lang.String r0 = "WebViewX509TrustManger"
            java.lang.String r1 = "checkClientTrusted"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            java.util.List<javax.net.ssl.X509TrustManager> r0 = r2.b
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1c
            java.util.List<javax.net.ssl.X509TrustManager> r0 = r2.b
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            javax.net.ssl.X509TrustManager r0 = (javax.net.ssl.X509TrustManager) r0
            r0.checkClientTrusted(r3, r4)
            return
        L1c:
            java.security.cert.CertificateException r3 = new java.security.cert.CertificateException
            java.lang.String r4 = "checkClientTrusted CertificateException"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void checkServerTrusted(java.security.cert.X509Certificate[] r5, java.lang.String r6) throws java.security.cert.CertificateException {
            r4 = this;
            java.lang.String r6 = "WebViewX509TrustManger"
            java.lang.String r0 = "checkServerTrusted"
            com.huawei.secure.android.common.ssl.util.g.c(r6, r0)
            r0 = 0
            r1 = r0
        L9:
            int r2 = r5.length
            if (r1 >= r2) goto L35
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkServerTrusted "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = " : "
            r2.append(r3)
            r3 = r5[r1]
            java.security.Principal r3 = r3.getIssuerDN()
            java.lang.String r3 = r3.getName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r6, r2)
            int r1 = r1 + 1
            goto L9
        L35:
            int r1 = r5.length
            java.security.cert.X509Certificate[] r1 = new java.security.cert.X509Certificate[r1]
            r2 = r0
        L39:
            int r3 = r5.length
            if (r2 >= r3) goto L47
            int r3 = r5.length
            int r3 = r3 + (-1)
            int r3 = r3 - r2
            r3 = r5[r3]
            r1[r2] = r3
            int r2 = r2 + 1
            goto L39
        L47:
            java.security.cert.CertificateException r5 = new java.security.cert.CertificateException
            java.lang.String r2 = "CBG root CA CertificateException"
            r5.<init>(r2)
            java.security.cert.X509Certificate r2 = r4.a     // Catch: java.security.cert.CertificateException -> L56 java.security.SignatureException -> L70 java.security.InvalidKeyException -> L8a java.security.NoSuchAlgorithmException -> La4 java.security.NoSuchProviderException -> Lbe
            boolean r0 = com.huawei.secure.android.common.ssl.util.b.a(r2, r1)     // Catch: java.security.cert.CertificateException -> L56 java.security.SignatureException -> L70 java.security.InvalidKeyException -> L8a java.security.NoSuchAlgorithmException -> La4 java.security.NoSuchProviderException -> Lbe
            goto Ld7
        L56:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "checkServerTrusted CertificateException: "
            r1.append(r2)
            java.lang.String r2 = r5.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r6, r1)
            goto Ld7
        L70:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkServerTrusted SignatureException: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r6, r1)
            goto Ld7
        L8a:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkServerTrusted InvalidKeyException: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r6, r1)
            goto Ld7
        La4:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkServerTrusted NoSuchAlgorithmException: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r6, r1)
            goto Ld7
        Lbe:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "checkServerTrusted NoSuchProviderException: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r6, r1)
        Ld7:
            if (r0 == 0) goto Lda
            return
        Lda:
            throw r5
    }

    @Override
    public java.security.cert.X509Certificate[] getAcceptedIssuers() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.util.List<javax.net.ssl.X509TrustManager> r1 = r3.b     // Catch: java.lang.Exception -> L30
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L30
        Lb:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L30
            if (r2 == 0) goto L23
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L30
            javax.net.ssl.X509TrustManager r2 = (javax.net.ssl.X509TrustManager) r2     // Catch: java.lang.Exception -> L30
            java.security.cert.X509Certificate[] r2 = r2.getAcceptedIssuers()     // Catch: java.lang.Exception -> L30
            java.util.List r2 = java.util.Arrays.asList(r2)     // Catch: java.lang.Exception -> L30
            r0.addAll(r2)     // Catch: java.lang.Exception -> L30
            goto Lb
        L23:
            int r1 = r0.size()     // Catch: java.lang.Exception -> L30
            java.security.cert.X509Certificate[] r1 = new java.security.cert.X509Certificate[r1]     // Catch: java.lang.Exception -> L30
            java.lang.Object[] r0 = r0.toArray(r1)     // Catch: java.lang.Exception -> L30
            java.security.cert.X509Certificate[] r0 = (java.security.cert.X509Certificate[]) r0     // Catch: java.lang.Exception -> L30
            return r0
        L30:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getAcceptedIssuers exception : "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "WebViewX509TrustManger"
            com.huawei.secure.android.common.ssl.util.g.b(r1, r0)
            r0 = 0
            java.security.cert.X509Certificate[] r0 = new java.security.cert.X509Certificate[r0]
            return r0
    }
}
