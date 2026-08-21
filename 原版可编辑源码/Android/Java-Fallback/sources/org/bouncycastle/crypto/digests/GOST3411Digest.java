package org.bouncycastle.crypto.digests;

public class GOST3411Digest implements org.bouncycastle.crypto.ExtendedDigest {
    private static final byte[] C2 = null;
    private static final int DIGEST_LENGTH = 32;
    private byte[][] C;
    private byte[] H;
    private byte[] K;
    private byte[] L;
    private byte[] M;
    byte[] S;
    private byte[] Sum;
    byte[] U;
    byte[] V;
    byte[] W;
    byte[] a;
    private long byteCount;
    private org.bouncycastle.crypto.BlockCipher cipher;
    short[] wS;
    short[] w_S;
    private byte[] xBuf;
    private int xBufOff;

    static {
            r0 = 32
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, 0, -1} // fill-array
            org.bouncycastle.crypto.digests.GOST3411Digest.C2 = r0
            return
    }

    public GOST3411Digest() {
            r4 = this;
            r4.<init>()
            r0 = 32
            byte[] r1 = new byte[r0]
            r4.H = r1
            byte[] r1 = new byte[r0]
            r4.L = r1
            byte[] r1 = new byte[r0]
            r4.M = r1
            byte[] r1 = new byte[r0]
            r4.Sum = r1
            r1 = 2
            int[] r1 = new int[r1]
            r1 = {x0068: FILL_ARRAY_DATA , data: [4, 32} // fill-array
            java.lang.Class<byte> r2 = byte.class
            java.lang.Object r1 = java.lang.reflect.Array.newInstance(r2, r1)
            byte[][] r1 = (byte[][]) r1
            r4.C = r1
            byte[] r1 = new byte[r0]
            r4.xBuf = r1
            org.bouncycastle.crypto.engines.GOST28147Engine r1 = new org.bouncycastle.crypto.engines.GOST28147Engine
            r1.<init>()
            r4.cipher = r1
            byte[] r2 = new byte[r0]
            r4.K = r2
            r2 = 8
            byte[] r2 = new byte[r2]
            r4.a = r2
            r2 = 16
            short[] r3 = new short[r2]
            r4.wS = r3
            short[] r2 = new short[r2]
            r4.w_S = r2
            byte[] r2 = new byte[r0]
            r4.S = r2
            byte[] r2 = new byte[r0]
            r4.U = r2
            byte[] r2 = new byte[r0]
            r4.V = r2
            byte[] r0 = new byte[r0]
            r4.W = r0
            org.bouncycastle.crypto.params.ParametersWithSBox r0 = new org.bouncycastle.crypto.params.ParametersWithSBox
            java.lang.String r2 = "D-A"
            byte[] r2 = org.bouncycastle.crypto.engines.GOST28147Engine.getSBox(r2)
            r3 = 0
            r0.<init>(r3, r2)
            r2 = 1
            r1.init(r2, r0)
            r4.reset()
            return
    }

    public GOST3411Digest(org.bouncycastle.crypto.digests.GOST3411Digest r7) {
            r6 = this;
            r6.<init>()
            r0 = 32
            byte[] r1 = new byte[r0]
            r6.H = r1
            byte[] r1 = new byte[r0]
            r6.L = r1
            byte[] r1 = new byte[r0]
            r6.M = r1
            byte[] r1 = new byte[r0]
            r6.Sum = r1
            r1 = 2
            int[] r2 = new int[r1]
            r2 = {x00c4: FILL_ARRAY_DATA , data: [4, 32} // fill-array
            java.lang.Class<byte> r3 = byte.class
            java.lang.Object r2 = java.lang.reflect.Array.newInstance(r3, r2)
            byte[][] r2 = (byte[][]) r2
            r6.C = r2
            byte[] r2 = new byte[r0]
            r6.xBuf = r2
            org.bouncycastle.crypto.engines.GOST28147Engine r2 = new org.bouncycastle.crypto.engines.GOST28147Engine
            r2.<init>()
            r6.cipher = r2
            byte[] r3 = new byte[r0]
            r6.K = r3
            r3 = 8
            byte[] r3 = new byte[r3]
            r6.a = r3
            r3 = 16
            short[] r4 = new short[r3]
            r6.wS = r4
            short[] r3 = new short[r3]
            r6.w_S = r3
            byte[] r3 = new byte[r0]
            r6.S = r3
            byte[] r3 = new byte[r0]
            r6.U = r3
            byte[] r3 = new byte[r0]
            r6.V = r3
            byte[] r0 = new byte[r0]
            r6.W = r0
            org.bouncycastle.crypto.params.ParametersWithSBox r0 = new org.bouncycastle.crypto.params.ParametersWithSBox
            java.lang.String r3 = "D-A"
            byte[] r3 = org.bouncycastle.crypto.engines.GOST28147Engine.getSBox(r3)
            r4 = 0
            r0.<init>(r4, r3)
            r3 = 1
            r2.init(r3, r0)
            r6.reset()
            byte[] r0 = r7.H
            byte[] r2 = r6.H
            int r4 = r0.length
            r5 = 0
            java.lang.System.arraycopy(r0, r5, r2, r5, r4)
            byte[] r0 = r7.L
            byte[] r2 = r6.L
            int r4 = r0.length
            java.lang.System.arraycopy(r0, r5, r2, r5, r4)
            byte[] r0 = r7.M
            byte[] r2 = r6.M
            int r4 = r0.length
            java.lang.System.arraycopy(r0, r5, r2, r5, r4)
            byte[] r0 = r7.Sum
            byte[] r2 = r6.Sum
            int r4 = r0.length
            java.lang.System.arraycopy(r0, r5, r2, r5, r4)
            byte[][] r0 = r7.C
            r2 = r0[r3]
            byte[][] r4 = r6.C
            r4 = r4[r3]
            r0 = r0[r3]
            int r0 = r0.length
            java.lang.System.arraycopy(r2, r5, r4, r5, r0)
            byte[][] r0 = r7.C
            r2 = r0[r1]
            byte[][] r3 = r6.C
            r3 = r3[r1]
            r0 = r0[r1]
            int r0 = r0.length
            java.lang.System.arraycopy(r2, r5, r3, r5, r0)
            byte[][] r0 = r7.C
            r1 = 3
            r2 = r0[r1]
            byte[][] r3 = r6.C
            r3 = r3[r1]
            r0 = r0[r1]
            int r0 = r0.length
            java.lang.System.arraycopy(r2, r5, r3, r5, r0)
            byte[] r0 = r7.xBuf
            byte[] r1 = r6.xBuf
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r5, r1, r5, r2)
            int r0 = r7.xBufOff
            r6.xBufOff = r0
            long r0 = r7.byteCount
            r6.byteCount = r0
            return
    }

    private byte[] A(byte[] r6) {
            r5 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 8
            if (r1 >= r2) goto L15
            byte[] r2 = r5.a
            r3 = r6[r1]
            int r4 = r1 + 8
            r4 = r6[r4]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r2[r1] = r3
            int r1 = r1 + 1
            goto L2
        L15:
            r1 = 24
            java.lang.System.arraycopy(r6, r2, r6, r0, r1)
            byte[] r3 = r5.a
            java.lang.System.arraycopy(r3, r0, r6, r1, r2)
            return r6
    }

    private void E(byte[] r3, byte[] r4, int r5, byte[] r6, int r7) {
            r2 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r2.cipher
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r1.<init>(r3)
            r3 = 1
            r0.init(r3, r1)
            org.bouncycastle.crypto.BlockCipher r3 = r2.cipher
            r3.processBlock(r6, r7, r4, r5)
            return
    }

    private void LongToBytes(long r4, byte[] r6, int r7) {
            r3 = this;
            int r0 = r7 + 7
            r1 = 56
            long r1 = r4 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 6
            r1 = 48
            long r1 = r4 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 5
            r1 = 40
            long r1 = r4 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 4
            r1 = 32
            long r1 = r4 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 3
            r1 = 24
            long r1 = r4 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 2
            r1 = 16
            long r1 = r4 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 1
            r1 = 8
            long r1 = r4 >> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r5 = (int) r4
            byte r4 = (byte) r5
            r6[r7] = r4
            return
    }

    private byte[] P(byte[] r6) {
            r5 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto L28
            byte[] r1 = r5.K
            int r2 = r0 * 4
            r3 = r6[r0]
            r1[r2] = r3
            int r3 = r2 + 1
            int r4 = r0 + 8
            r4 = r6[r4]
            r1[r3] = r4
            int r3 = r2 + 2
            int r4 = r0 + 16
            r4 = r6[r4]
            r1[r3] = r4
            int r2 = r2 + 3
            int r3 = r0 + 24
            r3 = r6[r3]
            r1[r2] = r3
            int r0 = r0 + 1
            goto L1
        L28:
            byte[] r6 = r5.K
            return r6
    }

    private void cpyBytesToShort(byte[] r5, short[] r6) {
            r4 = this;
            r0 = 0
        L1:
            int r1 = r5.length
            int r1 = r1 / 2
            if (r0 >= r1) goto L1d
            int r1 = r0 * 2
            int r2 = r1 + 1
            r2 = r5[r2]
            int r2 = r2 << 8
            r3 = 65280(0xff00, float:9.1477E-41)
            r2 = r2 & r3
            r1 = r5[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 | r2
            short r1 = (short) r1
            r6[r0] = r1
            int r0 = r0 + 1
            goto L1
        L1d:
            return
    }

    private void cpyShortToBytes(short[] r5, byte[] r6) {
            r4 = this;
            r0 = 0
        L1:
            int r1 = r6.length
            int r1 = r1 / 2
            if (r0 >= r1) goto L19
            int r1 = r0 * 2
            int r2 = r1 + 1
            short r3 = r5[r0]
            int r3 = r3 >> 8
            byte r3 = (byte) r3
            r6[r2] = r3
            short r2 = r5[r0]
            byte r2 = (byte) r2
            r6[r1] = r2
            int r0 = r0 + 1
            goto L1
        L19:
            return
    }

    private void finish() {
            r4 = this;
            long r0 = r4.byteCount
            r2 = 8
            long r0 = r0 * r2
            byte[] r2 = r4.L
            r3 = 0
            r4.LongToBytes(r0, r2, r3)
        Lc:
            int r0 = r4.xBufOff
            if (r0 == 0) goto L14
            r4.update(r3)
            goto Lc
        L14:
            byte[] r0 = r4.L
            r4.processBlock(r0, r3)
            byte[] r0 = r4.Sum
            r4.processBlock(r0, r3)
            return
    }

    private void fw(byte[] r8) {
            r7 = this;
            short[] r0 = r7.wS
            r7.cpyBytesToShort(r8, r0)
            short[] r0 = r7.w_S
            short[] r1 = r7.wS
            r2 = 0
            short r3 = r1[r2]
            r4 = 1
            short r5 = r1[r4]
            r3 = r3 ^ r5
            r5 = 2
            short r5 = r1[r5]
            r3 = r3 ^ r5
            r5 = 3
            short r5 = r1[r5]
            r3 = r3 ^ r5
            r5 = 12
            short r5 = r1[r5]
            r3 = r3 ^ r5
            r5 = 15
            short r6 = r1[r5]
            r3 = r3 ^ r6
            short r3 = (short) r3
            r0[r5] = r3
            java.lang.System.arraycopy(r1, r4, r0, r2, r5)
            short[] r0 = r7.w_S
            r7.cpyShortToBytes(r0, r8)
            return
    }

    private void sumByteArray(byte[] r6) {
            r5 = this;
            r0 = 0
            r1 = 0
        L2:
            byte[] r2 = r5.Sum
            int r3 = r2.length
            if (r0 == r3) goto L19
            r3 = r2[r0]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r4 = r6[r0]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r3 = r3 + r4
            int r3 = r3 + r1
            byte r1 = (byte) r3
            r2[r0] = r1
            int r1 = r3 >>> 8
            int r0 = r0 + 1
            goto L2
        L19:
            return
    }

    @Override
    public int doFinal(byte[] r4, int r5) {
            r3 = this;
            r3.finish()
            byte[] r0 = r3.H
            int r1 = r0.length
            r2 = 0
            java.lang.System.arraycopy(r0, r2, r4, r5, r1)
            r3.reset()
            r4 = 32
            return r4
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "GOST3411"
            return r0
    }

    @Override
    public int getByteLength() {
            r1 = this;
            r0 = 32
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 32
            return r0
    }

    protected void processBlock(byte[] r10, int r11) {
            r9 = this;
            byte[] r0 = r9.M
            r1 = 32
            r2 = 0
            java.lang.System.arraycopy(r10, r11, r0, r2, r1)
            byte[] r10 = r9.H
            byte[] r11 = r9.U
            java.lang.System.arraycopy(r10, r2, r11, r2, r1)
            byte[] r10 = r9.M
            byte[] r11 = r9.V
            java.lang.System.arraycopy(r10, r2, r11, r2, r1)
            r10 = 0
        L17:
            if (r10 >= r1) goto L2a
            byte[] r11 = r9.W
            byte[] r0 = r9.U
            r0 = r0[r10]
            byte[] r3 = r9.V
            r3 = r3[r10]
            r0 = r0 ^ r3
            byte r0 = (byte) r0
            r11[r10] = r0
            int r10 = r10 + 1
            goto L17
        L2a:
            byte[] r10 = r9.W
            byte[] r4 = r9.P(r10)
            byte[] r5 = r9.S
            r6 = 0
            byte[] r7 = r9.H
            r8 = 0
            r3 = r9
            r3.E(r4, r5, r6, r7, r8)
            r10 = 1
        L3b:
            r11 = 4
            if (r10 >= r11) goto L8c
            byte[] r11 = r9.U
            byte[] r11 = r9.A(r11)
            r0 = 0
        L45:
            if (r0 >= r1) goto L58
            byte[] r3 = r9.U
            r4 = r11[r0]
            byte[][] r5 = r9.C
            r5 = r5[r10]
            r5 = r5[r0]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r3[r0] = r4
            int r0 = r0 + 1
            goto L45
        L58:
            byte[] r11 = r9.V
            byte[] r11 = r9.A(r11)
            byte[] r11 = r9.A(r11)
            r9.V = r11
            r11 = 0
        L65:
            if (r11 >= r1) goto L78
            byte[] r0 = r9.W
            byte[] r3 = r9.U
            r3 = r3[r11]
            byte[] r4 = r9.V
            r4 = r4[r11]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r0[r11] = r3
            int r11 = r11 + 1
            goto L65
        L78:
            byte[] r11 = r9.W
            byte[] r4 = r9.P(r11)
            byte[] r5 = r9.S
            int r8 = r10 * 8
            byte[] r7 = r9.H
            r3 = r9
            r6 = r8
            r3.E(r4, r5, r6, r7, r8)
            int r10 = r10 + 1
            goto L3b
        L8c:
            r10 = 0
        L8d:
            r11 = 12
            if (r10 >= r11) goto L99
            byte[] r11 = r9.S
            r9.fw(r11)
            int r10 = r10 + 1
            goto L8d
        L99:
            r10 = 0
        L9a:
            if (r10 >= r1) goto Lab
            byte[] r11 = r9.S
            r0 = r11[r10]
            byte[] r3 = r9.M
            r3 = r3[r10]
            r0 = r0 ^ r3
            byte r0 = (byte) r0
            r11[r10] = r0
            int r10 = r10 + 1
            goto L9a
        Lab:
            byte[] r10 = r9.S
            r9.fw(r10)
            r10 = 0
        Lb1:
            if (r10 >= r1) goto Lc2
            byte[] r11 = r9.S
            byte[] r0 = r9.H
            r0 = r0[r10]
            r3 = r11[r10]
            r0 = r0 ^ r3
            byte r0 = (byte) r0
            r11[r10] = r0
            int r10 = r10 + 1
            goto Lb1
        Lc2:
            r10 = 0
        Lc3:
            r11 = 61
            if (r10 >= r11) goto Lcf
            byte[] r11 = r9.S
            r9.fw(r11)
            int r10 = r10 + 1
            goto Lc3
        Lcf:
            byte[] r10 = r9.S
            byte[] r11 = r9.H
            int r0 = r11.length
            java.lang.System.arraycopy(r10, r2, r11, r2, r0)
            return
    }

    @Override
    public void reset() {
            r5 = this;
            r0 = 0
            r5.byteCount = r0
            r0 = 0
            r5.xBufOff = r0
            r1 = 0
        L8:
            byte[] r2 = r5.H
            int r3 = r2.length
            if (r1 >= r3) goto L12
            r2[r1] = r0
            int r1 = r1 + 1
            goto L8
        L12:
            r1 = 0
        L13:
            byte[] r2 = r5.L
            int r3 = r2.length
            if (r1 >= r3) goto L1d
            r2[r1] = r0
            int r1 = r1 + 1
            goto L13
        L1d:
            r1 = 0
        L1e:
            byte[] r2 = r5.M
            int r3 = r2.length
            if (r1 >= r3) goto L28
            r2[r1] = r0
            int r1 = r1 + 1
            goto L1e
        L28:
            r1 = 0
        L29:
            byte[][] r2 = r5.C
            r3 = 1
            r4 = r2[r3]
            int r4 = r4.length
            if (r1 >= r4) goto L38
            r2 = r2[r3]
            r2[r1] = r0
            int r1 = r1 + 1
            goto L29
        L38:
            r1 = 0
        L39:
            byte[][] r2 = r5.C
            r3 = 3
            r4 = r2[r3]
            int r4 = r4.length
            if (r1 >= r4) goto L48
            r2 = r2[r3]
            r2[r1] = r0
            int r1 = r1 + 1
            goto L39
        L48:
            r1 = 0
        L49:
            byte[] r2 = r5.Sum
            int r3 = r2.length
            if (r1 >= r3) goto L53
            r2[r1] = r0
            int r1 = r1 + 1
            goto L49
        L53:
            r1 = 0
        L54:
            byte[] r2 = r5.xBuf
            int r3 = r2.length
            if (r1 >= r3) goto L5e
            r2[r1] = r0
            int r1 = r1 + 1
            goto L54
        L5e:
            byte[] r1 = org.bouncycastle.crypto.digests.GOST3411Digest.C2
            byte[][] r2 = r5.C
            r3 = 2
            r2 = r2[r3]
            int r3 = r1.length
            java.lang.System.arraycopy(r1, r0, r2, r0, r3)
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
            if (r2 != r5) goto L18
            r4.sumByteArray(r0)
            byte[] r5 = r4.xBuf
            r0 = 0
            r4.processBlock(r5, r0)
            r4.xBufOff = r0
        L18:
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
            int r1 = r0.length
            if (r8 <= r1) goto L32
            int r1 = r0.length
            r2 = 0
            java.lang.System.arraycopy(r6, r7, r0, r2, r1)
            byte[] r0 = r5.xBuf
            r5.sumByteArray(r0)
            byte[] r0 = r5.xBuf
            r5.processBlock(r0, r2)
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
        L32:
            if (r8 <= 0) goto L3e
            r0 = r6[r7]
            r5.update(r0)
            int r7 = r7 + 1
            int r8 = r8 + (-1)
            goto L32
        L3e:
            return
    }
}
