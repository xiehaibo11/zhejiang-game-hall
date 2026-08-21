package com.kwad.sdk.core.imageloader.cache.disc.naming;

public class Md5FileNameGenerator implements com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator {
    private static final java.lang.String HASH_ALGORITHM = "MD5";
    private static final int RADIX = 36;

    public Md5FileNameGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    private byte[] getMD5(byte[] r2) {
            r1 = this;
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> Le
            r0.update(r2)     // Catch: java.security.NoSuchAlgorithmException -> Le
            byte[] r2 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> Le
            goto L13
        Le:
            r2 = move-exception
            com.kwad.sdk.core.imageloader.utils.L.e(r2)
            r2 = 0
        L13:
            return r2
    }

    @Override
    public java.lang.String generate(java.lang.String r2) {
            r1 = this;
            byte[] r2 = r2.getBytes()
            byte[] r2 = r1.getMD5(r2)
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r2)
            java.math.BigInteger r2 = r0.abs()
            r0 = 36
            java.lang.String r2 = r2.toString(r0)
            return r2
    }
}
