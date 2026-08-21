package com.huawei.appgallery.serviceverifykit.d;

public class c {
    private static java.lang.String a(java.lang.String r3, java.lang.String r4) {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r3.toUpperCase(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r2 = "="
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            int r0 = r0.indexOf(r1)
            r1 = -1
            if (r0 != r1) goto L22
            r3 = 0
            return r3
        L22:
            java.lang.String r2 = ","
            int r2 = r3.indexOf(r2, r0)
            int r4 = r4.length()
            int r0 = r0 + r4
            int r0 = r0 + 1
            if (r2 == r1) goto L36
            java.lang.String r3 = r3.substring(r0, r2)
            return r3
        L36:
            java.lang.String r3 = r3.substring(r0)
            return r3
    }

    public static java.security.cert.X509Certificate a(android.content.Context r6) {
            java.lang.String r0 = "close stream failed"
            java.lang.String r1 = "X509CertUtil"
            r2 = 0
            android.content.res.Resources r6 = r6.getResources()     // Catch: java.lang.Throwable -> L29 java.security.cert.CertificateException -> L2e java.io.IOException -> L3c android.content.res.Resources.NotFoundException -> L47
            android.content.res.AssetManager r6 = r6.getAssets()     // Catch: java.lang.Throwable -> L29 java.security.cert.CertificateException -> L2e java.io.IOException -> L3c android.content.res.Resources.NotFoundException -> L47
            java.lang.String r3 = "ag_sdk_cbg_root.cer"
            java.io.InputStream r6 = r6.open(r3)     // Catch: java.lang.Throwable -> L29 java.security.cert.CertificateException -> L2e java.io.IOException -> L3c android.content.res.Resources.NotFoundException -> L47
            java.lang.String r3 = "X.509"
            java.security.cert.CertificateFactory r3 = java.security.cert.CertificateFactory.getInstance(r3)     // Catch: java.security.cert.CertificateException -> L2f java.io.IOException -> L3d android.content.res.Resources.NotFoundException -> L48 java.lang.Throwable -> L58
            java.security.cert.Certificate r3 = r3.generateCertificate(r6)     // Catch: java.security.cert.CertificateException -> L2f java.io.IOException -> L3d android.content.res.Resources.NotFoundException -> L48 java.lang.Throwable -> L58
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3     // Catch: java.security.cert.CertificateException -> L2f java.io.IOException -> L3d android.content.res.Resources.NotFoundException -> L48 java.lang.Throwable -> L58
            if (r6 == 0) goto L27
            r6.close()     // Catch: java.io.IOException -> L25
            goto L27
        L25:
            r2 = r3
            goto L52
        L27:
            r2 = r3
            goto L57
        L29:
            r6 = move-exception
            r5 = r2
            r2 = r6
            r6 = r5
            goto L59
        L2e:
            r6 = r2
        L2f:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = "CertificateException"
            r3.a(r1, r4)     // Catch: java.lang.Throwable -> L58
            if (r6 == 0) goto L57
        L38:
            r6.close()     // Catch: java.io.IOException -> L52
            goto L57
        L3c:
            r6 = r2
        L3d:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = "can not open cbg root cer"
            r3.a(r1, r4)     // Catch: java.lang.Throwable -> L58
            if (r6 == 0) goto L57
            goto L38
        L47:
            r6 = r2
        L48:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = "can not found cbg root cer"
            r3.a(r1, r4)     // Catch: java.lang.Throwable -> L58
            if (r6 == 0) goto L57
            goto L38
        L52:
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            r6.a(r1, r0)
        L57:
            return r2
        L58:
            r2 = move-exception
        L59:
            if (r6 == 0) goto L64
            r6.close()     // Catch: java.io.IOException -> L5f
            goto L64
        L5f:
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            r6.a(r1, r0)
        L64:
            throw r2
    }

    private static java.security.cert.X509Certificate a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            byte[] r1 = com.huawei.appgallery.serviceverifykit.d.a.a(r1)
            java.security.cert.X509Certificate r1 = a(r1)
            return r1
    }

