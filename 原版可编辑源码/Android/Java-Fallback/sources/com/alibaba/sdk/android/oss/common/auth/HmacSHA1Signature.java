package com.alibaba.sdk.android.oss.common.auth;

public class HmacSHA1Signature {
    private static final java.lang.String ALGORITHM = "HmacSHA1";
    private static final java.lang.String DEFAULT_ENCODING = "UTF-8";
    private static final java.lang.Object LOCK = null;
    private static final java.lang.String VERSION = "1";
    private static javax.crypto.Mac macInstance;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature.LOCK = r0
            return
    }

    public HmacSHA1Signature() {
            r0 = this;
            r0.<init>()
            return
    }

    private byte[] sign(byte[] r4, byte[] r5) {
            r3 = this;
            javax.crypto.Mac r0 = com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature.macInstance     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            if (r0 != 0) goto L1a
            java.lang.Object r0 = com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature.LOCK     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            monitor-enter(r0)     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            javax.crypto.Mac r1 = com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature.macInstance     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L15
            java.lang.String r1 = r3.getAlgorithm()     // Catch: java.lang.Throwable -> L17
            javax.crypto.Mac r1 = javax.crypto.Mac.getInstance(r1)     // Catch: java.lang.Throwable -> L17
            com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature.macInstance = r1     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            goto L1a
        L17:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r4     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
        L1a:
            javax.crypto.Mac r0 = com.alibaba.sdk.android.oss.common.auth.HmacSHA1Signature.macInstance     // Catch: java.lang.CloneNotSupportedException -> L23 java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            java.lang.Object r0 = r0.clone()     // Catch: java.lang.CloneNotSupportedException -> L23 java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            javax.crypto.Mac r0 = (javax.crypto.Mac) r0     // Catch: java.lang.CloneNotSupportedException -> L23 java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            goto L2b
        L23:
            java.lang.String r0 = r3.getAlgorithm()     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            javax.crypto.Mac r0 = javax.crypto.Mac.getInstance(r0)     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
        L2b:
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            java.lang.String r2 = r3.getAlgorithm()     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            r1.<init>(r4, r2)     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            r0.init(r1)     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            byte[] r4 = r0.doFinal(r5)     // Catch: java.security.InvalidKeyException -> L3c java.security.NoSuchAlgorithmException -> L44
            return r4
        L3c:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r5 = "key must not be null"
            r4.<init>(r5)
            throw r4
        L44:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r5 = "Unsupported algorithm: HmacSHA1"
            r4.<init>(r5)
            throw r4
    }

    public java.lang.String computeSignature(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r1 = r3.getAlgorithm()
            r2 = 0
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1, r2)
            java.lang.String r1 = r3.getVersion()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1, r2)
            java.lang.String r1 = "sign start"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)     // Catch: java.io.UnsupportedEncodingException -> L2c
            byte[] r4 = r4.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L2c
            byte[] r5 = r5.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L2c
            byte[] r4 = r3.sign(r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L2c
            java.lang.String r5 = "base64 start"
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r5)     // Catch: java.io.UnsupportedEncodingException -> L2c
            java.lang.String r4 = com.alibaba.sdk.android.oss.common.utils.BinaryUtil.toBase64String(r4)     // Catch: java.io.UnsupportedEncodingException -> L2c
            return r4
        L2c:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r5 = "Unsupported algorithm: UTF-8"
            r4.<init>(r5)
            throw r4
    }

    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "HmacSHA1"
            return r0
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = "1"
            return r0
    }
}
