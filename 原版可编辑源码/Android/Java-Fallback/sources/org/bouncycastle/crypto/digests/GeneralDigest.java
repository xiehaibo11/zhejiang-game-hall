package org.bouncycastle.crypto.digests;

public abstract class GeneralDigest implements org.bouncycastle.crypto.ExtendedDigest {
    private static final int BYTE_LENGTH = 64;
    private long byteCount;
    private byte[] xBuf;
    private int xBufOff;

    protected GeneralDigest() {
            r1 = this;
            r1.<init>()
            r0 = 4
            byte[] r0 = new byte[r0]
            r1.xBuf = r0
            r0 = 0
            r1.xBufOff = r0
            return
    }

    protected GeneralDigest(org.bouncycastle.crypto.digests.GeneralDigest r5) {
            r4 = this;
            r4.<init>()
            byte[] r0 = r5.xBuf
            int r0 = r0.length
            byte[] r0 = new byte[r0]
            r4.xBuf = r0
            byte[] r1 = r5.xBuf
            int r2 = r1.length
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            int r0 = r5.xBufOff
            r4.xBufOff = r0
            long r0 = r5.byteCount
            r4.byteCount = r0
            return
    }

    public void finish() {
            r3 = this;
            long r0 = r3.byteCount
            r2 = 3
            long r0 = r0 << r2
            r2 = -128(0xffffffffffffff80, float:NaN)
        L6:
            r3.update(r2)
            int r2 = r3.xBufOff
            if (r2 == 0) goto Lf
            r2 = 0
            goto L6
        Lf:
            r3.processLength(r0)
            r3.processBlock()
            return
    }

    @Override
    public int getByteLength() {
            r1 = this;
            r0 = 64
            return r0
    }

    protected abstract void processBlock();

    protected abstract void processLength(long r1);

    protected abstract void processWord(byte[] r1, int r2);

    @Override
    public void reset() {
            r4 = this;
            r0 = 0
            r4.byteCount = r0
            r0 = 0
            r4.xBufOff = r0
            r1 = 0
        L8:
            byte[] r2 = r4.xBuf
            int r3 = r2.length
            if (r1 >= r3) goto L12
            r2[r1] = r0
            int r1 = r1 + 1
            goto L8
        L12:
            return
    }

    @Override
    public void update(byte r5) {
            r4 = this;
            byte[] r0 = r4.xBuf
            int r1 = r4.xBufOff
            int r2 = r1 + 1
            r4.xBufOff = r2
            r0[r1] = r5
            int r5 = r0.length
            if (r2 != r5) goto L13
            r5 = 0
            r4.processWord(r0, r5)
            r4.xBufOff = r5
        L13:
            long r0 = r4.byteCount
            r2 = 1
            long r0 = r0 + r2
            r4.byteCount = r0
            return
    }

    @Override
    public void update(byte[] r6, int r7, int r8) {
            r5 = this;
        L0:
            int r0 = r5.xBufOff
            if (r0 == 0) goto L10
            if (r8 <= 0) goto L10
            r0 = r6[r7]
            r5.update(r0)
            int r7 = r7 + 1
            int r8 = r8 + (-1)
            goto L0
        L10:
            byte[] r0 = r5.xBuf
            int r0 = r0.length
            if (r8 <= r0) goto L26
            r5.processWord(r6, r7)
            byte[] r0 = r5.xBuf
            int r1 = r0.length
            int r7 = r7 + r1
            int r1 = r0.length
            int r8 = r8 - r1
            long r1 = r5.byteCount
            int r0 = r0.length
            long r3 = (long) r0
            long r1 = r1 + r3
            r5.byteCount = r1
            goto L10
        L26:
            if (r8 <= 0) goto L32
            r0 = r6[r7]
            r5.update(r0)
            int r7 = r7 + 1
            int r8 = r8 + (-1)
            goto L26
        L32:
            return
    }
}
