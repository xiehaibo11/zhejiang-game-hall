package org.bouncycastle.crypto.engines;

public class Salsa20Engine implements org.bouncycastle.crypto.StreamCipher {
    private static final byte[] sigma = null;
    private static final int stateSize = 16;
    private static final byte[] tau = null;
    private int cW0;
    private int cW1;
    private int cW2;
    private int[] engineState;
    private int index;
    private boolean initialised;
    private byte[] keyStream;
    private byte[] workingIV;
    private byte[] workingKey;
    private int[] x;

    static {
            java.lang.String r0 = "expand 32-byte k"
            byte[] r0 = org.bouncycastle.util.Strings.toByteArray(r0)
            org.bouncycastle.crypto.engines.Salsa20Engine.sigma = r0
            java.lang.String r0 = "expand 16-byte k"
            byte[] r0 = org.bouncycastle.util.Strings.toByteArray(r0)
            org.bouncycastle.crypto.engines.Salsa20Engine.tau = r0
            return
    }

    public Salsa20Engine() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.index = r0
            r1 = 16
            int[] r2 = new int[r1]
            r3.engineState = r2
            int[] r1 = new int[r1]
            r3.x = r1
            r1 = 64
            byte[] r1 = new byte[r1]
            r3.keyStream = r1
            r1 = 0
            r3.workingKey = r1
            r3.workingIV = r1
            r3.initialised = r0
            return
    }

    private int byteToIntLittle(byte[] r3, int r4) {
            r2 = this;
            r0 = r3[r4]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r4 + 1
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r1 = r4 + 2
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r4 = r4 + 3
            r3 = r3[r4]
            int r3 = r3 << 24
            r3 = r3 | r0
            return r3
    }

    private byte[] intToByteLittle(int r3, byte[] r4, int r5) {
            r2 = this;
            byte r0 = (byte) r3
            r4[r5] = r0
            int r0 = r5 + 1
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 2
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r5 = r5 + 3
            int r3 = r3 >>> 24
            byte r3 = (byte) r3
            r4[r5] = r3
            return r4
    }

    private boolean limitExceeded() {
            r3 = this;
            int r0 = r3.cW0
            r1 = 1
            int r0 = r0 + r1
            r3.cW0 = r0
            r2 = 0
            if (r0 != 0) goto L1c
            int r0 = r3.cW1
            int r0 = r0 + r1
            r3.cW1 = r0
            if (r0 != 0) goto L1c
            int r0 = r3.cW2
            int r0 = r0 + r1
            r3.cW2 = r0
            r0 = r0 & 32
            if (r0 == 0) goto L1a
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
        L1c:
            return r2
    }

    private boolean limitExceeded(int r3) {
            r2 = this;
            int r0 = r2.cW0
            r1 = 0
            if (r0 < 0) goto L9
            int r0 = r0 + r3
            r2.cW0 = r0
            goto L20
        L9:
            int r0 = r0 + r3
            r2.cW0 = r0
            if (r0 < 0) goto L20
            int r3 = r2.cW1
            r0 = 1
            int r3 = r3 + r0
            r2.cW1 = r3
            if (r3 != 0) goto L20
            int r3 = r2.cW2
            int r3 = r3 + r0
            r2.cW2 = r3
            r3 = r3 & 32
            if (r3 == 0) goto L20
            r1 = 1
        L20:
            return r1
    }

    private void resetCounter() {
            r1 = this;
            r0 = 0
            r1.cW0 = r0
            r1.cW1 = r0
            r1.cW2 = r0
            return
    }

    private int rotl(int r2, int r3) {
            r1 = this;
            int r0 = r2 << r3
            int r3 = -r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            return r2
    }

    private void salsa20WordToByte(int[] r23, byte[] r24) {
            r22 = this;
            r0 = r22
            r1 = r23
            r2 = r24
            int[] r3 = r0.x
            int r4 = r1.length
            r5 = 0
            java.lang.System.arraycopy(r1, r5, r3, r5, r4)
            r3 = 0
        Le:
            r4 = 10
            r6 = 4
            if (r3 >= r4) goto L248
            int[] r7 = r0.x
            r8 = r7[r6]
            r9 = r7[r5]
            r10 = 12
            r11 = r7[r10]
            int r9 = r9 + r11
            r11 = 7
            int r9 = r0.rotl(r9, r11)
            r8 = r8 ^ r9
            r7[r6] = r8
            int[] r7 = r0.x
            r8 = 8
            r9 = r7[r8]
            r12 = r7[r6]
            r13 = r7[r5]
            int r12 = r12 + r13
            r13 = 9
            int r12 = r0.rotl(r12, r13)
            r9 = r9 ^ r12
            r7[r8] = r9
            int[] r7 = r0.x
            r9 = r7[r10]
            r12 = r7[r8]
            r14 = r7[r6]
            int r12 = r12 + r14
            r14 = 13
            int r12 = r0.rotl(r12, r14)
            r9 = r9 ^ r12
            r7[r10] = r9
            int[] r7 = r0.x
            r9 = r7[r5]
            r12 = r7[r10]
            r15 = r7[r8]
            int r12 = r12 + r15
            r15 = 18
            int r12 = r0.rotl(r12, r15)
            r9 = r9 ^ r12
            r7[r5] = r9
            int[] r7 = r0.x
            r9 = r7[r13]
            r12 = 5
            r16 = r7[r12]
            r17 = 1
            r18 = r7[r17]
            int r10 = r16 + r18
            int r10 = r0.rotl(r10, r11)
            r9 = r9 ^ r10
            r7[r13] = r9
            int[] r7 = r0.x
            r9 = r7[r14]
            r10 = r7[r13]
            r16 = r7[r12]
            int r10 = r10 + r16
            int r10 = r0.rotl(r10, r13)
            r9 = r9 ^ r10
            r7[r14] = r9
            int[] r7 = r0.x
            r9 = r7[r17]
            r10 = r7[r14]
            r16 = r7[r13]
            int r10 = r10 + r16
            int r10 = r0.rotl(r10, r14)
            r9 = r9 ^ r10
            r7[r17] = r9
            int[] r7 = r0.x
            r9 = r7[r12]
            r10 = r7[r17]
            r16 = r7[r14]
            int r10 = r10 + r16
            int r10 = r0.rotl(r10, r15)
            r9 = r9 ^ r10
            r7[r12] = r9
            int[] r7 = r0.x
            r9 = 14
            r10 = r7[r9]
            r16 = r7[r4]
            r18 = 6
            r19 = r7[r18]
            int r8 = r16 + r19
            int r8 = r0.rotl(r8, r11)
            r8 = r8 ^ r10
            r7[r9] = r8
            int[] r7 = r0.x
            r8 = 2
            r10 = r7[r8]
            r16 = r7[r9]
            r19 = r7[r4]
            int r6 = r16 + r19
            int r6 = r0.rotl(r6, r13)
            r6 = r6 ^ r10
            r7[r8] = r6
            int[] r6 = r0.x
            r7 = r6[r18]
            r10 = r6[r8]
            r16 = r6[r9]
            int r10 = r10 + r16
            int r10 = r0.rotl(r10, r14)
            r7 = r7 ^ r10
            r6[r18] = r7
            int[] r6 = r0.x
            r7 = r6[r4]
            r10 = r6[r18]
            r16 = r6[r8]
            int r10 = r10 + r16
            int r10 = r0.rotl(r10, r15)
            r7 = r7 ^ r10
            r6[r4] = r7
            int[] r6 = r0.x
            r7 = 3
            r10 = r6[r7]
            r16 = 15
            r19 = r6[r16]
            r20 = 11
            r21 = r6[r20]
            int r9 = r19 + r21
            int r9 = r0.rotl(r9, r11)
            r9 = r9 ^ r10
            r6[r7] = r9
            int[] r6 = r0.x
            r9 = r6[r11]
            r10 = r6[r7]
            r19 = r6[r16]
            int r10 = r10 + r19
            int r10 = r0.rotl(r10, r13)
            r9 = r9 ^ r10
            r6[r11] = r9
            int[] r6 = r0.x
            r9 = r6[r20]
            r10 = r6[r11]
            r19 = r6[r7]
            int r10 = r10 + r19
            int r10 = r0.rotl(r10, r14)
            r9 = r9 ^ r10
            r6[r20] = r9
            int[] r6 = r0.x
            r9 = r6[r16]
            r10 = r6[r20]
            r19 = r6[r11]
            int r10 = r10 + r19
            int r10 = r0.rotl(r10, r15)
            r9 = r9 ^ r10
            r6[r16] = r9
            int[] r6 = r0.x
            r9 = r6[r17]
            r10 = r6[r5]
            r19 = r6[r7]
            int r10 = r10 + r19
            int r10 = r0.rotl(r10, r11)
            r9 = r9 ^ r10
            r6[r17] = r9
            int[] r6 = r0.x
            r9 = r6[r8]
            r10 = r6[r17]
            r19 = r6[r5]
            int r10 = r10 + r19
            int r10 = r0.rotl(r10, r13)
            r9 = r9 ^ r10
            r6[r8] = r9
            int[] r6 = r0.x
            r9 = r6[r7]
            r10 = r6[r8]
            r17 = r6[r17]
            int r10 = r10 + r17
            int r10 = r0.rotl(r10, r14)
            r9 = r9 ^ r10
            r6[r7] = r9
            int[] r6 = r0.x
            r9 = r6[r5]
            r7 = r6[r7]
            r8 = r6[r8]
            int r7 = r7 + r8
            int r7 = r0.rotl(r7, r15)
            r7 = r7 ^ r9
            r6[r5] = r7
            int[] r6 = r0.x
            r7 = r6[r18]
            r8 = r6[r12]
            r9 = 4
            r10 = r6[r9]
            int r8 = r8 + r10
            int r8 = r0.rotl(r8, r11)
            r7 = r7 ^ r8
            r6[r18] = r7
            int[] r6 = r0.x
            r7 = r6[r11]
            r8 = r6[r18]
            r9 = r6[r12]
            int r8 = r8 + r9
            int r8 = r0.rotl(r8, r13)
            r7 = r7 ^ r8
            r6[r11] = r7
            int[] r6 = r0.x
            r7 = 4
            r8 = r6[r7]
            r9 = r6[r11]
            r10 = r6[r18]
            int r9 = r9 + r10
            int r9 = r0.rotl(r9, r14)
            r8 = r8 ^ r9
            r6[r7] = r8
            int[] r6 = r0.x
            r8 = r6[r12]
            r7 = r6[r7]
            r9 = r6[r11]
            int r7 = r7 + r9
            int r7 = r0.rotl(r7, r15)
            r7 = r7 ^ r8
            r6[r12] = r7
            int[] r6 = r0.x
            r7 = r6[r20]
            r8 = r6[r4]
            r9 = r6[r13]
            int r8 = r8 + r9
            int r8 = r0.rotl(r8, r11)
            r7 = r7 ^ r8
            r6[r20] = r7
            int[] r6 = r0.x
            r7 = 8
            r8 = r6[r7]
            r9 = r6[r20]
            r10 = r6[r4]
            int r9 = r9 + r10
            int r9 = r0.rotl(r9, r13)
            r8 = r8 ^ r9
            r6[r7] = r8
            int[] r6 = r0.x
            r8 = r6[r13]
            r9 = r6[r7]
            r10 = r6[r20]
            int r9 = r9 + r10
            int r9 = r0.rotl(r9, r14)
            r8 = r8 ^ r9
            r6[r13] = r8
            int[] r6 = r0.x
            r8 = r6[r4]
            r9 = r6[r13]
            r7 = r6[r7]
            int r9 = r9 + r7
            int r7 = r0.rotl(r9, r15)
            r7 = r7 ^ r8
            r6[r4] = r7
            int[] r4 = r0.x
            r6 = 12
            r7 = r4[r6]
            r8 = r4[r16]
            r9 = 14
            r10 = r4[r9]
            int r8 = r8 + r10
            int r8 = r0.rotl(r8, r11)
            r7 = r7 ^ r8
            r4[r6] = r7
            int[] r4 = r0.x
            r7 = r4[r14]
            r8 = r4[r6]
            r9 = r4[r16]
            int r8 = r8 + r9
            int r8 = r0.rotl(r8, r13)
            r7 = r7 ^ r8
            r4[r14] = r7
            int[] r4 = r0.x
            r7 = 14
            r8 = r4[r7]
            r9 = r4[r14]
            r6 = r4[r6]
            int r9 = r9 + r6
            int r6 = r0.rotl(r9, r14)
            r6 = r6 ^ r8
            r4[r7] = r6
            int[] r4 = r0.x
            r6 = r4[r16]
            r7 = r4[r7]
            r8 = r4[r14]
            int r7 = r7 + r8
            int r7 = r0.rotl(r7, r15)
            r6 = r6 ^ r7
            r4[r16] = r6
            int r3 = r3 + 1
            goto Le
        L248:
            r3 = 0
        L249:
            r4 = 16
            if (r5 >= r4) goto L25c
            int[] r4 = r0.x
            r4 = r4[r5]
            r6 = r1[r5]
            int r4 = r4 + r6
            r0.intToByteLittle(r4, r2, r3)
            int r3 = r3 + 4
            int r5 = r5 + 1
            goto L249
        L25c:
            int[] r1 = r0.x
            int r5 = r1.length
            if (r4 >= r5) goto L26b
            r1 = r1[r4]
            r0.intToByteLittle(r1, r2, r3)
            r1 = 4
            int r3 = r3 + r1
            int r4 = r4 + 1
            goto L25c
        L26b:
            return
    }

    private void setKey(byte[] r10, byte[] r11) {
            r9 = this;
            r9.workingKey = r10
            r9.workingIV = r11
            r10 = 0
            r9.index = r10
            r9.resetCounter()
            int[] r11 = r9.engineState
            byte[] r0 = r9.workingKey
            int r0 = r9.byteToIntLittle(r0, r10)
            r1 = 1
            r11[r1] = r0
            int[] r11 = r9.engineState
            byte[] r0 = r9.workingKey
            r2 = 4
            int r0 = r9.byteToIntLittle(r0, r2)
            r3 = 2
            r11[r3] = r0
            int[] r11 = r9.engineState
            byte[] r0 = r9.workingKey
            r3 = 8
            int r0 = r9.byteToIntLittle(r0, r3)
            r4 = 3
            r11[r4] = r0
            int[] r11 = r9.engineState
            byte[] r0 = r9.workingKey
            r4 = 12
            int r0 = r9.byteToIntLittle(r0, r4)
            r11[r2] = r0
            byte[] r11 = r9.workingKey
            int r11 = r11.length
            r0 = 32
            if (r11 != r0) goto L46
            byte[] r11 = org.bouncycastle.crypto.engines.Salsa20Engine.sigma
            r0 = 16
            goto L49
        L46:
            byte[] r11 = org.bouncycastle.crypto.engines.Salsa20Engine.tau
            r0 = 0
        L49:
            int[] r5 = r9.engineState
            r6 = 11
            byte[] r7 = r9.workingKey
            int r7 = r9.byteToIntLittle(r7, r0)
            r5[r6] = r7
            int[] r5 = r9.engineState
            byte[] r6 = r9.workingKey
            int r7 = r0 + 4
            int r6 = r9.byteToIntLittle(r6, r7)
            r5[r4] = r6
            int[] r5 = r9.engineState
            r6 = 13
            byte[] r7 = r9.workingKey
            int r8 = r0 + 8
            int r7 = r9.byteToIntLittle(r7, r8)
            r5[r6] = r7
            int[] r5 = r9.engineState
            r6 = 14
            byte[] r7 = r9.workingKey
            int r0 = r0 + r4
            int r0 = r9.byteToIntLittle(r7, r0)
            r5[r6] = r0
            int[] r0 = r9.engineState
            int r5 = r9.byteToIntLittle(r11, r10)
            r0[r10] = r5
            int[] r0 = r9.engineState
            r5 = 5
            int r6 = r9.byteToIntLittle(r11, r2)
            r0[r5] = r6
            int[] r0 = r9.engineState
            r5 = 10
            int r6 = r9.byteToIntLittle(r11, r3)
            r0[r5] = r6
            int[] r0 = r9.engineState
            r5 = 15
            int r11 = r9.byteToIntLittle(r11, r4)
            r0[r5] = r11
            int[] r11 = r9.engineState
            r0 = 6
            byte[] r4 = r9.workingIV
            int r4 = r9.byteToIntLittle(r4, r10)
            r11[r0] = r4
            int[] r11 = r9.engineState
            r0 = 7
            byte[] r4 = r9.workingIV
            int r2 = r9.byteToIntLittle(r4, r2)
            r11[r0] = r2
            int[] r11 = r9.engineState
            r0 = 9
            r11[r0] = r10
            r11[r3] = r10
            r9.initialised = r1
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Salsa20"
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r3 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r3 == 0) goto L3b
            org.bouncycastle.crypto.params.ParametersWithIV r4 = (org.bouncycastle.crypto.params.ParametersWithIV) r4
            byte[] r3 = r4.getIV()
            if (r3 == 0) goto L33
            int r0 = r3.length
            r1 = 8
            if (r0 != r1) goto L33
            org.bouncycastle.crypto.CipherParameters r0 = r4.getParameters()
            boolean r0 = r0 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L2b
            org.bouncycastle.crypto.CipherParameters r4 = r4.getParameters()
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r4 = r4.getKey()
            r2.workingKey = r4
            r2.workingIV = r3
            r2.setKey(r4, r3)
            return
        L2b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Salsa20 Init parameters must include a key"
            r3.<init>(r4)
            throw r3
        L33:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Salsa20 requires exactly 8 bytes of IV"
            r3.<init>(r4)
            throw r3
        L3b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Salsa20 Init parameters must include an IV"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void processBytes(byte[] r6, int r7, int r8, byte[] r9, int r10) {
            r5 = this;
            boolean r0 = r5.initialised
            if (r0 == 0) goto L6a
            int r0 = r7 + r8
            int r1 = r6.length
            if (r0 > r1) goto L62
            int r0 = r10 + r8
            int r1 = r9.length
            if (r0 > r1) goto L5a
            boolean r0 = r5.limitExceeded(r8)
            if (r0 != 0) goto L52
            r0 = 0
        L15:
            if (r0 >= r8) goto L51
            int r1 = r5.index
            if (r1 != 0) goto L38
            int[] r1 = r5.engineState
            byte[] r2 = r5.keyStream
            r5.salsa20WordToByte(r1, r2)
            int[] r1 = r5.engineState
            r2 = 8
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
            r2 = r1[r2]
            if (r2 != 0) goto L38
            r2 = 9
            r3 = r1[r2]
            int r3 = r3 + 1
            r1[r2] = r3
        L38:
            int r1 = r0 + r10
            byte[] r2 = r5.keyStream
            int r3 = r5.index
            r2 = r2[r3]
            int r4 = r0 + r7
            r4 = r6[r4]
            r2 = r2 ^ r4
            byte r2 = (byte) r2
            r9[r1] = r2
            int r3 = r3 + 1
            r1 = r3 & 63
            r5.index = r1
            int r0 = r0 + 1
            goto L15
        L51:
            return
        L52:
            org.bouncycastle.crypto.MaxBytesExceededException r6 = new org.bouncycastle.crypto.MaxBytesExceededException
            java.lang.String r7 = "2^70 byte limit per IV would be exceeded; Change IV"
            r6.<init>(r7)
            throw r6
        L5a:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        L62:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "input buffer too short"
            r6.<init>(r7)
            throw r6
        L6a:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = r5.getAlgorithmName()
            r7.append(r8)
            java.lang.String r8 = " not initialised"
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
    }

    @Override
    public void reset() {
            r2 = this;
            byte[] r0 = r2.workingKey
            byte[] r1 = r2.workingIV
            r2.setKey(r0, r1)
            return
    }

    @Override
    public byte returnByte(byte r4) {
            r3 = this;
            boolean r0 = r3.limitExceeded()
            if (r0 != 0) goto L36
            int r0 = r3.index
            if (r0 != 0) goto L27
            int[] r0 = r3.engineState
            byte[] r1 = r3.keyStream
            r3.salsa20WordToByte(r0, r1)
            int[] r0 = r3.engineState
            r1 = 8
            r2 = r0[r1]
            int r2 = r2 + 1
            r0[r1] = r2
            r1 = r0[r1]
            if (r1 != 0) goto L27
            r1 = 9
            r2 = r0[r1]
            int r2 = r2 + 1
            r0[r1] = r2
        L27:
            byte[] r0 = r3.keyStream
            int r1 = r3.index
            r0 = r0[r1]
            r4 = r4 ^ r0
            byte r4 = (byte) r4
            int r1 = r1 + 1
            r0 = r1 & 63
            r3.index = r0
            return r4
        L36:
            org.bouncycastle.crypto.MaxBytesExceededException r4 = new org.bouncycastle.crypto.MaxBytesExceededException
            java.lang.String r0 = "2^70 byte limit per IV; Change IV"
            r4.<init>(r0)
            throw r4
    }
}
