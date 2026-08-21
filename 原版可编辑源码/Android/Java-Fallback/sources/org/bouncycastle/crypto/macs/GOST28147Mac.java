package org.bouncycastle.crypto.macs;

public class GOST28147Mac implements org.bouncycastle.crypto.Mac {
    private byte[] S;
    private int blockSize;
    private byte[] buf;
    private int bufOff;
    private boolean firstStep;
    private byte[] mac;
    private int macSize;
    private int[] workingKey;

    public GOST28147Mac() {
            r2 = this;
            r2.<init>()
            r0 = 8
            r2.blockSize = r0
            r1 = 4
            r2.macSize = r1
            r1 = 1
            r2.firstStep = r1
            r1 = 0
            r2.workingKey = r1
            r1 = 128(0x80, float:1.8E-43)
            byte[] r1 = new byte[r1]
            r1 = {x0026: FILL_ARRAY_DATA , data: [9, 6, 3, 2, 8, 11, 1, 7, 10, 4, 14, 15, 12, 0, 13, 5, 3, 7, 14, 9, 8, 10, 15, 0, 5, 2, 6, 12, 11, 4, 13, 1, 14, 4, 6, 2, 11, 3, 13, 8, 12, 15, 5, 10, 0, 7, 1, 9, 14, 7, 10, 12, 13, 1, 3, 9, 0, 2, 11, 4, 15, 8, 5, 6, 11, 5, 1, 9, 8, 13, 15, 0, 14, 4, 2, 3, 12, 7, 10, 6, 3, 10, 13, 12, 1, 2, 0, 11, 7, 5, 9, 4, 8, 15, 14, 6, 1, 13, 2, 9, 7, 10, 6, 0, 8, 12, 4, 5, 15, 3, 11, 14, 11, 10, 15, 5, 0, 12, 14, 8, 6, 2, 3, 9, 1, 7, 13, 4} // fill-array
            r2.S = r1
            byte[] r1 = new byte[r0]
            r2.mac = r1
            byte[] r0 = new byte[r0]
            r2.buf = r0
            r0 = 0
            r2.bufOff = r0
            return
    }

    private byte[] CM5func(byte[] r4, int r5, byte[] r6) {
            r3 = this;
            int r0 = r4.length
            int r0 = r0 - r5
            byte[] r0 = new byte[r0]
            int r1 = r6.length
            r2 = 0
            java.lang.System.arraycopy(r4, r5, r0, r2, r1)
        L9:
            int r4 = r6.length
            if (r2 == r4) goto L17
            r4 = r0[r2]
            r5 = r6[r2]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r0[r2] = r4
            int r2 = r2 + 1
            goto L9
        L17:
            return r0
    }

    private int bytesToint(byte[] r4, int r5) {
            r3 = this;
            int r0 = r5 + 3
            r0 = r4[r0]
            int r0 = r0 << 24
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0 = r0 & r1
            int r1 = r5 + 2
            r1 = r4[r1]
            int r1 = r1 << 16
            r2 = 16711680(0xff0000, float:2.3418052E-38)
            r1 = r1 & r2
            int r0 = r0 + r1
            int r1 = r5 + 1
            r1 = r4[r1]
            int r1 = r1 << 8
            r2 = 65280(0xff00, float:9.1477E-41)
            r1 = r1 & r2
            int r0 = r0 + r1
            r4 = r4[r5]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r4
            return r0
    }

    private int[] generateWorkingKey(byte[] r5) {
            r4 = this;
            int r0 = r5.length
            r1 = 32
            if (r0 != r1) goto L18
            r0 = 8
            int[] r1 = new int[r0]
            r2 = 0
        La:
            if (r2 == r0) goto L17
            int r3 = r2 * 4
            int r3 = r4.bytesToint(r5, r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto La
        L17:
            return r1
        L18:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Key length invalid. Key needs to be 32 byte - 256 bit!!!"
            r5.<init>(r0)
            throw r5
    }

    private void gost28147MacFunc(int[] r6, byte[] r7, int r8, byte[] r9, int r10) {
            r5 = this;
            int r0 = r5.bytesToint(r7, r8)
            int r8 = r8 + 4
            int r7 = r5.bytesToint(r7, r8)
            r8 = 0
            r1 = 0
        Lc:
            r2 = 2
            if (r1 >= r2) goto L24
            r2 = 0
        L10:
            r3 = 8
            if (r2 >= r3) goto L21
            r3 = r6[r2]
            int r3 = r5.gost28147_mainStep(r0, r3)
            r7 = r7 ^ r3
            int r2 = r2 + 1
            r4 = r0
            r0 = r7
            r7 = r4
            goto L10
        L21:
            int r1 = r1 + 1
            goto Lc
        L24:
            r5.intTobytes(r0, r9, r10)
            int r10 = r10 + 4
            r5.intTobytes(r7, r9, r10)
            return
    }

    private int gost28147_mainStep(int r3, int r4) {
            r2 = this;
            int r4 = r4 + r3
            byte[] r3 = r2.S
            int r0 = r4 >> 0
            r0 = r0 & 15
            int r0 = r0 + 0
            r0 = r3[r0]
            int r0 = r0 << 0
            int r1 = r4 >> 4
            r1 = r1 & 15
            int r1 = r1 + 16
            r1 = r3[r1]
            int r1 = r1 << 4
            int r0 = r0 + r1
            int r1 = r4 >> 8
            r1 = r1 & 15
            int r1 = r1 + 32
            r1 = r3[r1]
            int r1 = r1 << 8
            int r0 = r0 + r1
            int r1 = r4 >> 12
            r1 = r1 & 15
            int r1 = r1 + 48
            r1 = r3[r1]
            int r1 = r1 << 12
            int r0 = r0 + r1
            int r1 = r4 >> 16
            r1 = r1 & 15
            int r1 = r1 + 64
            r1 = r3[r1]
            int r1 = r1 << 16
            int r0 = r0 + r1
            int r1 = r4 >> 20
            r1 = r1 & 15
            int r1 = r1 + 80
            r1 = r3[r1]
            int r1 = r1 << 20
            int r0 = r0 + r1
            int r1 = r4 >> 24
            r1 = r1 & 15
            int r1 = r1 + 96
            r1 = r3[r1]
            int r1 = r1 << 24
            int r0 = r0 + r1
            int r4 = r4 >> 28
            r4 = r4 & 15
            int r4 = r4 + 112
            r3 = r3[r4]
            int r3 = r3 << 28
            int r0 = r0 + r3
            int r3 = r0 << 11
            int r4 = r0 >>> 21
            r3 = r3 | r4
            return r3
    }

    private void intTobytes(int r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r5 + 3
            int r1 = r3 >>> 24
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 2
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 1
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r0] = r1
            byte r3 = (byte) r3
            r4[r5] = r3
            return
    }

    @Override
    public int doFinal(byte[] r9, int r10) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r8 = this;
        L0:
            int r0 = r8.bufOff
            int r1 = r8.blockSize
            r2 = 0
            if (r0 >= r1) goto L10
            byte[] r1 = r8.buf
            r1[r0] = r2
            int r0 = r0 + 1
            r8.bufOff = r0
            goto L0
        L10:
            byte[] r0 = r8.buf
            int r1 = r0.length
            byte[] r1 = new byte[r1]
            byte[] r3 = r8.mac
            int r3 = r3.length
            java.lang.System.arraycopy(r0, r2, r1, r2, r3)
            boolean r0 = r8.firstStep
            if (r0 == 0) goto L22
            r8.firstStep = r2
            goto L2a
        L22:
            byte[] r0 = r8.buf
            byte[] r1 = r8.mac
            byte[] r1 = r8.CM5func(r0, r2, r1)
        L2a:
            r4 = r1
            int[] r3 = r8.workingKey
            r5 = 0
            byte[] r6 = r8.mac
            r7 = 0
            r2 = r8
            r2.gost28147MacFunc(r3, r4, r5, r6, r7)
            byte[] r0 = r8.mac
            int r1 = r0.length
            int r1 = r1 / 2
            int r2 = r8.macSize
            int r1 = r1 - r2
            java.lang.System.arraycopy(r0, r1, r9, r10, r2)
            r8.reset()
            int r9 = r8.macSize
            return r9
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "GOST28147Mac"
            return r0
    }

