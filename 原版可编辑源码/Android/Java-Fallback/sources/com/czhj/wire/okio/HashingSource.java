package com.czhj.wire.okio;

public final class HashingSource extends com.czhj.wire.okio.ForwardingSource {
    private final java.security.MessageDigest a;

    private HashingSource(com.czhj.wire.okio.Source r1, java.lang.String r2) {
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

    public static com.czhj.wire.okio.HashingSource md5(com.czhj.wire.okio.Source r2) {
            com.czhj.wire.okio.HashingSource r0 = new com.czhj.wire.okio.HashingSource
            java.lang.String r1 = "MD5"
            r0.<init>(r2, r1)
            return r0
    }

    public static com.czhj.wire.okio.HashingSource sha1(com.czhj.wire.okio.Source r2) {
            com.czhj.wire.okio.HashingSource r0 = new com.czhj.wire.okio.HashingSource
            java.lang.String r1 = "SHA-1"
            r0.<init>(r2, r1)
            return r0
    }

    public static com.czhj.wire.okio.HashingSource sha256(com.czhj.wire.okio.Source r2) {
            com.czhj.wire.okio.HashingSource r0 = new com.czhj.wire.okio.HashingSource
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
    public long read(com.czhj.wire.okio.Buffer r8, long r9) throws java.io.IOException {
            r7 = this;
            long r9 = super.read(r8, r9)
            r0 = -1
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r0 == 0) goto L41
            long r0 = r8.c
            long r0 = r0 - r9
            long r2 = r8.c
            com.czhj.wire.okio.Segment r4 = r8.b
        L11:
            long r5 = r8.c
            long r5 = r5 - r9
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 <= 0) goto L22
            com.czhj.wire.okio.Segment r4 = r4.i
            int r5 = r4.e
            int r6 = r4.d
            int r5 = r5 - r6
            long r5 = (long) r5
            long r2 = r2 - r5
            goto L11
        L22:
            long r5 = r8.c
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 >= 0) goto L41
            int r5 = r4.d
            long r5 = (long) r5
            long r5 = r5 + r0
            long r5 = r5 - r2
            int r0 = (int) r5
            java.security.MessageDigest r1 = r7.a
            byte[] r5 = r4.c
            int r6 = r4.e
            int r6 = r6 - r0
            r1.update(r5, r0, r6)
            int r0 = r4.e
            int r1 = r4.d
            int r0 = r0 - r1
            long r0 = (long) r0
            long r2 = r2 + r0
            r0 = r2
            goto L22
        L41:
            return r9
    }
}
