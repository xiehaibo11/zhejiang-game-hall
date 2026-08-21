package com.alibaba.sdk.android.oss.common.auth;

public abstract class OSSFederationCredentialProvider implements com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider {
    private volatile com.alibaba.sdk.android.oss.common.auth.OSSFederationToken cachedToken;

    public OSSFederationCredentialProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getCachedToken() {
            r1 = this;
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r0 = r1.cachedToken
            return r0
    }

    @Override
    public abstract com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getFederationToken() throws com.alibaba.sdk.android.oss.ClientException;

    public synchronized com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getValidFederationToken() throws com.alibaba.sdk.android.oss.ClientException {
            r9 = this;
            monitor-enter(r9)
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r0 = r9.cachedToken     // Catch: java.lang.Throwable -> L4e
            r1 = 1000(0x3e8, double:4.94E-321)
            if (r0 == 0) goto L19
            long r3 = com.alibaba.sdk.android.oss.common.utils.DateUtil.getFixedSkewedTimeMillis()     // Catch: java.lang.Throwable -> L4e
            long r3 = r3 / r1
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r0 = r9.cachedToken     // Catch: java.lang.Throwable -> L4e
            long r5 = r0.getExpiration()     // Catch: java.lang.Throwable -> L4e
            r7 = 300(0x12c, double:1.48E-321)
            long r5 = r5 - r7
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L4a
        L19:
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r0 = r9.cachedToken     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4e
            r0.<init>()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "token expired! current time: "
            r0.append(r3)     // Catch: java.lang.Throwable -> L4e
            long r3 = com.alibaba.sdk.android.oss.common.utils.DateUtil.getFixedSkewedTimeMillis()     // Catch: java.lang.Throwable -> L4e
            long r3 = r3 / r1
            r0.append(r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r1 = " token expired: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r1 = r9.cachedToken     // Catch: java.lang.Throwable -> L4e
            long r1 = r1.getExpiration()     // Catch: java.lang.Throwable -> L4e
            r0.append(r1)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L4e
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0)     // Catch: java.lang.Throwable -> L4e
        L44:
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r0 = r9.getFederationToken()     // Catch: java.lang.Throwable -> L4e
            r9.cachedToken = r0     // Catch: java.lang.Throwable -> L4e
        L4a:
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r0 = r9.cachedToken     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r9)
            return r0
        L4e:
            r0 = move-exception
            monitor-exit(r9)
            throw r0
    }
}