    private static java.security.cert.X509Certificate a(byte[] r4) {
            r0 = 0
            if (r4 == 0) goto L3a
            int r1 = r4.length
            if (r1 != 0) goto L7
            goto L3a
        L7:
            java.lang.String r1 = "X.509"
            java.security.cert.CertificateFactory r1 = java.security.cert.CertificateFactory.getInstance(r1)     // Catch: java.security.cert.CertificateException -> L1d
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L1d
            r2.<init>(r4)     // Catch: java.security.cert.CertificateException -> L1d
            java.security.cert.Certificate r4 = r1.generateCertificate(r2)     // Catch: java.security.cert.CertificateException -> L1d
            boolean r1 = r4 instanceof java.security.cert.X509Certificate     // Catch: java.security.cert.CertificateException -> L1d
            if (r1 == 0) goto L3a
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4     // Catch: java.security.cert.CertificateException -> L1d
            return r4
        L1d:
            r4 = move-exception
            com.huawei.appgallery.serviceverifykit.d.d.b r1 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Failed to get cert: "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            java.lang.String r2 = "X509CertUtil"
            r1.a(r2, r4)
        L3a:
            return r0
    }

    private static boolean a(java.security.cert.X509Certificate r3) {
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

    public static boolean a(java.security.cert.X509Certificate r1, java.lang.String r2) {
            java.lang.String r0 = "CN"
            boolean r1 = a(r1, r0, r2)
            return r1
    }

    private static boolean a(java.security.cert.X509Certificate r1, java.lang.String r2, java.lang.String r3) {
            if (r1 == 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L20
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            goto L20
        Lf:
            java.security.Principal r1 = r1.getSubjectDN()
            java.lang.String r1 = r1.getName()
            java.lang.String r1 = a(r1, r2)
            boolean r1 = r3.equals(r1)
            return r1
        L20:
            r1 = 0
            return r1
    }

    public static boolean a(java.security.cert.X509Certificate r4, java.util.List<java.security.cert.X509Certificate> r5) {
            r0 = 0
            if (r5 == 0) goto L81
            int r1 = r5.size()
            if (r1 != 0) goto Lb
            goto L81
        Lb:
            java.lang.String r1 = "X509CertUtil"
            if (r4 != 0) goto L17
            com.huawei.appgallery.serviceverifykit.d.d.b r4 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r5 = "rootCert is null,verify failed "
            r4.a(r1, r5)
            return r0
        L17:
            r4.checkValidity()     // Catch: java.security.cert.CertificateNotYetValidException -> L64 java.security.cert.CertificateExpiredException -> L66
            java.security.PublicKey r4 = r4.getPublicKey()
            int r2 = r5.size()
            int r2 = r2 + (-1)
        L24:
            if (r2 < 0) goto L5f
            java.lang.Object r3 = r5.get(r2)
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            if (r3 == 0) goto L5e
            r3.verify(r4)     // Catch: java.security.SignatureException -> L3b java.security.NoSuchProviderException -> L3d java.security.InvalidKeyException -> L3f java.security.NoSuchAlgorithmException -> L41 java.security.cert.CertificateException -> L43
            r3.checkValidity()     // Catch: java.security.SignatureException -> L3b java.security.NoSuchProviderException -> L3d java.security.InvalidKeyException -> L3f java.security.NoSuchAlgorithmException -> L41 java.security.cert.CertificateException -> L43
            java.security.PublicKey r4 = r3.getPublicKey()     // Catch: java.security.SignatureException -> L3b java.security.NoSuchProviderException -> L3d java.security.InvalidKeyException -> L3f java.security.NoSuchAlgorithmException -> L41 java.security.cert.CertificateException -> L43
            int r2 = r2 + (-1)
            goto L24
        L3b:
            r4 = move-exception
            goto L44
        L3d:
            r4 = move-exception
            goto L44
        L3f:
            r4 = move-exception
            goto L44
        L41:
            r4 = move-exception
            goto L44
        L43:
            r4 = move-exception
        L44:
            com.huawei.appgallery.serviceverifykit.d.d.b r5 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "verify failed "
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r5.a(r1, r4)
        L5e:
            return r0
        L5f:
            boolean r4 = a(r5)
            return r4
        L64:
            r4 = move-exception
            goto L67
        L66:
            r4 = move-exception
        L67:
            com.huawei.appgallery.serviceverifykit.d.d.b r5 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "verifyCertChain Exception:"
            r2.append(r3)
            java.lang.String r4 = r4.getMessage()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r5.a(r1, r4)
        L81:
            return r0
    }

    public static boolean a(java.security.cert.X509Certificate r3, byte[] r4, byte[] r5) {
            r0 = 0
            java.lang.String r1 = "X509CertUtil"
            if (r3 == 0) goto L31
            if (r4 == 0) goto L31
            if (r5 == 0) goto L31
            int r2 = r5.length
            if (r2 != 0) goto Ld
            goto L31
        Ld:
            java.lang.String r2 = r3.getSigAlgName()     // Catch: java.security.InvalidKeyException -> L24 java.security.SignatureException -> L26 java.security.NoSuchAlgorithmException -> L28
            java.security.Signature r2 = java.security.Signature.getInstance(r2)     // Catch: java.security.InvalidKeyException -> L24 java.security.SignatureException -> L26 java.security.NoSuchAlgorithmException -> L28
            java.security.PublicKey r3 = r3.getPublicKey()     // Catch: java.security.InvalidKeyException -> L24 java.security.SignatureException -> L26 java.security.NoSuchAlgorithmException -> L28
            r2.initVerify(r3)     // Catch: java.security.InvalidKeyException -> L24 java.security.SignatureException -> L26 java.security.NoSuchAlgorithmException -> L28
            r2.update(r4)     // Catch: java.security.InvalidKeyException -> L24 java.security.SignatureException -> L26 java.security.NoSuchAlgorithmException -> L28
            boolean r3 = r2.verify(r5)     // Catch: java.security.InvalidKeyException -> L24 java.security.SignatureException -> L26 java.security.NoSuchAlgorithmException -> L28
            return r3
        L24:
            r3 = move-exception
            goto L29
        L26:
            r3 = move-exception
            goto L29
        L28:
            r3 = move-exception
        L29:
            com.huawei.appgallery.serviceverifykit.d.d.b r4 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r5 = "failed checkSignature,Exception:"
            r4.a(r1, r5, r3)
            return r0
        L31:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r4 = "checkSignature parameter is null"
            r3.c(r1, r4)
            return r0
    }

    private static boolean a(java.util.List<java.security.cert.X509Certificate> r3) {
            r0 = 1
            r1 = r0
        L2:
            int r2 = r3.size()
            if (r1 >= r2) goto L19
            java.lang.Object r2 = r3.get(r1)
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            boolean r2 = a(r2)
            if (r2 != 0) goto L16
            r3 = 0
            return r3
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            return r0
    }

    public static java.util.List<java.security.cert.X509Certificate> b(java.lang.String r0) {
            java.util.List r0 = c(r0)
            java.util.List r0 = b(r0)
            return r0
    }

    private static java.util.List<java.security.cert.X509Certificate> b(java.util.List<java.lang.String> r4) {
            java.lang.String r0 = "X509CertUtil"
            if (r4 != 0) goto L11
            com.huawei.appgallery.serviceverifykit.d.d.b r4 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r1 = "base64 CertChain is null."
            r4.c(r0, r1)
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            return r4
        L11:
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r4.size()
            r1.<init>(r2)
            java.util.Iterator r4 = r4.iterator()
        L1e:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L3c
            java.lang.Object r2 = r4.next()
            java.lang.String r2 = (java.lang.String) r2
            java.security.cert.X509Certificate r2 = a(r2)
            if (r2 != 0) goto L38
            com.huawei.appgallery.serviceverifykit.d.d.b r2 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r3 = "Failed to get cert from CertChain"
            r2.a(r0, r3)
            goto L1e
        L38:
            r1.add(r2)
            goto L1e
        L3c:
            return r1
    }

    public static boolean b(java.security.cert.X509Certificate r1, java.lang.String r2) {
            java.lang.String r0 = "OU"
            boolean r1 = a(r1, r0, r2)
            return r1
    }

    private static java.util.List<java.lang.String> c(java.lang.String r3) {
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: org.json.JSONException -> L2c
            r0.<init>(r3)     // Catch: org.json.JSONException -> L2c
            int r3 = r0.length()     // Catch: org.json.JSONException -> L2c
            r1 = 1
            if (r3 > r1) goto L11
            java.util.List r3 = java.util.Collections.emptyList()     // Catch: org.json.JSONException -> L2c
            return r3
        L11:
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: org.json.JSONException -> L2c
            int r1 = r0.length()     // Catch: org.json.JSONException -> L2c
            r3.<init>(r1)     // Catch: org.json.JSONException -> L2c
            r1 = 0
        L1b:
            int r2 = r0.length()     // Catch: org.json.JSONException -> L2c
            if (r1 >= r2) goto L2b
            java.lang.String r2 = r0.getString(r1)     // Catch: org.json.JSONException -> L2c
            r3.add(r2)     // Catch: org.json.JSONException -> L2c
            int r1 = r1 + 1
            goto L1b
        L2b:
            return r3
        L2c:
            r3 = move-exception
            com.huawei.appgallery.serviceverifykit.d.d.b r0 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to getCertChain: "
            r1.append(r2)
            java.lang.String r3 = r3.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "X509CertUtil"
            r0.a(r1, r3)
            java.util.List r3 = java.util.Collections.emptyList()
            return r3
    }
}
