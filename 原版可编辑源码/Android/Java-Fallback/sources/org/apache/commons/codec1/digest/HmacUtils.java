package org.apache.commons.codec1.digest;

public final class HmacUtils {
    private static final int STREAM_BUFFER_LENGTH = 1024;

    public HmacUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static javax.crypto.Mac getHmacMd5(byte[] r1) {
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_MD5
            javax.crypto.Mac r1 = getInitializedMac(r0, r1)
            return r1
    }

    public static javax.crypto.Mac getHmacSha1(byte[] r1) {
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_1
            javax.crypto.Mac r1 = getInitializedMac(r0, r1)
            return r1
    }

    public static javax.crypto.Mac getHmacSha256(byte[] r1) {
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_256
            javax.crypto.Mac r1 = getInitializedMac(r0, r1)
            return r1
    }

    public static javax.crypto.Mac getHmacSha384(byte[] r1) {
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_384
            javax.crypto.Mac r1 = getInitializedMac(r0, r1)
            return r1
    }

    public static javax.crypto.Mac getHmacSha512(byte[] r1) {
            org.apache.commons.codec1.digest.HmacAlgorithms r0 = org.apache.commons.codec1.digest.HmacAlgorithms.HMAC_SHA_512
            javax.crypto.Mac r1 = getInitializedMac(r0, r1)
            return r1
    }

    public static javax.crypto.Mac getInitializedMac(java.lang.String r1, byte[] r2) {
            if (r2 == 0) goto L1d
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidKeyException -> Lf java.security.NoSuchAlgorithmException -> L16
            r0.<init>(r2, r1)     // Catch: java.security.InvalidKeyException -> Lf java.security.NoSuchAlgorithmException -> L16
            javax.crypto.Mac r1 = javax.crypto.Mac.getInstance(r1)     // Catch: java.security.InvalidKeyException -> Lf java.security.NoSuchAlgorithmException -> L16
            r1.init(r0)     // Catch: java.security.InvalidKeyException -> Lf java.security.NoSuchAlgorithmException -> L16
            return r1
        Lf:
            r1 = move-exception
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>(r1)
            throw r2
        L16:
            r1 = move-exception
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>(r1)
            throw r2
        L1d:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Null key"
            r1.<init>(r2)
            throw r1
    }

    public static javax.crypto.Mac getInitializedMac(org.apache.commons.codec1.digest.HmacAlgorithms r0, byte[] r1) {
            java.lang.String r0 = r0.toString()
            javax.crypto.Mac r0 = getInitializedMac(r0, r1)
            return r0
    }

    public static byte[] hmacMd5(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            byte[] r0 = hmacMd5(r0, r1)
            return r0
    }

    public static byte[] hmacMd5(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            javax.crypto.Mac r0 = getHmacMd5(r0)
            javax.crypto.Mac r0 = updateHmac(r0, r1)
            byte[] r0 = r0.doFinal()
            return r0
    }

