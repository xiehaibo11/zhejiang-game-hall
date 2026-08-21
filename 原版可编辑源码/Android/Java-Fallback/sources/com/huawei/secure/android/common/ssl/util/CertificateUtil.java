package com.huawei.secure.android.common.ssl.util;

public final class CertificateUtil {
    private static final java.lang.String a = "CertificateUtil";

    private CertificateUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.security.cert.X509Certificate getHwCbgRootCA(android.content.Context r6) {
            r0 = 0
            java.lang.String r1 = "bks"
            java.security.KeyStore r1 = java.security.KeyStore.getInstance(r1)     // Catch: java.lang.Throwable -> L2f java.security.NoSuchAlgorithmException -> L31 java.io.IOException -> L34 java.security.cert.CertificateException -> L36 java.security.KeyStoreException -> L38
            android.content.res.AssetManager r6 = r6.getAssets()     // Catch: java.lang.Throwable -> L2f java.security.NoSuchAlgorithmException -> L31 java.io.IOException -> L34 java.security.cert.CertificateException -> L36 java.security.KeyStoreException -> L38
            java.lang.String r2 = "hmsrootcas.bks"
            java.io.InputStream r6 = r6.open(r2)     // Catch: java.lang.Throwable -> L2f java.security.NoSuchAlgorithmException -> L31 java.io.IOException -> L34 java.security.cert.CertificateException -> L36 java.security.KeyStoreException -> L38
            r6.reset()     // Catch: java.security.NoSuchAlgorithmException -> L27 java.io.IOException -> L29 java.security.cert.CertificateException -> L2b java.security.KeyStoreException -> L2d java.lang.Throwable -> L58
            java.lang.String r2 = ""
            char[] r2 = r2.toCharArray()     // Catch: java.security.NoSuchAlgorithmException -> L27 java.io.IOException -> L29 java.security.cert.CertificateException -> L2b java.security.KeyStoreException -> L2d java.lang.Throwable -> L58
            r1.load(r6, r2)     // Catch: java.security.NoSuchAlgorithmException -> L27 java.io.IOException -> L29 java.security.cert.CertificateException -> L2b java.security.KeyStoreException -> L2d java.lang.Throwable -> L58
            java.lang.String r2 = "052root"
            java.security.cert.Certificate r1 = r1.getCertificate(r2)     // Catch: java.security.NoSuchAlgorithmException -> L27 java.io.IOException -> L29 java.security.cert.CertificateException -> L2b java.security.KeyStoreException -> L2d java.lang.Throwable -> L58
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1     // Catch: java.security.NoSuchAlgorithmException -> L27 java.io.IOException -> L29 java.security.cert.CertificateException -> L2b java.security.KeyStoreException -> L2d java.lang.Throwable -> L58
            r0 = r1
            goto L54
        L27:
            r1 = move-exception
            goto L3a
        L29:
            r1 = move-exception
            goto L3a
        L2b:
            r1 = move-exception
            goto L3a
        L2d:
            r1 = move-exception
            goto L3a
        L2f:
            r6 = move-exception
            goto L5c
        L31:
            r1 = move-exception
        L32:
            r6 = r0
            goto L3a
        L34:
            r1 = move-exception
            goto L32
        L36:
            r1 = move-exception
            goto L32
        L38:
            r1 = move-exception
            goto L32
        L3a:
            java.lang.String r2 = "CertificateUtil"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            r3.<init>()     // Catch: java.lang.Throwable -> L58
            java.lang.String r4 = "loadBksCA: exception : "
            r3.append(r4)     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L58
            r3.append(r1)     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L58
            com.huawei.secure.android.common.ssl.util.g.b(r2, r1)     // Catch: java.lang.Throwable -> L58
        L54:
            com.huawei.secure.android.common.ssl.util.f.a(r6)
            return r0
        L58:
            r0 = move-exception
            r5 = r0
            r0 = r6
            r6 = r5
        L5c:
            com.huawei.secure.android.common.ssl.util.f.a(r0)
            throw r6
    }
}
