package org.apache.commons.codec.binary;

public class BaseNCodecOutputStream extends java.io.FilterOutputStream {
    private final org.apache.commons.codec.binary.BaseNCodec baseNCodec;
    private final boolean doEncode;
    private final byte[] singleByte;

    public BaseNCodecOutputStream(java.io.OutputStream r1, org.apache.commons.codec.binary.BaseNCodec r2, boolean r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            byte[] r1 = new byte[r1]
            r0.singleByte = r1
            r0.baseNCodec = r2
            r0.doEncode = r3
            return
    }

    private void flush(boolean r5) throws java.io.IOException {
            r4 = this;
            org.apache.commons.codec.binary.BaseNCodec r0 = r4.baseNCodec
            int r0 = r0.available()
            if (r0 <= 0) goto L18
            byte[] r1 = new byte[r0]
            org.apache.commons.codec.binary.BaseNCodec r2 = r4.baseNCodec
            r3 = 0
            int r0 = r2.readResults(r1, r3, r0)
            if (r0 <= 0) goto L18
            java.io.OutputStream r2 = r4.out
            r2.write(r1, r3, r0)
        L18:
            if (r5 == 0) goto L1f
            java.io.OutputStream r5 = r4.out
            r5.flush()
        L1f:
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r4 = this;
            boolean r0 = r4.doEncode
            r1 = -1
            r2 = 0
            if (r0 == 0) goto Le
            org.apache.commons.codec.binary.BaseNCodec r0 = r4.baseNCodec
            byte[] r3 = r4.singleByte
            r0.encode(r3, r2, r1)
            goto L15
        Le:
            org.apache.commons.codec.binary.BaseNCodec r0 = r4.baseNCodec
            byte[] r3 = r4.singleByte
            r0.decode(r3, r2, r1)
        L15:
            r4.flush()
            java.io.OutputStream r0 = r4.out
            r0.close()
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.flush(r0)
            return
    }

    @Override
    public void write(int r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.singleByte
            byte r3 = (byte) r3
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r2.write(r0, r1, r3)
            return
    }

    @Override
    public void write(byte[] r3, int r4, int r5) throws java.io.IOException {
            r2 = this;
            if (r3 == 0) goto L30
            if (r4 < 0) goto L2a
            if (r5 < 0) goto L2a
            int r0 = r3.length
            if (r4 > r0) goto L24
            int r0 = r4 + r5
            int r1 = r3.length
            if (r0 > r1) goto L24
            if (r5 <= 0) goto L23
            boolean r0 = r2.doEncode
            if (r0 == 0) goto L1a
            org.apache.commons.codec.binary.BaseNCodec r0 = r2.baseNCodec
            r0.encode(r3, r4, r5)
            goto L1f
        L1a:
            org.apache.commons.codec.binary.BaseNCodec r0 = r2.baseNCodec
            r0.decode(r3, r4, r5)
        L1f:
            r3 = 0
            r2.flush(r3)
        L23:
            return
        L24:
            java.lang.IndexOutOfBoundsException r3 = new java.lang.IndexOutOfBoundsException
            r3.<init>()
            throw r3
        L2a:
            java.lang.IndexOutOfBoundsException r3 = new java.lang.IndexOutOfBoundsException
            r3.<init>()
            throw r3
        L30:
            r3 = 0
            throw r3
    }
}