    public static byte[] hmacMd5(byte[] r0, byte[] r1) {
            javax.crypto.Mac r0 = getHmacMd5(r0)     // Catch: java.lang.IllegalStateException -> L9
            byte[] r0 = r0.doFinal(r1)     // Catch: java.lang.IllegalStateException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String hmacMd5Hex(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = hmacMd5(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacMd5Hex(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            byte[] r0 = hmacMd5(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacMd5Hex(byte[] r0, byte[] r1) {
            byte[] r0 = hmacMd5(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] hmacSha1(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            byte[] r0 = hmacSha1(r0, r1)
            return r0
    }

    public static byte[] hmacSha1(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            javax.crypto.Mac r0 = getHmacSha1(r0)
            javax.crypto.Mac r0 = updateHmac(r0, r1)
            byte[] r0 = r0.doFinal()
            return r0
    }

    public static byte[] hmacSha1(byte[] r0, byte[] r1) {
            javax.crypto.Mac r0 = getHmacSha1(r0)     // Catch: java.lang.IllegalStateException -> L9
            byte[] r0 = r0.doFinal(r1)     // Catch: java.lang.IllegalStateException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String hmacSha1Hex(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = hmacSha1(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha1Hex(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            byte[] r0 = hmacSha1(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha1Hex(byte[] r0, byte[] r1) {
            byte[] r0 = hmacSha1(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] hmacSha256(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            byte[] r0 = hmacSha256(r0, r1)
            return r0
    }

    public static byte[] hmacSha256(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            javax.crypto.Mac r0 = getHmacSha256(r0)
            javax.crypto.Mac r0 = updateHmac(r0, r1)
            byte[] r0 = r0.doFinal()
            return r0
    }

    public static byte[] hmacSha256(byte[] r0, byte[] r1) {
            javax.crypto.Mac r0 = getHmacSha256(r0)     // Catch: java.lang.IllegalStateException -> L9
            byte[] r0 = r0.doFinal(r1)     // Catch: java.lang.IllegalStateException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String hmacSha256Hex(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = hmacSha256(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha256Hex(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            byte[] r0 = hmacSha256(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha256Hex(byte[] r0, byte[] r1) {
            byte[] r0 = hmacSha256(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] hmacSha384(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            byte[] r0 = hmacSha384(r0, r1)
            return r0
    }

    public static byte[] hmacSha384(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            javax.crypto.Mac r0 = getHmacSha384(r0)
            javax.crypto.Mac r0 = updateHmac(r0, r1)
            byte[] r0 = r0.doFinal()
            return r0
    }

    public static byte[] hmacSha384(byte[] r0, byte[] r1) {
            javax.crypto.Mac r0 = getHmacSha384(r0)     // Catch: java.lang.IllegalStateException -> L9
            byte[] r0 = r0.doFinal(r1)     // Catch: java.lang.IllegalStateException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String hmacSha384Hex(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = hmacSha384(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha384Hex(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            byte[] r0 = hmacSha384(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha384Hex(byte[] r0, byte[] r1) {
            byte[] r0 = hmacSha384(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] hmacSha512(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            byte[] r0 = hmacSha512(r0, r1)
            return r0
    }

    public static byte[] hmacSha512(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            javax.crypto.Mac r0 = getHmacSha512(r0)
            javax.crypto.Mac r0 = updateHmac(r0, r1)
            byte[] r0 = r0.doFinal()
            return r0
    }

    public static byte[] hmacSha512(byte[] r0, byte[] r1) {
            javax.crypto.Mac r0 = getHmacSha512(r0)     // Catch: java.lang.IllegalStateException -> L9
            byte[] r0 = r0.doFinal(r1)     // Catch: java.lang.IllegalStateException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String hmacSha512Hex(java.lang.String r0, java.lang.String r1) {
            byte[] r0 = hmacSha512(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha512Hex(byte[] r0, java.io.InputStream r1) throws java.io.IOException {
            byte[] r0 = hmacSha512(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String hmacSha512Hex(byte[] r0, byte[] r1) {
            byte[] r0 = hmacSha512(r0, r1)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static javax.crypto.Mac updateHmac(javax.crypto.Mac r5, java.io.InputStream r6) throws java.io.IOException {
            r5.reset()
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r0]
            r2 = 0
            int r3 = r6.read(r1, r2, r0)
        Lc:
            r4 = -1
            if (r3 > r4) goto L10
            return r5
        L10:
            r5.update(r1, r2, r3)
            int r3 = r6.read(r1, r2, r0)
            goto Lc
    }

    public static javax.crypto.Mac updateHmac(javax.crypto.Mac r0, java.lang.String r1) {
            r0.reset()
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            r0.update(r1)
            return r0
    }

    public static javax.crypto.Mac updateHmac(javax.crypto.Mac r0, byte[] r1) {
            r0.reset()
            r0.update(r1)
            return r0
    }
}
