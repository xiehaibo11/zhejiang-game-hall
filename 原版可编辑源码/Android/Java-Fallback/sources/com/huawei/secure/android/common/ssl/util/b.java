package com.huawei.secure.android.common.ssl.util;

public class b {
    private static final java.lang.String a = "b";
    private static final int b = 5;

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.security.cert.X509Certificate a(android.net.http.SslCertificate r2) {
            android.os.Bundle r2 = android.net.http.SslCertificate.saveState(r2)
            java.lang.String r0 = "x509-certificate"
            byte[] r2 = r2.getByteArray(r0)
            if (r2 == 0) goto L26
            java.lang.String r0 = "X.509"
            java.security.cert.CertificateFactory r0 = java.security.cert.CertificateFactory.getInstance(r0)     // Catch: java.security.cert.CertificateException -> L1e
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L1e
            r1.<init>(r2)     // Catch: java.security.cert.CertificateException -> L1e
            java.security.cert.Certificate r2 = r0.generateCertificate(r1)     // Catch: java.security.cert.CertificateException -> L1e
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2     // Catch: java.security.cert.CertificateException -> L1e
            goto L27
        L1e:
            r2 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.String r1 = "exception"
            com.huawei.secure.android.common.ssl.util.g.a(r0, r1, r2)
        L26:
            r2 = 0
        L27:
            return r2
    }

