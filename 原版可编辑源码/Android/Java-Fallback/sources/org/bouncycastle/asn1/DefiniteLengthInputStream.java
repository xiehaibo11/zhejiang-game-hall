package org.bouncycastle.asn1;

class DefiniteLengthInputStream extends org.bouncycastle.asn1.LimitedInputStream {
    private static final byte[] EMPTY_BYTES = null;
    private int _length;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            org.bouncycastle.asn1.DefiniteLengthInputStream.EMPTY_BYTES = r0
            return
    }

    DefiniteLengthInputStream(java.io.InputStream r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            if (r2 < 0) goto L8
            r0._length = r2
            return
        L8:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "negative lengths not allowed"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            int r0 = r3._length
            r1 = 1
            if (r0 <= 0) goto L19
            java.io.InputStream r0 = r3._in
            int r0 = r0.read()
            if (r0 < 0) goto L13
            int r2 = r3._length
            int r2 = r2 - r1
            r3._length = r2
            return r0
        L13:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        L19:
            r3.setParentEofDetect(r1)
            r0 = -1
            return r0
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            int r0 = r1._length
            if (r0 <= 0) goto L1c
            int r4 = java.lang.Math.min(r4, r0)
            java.io.InputStream r0 = r1._in
            int r2 = r0.read(r2, r3, r4)
            if (r2 < 0) goto L16
            int r3 = r1._length
            int r3 = r3 - r2
            r1._length = r3
            return r2
        L16:
            java.io.EOFException r2 = new java.io.EOFException
            r2.<init>()
            throw r2
        L1c:
            r2 = 1
            r1.setParentEofDetect(r2)
            r2 = -1
            return r2
    }

    byte[] toByteArray() throws java.io.IOException {
            r3 = this;
            int r0 = r3._length
            if (r0 <= 0) goto L1a
            byte[] r0 = new byte[r0]
            java.io.InputStream r1 = r3._in
            int r1 = org.bouncycastle.util.io.Streams.readFully(r1, r0)
            int r2 = r3._length
            if (r1 < r2) goto L14
            r1 = 0
            r3._length = r1
            goto L1c
        L14:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        L1a:
            byte[] r0 = org.bouncycastle.asn1.DefiniteLengthInputStream.EMPTY_BYTES
        L1c:
            r1 = 1
            r3.setParentEofDetect(r1)
            return r0
    }
}
