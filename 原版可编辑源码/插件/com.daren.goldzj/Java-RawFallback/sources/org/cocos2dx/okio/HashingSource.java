package org.cocos2dx.okio;

public final class HashingSource extends org.cocos2dx.okio.ForwardingSource {
    private final javax.crypto.Mac mac;
    private final java.security.MessageDigest messageDigest;

    private HashingSource(org.cocos2dx.okio.Source r1, java.lang.String r2) {
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

    private HashingSource(org.cocos2dx.okio.Source r2, org.cocos2dx.okio.ByteString r3, java.lang.String r4) {
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

    public static org.cocos2dx.okio.HashingSource hmacSha1(org.cocos2dx.okio.Source r2, org.cocos2dx.okio.ByteString r3) {
            org.cocos2dx.okio.HashingSource r0 = new org.cocos2dx.okio.HashingSource
            java.lang.String r1 = "HmacSHA1"
            r0.<init>(r2, r3, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSource hmacSha256(org.cocos2dx.okio.Source r2, org.cocos2dx.okio.ByteString r3) {
            org.cocos2dx.okio.HashingSource r0 = new org.cocos2dx.okio.HashingSource
            java.lang.String r1 = "HmacSHA256"
            r0.<init>(r2, r3, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSource md5(org.cocos2dx.okio.Source r2) {
            org.cocos2dx.okio.HashingSource r0 = new org.cocos2dx.okio.HashingSource
            java.lang.String r1 = "MD5"
            r0.<init>(r2, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSource sha1(org.cocos2dx.okio.Source r2) {
            org.cocos2dx.okio.HashingSource r0 = new org.cocos2dx.okio.HashingSource
            java.lang.String r1 = "SHA-1"
            r0.<init>(r2, r1)
            return r0
    }

    public static org.cocos2dx.okio.HashingSource sha256(org.cocos2dx.okio.Source r2) {
            org.cocos2dx.okio.HashingSource r0 = new org.cocos2dx.okio.HashingSource
            java.lang.String r1 = "SHA-256"
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
    public long read(org.cocos2dx.okio.Buffer r9, long r10) throws java.io.IOException {
            r8 = this;
            long r10 = super.read(r9, r10)
            r0 = -1
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 == 0) goto L4d
            long r0 = r9.size
            long r0 = r0 - r10
            long r2 = r9.size
            org.cocos2dx.okio.Segment r4 = r9.head
        L11:
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 <= 0) goto L1f
            org.cocos2dx.okio.Segment r4 = r4.prev
            int r5 = r4.limit
            int r6 = r4.pos
            int r5 = r5 - r6
            long r5 = (long) r5
            long r2 = r2 - r5
            goto L11
        L1f:
            long r5 = r9.size
            int r7 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r7 >= 0) goto L4d
            int r5 = r4.pos
            long r5 = (long) r5
            long r5 = r5 + r0
            long r5 = r5 - r2
            int r0 = (int) r5
            java.security.MessageDigest r1 = r8.messageDigest
            if (r1 == 0) goto L38
            byte[] r5 = r4.data
            int r6 = r4.limit
            int r6 = r6 - r0
            r1.update(r5, r0, r6)
            goto L42
        L38:
            javax.crypto.Mac r1 = r8.mac
            byte[] r5 = r4.data
            int r6 = r4.limit
            int r6 = r6 - r0
            r1.update(r5, r0, r6)
        L42:
            int r0 = r4.limit
            int r1 = r4.pos
            int r0 = r0 - r1
            long r0 = (long) r0
            long r0 = r0 + r2
            org.cocos2dx.okio.Segment r4 = r4.next
            r2 = r0
            goto L1f
        L4d:
            return r10
    }
}
