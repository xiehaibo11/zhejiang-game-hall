package com.huawei.hms.device;

public class a {
    public static java.lang.String a(java.lang.String r3, java.lang.String r4) {
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
            if (r2 == r1) goto L36
            int r4 = r4.length()
            int r0 = r0 + r4
            int r0 = r0 + 1
            java.lang.String r3 = r3.substring(r0, r2)
            return r3
        L36:
            int r4 = r4.length()
            int r0 = r0 + r4
            int r0 = r0 + 1
            java.lang.String r3 = r3.substring(r0)
            return r3
    }

    public static java.security.cert.X509Certificate a(android.content.Context r1) {
            java.lang.String r0 = "052root"
            java.security.cert.X509Certificate r1 = a(r1, r0)
            return r1
    }

    public static java.security.cert.X509Certificate a(android.content.Context r4, java.lang.String r5) {
            java.lang.String r0 = "X509CertUtil"
            r1 = 0
            if (r4 == 0) goto L8e
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto Ld
            goto L8e
        Ld:
            java.lang.String r2 = "bks"
            java.security.KeyStore r2 = java.security.KeyStore.getInstance(r2)     // Catch: java.lang.Throwable -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.cert.CertificateException -> L66 java.io.IOException -> L68 java.security.KeyStoreException -> L6a
            android.content.res.AssetManager r4 = r4.getAssets()     // Catch: java.lang.Throwable -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.cert.CertificateException -> L66 java.io.IOException -> L68 java.security.KeyStoreException -> L6a
            java.lang.String r3 = "hmsrootcas.bks"
            java.io.InputStream r4 = r4.open(r3)     // Catch: java.lang.Throwable -> L61 java.security.NoSuchAlgorithmException -> L63 java.security.cert.CertificateException -> L66 java.io.IOException -> L68 java.security.KeyStoreException -> L6a
            java.lang.String r3 = ""
            char[] r3 = r3.toCharArray()     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            r2.load(r4, r3)     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            boolean r3 = r2.containsAlias(r5)     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            if (r3 != 0) goto L44
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            r2.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            java.lang.String r3 = "Not include alias "
            r2.append(r3)     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            r2.append(r5)     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            java.lang.String r5 = r2.toString()     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            com.huawei.hms.support.log.HMSLog.e(r0, r5)     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            com.huawei.hms.utils.IOUtils.closeQuietly(r4)
            return r1
        L44:
            java.security.cert.Certificate r5 = r2.getCertificate(r5)     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            boolean r2 = r5 instanceof java.security.cert.X509Certificate     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            if (r2 == 0) goto L55
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            r5.checkValidity()     // Catch: java.security.NoSuchAlgorithmException -> L59 java.security.cert.CertificateException -> L5b java.io.IOException -> L5d java.security.KeyStoreException -> L5f java.lang.Throwable -> L88
            com.huawei.hms.utils.IOUtils.closeQuietly(r4)
            return r5
        L55:
            com.huawei.hms.utils.IOUtils.closeQuietly(r4)
            goto L87
        L59:
            r5 = move-exception
            goto L6c
        L5b:
            r5 = move-exception
            goto L6c
        L5d:
            r5 = move-exception
            goto L6c
        L5f:
            r5 = move-exception
            goto L6c
        L61:
            r5 = move-exception
            goto L8a
        L63:
            r5 = move-exception
        L64:
            r4 = r1
            goto L6c
        L66:
            r5 = move-exception
            goto L64
        L68:
            r5 = move-exception
            goto L64
        L6a:
            r5 = move-exception
            goto L64
        L6c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r2.<init>()     // Catch: java.lang.Throwable -> L88
            java.lang.String r3 = "exception:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L88
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L88
            r2.append(r5)     // Catch: java.lang.Throwable -> L88
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L88
            com.huawei.hms.support.log.HMSLog.e(r0, r5)     // Catch: java.lang.Throwable -> L88
            com.huawei.hms.utils.IOUtils.closeQuietly(r4)
        L87:
            return r1
        L88:
            r5 = move-exception
            r1 = r4
        L8a:
            com.huawei.hms.utils.IOUtils.closeQuietly(r1)
            throw r5
        L8e:
            java.lang.String r4 = "args are error"
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            return r1
    }

