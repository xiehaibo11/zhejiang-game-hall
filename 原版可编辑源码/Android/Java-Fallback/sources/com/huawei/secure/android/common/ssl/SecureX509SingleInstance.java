package com.huawei.secure.android.common.ssl;

public class SecureX509SingleInstance {
    private static final java.lang.String a = "SecureX509SingleInstance";
    private static volatile com.huawei.secure.android.common.ssl.SecureX509TrustManager b;

    static {
            return
    }

    private SecureX509SingleInstance() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.secure.android.common.ssl.SecureX509TrustManager getInstance(android.content.Context r7) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.io.IOException {
            long r0 = java.lang.System.currentTimeMillis()
            if (r7 == 0) goto L74
            com.huawei.secure.android.common.ssl.util.c.a(r7)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r2 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b
            if (r2 != 0) goto L51
            java.lang.Class<com.huawei.secure.android.common.ssl.SecureX509SingleInstance> r2 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.class
            monitor-enter(r2)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r3 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b     // Catch: java.lang.Throwable -> L4e
            if (r3 != 0) goto L4c
            java.io.InputStream r3 = com.huawei.secure.android.common.ssl.util.BksUtil.getFilesBksIS(r7)     // Catch: java.lang.Throwable -> L4e
            if (r3 != 0) goto L2c
            java.lang.String r3 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.a     // Catch: java.lang.Throwable -> L4e
            java.lang.String r4 = "get assets bks"
            com.huawei.secure.android.common.ssl.util.g.c(r3, r4)     // Catch: java.lang.Throwable -> L4e
            android.content.res.AssetManager r3 = r7.getAssets()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r4 = "hmsrootcas.bks"
            java.io.InputStream r3 = r3.open(r4)     // Catch: java.lang.Throwable -> L4e
            goto L33
        L2c:
            java.lang.String r4 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.a     // Catch: java.lang.Throwable -> L4e
            java.lang.String r5 = "get files bks"
            com.huawei.secure.android.common.ssl.util.g.c(r4, r5)     // Catch: java.lang.Throwable -> L4e
        L33:
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r4 = new com.huawei.secure.android.common.ssl.SecureX509TrustManager     // Catch: java.lang.Throwable -> L4e
            java.lang.String r5 = ""
            r4.<init>(r3, r5)     // Catch: java.lang.Throwable -> L4e
            com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b = r4     // Catch: java.lang.Throwable -> L4e
            com.huawei.secure.android.common.ssl.util.d r3 = new com.huawei.secure.android.common.ssl.util.d     // Catch: java.lang.Throwable -> L4e
            r3.<init>()     // Catch: java.lang.Throwable -> L4e
            java.util.concurrent.Executor r4 = android.os.AsyncTask.THREAD_POOL_EXECUTOR     // Catch: java.lang.Throwable -> L4e
            r5 = 1
            android.content.Context[] r5 = new android.content.Context[r5]     // Catch: java.lang.Throwable -> L4e
            r6 = 0
            r5[r6] = r7     // Catch: java.lang.Throwable -> L4e
            r3.executeOnExecutor(r4, r5)     // Catch: java.lang.Throwable -> L4e
        L4c:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4e
            goto L51
        L4e:
            r7 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L4e
            throw r7
        L51:
            java.lang.String r7 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "SecureX509TrustManager getInstance: cost : "
            r2.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            r2.append(r3)
            java.lang.String r0 = " ms"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r7, r0)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r7 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b
            return r7
        L74:
            java.lang.NullPointerException r7 = new java.lang.NullPointerException
            java.lang.String r0 = "context is null"
            r7.<init>(r0)
            throw r7
    }

    public static void updateBks(java.io.InputStream r5) {
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.a
            java.lang.String r1 = "update bks"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            long r0 = java.lang.System.currentTimeMillis()
            if (r5 == 0) goto L24
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r2 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b
            if (r2 == 0) goto L24
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r2 = new com.huawei.secure.android.common.ssl.SecureX509TrustManager
            java.lang.String r3 = ""
            r2.<init>(r5, r3)
            com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b = r2
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r5 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory.a(r5)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r5 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.b
            com.huawei.secure.android.common.ssl.SecureApacheSSLSocketFactory.a(r5)
        L24:
            java.lang.String r5 = com.huawei.secure.android.common.ssl.SecureX509SingleInstance.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "SecureX509TrustManager update bks cost : "
            r2.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r0
            r2.append(r3)
            java.lang.String r0 = " ms"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.huawei.secure.android.common.ssl.util.g.c(r5, r0)
            return
    }
}
