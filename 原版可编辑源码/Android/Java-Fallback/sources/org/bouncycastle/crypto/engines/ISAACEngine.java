package org.bouncycastle.crypto.engines;

public class ISAACEngine implements org.bouncycastle.crypto.StreamCipher {
    private int a;
    private int b;
    private int c;
    private int[] engineState;
    private int index;
    private boolean initialised;
    private byte[] keyStream;
    private int[] results;
    private final int sizeL;
    private final int stateArraySize;
    private byte[] workingKey;

    public ISAACEngine() {
            r3 = this;
            r3.<init>()
            r0 = 8
            r3.sizeL = r0
            r0 = 256(0x100, float:3.59E-43)
            r3.stateArraySize = r0
            r0 = 0
            r3.engineState = r0
            r3.results = r0
            r1 = 0
            r3.a = r1
            r3.b = r1
            r3.c = r1
            r3.index = r1
            r2 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r2]
            r3.keyStream = r2
            r3.workingKey = r0
            r3.initialised = r1
            return
    }

    private int byteToIntLittle(byte[] r3, int r4) {
            r2 = this;
            int r0 = r4 + 1
            r4 = r3[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r1 = r0 + 1
            r0 = r3[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            r4 = r4 | r0
            int r0 = r1 + 1
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r4 = r4 | r1
            r3 = r3[r0]
            int r3 = r3 << 24
            r3 = r3 | r4
            return r3
    }

    private byte[] intToByteLittle(int r4) {
            r3 = this;
            r0 = 4
            byte[] r0 = new byte[r0]
            byte r1 = (byte) r4
            r2 = 3
            r0[r2] = r1
            int r1 = r4 >>> 8
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            int r1 = r4 >>> 16
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r4 = r4 >>> 24
            byte r4 = (byte) r4
            r1 = 0
            r0[r1] = r4
            return r0
    }

    private byte[] intToByteLittle(int[] r7) {
            r6 = this;
            int r0 = r7.length
            r1 = 4
            int r0 = r0 * 4
            byte[] r0 = new byte[r0]
            r2 = 0
            r3 = 0
            r4 = 0
        L9:
            int r5 = r7.length
            if (r3 >= r5) goto L19
            r5 = r7[r3]
            byte[] r5 = r6.intToByteLittle(r5)
            java.lang.System.arraycopy(r5, r2, r0, r4, r1)
            int r3 = r3 + 1
            int r4 = r4 + r1
            goto L9
        L19:
            return r0
    }

    private void isaac() {
            r6 = this;
            int r0 = r6.b
            int r1 = r6.c
            r2 = 1
            int r1 = r1 + r2
            r6.c = r1
            int r0 = r0 + r1
            r6.b = r0
            r0 = 0
        Lc:
            r1 = 256(0x100, float:3.59E-43)
            if (r0 >= r1) goto L60
            int[] r1 = r6.engineState
            r1 = r1[r0]
            r3 = r0 & 3
            if (r3 == 0) goto L30
            if (r3 == r2) goto L2b
            r4 = 2
            if (r3 == r4) goto L26
            r4 = 3
            if (r3 == r4) goto L21
            goto L37
        L21:
            int r3 = r6.a
            int r4 = r3 >>> 16
            goto L34
        L26:
            int r3 = r6.a
            int r4 = r3 << 2
            goto L34
        L2b:
            int r3 = r6.a
            int r4 = r3 >>> 6
            goto L34
        L30:
            int r3 = r6.a
            int r4 = r3 << 13
        L34:
            r3 = r3 ^ r4
            r6.a = r3
        L37:
            int r3 = r6.a
            int[] r4 = r6.engineState
            int r5 = r0 + 128
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r4[r5]
            int r3 = r3 + r5
            r6.a = r3
            int r5 = r1 >>> 2
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r4[r5]
            int r5 = r5 + r3
            int r3 = r6.b
            int r5 = r5 + r3
            r4[r0] = r5
            int[] r3 = r6.results
            int r5 = r5 >>> 10
            r5 = r5 & 255(0xff, float:3.57E-43)
            r4 = r4[r5]
            int r4 = r4 + r1
            r6.b = r4
            r3[r0] = r4
            int r0 = r0 + 1
            goto Lc
        L60:
            return
    }

    private void mix(int[] r10) {
            r9 = this;
            r0 = 0
            r1 = r10[r0]
            r2 = 1
            r3 = r10[r2]
            int r3 = r3 << 11
            r1 = r1 ^ r3
            r10[r0] = r1
            r1 = 3
            r3 = r10[r1]
            r4 = r10[r0]
            int r3 = r3 + r4
            r10[r1] = r3
            r3 = r10[r2]
            r4 = 2
            r5 = r10[r4]
            int r3 = r3 + r5
            r10[r2] = r3
            r3 = r10[r2]
            r5 = r10[r4]
            int r5 = r5 >>> r4
            r3 = r3 ^ r5
            r10[r2] = r3
            r3 = 4
            r5 = r10[r3]
            r6 = r10[r2]
            int r5 = r5 + r6
            r10[r3] = r5
            r5 = r10[r4]
            r6 = r10[r1]
            int r5 = r5 + r6
            r10[r4] = r5
            r5 = r10[r4]
            r6 = r10[r1]
            int r6 = r6 << 8
            r5 = r5 ^ r6
            r10[r4] = r5
            r5 = 5
            r6 = r10[r5]
            r7 = r10[r4]
            int r6 = r6 + r7
            r10[r5] = r6
            r6 = r10[r1]
            r7 = r10[r3]
            int r6 = r6 + r7
            r10[r1] = r6
            r6 = r10[r1]
            r7 = r10[r3]
            int r7 = r7 >>> 16
            r6 = r6 ^ r7
            r10[r1] = r6
            r6 = 6
            r7 = r10[r6]
            r1 = r10[r1]
            int r7 = r7 + r1
            r10[r6] = r7
            r1 = r10[r3]
            r7 = r10[r5]
            int r1 = r1 + r7
            r10[r3] = r1
            r1 = r10[r3]
            r7 = r10[r5]
            int r7 = r7 << 10
            r1 = r1 ^ r7
            r10[r3] = r1
            r1 = 7
            r7 = r10[r1]
            r8 = r10[r3]
            int r7 = r7 + r8
            r10[r1] = r7
            r7 = r10[r5]
            r8 = r10[r6]
            int r7 = r7 + r8
            r10[r5] = r7
            r7 = r10[r5]
            r8 = r10[r6]
            int r3 = r8 >>> 4
            r3 = r3 ^ r7
            r10[r5] = r3
            r3 = r10[r0]
            r5 = r10[r5]
            int r3 = r3 + r5
            r10[r0] = r3
            r3 = r10[r6]
            r5 = r10[r1]
            int r3 = r3 + r5
            r10[r6] = r3
            r3 = r10[r6]
            r5 = r10[r1]
            int r5 = r5 << 8
            r3 = r3 ^ r5
            r10[r6] = r3
            r3 = r10[r2]
            r5 = r10[r6]
            int r3 = r3 + r5
            r10[r2] = r3
            r3 = r10[r1]
            r5 = r10[r0]
            int r3 = r3 + r5
            r10[r1] = r3
            r3 = r10[r1]
            r5 = r10[r0]
            int r5 = r5 >>> 9
            r3 = r3 ^ r5
            r10[r1] = r3
            r3 = r10[r4]
            r1 = r10[r1]
            int r3 = r3 + r1
            r10[r4] = r3
            r1 = r10[r0]
            r2 = r10[r2]
            int r1 = r1 + r2
            r10[r0] = r1
            return
    }

    private void setKey(byte[] r11) {
            r10 = this;
            r10.workingKey = r11
            int[] r0 = r10.engineState
            r1 = 256(0x100, float:3.59E-43)
            if (r0 != 0) goto Lc
            int[] r0 = new int[r1]
            r10.engineState = r0
        Lc:
            int[] r0 = r10.results
            if (r0 != 0) goto L14
            int[] r0 = new int[r1]
            r10.results = r0
        L14:
            r0 = 0
            r2 = 0
        L16:
            if (r2 >= r1) goto L23
            int[] r3 = r10.engineState
            int[] r4 = r10.results
            r4[r2] = r0
            r3[r2] = r0
            int r2 = r2 + 1
            goto L16
        L23:
            r10.c = r0
            r10.b = r0
            r10.a = r0
            r10.index = r0
            int r2 = r11.length
            int r3 = r11.length
            r3 = r3 & 3
            int r2 = r2 + r3
            byte[] r3 = new byte[r2]
            int r4 = r11.length
            java.lang.System.arraycopy(r11, r0, r3, r0, r4)
            r11 = 0
        L37:
            if (r11 >= r2) goto L46
            int[] r4 = r10.results
            int r5 = r11 >> 2
            int r6 = r10.byteToIntLittle(r3, r11)
            r4[r5] = r6
            int r11 = r11 + 4
            goto L37
        L46:
            r11 = 8
            int[] r2 = new int[r11]
            r3 = 0
        L4b:
            if (r3 >= r11) goto L55
            r4 = -1640531527(0xffffffff9e3779b9, float:-9.713111E-21)
            r2[r3] = r4
            int r3 = r3 + 1
            goto L4b
        L55:
            r3 = 0
        L56:
            r4 = 4
            if (r3 >= r4) goto L5f
            r10.mix(r2)
            int r3 = r3 + 1
            goto L56
        L5f:
            r3 = 0
        L60:
            r4 = 2
            r5 = 1
            if (r3 >= r4) goto L98
            r4 = 0
        L65:
            if (r4 >= r1) goto L95
            r6 = 0
        L68:
            if (r6 >= r11) goto L81
            r7 = r2[r6]
            if (r3 >= r5) goto L75
            int[] r8 = r10.results
            int r9 = r4 + r6
            r8 = r8[r9]
            goto L7b
        L75:
            int[] r8 = r10.engineState
            int r9 = r4 + r6
            r8 = r8[r9]
        L7b:
            int r7 = r7 + r8
            r2[r6] = r7
            int r6 = r6 + 1
            goto L68
        L81:
            r10.mix(r2)
            r6 = 0
        L85:
            if (r6 >= r11) goto L92
            int[] r7 = r10.engineState
            int r8 = r4 + r6
            r9 = r2[r6]
            r7[r8] = r9
            int r6 = r6 + 1
            goto L85
        L92:
            int r4 = r4 + 8
            goto L65
        L95:
            int r3 = r3 + 1
            goto L60
        L98:
            r10.isaac()
            r10.initialised = r5
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "ISAAC"
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r3 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r3 == 0) goto Le
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r3 = r4.getKey()
            r2.setKey(r3)
            return
        Le:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to ISAAC init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void processBytes(byte[] r6, int r7, int r8, byte[] r9, int r10) {
            r5 = this;
            boolean r0 = r5.initialised
            if (r0 == 0) goto L4a
            int r0 = r7 + r8
            int r1 = r6.length
            if (r0 > r1) goto L42
            int r0 = r10 + r8
            int r1 = r9.length
            if (r0 > r1) goto L3a
            r0 = 0
        Lf:
            if (r0 >= r8) goto L39
            int r1 = r5.index
            if (r1 != 0) goto L20
            r5.isaac()
            int[] r1 = r5.results
            byte[] r1 = r5.intToByteLittle(r1)
            r5.keyStream = r1
        L20:
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
            r1 = r3 & 1023(0x3ff, float:1.434E-42)
            r5.index = r1
            int r0 = r0 + 1
            goto Lf
        L39:
            return
        L3a:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "output buffer too short"
            r6.<init>(r7)
            throw r6
        L42:
            org.bouncycastle.crypto.DataLengthException r6 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r7 = "input buffer too short"
            r6.<init>(r7)
            throw r6
        L4a:
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
            r1 = this;
            byte[] r0 = r1.workingKey
            r1.setKey(r0)
            return
    }

    @Override
    public byte returnByte(byte r3) {
            r2 = this;
            int r0 = r2.index
            if (r0 != 0) goto Lf
            r2.isaac()
            int[] r0 = r2.results
            byte[] r0 = r2.intToByteLittle(r0)
            r2.keyStream = r0
        Lf:
            byte[] r0 = r2.keyStream
            int r1 = r2.index
            r0 = r0[r1]
            r3 = r3 ^ r0
            byte r3 = (byte) r3
            int r1 = r1 + 1
            r0 = r1 & 1023(0x3ff, float:1.434E-42)
            r2.index = r0
            return r3
    }
}
