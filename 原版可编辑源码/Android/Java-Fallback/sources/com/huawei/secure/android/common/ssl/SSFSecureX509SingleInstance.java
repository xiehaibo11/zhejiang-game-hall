package com.huawei.secure.android.common.ssl;

public class SSFSecureX509SingleInstance {
    private static final java.lang.String a = "SSFSecureX509SingleInstance";
    private static volatile com.huawei.secure.android.common.ssl.SecureX509TrustManager b;

    static {
            return
    }

    private SSFSecureX509SingleInstance() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.secure.android.common.ssl.SecureX509TrustManager getInstance(android.content.Context r5) throws java.security.cert.CertificateException, java.security.NoSuchAlgorithmException, java.security.KeyStoreException, java.io.IOException {
            if (r5 == 0) goto L50
            com.huawei.secure.android.common.ssl.util.c.a(r5)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r0 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b
            if (r0 != 0) goto L4d
            java.lang.Class<com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance> r0 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.class
            monitor-enter(r0)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r1 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b     // Catch: java.lang.Throwable -> L4a
            if (r1 != 0) goto L48
            java.io.InputStream r1 = com.huawei.secure.android.common.ssl.util.BksUtil.getFilesBksIS(r5)     // Catch: java.lang.Throwable -> L4a
            if (r1 != 0) goto L28
            java.lang.String r1 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.a     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "get assets bks"
            com.huawei.secure.android.common.ssl.util.g.c(r1, r2)     // Catch: java.lang.Throwable -> L4a
            android.content.res.AssetManager r1 = r5.getAssets()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "hmsrootcas.bks"
            java.io.InputStream r1 = r1.open(r2)     // Catch: java.lang.Throwable -> L4a
            goto L2f
        L28:
            java.lang.String r2 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.a     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = "get files bks"
            com.huawei.secure.android.common.ssl.util.g.c(r2, r3)     // Catch: java.lang.Throwable -> L4a
        L2f:
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r2 = new com.huawei.secure.android.common.ssl.SecureX509TrustManager     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = ""
            r4 = 1
            r2.<init>(r1, r3, r4)     // Catch: java.lang.Throwable -> L4a
            com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b = r2     // Catch: java.lang.Throwable -> L4a
            com.huawei.secure.android.common.ssl.util.e r1 = new com.huawei.secure.android.common.ssl.util.e     // Catch: java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L4a
            java.util.concurrent.Executor r2 = android.os.AsyncTask.THREAD_POOL_EXECUTOR     // Catch: java.lang.Throwable -> L4a
            android.content.Context[] r3 = new android.content.Context[r4]     // Catch: java.lang.Throwable -> L4a
            r4 = 0
            r3[r4] = r5     // Catch: java.lang.Throwable -> L4a
            r1.executeOnExecutor(r2, r3)     // Catch: java.lang.Throwable -> L4a
        L48:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4a
            goto L4d
        L4a:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4a
            throw r5
        L4d:
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r5 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b
            return r5
        L50:
            java.lang.NullPointerException r5 = new java.lang.NullPointerException
            java.lang.String r0 = "context is null"
            r5.<init>(r0)
            throw r5
    }

    public static void updateBks(java.io.InputStream r6) {
            java.lang.String r0 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.a
            java.lang.String r1 = "update bks"
            com.huawei.secure.android.common.ssl.util.g.c(r0, r1)
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = " ms"
            if (r6 == 0) goto L45
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r3 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b
            if (r3 == 0) goto L45
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r3 = new com.huawei.secure.android.common.ssl.SecureX509TrustManager
            r4 = 1
            java.lang.String r5 = ""
            r3.<init>(r6, r5, r4)
            com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b = r3
            java.lang.String r6 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "updateBks: new SecureX509TrustManager cost : "
            r3.append(r4)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r0
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r6, r3)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r6 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b
            com.huawei.secure.android.common.ssl.SSFCompatiableSystemCA.a(r6)
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r6 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.b
            com.huawei.secure.android.common.ssl.SASFCompatiableSystemCA.a(r6)
        L45:
            java.lang.String r6 = com.huawei.secure.android.common.ssl.SSFSecureX509SingleInstance.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "update bks cost : "
            r3.append(r4)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r0
            r3.append(r4)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
            com.huawei.secure.android.common.ssl.util.g.a(r6, r0)
            return
    }
}
