package org.apache.commons.codec1.binary;

public class BaseNCodecInputStream extends java.io.FilterInputStream {
    private final org.apache.commons.codec1.binary.BaseNCodec baseNCodec;
    private final org.apache.commons.codec1.binary.BaseNCodec.Context context;
    private final boolean doEncode;
    private final byte[] singleByte;

    protected BaseNCodecInputStream(java.io.InputStream r1, org.apache.commons.codec1.binary.BaseNCodec r2, boolean r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            byte[] r1 = new byte[r1]
            r0.singleByte = r1
            org.apache.commons.codec1.binary.BaseNCodec$Context r1 = new org.apache.commons.codec1.binary.BaseNCodec$Context
            r1.<init>()
            r0.context = r1
            r0.doEncode = r3
            r0.baseNCodec = r2
            return
    }

    @Override
    public int available() throws java.io.IOException {
            r1 = this;
            org.apache.commons.codec1.binary.BaseNCodec$Context r0 = r1.context
            boolean r0 = r0.eof
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public synchronized void mark(int r1) {
            r0 = this;
            monitor-enter(r0)
            monitor-exit(r0)
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
            if (r0 == 0) goto L17
            if (r0 <= 0) goto L15
            byte[] r0 = r3.singleByte
            r0 = r0[r2]
            if (r0 >= 0) goto L14
            int r0 = r0 + 256
        L14:
            return r0
        L15:
            r0 = -1
            return r0
        L17:
            byte[] r0 = r3.singleByte
            int r0 = r3.read(r0, r2, r1)
            goto L8
    }

    @Override
    public int read(byte[] r6, int r7, int r8) throws java.io.IOException {
            r5 = this;
            if (r6 == 0) goto L59
            if (r7 < 0) goto L53
            if (r8 < 0) goto L53
            int r0 = r6.length
            if (r7 > r0) goto L4d
            int r0 = r7 + r8
            int r1 = r6.length
            if (r0 > r1) goto L4d
            r0 = 0
            if (r8 != 0) goto L12
            return r0
        L12:
            r1 = r0
        L13:
            if (r1 == 0) goto L16
            return r1
        L16:
            org.apache.commons.codec1.binary.BaseNCodec r1 = r5.baseNCodec
            org.apache.commons.codec1.binary.BaseNCodec$Context r2 = r5.context
            boolean r1 = r1.hasData(r2)
            if (r1 != 0) goto L44
            boolean r1 = r5.doEncode
            if (r1 == 0) goto L27
            r1 = 4096(0x1000, float:5.74E-42)
            goto L29
        L27:
            r1 = 8192(0x2000, float:1.148E-41)
        L29:
            byte[] r1 = new byte[r1]
            java.io.InputStream r2 = r5.in
            int r2 = r2.read(r1)
            boolean r3 = r5.doEncode
            if (r3 == 0) goto L3d
            org.apache.commons.codec1.binary.BaseNCodec r3 = r5.baseNCodec
            org.apache.commons.codec1.binary.BaseNCodec$Context r4 = r5.context
            r3.encode(r1, r0, r2, r4)
            goto L44
        L3d:
            org.apache.commons.codec1.binary.BaseNCodec r3 = r5.baseNCodec
            org.apache.commons.codec1.binary.BaseNCodec$Context r4 = r5.context
            r3.decode(r1, r0, r2, r4)
        L44:
            org.apache.commons.codec1.binary.BaseNCodec r1 = r5.baseNCodec
            org.apache.commons.codec1.binary.BaseNCodec$Context r2 = r5.context
            int r1 = r1.readResults(r6, r7, r8, r2)
            goto L13
        L4d:
            java.lang.IndexOutOfBoundsException r6 = new java.lang.IndexOutOfBoundsException
            r6.<init>()
            throw r6
        L53:
            java.lang.IndexOutOfBoundsException r6 = new java.lang.IndexOutOfBoundsException
            r6.<init>()
            throw r6
        L59:
            r6 = 0
            throw r6
    }

    @Override
    public synchronized void reset() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L9
            java.lang.String r1 = "mark/reset not supported"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L9
            throw r0     // Catch: java.lang.Throwable -> L9
        L9:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public long skip(long r9) throws java.io.IOException {
            r8 = this;
            r0 = 0
            int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r2 < 0) goto L23
            r2 = 512(0x200, float:7.17E-43)
            byte[] r3 = new byte[r2]
            r4 = r9
        Lb:
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 > 0) goto L10
            goto L1e
        L10:
            long r6 = (long) r2
            long r6 = java.lang.Math.min(r6, r4)
            int r6 = (int) r6
            r7 = 0
            int r6 = r8.read(r3, r7, r6)
            r7 = -1
            if (r6 != r7) goto L20
        L1e:
            long r9 = r9 - r4
            return r9
        L20:
            long r6 = (long) r6
            long r4 = r4 - r6
            goto Lb
        L23:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Negative skip length: "
            r1.<init>(r2)
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            r0.<init>(r9)
            throw r0
    }
}