    public static java.security.cert.X509Certificate a(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            byte[] r3 = com.huawei.hms.support.log.common.Base64.decode(r3)     // Catch: java.lang.IllegalArgumentException -> L11
            java.security.cert.X509Certificate r3 = a(r3)     // Catch: java.lang.IllegalArgumentException -> L11
            return r3
        L11:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "getCert failed : "
            r0.append(r2)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "X509CertUtil"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            return r1
    }

    public static java.security.cert.X509Certificate a(byte[] r2) {
            java.lang.String r0 = "X.509"
            java.security.cert.CertificateFactory r0 = java.security.cert.CertificateFactory.getInstance(r0)     // Catch: java.security.cert.CertificateException -> L12
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L12
            r1.<init>(r2)     // Catch: java.security.cert.CertificateException -> L12
            java.security.cert.Certificate r2 = r0.generateCertificate(r1)     // Catch: java.security.cert.CertificateException -> L12
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2     // Catch: java.security.cert.CertificateException -> L12
            return r2
        L12:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to get cert: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "X509CertUtil"
            com.huawei.hms.support.log.HMSLog.e(r0, r2)
            r2 = 0
            return r2
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
            int r1 = r3.length
            r2 = 5
            if (r2 >= r1) goto L17
            boolean r3 = r3[r2]
            return r3
        L17:
            return r0
    }

    public static boolean a(java.security.cert.X509Certificate r1, java.lang.String r2) {
            java.lang.String r0 = "CN"
            boolean r1 = b(r1, r0, r2)
            return r1
    }

    public static boolean a(java.security.cert.X509Certificate r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.lang.IllegalArgumentException -> Lf java.io.UnsupportedEncodingException -> L11
            byte[] r3 = com.huawei.hms.support.log.common.Base64.decode(r3)     // Catch: java.lang.IllegalArgumentException -> Lf java.io.UnsupportedEncodingException -> L11
            boolean r1 = a(r1, r2, r3)     // Catch: java.lang.IllegalArgumentException -> Lf java.io.UnsupportedEncodingException -> L11
            return r1
        Lf:
            r1 = move-exception
            goto L12
        L11:
            r1 = move-exception
        L12:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = " plainText exception: "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "X509CertUtil"
            com.huawei.hms.support.log.HMSLog.e(r2, r1)
            r1 = 0
            return r1
    }

