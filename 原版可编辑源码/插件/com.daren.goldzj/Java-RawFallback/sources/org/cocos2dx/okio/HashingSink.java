package org.cocos2dx.okio;

public final class HashingSink extends org.cocos2dx.okio.ForwardingSink {

    @javax.annotation.Nullable
    private final javax.crypto.Mac mac;

    @javax.annotation.Nullable
    private final java.security.MessageDigest messageDigest;

    private HashingSink(org.cocos2dx.okio.Sink r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r2)     // Catch: java.security.NoSuchAlgorithmException -> Ld
            r0.messageDigest = r1     // Catch: java.security.NoSuchAlgorithmException -> Ld
            r1 = 0
            r0.mac = r1     // Catch: java.security.NoSuchAlgorithmException -> Ld
            return
        Ld:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
    }

    private HashingSink(org.cocos2dx.okio.Sink r2, org.cocos2dx.okio.ByteString r3, java.lang.String r4) {
            r1 = this;
            r1.<init>(r2)
            javax.crypto.Mac r2 = javax.crypto.Mac.getInstance(r4)     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            r1.mac = r2     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            javax.crypto.Mac r2 = r1.mac     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            byte[] r3 = r3.toByteArray()     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            r0.<init>(r3, r4)     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            r2.init(r0)     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            r2 = 0
            r1.messageDigest = r2     // Catch: java.security.InvalidKeyException -> L1b java.security.NoSuchAlgorithmException -> L22
            return
        L1b:
            r2 = move-exception
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>(r2)
            throw r3
        L22:
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>()
            throw r2
    }

    public static org.cocos2dx.okio.HashingSink hmacSha1(org.cocos2dx.okio.Sink r2, org.cocos2dx.okio.ByteString r3) {
            org.cocos2dx.okio.HashingSink r0 = new org.cocos2dx.okio.HashingSink
            java.lang.String r1 = "HmacSHA1"
            r0.<init>(r2, r3, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSink hmacSha256(org.cocos2dx.okio.Sink r2, org.cocos2dx.okio.ByteString r3) {
            org.cocos2dx.okio.HashingSink r0 = new org.cocos2dx.okio.HashingSink
            java.lang.String r1 = "HmacSHA256"
            r0.<init>(r2, r3, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSink hmacSha512(org.cocos2dx.okio.Sink r2, org.cocos2dx.okio.ByteString r3) {
            org.cocos2dx.okio.HashingSink r0 = new org.cocos2dx.okio.HashingSink
            java.lang.String r1 = "HmacSHA512"
            r0.<init>(r2, r3, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSink md5(org.cocos2dx.okio.Sink r2) {
            org.cocos2dx.okio.HashingSink r0 = new org.cocos2dx.okio.HashingSink
            java.lang.String r1 = "MD5"
            r0.<init>(r2, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSink sha1(org.cocos2dx.okio.Sink r2) {
            org.cocos2dx.okio.HashingSink r0 = new org.cocos2dx.okio.HashingSink
            java.lang.String r1 = "SHA-1"
            r0.<init>(r2, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSink sha256(org.cocos2dx.okio.Sink r2) {
            org.cocos2dx.okio.HashingSink r0 = new org.cocos2dx.okio.HashingSink
            java.lang.String r1 = "SHA-256"
            r0.<init>(r2, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSink sha512(org.cocos2dx.okio.Sink r2) {
            org.cocos2dx.okio.HashingSink r0 = new org.cocos2dx.okio.HashingSink
            java.lang.String r1 = "SHA-512"
            r0.<init>(r2, r1)
            return r0
    }

    public final org.cocos2dx.okio.ByteString hash() {
            r1 = this;
            java.security.MessageDigest r0 = r1.messageDigest
            if (r0 == 0) goto L9
            byte[] r0 = r0.digest()
            goto Lf
        L9:
            javax.crypto.Mac r0 = r1.mac
            byte[] r0 = r0.doFinal()
        Lf:
            org.cocos2dx.okio.ByteString r0 = org.cocos2dx.okio.ByteString.of(r0)
            return r0
    }

    @Override
    public void write(org.cocos2dx.okio.Buffer r8, long r9) throws java.io.IOException {
            r7 = this;
            long r0 = r8.size
            r2 = 0
            r4 = r9
            org.cocos2dx.okio.Util.checkOffsetAndCount(r0, r2, r4)
            org.cocos2dx.okio.Segment r0 = r8.head
            r1 = 0
        Lc:
            int r3 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r3 >= 0) goto L37
            long r3 = r9 - r1
            int r5 = r0.limit
            int r6 = r0.pos
            int r5 = r5 - r6
            long r5 = (long) r5
            long r3 = java.lang.Math.min(r3, r5)
            int r4 = (int) r3
            java.security.MessageDigest r3 = r7.messageDigest
            if (r3 == 0) goto L29
            byte[] r5 = r0.data
            int r6 = r0.pos
            r3.update(r5, r6, r4)
            goto L32
        L29:
            javax.crypto.Mac r3 = r7.mac
            byte[] r5 = r0.data
            int r6 = r0.pos
            r3.update(r5, r6, r4)
        L32:
            long r3 = (long) r4
            long r1 = r1 + r3
            org.cocos2dx.okio.Segment r0 = r0.next
            goto Lc
        L37:
            super.write(r8, r9)
            return
    }
}
