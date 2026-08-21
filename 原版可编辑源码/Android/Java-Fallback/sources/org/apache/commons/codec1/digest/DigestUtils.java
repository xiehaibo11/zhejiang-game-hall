package org.apache.commons.codec1.digest;

public class DigestUtils {
    private static final int STREAM_BUFFER_LENGTH = 1024;

    public DigestUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static byte[] digest(java.security.MessageDigest r0, java.io.InputStream r1) throws java.io.IOException {
            java.security.MessageDigest r0 = updateDigest(r0, r1)
            byte[] r0 = r0.digest()
            return r0
    }

    public static java.security.MessageDigest getDigest(java.lang.String r1) {
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.security.NoSuchAlgorithmException -> L5
            return r1
        L5:
            r1 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static java.security.MessageDigest getMd2Digest() {
            java.lang.String r0 = "MD2"
            java.security.MessageDigest r0 = getDigest(r0)
            return r0
    }

    public static java.security.MessageDigest getMd5Digest() {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = getDigest(r0)
            return r0
    }

    public static java.security.MessageDigest getSha1Digest() {
            java.lang.String r0 = "SHA-1"
            java.security.MessageDigest r0 = getDigest(r0)
            return r0
    }

    public static java.security.MessageDigest getSha256Digest() {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = getDigest(r0)
            return r0
    }

    public static java.security.MessageDigest getSha384Digest() {
            java.lang.String r0 = "SHA-384"
            java.security.MessageDigest r0 = getDigest(r0)
            return r0
    }

    public static java.security.MessageDigest getSha512Digest() {
            java.lang.String r0 = "SHA-512"
            java.security.MessageDigest r0 = getDigest(r0)
            return r0
    }

    @java.lang.Deprecated
    public static java.security.MessageDigest getShaDigest() {
            java.security.MessageDigest r0 = getSha1Digest()
            return r0
    }

    public static byte[] md2(java.io.InputStream r1) throws java.io.IOException {
            java.security.MessageDigest r0 = getMd2Digest()
            byte[] r1 = digest(r0, r1)
            return r1
    }

    public static byte[] md2(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r0 = md2(r0)
            return r0
    }

    public static byte[] md2(byte[] r1) {
            java.security.MessageDigest r0 = getMd2Digest()
            byte[] r1 = r0.digest(r1)
            return r1
    }

    public static java.lang.String md2Hex(java.io.InputStream r0) throws java.io.IOException {
            byte[] r0 = md2(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String md2Hex(java.lang.String r0) {
            byte[] r0 = md2(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String md2Hex(byte[] r0) {
            byte[] r0 = md2(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] md5(java.io.InputStream r1) throws java.io.IOException {
            java.security.MessageDigest r0 = getMd5Digest()
            byte[] r1 = digest(r0, r1)
            return r1
    }

    public static byte[] md5(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r0 = md5(r0)
            return r0
    }

    public static byte[] md5(byte[] r1) {
            java.security.MessageDigest r0 = getMd5Digest()
            byte[] r1 = r0.digest(r1)
            return r1
    }

    public static java.lang.String md5Hex(java.io.InputStream r0) throws java.io.IOException {
            byte[] r0 = md5(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String md5Hex(java.lang.String r0) {
            byte[] r0 = md5(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String md5Hex(byte[] r0) {
            byte[] r0 = md5(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    @java.lang.Deprecated
    public static byte[] sha(java.io.InputStream r0) throws java.io.IOException {
            byte[] r0 = sha1(r0)
            return r0
    }

    @java.lang.Deprecated
    public static byte[] sha(java.lang.String r0) {
            byte[] r0 = sha1(r0)
            return r0
    }

    @java.lang.Deprecated
    public static byte[] sha(byte[] r0) {
            byte[] r0 = sha1(r0)
            return r0
    }

    public static byte[] sha1(java.io.InputStream r1) throws java.io.IOException {
            java.security.MessageDigest r0 = getSha1Digest()
            byte[] r1 = digest(r0, r1)
            return r1
    }

    public static byte[] sha1(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r0 = sha1(r0)
            return r0
    }

    public static byte[] sha1(byte[] r1) {
            java.security.MessageDigest r0 = getSha1Digest()
            byte[] r1 = r0.digest(r1)
            return r1
    }

    public static java.lang.String sha1Hex(java.io.InputStream r0) throws java.io.IOException {
            byte[] r0 = sha1(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha1Hex(java.lang.String r0) {
            byte[] r0 = sha1(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha1Hex(byte[] r0) {
            byte[] r0 = sha1(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] sha256(java.io.InputStream r1) throws java.io.IOException {
            java.security.MessageDigest r0 = getSha256Digest()
            byte[] r1 = digest(r0, r1)
            return r1
    }

    public static byte[] sha256(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r0 = sha256(r0)
            return r0
    }

    public static byte[] sha256(byte[] r1) {
            java.security.MessageDigest r0 = getSha256Digest()
            byte[] r1 = r0.digest(r1)
            return r1
    }

    public static java.lang.String sha256Hex(java.io.InputStream r0) throws java.io.IOException {
            byte[] r0 = sha256(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha256Hex(java.lang.String r0) {
            byte[] r0 = sha256(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha256Hex(byte[] r0) {
            byte[] r0 = sha256(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] sha384(java.io.InputStream r1) throws java.io.IOException {
            java.security.MessageDigest r0 = getSha384Digest()
            byte[] r1 = digest(r0, r1)
            return r1
    }

    public static byte[] sha384(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r0 = sha384(r0)
            return r0
    }

    public static byte[] sha384(byte[] r1) {
            java.security.MessageDigest r0 = getSha384Digest()
            byte[] r1 = r0.digest(r1)
            return r1
    }

    public static java.lang.String sha384Hex(java.io.InputStream r0) throws java.io.IOException {
            byte[] r0 = sha384(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha384Hex(java.lang.String r0) {
            byte[] r0 = sha384(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha384Hex(byte[] r0) {
            byte[] r0 = sha384(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static byte[] sha512(java.io.InputStream r1) throws java.io.IOException {
            java.security.MessageDigest r0 = getSha512Digest()
            byte[] r1 = digest(r0, r1)
            return r1
    }

    public static byte[] sha512(java.lang.String r0) {
            byte[] r0 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r0)
            byte[] r0 = sha512(r0)
            return r0
    }

    public static byte[] sha512(byte[] r1) {
            java.security.MessageDigest r0 = getSha512Digest()
            byte[] r1 = r0.digest(r1)
            return r1
    }

    public static java.lang.String sha512Hex(java.io.InputStream r0) throws java.io.IOException {
            byte[] r0 = sha512(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha512Hex(java.lang.String r0) {
            byte[] r0 = sha512(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    public static java.lang.String sha512Hex(byte[] r0) {
            byte[] r0 = sha512(r0)
            java.lang.String r0 = org.apache.commons.codec1.binary.Hex.encodeHexString(r0)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String shaHex(java.io.InputStream r0) throws java.io.IOException {
            java.lang.String r0 = sha1Hex(r0)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String shaHex(java.lang.String r0) {
            java.lang.String r0 = sha1Hex(r0)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String shaHex(byte[] r0) {
            java.lang.String r0 = sha1Hex(r0)
            return r0
    }

    public static java.security.MessageDigest updateDigest(java.security.MessageDigest r5, java.io.InputStream r6) throws java.io.IOException {
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r0]
            r2 = 0
            int r3 = r6.read(r1, r2, r0)
        L9:
            r4 = -1
            if (r3 > r4) goto Ld
            return r5
        Ld:
            r5.update(r1, r2, r3)
            int r3 = r6.read(r1, r2, r0)
            goto L9
    }

    public static java.security.MessageDigest updateDigest(java.security.MessageDigest r0, java.lang.String r1) {
            byte[] r1 = org.apache.commons.codec1.binary.StringUtils.getBytesUtf8(r1)
            r0.update(r1)
            return r0
    }

    public static java.security.MessageDigest updateDigest(java.security.MessageDigest r0, byte[] r1) {
            r0.update(r1)
            return r0
    }
}
