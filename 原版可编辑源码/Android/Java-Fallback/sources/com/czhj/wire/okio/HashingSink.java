package com.czhj.wire.okio;

public final class HashingSink extends com.czhj.wire.okio.ForwardingSink {
    private final java.security.MessageDigest a;

    private HashingSink(com.czhj.wire.okio.Sink r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r2)     // Catch: java.security.NoSuchAlgorithmException -> La
            r0.a = r1     // Catch: java.security.NoSuchAlgorithmException -> La
            return
        La:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
    }

    public static com.czhj.wire.okio.HashingSink md5(com.czhj.wire.okio.Sink r2) {
            com.czhj.wire.okio.HashingSink r0 = new com.czhj.wire.okio.HashingSink
            java.lang.String r1 = "MD5"
            r0.<init>(r2, r1)
            return r0
    }

    public static com.czhj.wire.okio.HashingSink sha1(com.czhj.wire.okio.Sink r2) {
            com.czhj.wire.okio.HashingSink r0 = new com.czhj.wire.okio.HashingSink
            java.lang.String r1 = "SHA-1"
            r0.<init>(r2, r1)
            return r0
    }

    public static com.czhj.wire.okio.HashingSink sha256(com.czhj.wire.okio.Sink r2) {
            com.czhj.wire.okio.HashingSink r0 = new com.czhj.wire.okio.HashingSink
            java.lang.String r1 = "SHA-256"
            r0.<init>(r2, r1)
            return r0
    }

    public com.czhj.wire.okio.ByteString hash() {
            r1 = this;
            java.security.MessageDigest r0 = r1.a
            byte[] r0 = r0.digest()
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.of(r0)
            return r0
    }

    @Override
    public void write(com.czhj.wire.okio.Buffer r8, long r9) throws java.io.IOException {
            r7 = this;
            long r0 = r8.c
            r2 = 0
            r4 = r9
            com.czhj.wire.okio.Util.checkOffsetAndCount(r0, r2, r4)
            com.czhj.wire.okio.Segment r0 = r8.b
            r1 = 0
        Lc:
            int r3 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r3 >= 0) goto L2b
            long r3 = r9 - r1
            int r5 = r0.e
            int r6 = r0.d
            int r5 = r5 - r6
            long r5 = (long) r5
            long r3 = java.lang.Math.min(r3, r5)
            int r3 = (int) r3
            java.security.MessageDigest r4 = r7.a
            byte[] r5 = r0.c
            int r6 = r0.d
            r4.update(r5, r6, r3)
            long r3 = (long) r3
            long r1 = r1 + r3
            com.czhj.wire.okio.Segment r0 = r0.h
            goto Lc
        L2b:
            super.write(r8, r9)
            return
    }
}
