package org.apache.commons.codec.binary;

public class BaseNCodecInputStream extends java.io.FilterInputStream {
    private final org.apache.commons.codec.binary.BaseNCodec baseNCodec;
    private final boolean doEncode;
    private final byte[] singleByte;

    protected BaseNCodecInputStream(java.io.InputStream r1, org.apache.commons.codec.binary.BaseNCodec r2, boolean r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            byte[] r1 = new byte[r1]
            r0.singleByte = r1
            r0.doEncode = r3
            r0.baseNCodec = r2
            return
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r3 = this;
            byte[] r0 = r3.singleByte
            r1 = 1
            r2 = 0
            int r0 = r3.read(r0, r2, r1)
        L8:
            if (r0 != 0) goto L11
            byte[] r0 = r3.singleByte
            int r0 = r3.read(r0, r2, r1)
            goto L8
        L11:
            if (r0 <= 0) goto L21
            byte[] r0 = r3.singleByte
            r1 = r0[r2]
            if (r1 >= 0) goto L1e
            r0 = r0[r2]
            int r0 = r0 + 256
            goto L20
        L1e:
            r0 = r0[r2]
        L20:
            return r0
        L21:
            r0 = -1
            return r0
    }

    @Override
    public int read(byte[] r5, int r6, int r7) throws java.io.IOException {
            r4 = this;
            if (r5 == 0) goto L51
            if (r6 < 0) goto L4b
            if (r7 < 0) goto L4b
            int r0 = r5.length
            if (r6 > r0) goto L45
            int r0 = r6 + r7
            int r1 = r5.length
            if (r0 > r1) goto L45
            r0 = 0
            if (r7 != 0) goto L12
            return r0
        L12:
            r1 = r0
        L13:
            if (r1 != 0) goto L44
            org.apache.commons.codec.binary.BaseNCodec r1 = r4.baseNCodec
            boolean r1 = r1.hasData()
            if (r1 != 0) goto L3d
            boolean r1 = r4.doEncode
            if (r1 == 0) goto L24
            r1 = 4096(0x1000, float:5.74E-42)
            goto L26
        L24:
            r1 = 8192(0x2000, float:1.148E-41)
        L26:
            byte[] r1 = new byte[r1]
            java.io.InputStream r2 = r4.in
            int r2 = r2.read(r1)
            boolean r3 = r4.doEncode
            if (r3 == 0) goto L38
            org.apache.commons.codec.binary.BaseNCodec r3 = r4.baseNCodec
            r3.encode(r1, r0, r2)
            goto L3d
        L38:
            org.apache.commons.codec.binary.BaseNCodec r3 = r4.baseNCodec
            r3.decode(r1, r0, r2)
        L3d:
            org.apache.commons.codec.binary.BaseNCodec r1 = r4.baseNCodec
            int r1 = r1.readResults(r5, r6, r7)
            goto L13
        L44:
            return r1
        L45:
            java.lang.IndexOutOfBoundsException r5 = new java.lang.IndexOutOfBoundsException
            r5.<init>()
            throw r5
        L4b:
            java.lang.IndexOutOfBoundsException r5 = new java.lang.IndexOutOfBoundsException
            r5.<init>()
            throw r5
        L51:
            r5 = 0
            throw r5
    }
}
