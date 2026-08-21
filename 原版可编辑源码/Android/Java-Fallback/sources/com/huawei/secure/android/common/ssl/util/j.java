package com.huawei.secure.android.common.ssl.util;

public class j {
    private static final java.lang.String b = "X509CertificateUtil";
    public static final java.lang.String c = "hmsrootcas.bks";
    public static final java.lang.String d = "";
    public static final java.lang.String e = "bks";
    public static final java.lang.String f = "052root";
    private static final java.lang.String g = "hmsincas.bks";
    private static final java.lang.String h = "huawei cbg application integration ca";
    private android.content.Context a;

    public j(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public java.security.cert.X509Certificate a() {
            r2 = this;
            java.lang.String r0 = "hmsincas.bks"
            java.lang.String r1 = "huawei cbg application integration ca"
            java.security.cert.X509Certificate r0 = r2.a(r0, r1)
            return r0
    }

    public java.security.cert.X509Certificate a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "bks"
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Throwable -> L2d java.security.NoSuchAlgorithmException -> L2f java.io.IOException -> L32 java.security.cert.CertificateException -> L34 java.security.KeyStoreException -> L36
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L2d java.security.NoSuchAlgorithmException -> L2f java.io.IOException -> L32 java.security.cert.CertificateException -> L34 java.security.KeyStoreException -> L36
            android.content.res.AssetManager r2 = r2.getAssets()     // Catch: java.lang.Throwable -> L2d java.security.NoSuchAlgorithmException -> L2f java.io.IOException -> L32 java.security.cert.CertificateException -> L34 java.security.KeyStoreException -> L36
            java.io.InputStream r5 = r2.open(r5)     // Catch: java.lang.Throwable -> L2d java.security.NoSuchAlgorithmException -> L2f java.io.IOException -> L32 java.security.cert.CertificateException -> L34 java.security.KeyStoreException -> L36
            r5.reset()     // Catch: java.security.NoSuchAlgorithmException -> L25 java.io.IOException -> L27 java.security.cert.CertificateException -> L29 java.security.KeyStoreException -> L2b java.lang.Throwable -> L56
            java.lang.String r2 = ""
            char[] r2 = r2.toCharArray()     // Catch: java.security.NoSuchAlgorithmException -> L25 java.io.IOException -> L27 java.security.cert.CertificateException -> L29 java.security.KeyStoreException -> L2b java.lang.Throwable -> L56
            r1.load(r5, r2)     // Catch: java.security.NoSuchAlgorithmException -> L25 java.io.IOException -> L27 java.security.cert.CertificateException -> L29 java.security.KeyStoreException -> L2b java.lang.Throwable -> L56
            java.security.cert.Certificate r6 = r1.getCertificate(r6)     // Catch: java.security.NoSuchAlgorithmException -> L25 java.io.IOException -> L27 java.security.cert.CertificateException -> L29 java.security.KeyStoreException -> L2b java.lang.Throwable -> L56
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6     // Catch: java.security.NoSuchAlgorithmException -> L25 java.io.IOException -> L27 java.security.cert.CertificateException -> L29 java.security.KeyStoreException -> L2b java.lang.Throwable -> L56
            r0 = r6
            goto L52
        L25:
            r6 = move-exception
            goto L38
        L27:
            r6 = move-exception
            goto L38
        L29:
            r6 = move-exception
            goto L38
        L2b:
            r6 = move-exception
            goto L38
        L2d:
            r6 = move-exception
            goto L58
        L2f:
            r6 = move-exception
        L30:
            r5 = r0
            goto L38
        L32:
            r6 = move-exception
            goto L30
        L34:
            r6 = move-exception
            goto L30
        L36:
            r6 = move-exception
            goto L30
        L38:
            java.lang.String r1 = "X509CertificateUtil"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L56
            r2.<init>()     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = "loadBksCA: exception : "
            r2.append(r3)     // Catch: java.lang.Throwable -> L56
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L56
            r2.append(r6)     // Catch: java.lang.Throwable -> L56
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L56
            com.huawei.secure.android.common.ssl.util.g.b(r1, r6)     // Catch: java.lang.Throwable -> L56
        L52:
            com.huawei.secure.android.common.ssl.util.f.a(r5)
            return r0
        L56:
            r6 = move-exception
            r0 = r5
        L58:
            com.huawei.secure.android.common.ssl.util.f.a(r0)
            throw r6
    }

    public java.security.cert.X509Certificate b() {
            r2 = this;
            java.lang.String r0 = "hmsrootcas.bks"
            java.lang.String r1 = "052root"
            java.security.cert.X509Certificate r0 = r2.a(r0, r1)
            return r0
    }
}
