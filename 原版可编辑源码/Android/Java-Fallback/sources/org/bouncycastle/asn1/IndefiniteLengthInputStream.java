package org.bouncycastle.asn1;

class IndefiniteLengthInputStream extends org.bouncycastle.asn1.LimitedInputStream {
    private int _b1;
    private int _b2;
    private boolean _eofOn00;
    private boolean _eofReached;

    IndefiniteLengthInputStream(java.io.InputStream r4) throws java.io.IOException {
            r3 = this;
            r3.<init>(r4)
            r0 = 0
            r3._eofReached = r0
            r1 = 1
            r3._eofOn00 = r1
            int r2 = r4.read()
            r3._b1 = r2
            int r4 = r4.read()
            r3._b2 = r4
            if (r4 >= 0) goto L18
            r0 = 1
        L18:
            r3._eofReached = r0
            return
    }

    boolean checkForEof() {
            r1 = this;
            boolean r0 = r1._eofOn00
            if (r0 == 0) goto L12
            int r0 = r1._b1
            if (r0 != 0) goto L12
            int r0 = r1._b2
            if (r0 != 0) goto L12
            r0 = 1
            r1._eofReached = r0
            r1.setParentEofDetect(r0)
        L12:
            boolean r0 = r1._eofReached
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            boolean r0 = r3.checkForEof()
            if (r0 == 0) goto L8
            r0 = -1
            return r0
        L8:
            java.io.InputStream r0 = r3._in
            int r0 = r0.read()
            if (r0 < 0) goto L19
            int r1 = r3._b1
            int r2 = r3._b2
            r3._b1 = r2
            r3._b2 = r0
            return r1
        L19:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
    }

    @Override
    public int read(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2._eofOn00
            if (r0 != 0) goto L47
            r0 = 3
            if (r5 >= r0) goto L8
            goto L47
        L8:
            boolean r0 = r2._eofReached
            if (r0 == 0) goto Le
            r3 = -1
            return r3
        Le:
            java.io.InputStream r0 = r2._in
            int r1 = r4 + 2
            int r5 = r5 + (-2)
            int r5 = r0.read(r3, r1, r5)
            if (r5 < 0) goto L41
            int r0 = r2._b1
            byte r0 = (byte) r0
            r3[r4] = r0
            int r4 = r4 + 1
            int r0 = r2._b2
            byte r0 = (byte) r0
            r3[r4] = r0
            java.io.InputStream r3 = r2._in
            int r3 = r3.read()
            r2._b1 = r3
            java.io.InputStream r3 = r2._in
            int r3 = r3.read()
            r2._b2 = r3
            if (r3 < 0) goto L3b
            int r5 = r5 + 2
            return r5
        L3b:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
        L41:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
        L47:
            int r3 = super.read(r3, r4, r5)
            return r3
    }

    void setEofOn00(boolean r1) {
            r0 = this;
            r0._eofOn00 = r1
            return
    }
}