    public static java.security.cert.X509Certificate a(java.lang.String r3) {
            java.lang.String r0 = "X509"
            java.security.cert.CertificateFactory r0 = java.security.cert.CertificateFactory.getInstance(r0)     // Catch: java.security.cert.CertificateException -> L16
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L16
            byte[] r3 = r3.getBytes()     // Catch: java.security.cert.CertificateException -> L16
            r1.<init>(r3)     // Catch: java.security.cert.CertificateException -> L16
            java.security.cert.Certificate r3 = r0.generateCertificate(r1)     // Catch: java.security.cert.CertificateException -> L16
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3     // Catch: java.security.cert.CertificateException -> L16
            goto L32
        L16:
            r3 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "generateX509FromStr: CertificateException"
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r0, r3)
            r3 = 0
        L32:
            return r3
    }

    public static boolean a(java.security.cert.X509Certificate r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = r3.getBasicConstraints()
            r2 = -1
            if (r1 != r2) goto Lc
            return r0
        Lc:
            boolean[] r3 = r3.getKeyUsage()
            r0 = 5
            boolean r3 = r3[r0]
            return r3
    }

    public static boolean a(java.security.cert.X509Certificate r0, java.lang.String r1) {
            java.security.Principal r0 = r0.getSubjectDN()
            java.lang.String r0 = r0.getName()
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L17
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.String r1 = "verify: subject name is error"
            com.huawei.secure.android.common.ssl.util.g.b(r0, r1)
            r0 = 0
            return r0
        L17:
            r0 = 1
            return r0
    }

    public static boolean a(java.security.cert.X509Certificate r3, java.security.cert.X509Certificate r4) {
            java.security.PublicKey r0 = r3.getPublicKey()
            r1 = 0
            r4.verify(r0)     // Catch: java.lang.Exception -> L1f java.security.SignatureException -> L3b java.security.NoSuchProviderException -> L57 java.security.NoSuchAlgorithmException -> L73 java.security.InvalidKeyException -> L8f java.security.cert.CertificateException -> Lab
            r0 = 2
            java.security.cert.X509Certificate[] r0 = new java.security.cert.X509Certificate[r0]
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            boolean r4 = b(r0)
            if (r4 != 0) goto L1e
            java.lang.String r3 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.String r4 = "verify: date not right"
            com.huawei.secure.android.common.ssl.util.g.b(r3, r4)
            return r1
        L1e:
            return r3
        L1f:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "verify: Exception "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r4, r3)
            return r1
        L3b:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "verify: publickey SignatureException "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r4, r3)
            return r1
        L57:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "verify: publickey NoSuchProviderException "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r4, r3)
            return r1
        L73:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "verify: publickey NoSuchAlgorithmException "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r4, r3)
            return r1
        L8f:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "verify: publickey InvalidKeyException "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r4, r3)
            return r1
        Lab:
            r3 = move-exception
            java.lang.String r4 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "verify: publickey CertificateException "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r4, r3)
            return r1
    }

    public static boolean a(java.security.cert.X509Certificate r5, java.security.cert.X509Certificate[] r6) throws java.security.NoSuchProviderException, java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.SignatureException {
            r0 = 0
            r1 = 0
            r2 = r0
        L3:
            int r3 = r6.length
            if (r2 >= r3) goto L32
            r3 = r6[r2]
            java.security.Principal r4 = r3.getIssuerDN()
            java.security.Principal r3 = r3.getSubjectDN()
            if (r1 == 0) goto L2e
            boolean r1 = r4.equals(r1)
            if (r1 == 0) goto L26
            int r1 = r2 + (-1)
            r1 = r6[r1]
            java.security.PublicKey r1 = r1.getPublicKey()
            r4 = r6[r2]
            r4.verify(r1)
            goto L2e
        L26:
            java.lang.String r5 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.String r6 = "verify: principalIssuer not match"
            com.huawei.secure.android.common.ssl.util.g.b(r5, r6)
            return r0
        L2e:
            int r2 = r2 + 1
            r1 = r3
            goto L3
        L32:
            r1 = r6[r0]
            boolean r1 = a(r5, r1)
            if (r1 != 0) goto L3b
            return r0
        L3b:
            boolean r1 = b(r6)
            if (r1 != 0) goto L42
            return r0
        L42:
            boolean r5 = a(r5)
            if (r5 != 0) goto L49
            return r0
        L49:
            boolean r5 = a(r6)
            if (r5 != 0) goto L50
            return r0
        L50:
            r5 = 1
            return r5
    }

    public static boolean a(java.security.cert.X509Certificate r1, java.security.cert.X509Certificate[] r2, java.security.cert.X509CRL r3, java.lang.String r4) throws java.security.NoSuchAlgorithmException, java.security.cert.CertificateException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            boolean r1 = a(r1, r2)
            r0 = 0
            if (r1 == 0) goto L8
            return r0
        L8:
            boolean r1 = a(r2, r3)
            if (r1 == 0) goto Lf
            return r0
        Lf:
            int r1 = r2.length
            r3 = 1
            int r1 = r1 - r3
            r1 = r2[r1]
            boolean r1 = a(r1, r4)
            if (r1 != 0) goto L1b
            return r0
        L1b:
            boolean r1 = b(r2)
            if (r1 != 0) goto L22
            return r0
        L22:
            return r3
    }

    public static boolean a(java.security.cert.X509Certificate[] r4) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.length
            r3 = 1
            int r2 = r2 - r3
            if (r1 >= r2) goto L13
            r2 = r4[r1]
            boolean r2 = a(r2)
            if (r2 != 0) goto L10
            return r0
        L10:
            int r1 = r1 + 1
            goto L2
        L13:
            return r3
    }

    public static boolean a(java.security.cert.X509Certificate[] r5, java.security.cert.X509CRL r6) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r5.length
            r2 = 0
            r3 = r2
        L8:
            if (r3 >= r1) goto L16
            r4 = r5[r3]
            java.math.BigInteger r4 = r4.getSerialNumber()
            r0.add(r4)
            int r3 = r3 + 1
            goto L8
        L16:
            if (r6 == 0) goto L62
            java.util.Set r5 = r6.getRevokedCertificates()     // Catch: java.lang.Exception -> L46
            if (r5 == 0) goto L62
            boolean r6 = r5.isEmpty()     // Catch: java.lang.Exception -> L46
            if (r6 != 0) goto L62
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> L46
        L28:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Exception -> L46
            if (r6 == 0) goto L62
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Exception -> L46
            java.security.cert.X509CRLEntry r6 = (java.security.cert.X509CRLEntry) r6     // Catch: java.lang.Exception -> L46
            java.math.BigInteger r6 = r6.getSerialNumber()     // Catch: java.lang.Exception -> L46
            boolean r6 = r0.contains(r6)     // Catch: java.lang.Exception -> L46
            if (r6 == 0) goto L28
            java.lang.String r5 = com.huawei.secure.android.common.ssl.util.b.a     // Catch: java.lang.Exception -> L46
            java.lang.String r6 = "verify: certificate revoked"
            com.huawei.secure.android.common.ssl.util.g.b(r5, r6)     // Catch: java.lang.Exception -> L46
            return r2
        L46:
            r5 = move-exception
            java.lang.String r6 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "verify: revoked verify exception : "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r6, r5)
            return r2
        L62:
            r5 = 1
            return r5
    }

    public static boolean b(java.security.cert.X509Certificate[] r5) {
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            int r1 = r5.length
            r2 = 0
            r3 = r2
        L8:
            if (r3 >= r1) goto L4c
            r4 = r5[r3]
            r4.checkValidity(r0)     // Catch: java.lang.Exception -> L12 java.security.cert.CertificateNotYetValidException -> L2e java.security.cert.CertificateExpiredException -> L30
            int r3 = r3 + 1
            goto L8
        L12:
            r5 = move-exception
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "verifyCertificateDate : exception : "
            r1.append(r3)
            java.lang.String r5 = r5.getMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r0, r5)
            return r2
        L2e:
            r5 = move-exception
            goto L31
        L30:
            r5 = move-exception
        L31:
            java.lang.String r0 = com.huawei.secure.android.common.ssl.util.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "verifyCertificateDate: exception : "
            r1.append(r3)
            java.lang.String r5 = r5.getMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.huawei.secure.android.common.ssl.util.g.b(r0, r5)
            return r2
        L4c:
            r5 = 1
            return r5
    }
}