    @Override
    public int getMacSize() {
            r1 = this;
            int r0 = r1.macSize
            return r0
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r5) throws java.lang.IllegalArgumentException {
            r4 = this;
            r4.reset()
            int r0 = r4.blockSize
            byte[] r0 = new byte[r0]
            r4.buf = r0
            boolean r0 = r5 instanceof org.bouncycastle.crypto.params.ParametersWithSBox
            if (r0 == 0) goto L35
            org.bouncycastle.crypto.params.ParametersWithSBox r5 = (org.bouncycastle.crypto.params.ParametersWithSBox) r5
            byte[] r0 = r5.getSBox()
            byte[] r1 = r4.S
            byte[] r2 = r5.getSBox()
            int r2 = r2.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            org.bouncycastle.crypto.CipherParameters r0 = r5.getParameters()
            if (r0 == 0) goto L45
            org.bouncycastle.crypto.CipherParameters r5 = r5.getParameters()
            org.bouncycastle.crypto.params.KeyParameter r5 = (org.bouncycastle.crypto.params.KeyParameter) r5
            byte[] r5 = r5.getKey()
            int[] r5 = r4.generateWorkingKey(r5)
            r4.workingKey = r5
            goto L45
        L35:
            boolean r0 = r5 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L46
            org.bouncycastle.crypto.params.KeyParameter r5 = (org.bouncycastle.crypto.params.KeyParameter) r5
            byte[] r5 = r5.getKey()
            int[] r5 = r4.generateWorkingKey(r5)
            r4.workingKey = r5
        L45:
            return
        L46:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "invalid parameter passed to GOST28147 init - "
            r1.append(r2)
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getName()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    @Override
    public void reset() {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            byte[] r2 = r4.buf
            int r3 = r2.length
            if (r1 >= r3) goto Lc
            r2[r1] = r0
            int r1 = r1 + 1
            goto L2
        Lc:
            r4.bufOff = r0
            r0 = 1
            r4.firstStep = r0
            return
    }

    @Override
    public void update(byte r11) throws java.lang.IllegalStateException {
            r10 = this;
            int r0 = r10.bufOff
            byte[] r1 = r10.buf
            int r2 = r1.length
            if (r0 != r2) goto L2d
            int r0 = r1.length
            byte[] r0 = new byte[r0]
            byte[] r2 = r10.mac
            int r2 = r2.length
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            boolean r1 = r10.firstStep
            if (r1 == 0) goto L18
            r10.firstStep = r3
            goto L20
        L18:
            byte[] r0 = r10.buf
            byte[] r1 = r10.mac
            byte[] r0 = r10.CM5func(r0, r3, r1)
        L20:
            r6 = r0
            int[] r5 = r10.workingKey
            r7 = 0
            byte[] r8 = r10.mac
            r9 = 0
            r4 = r10
            r4.gost28147MacFunc(r5, r6, r7, r8, r9)
            r10.bufOff = r3
        L2d:
            byte[] r0 = r10.buf
            int r1 = r10.bufOff
            int r2 = r1 + 1
            r10.bufOff = r2
            r0[r1] = r11
            return
    }

    @Override
    public void update(byte[] r12, int r13, int r14) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r11 = this;
            if (r14 < 0) goto L5c
            int r0 = r11.blockSize
            int r1 = r11.bufOff
            int r0 = r0 - r1
            if (r14 <= r0) goto L4f
            byte[] r2 = r11.buf
            java.lang.System.arraycopy(r12, r13, r2, r1, r0)
            byte[] r1 = r11.buf
            int r2 = r1.length
            byte[] r2 = new byte[r2]
            byte[] r3 = r11.mac
            int r3 = r3.length
            r4 = 0
            java.lang.System.arraycopy(r1, r4, r2, r4, r3)
            boolean r1 = r11.firstStep
            if (r1 == 0) goto L21
            r11.firstStep = r4
            goto L29
        L21:
            byte[] r1 = r11.buf
            byte[] r2 = r11.mac
            byte[] r2 = r11.CM5func(r1, r4, r2)
        L29:
            r7 = r2
            int[] r6 = r11.workingKey
            r8 = 0
            byte[] r9 = r11.mac
            r10 = 0
            r5 = r11
            r5.gost28147MacFunc(r6, r7, r8, r9, r10)
            r11.bufOff = r4
        L36:
            int r14 = r14 - r0
            int r13 = r13 + r0
            int r0 = r11.blockSize
            if (r14 <= r0) goto L4f
            byte[] r0 = r11.mac
            byte[] r3 = r11.CM5func(r12, r13, r0)
            int[] r2 = r11.workingKey
            r4 = 0
            byte[] r5 = r11.mac
            r6 = 0
            r1 = r11
            r1.gost28147MacFunc(r2, r3, r4, r5, r6)
            int r0 = r11.blockSize
            goto L36
        L4f:
            byte[] r0 = r11.buf
            int r1 = r11.bufOff
            java.lang.System.arraycopy(r12, r13, r0, r1, r14)
            int r12 = r11.bufOff
            int r12 = r12 + r14
            r11.bufOff = r12
            return
        L5c:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r13 = "Can't have a negative input length!"
            r12.<init>(r13)
            throw r12
    }
}
