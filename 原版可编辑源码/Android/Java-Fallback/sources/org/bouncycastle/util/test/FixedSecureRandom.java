package org.bouncycastle.util.test;

public class FixedSecureRandom extends java.security.SecureRandom {
    private byte[] _data;
    private int _index;
    private int _intPad;

    public FixedSecureRandom(boolean r3, byte[] r4) {
            r2 = this;
            r0 = 1
            byte[][] r0 = new byte[r0][]
            r1 = 0
            r0[r1] = r4
            r2.<init>(r3, r0)
            return
    }

    public FixedSecureRandom(boolean r4, byte[][] r5) {
            r3 = this;
            r3.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1 = 0
        L9:
            int r2 = r5.length
            if (r1 == r2) goto L1c
            r2 = r5[r1]     // Catch: java.io.IOException -> L14
            r0.write(r2)     // Catch: java.io.IOException -> L14
            int r1 = r1 + 1
            goto L9
        L14:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "can't save value array."
            r4.<init>(r5)
            throw r4
        L1c:
            byte[] r5 = r0.toByteArray()
            r3._data = r5
            if (r4 == 0) goto L29
            int r4 = r5.length
            int r4 = r4 % 4
            r3._intPad = r4
        L29:
            return
    }

    public FixedSecureRandom(byte[] r3) {
            r2 = this;
            r0 = 1
            byte[][] r0 = new byte[r0][]
            r1 = 0
            r0[r1] = r3
            r2.<init>(r1, r0)
            return
    }

    public FixedSecureRandom(byte[][] r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    private int nextValue() {
            r3 = this;
            byte[] r0 = r3._data
            int r1 = r3._index
            int r2 = r1 + 1
            r3._index = r2
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    public boolean isExhausted() {
            r2 = this;
            int r0 = r2._index
            byte[] r1 = r2._data
            int r1 = r1.length
            if (r0 != r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public void nextBytes(byte[] r5) {
            r4 = this;
            byte[] r0 = r4._data
            int r1 = r4._index
            int r2 = r5.length
            r3 = 0
            java.lang.System.arraycopy(r0, r1, r5, r3, r2)
            int r0 = r4._index
            int r5 = r5.length
            int r0 = r0 + r5
            r4._index = r0
            return
    }

    @Override
    public int nextInt() {
            r4 = this;
            int r0 = r4.nextValue()
            int r0 = r0 << 24
            r0 = r0 | 0
            int r1 = r4.nextValue()
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r4._intPad
            r2 = 1
            r3 = 2
            if (r1 != r3) goto L19
            int r1 = r1 - r2
            r4._intPad = r1
            goto L20
        L19:
            int r1 = r4.nextValue()
            int r1 = r1 << 8
            r0 = r0 | r1
        L20:
            int r1 = r4._intPad
            if (r1 != r2) goto L28
            int r1 = r1 - r2
            r4._intPad = r1
            goto L2d
        L28:
            int r1 = r4.nextValue()
            r0 = r0 | r1
        L2d:
            return r0
    }

    @Override
    public long nextLong() {
            r5 = this;
            int r0 = r5.nextValue()
            long r0 = (long) r0
            r2 = 56
            long r0 = r0 << r2
            r2 = 0
            long r0 = r0 | r2
            int r2 = r5.nextValue()
            long r2 = (long) r2
            r4 = 48
            long r2 = r2 << r4
            long r0 = r0 | r2
            int r2 = r5.nextValue()
            long r2 = (long) r2
            r4 = 40
            long r2 = r2 << r4
            long r0 = r0 | r2
            int r2 = r5.nextValue()
            long r2 = (long) r2
            r4 = 32
            long r2 = r2 << r4
            long r0 = r0 | r2
            int r2 = r5.nextValue()
            long r2 = (long) r2
            r4 = 24
            long r2 = r2 << r4
            long r0 = r0 | r2
            int r2 = r5.nextValue()
            long r2 = (long) r2
            r4 = 16
            long r2 = r2 << r4
            long r0 = r0 | r2
            int r2 = r5.nextValue()
            long r2 = (long) r2
            r4 = 8
            long r2 = r2 << r4
            long r0 = r0 | r2
            int r2 = r5.nextValue()
            long r2 = (long) r2
            long r0 = r0 | r2
            return r0
    }
}