    public static boolean a(java.security.cert.X509Certificate r4, java.util.List<java.security.cert.X509Certificate> r5) {
            r0 = 0
            if (r5 == 0) goto L5c
            int r1 = r5.size()
            if (r1 != 0) goto La
            goto L5c
        La:
            java.lang.String r1 = "X509CertUtil"
            if (r4 != 0) goto L14
            java.lang.String r4 = "rootCert is null,verify failed "
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
            return r0
        L14:
            java.security.PublicKey r4 = r4.getPublicKey()
            java.util.Iterator r2 = r5.iterator()
        L1c:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L57
            java.lang.Object r3 = r2.next()
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            if (r3 == 0) goto L56
            r3.checkValidity()     // Catch: java.security.SignatureException -> L35 java.security.NoSuchProviderException -> L37 java.security.InvalidKeyException -> L39 java.security.NoSuchAlgorithmException -> L3b java.security.cert.CertificateException -> L3d
            r3.verify(r4)     // Catch: java.security.SignatureException -> L35 java.security.NoSuchProviderException -> L37 java.security.InvalidKeyException -> L39 java.security.NoSuchAlgorithmException -> L3b java.security.cert.CertificateException -> L3d
            java.security.PublicKey r4 = r3.getPublicKey()     // Catch: java.security.SignatureException -> L35 java.security.NoSuchProviderException -> L37 java.security.InvalidKeyException -> L39 java.security.NoSuchAlgorithmException -> L3b java.security.cert.CertificateException -> L3d
            goto L1c
        L35:
            r4 = move-exception
            goto L3e
        L37:
            r4 = move-exception
            goto L3e
        L39:
            r4 = move-exception
            goto L3e
        L3b:
            r4 = move-exception
            goto L3e
        L3d:
            r4 = move-exception
        L3e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r2 = "verify failed "
            r5.append(r2)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r4)
        L56:
            return r0
        L57:
            boolean r4 = a(r5)
            return r4
        L5c:
            return r0
    }

    public static boolean a(java.security.cert.X509Certificate r1, byte[] r2, byte[] r3) {
            java.lang.String r0 = r1.getSigAlgName()     // Catch: java.security.InvalidKeyException -> L17 java.security.SignatureException -> L19 java.security.NoSuchAlgorithmException -> L1b
            java.security.Signature r0 = java.security.Signature.getInstance(r0)     // Catch: java.security.InvalidKeyException -> L17 java.security.SignatureException -> L19 java.security.NoSuchAlgorithmException -> L1b
            java.security.PublicKey r1 = r1.getPublicKey()     // Catch: java.security.InvalidKeyException -> L17 java.security.SignatureException -> L19 java.security.NoSuchAlgorithmException -> L1b
            r0.initVerify(r1)     // Catch: java.security.InvalidKeyException -> L17 java.security.SignatureException -> L19 java.security.NoSuchAlgorithmException -> L1b
            r0.update(r2)     // Catch: java.security.InvalidKeyException -> L17 java.security.SignatureException -> L19 java.security.NoSuchAlgorithmException -> L1b
            boolean r1 = r0.verify(r3)     // Catch: java.security.InvalidKeyException -> L17 java.security.SignatureException -> L19 java.security.NoSuchAlgorithmException -> L1b
            return r1
        L17:
            r1 = move-exception
            goto L1c
        L19:
            r1 = move-exception
            goto L1c
        L1b:
            r1 = move-exception
        L1c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "failed checkSignature : "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "X509CertUtil"
            com.huawei.hms.support.log.HMSLog.e(r2, r1)
            r1 = 0
            return r1
    }

    public static boolean a(java.util.List<java.security.cert.X509Certificate> r4) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.size()
            r3 = 1
            int r2 = r2 - r3
            if (r1 >= r2) goto L1a
            java.lang.Object r2 = r4.get(r1)
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            boolean r2 = a(r2)
            if (r2 != 0) goto L17
            return r0
        L17:
            int r1 = r1 + 1
            goto L2
        L1a:
            return r3
    }

    public static java.util.List<java.security.cert.X509Certificate> b(java.lang.String r0) {
            java.util.List r0 = c(r0)
            java.util.List r0 = b(r0)
            return r0
    }

    public static java.util.List<java.security.cert.X509Certificate> b(java.util.List<java.lang.String> r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r2.size()
            r0.<init>(r1)
            java.util.Iterator r2 = r2.iterator()
        Ld:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r2.next()
            java.lang.String r1 = (java.lang.String) r1
            java.security.cert.X509Certificate r1 = a(r1)
            r0.add(r1)
            goto Ld
        L21:
            return r0
    }

    public static boolean b(java.security.cert.X509Certificate r1, java.lang.String r2) {
            java.lang.String r0 = "OU"
            boolean r1 = b(r1, r0, r2)
            return r1
    }

    public static boolean b(java.security.cert.X509Certificate r1, java.lang.String r2, java.lang.String r3) {
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

    public static java.util.List<java.lang.String> c(java.lang.String r3) {
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
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to getCertChain: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "X509CertUtil"
            com.huawei.hms.support.log.HMSLog.e(r0, r3)
            java.util.List r3 = java.util.Collections.emptyList()
            return r3
    }
}
