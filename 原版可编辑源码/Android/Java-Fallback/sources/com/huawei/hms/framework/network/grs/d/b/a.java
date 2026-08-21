package com.huawei.hms.framework.network.grs.d.b;

public class a {
    public static javax.net.ssl.HostnameVerifier a() {
            com.huawei.secure.android.common.ssl.hostname.StrictHostnameVerifier r0 = new com.huawei.secure.android.common.ssl.hostname.StrictHostnameVerifier
            r0.<init>()
            return r0
    }

    public static javax.net.ssl.SSLSocketFactory a(android.content.Context r2) {
            android.content.res.AssetManager r2 = r2.getAssets()     // Catch: java.security.KeyManagementException -> L17 java.security.NoSuchAlgorithmException -> L19 java.io.IOException -> L1b
            java.lang.String r0 = "grs_sp.bks"
            java.io.InputStream r2 = r2.open(r0)     // Catch: java.security.KeyManagementException -> L17 java.security.NoSuchAlgorithmException -> L19 java.io.IOException -> L1b
            com.huawei.secure.android.common.ssl.SecureX509TrustManager r0 = new com.huawei.secure.android.common.ssl.SecureX509TrustManager     // Catch: java.security.KeyManagementException -> L17 java.security.NoSuchAlgorithmException -> L19 java.io.IOException -> L1b
            java.lang.String r1 = ""
            r0.<init>(r2, r1)     // Catch: java.security.KeyManagementException -> L17 java.security.NoSuchAlgorithmException -> L19 java.io.IOException -> L1b
            com.huawei.secure.android.common.ssl.SecureSSLSocketFactory r2 = new com.huawei.secure.android.common.ssl.SecureSSLSocketFactory     // Catch: java.security.KeyManagementException -> L17 java.security.NoSuchAlgorithmException -> L19 java.io.IOException -> L1b
            r2.<init>(r0)     // Catch: java.security.KeyManagementException -> L17 java.security.NoSuchAlgorithmException -> L19 java.io.IOException -> L1b
            return r2
        L17:
            r2 = move-exception
            goto L1c
        L19:
            r2 = move-exception
            goto L1c
        L1b:
            r2 = move-exception
        L1c:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r2)
            throw r0
    }
}
