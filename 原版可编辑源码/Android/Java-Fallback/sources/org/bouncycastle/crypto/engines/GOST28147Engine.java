package org.bouncycastle.crypto.engines;

public class GOST28147Engine implements org.bouncycastle.crypto.BlockCipher {
    protected static final int BLOCK_SIZE = 8;
    private static byte[] DSbox_A;
    private static byte[] DSbox_Test;
    private static byte[] ESbox_A;
    private static byte[] ESbox_B;
    private static byte[] ESbox_C;
    private static byte[] ESbox_D;
    private static byte[] ESbox_Test;
    private static java.util.Hashtable sBoxes;
    private byte[] S;
    private boolean forEncryption;
    private int[] workingKey;

    static {
            r0 = 128(0x80, float:1.8E-43)
            byte[] r1 = new byte[r0]
            r1 = {x0078: FILL_ARRAY_DATA , data: [4, 2, 15, 5, 9, 1, 0, 8, 14, 3, 11, 12, 13, 7, 10, 6, 12, 9, 15, 14, 8, 1, 3, 10, 2, 7, 4, 13, 6, 0, 11, 5, 13, 8, 14, 12, 7, 3, 9, 10, 1, 5, 2, 4, 6, 15, 0, 11, 14, 9, 11, 2, 5, 15, 7, 1, 0, 13, 12, 6, 10, 4, 3, 8, 3, 14, 5, 9, 6, 8, 0, 13, 10, 11, 7, 12, 2, 1, 15, 4, 8, 15, 6, 11, 1, 9, 12, 5, 13, 3, 7, 10, 0, 14, 2, 4, 9, 11, 12, 0, 3, 6, 7, 5, 4, 8, 14, 15, 1, 10, 2, 13, 12, 6, 5, 2, 11, 0, 9, 13, 3, 14, 7, 10, 15, 4, 1, 8} // fill-array
            org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_Test = r1
            byte[] r1 = new byte[r0]
            r1 = {x00bc: FILL_ARRAY_DATA , data: [9, 6, 3, 2, 8, 11, 1, 7, 10, 4, 14, 15, 12, 0, 13, 5, 3, 7, 14, 9, 8, 10, 15, 0, 5, 2, 6, 12, 11, 4, 13, 1, 14, 4, 6, 2, 11, 3, 13, 8, 12, 15, 5, 10, 0, 7, 1, 9, 14, 7, 10, 12, 13, 1, 3, 9, 0, 2, 11, 4, 15, 8, 5, 6, 11, 5, 1, 9, 8, 13, 15, 0, 14, 4, 2, 3, 12, 7, 10, 6, 3, 10, 13, 12, 1, 2, 0, 11, 7, 5, 9, 4, 8, 15, 14, 6, 1, 13, 2, 9, 7, 10, 6, 0, 8, 12, 4, 5, 15, 3, 11, 14, 11, 10, 15, 5, 0, 12, 14, 8, 6, 2, 3, 9, 1, 7, 13, 4} // fill-array
            org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_A = r1
            byte[] r1 = new byte[r0]
            r1 = {x0100: FILL_ARRAY_DATA , data: [8, 4, 11, 1, 3, 5, 0, 9, 2, 14, 10, 12, 13, 6, 7, 15, 0, 1, 2, 10, 4, 13, 5, 12, 9, 7, 3, 15, 11, 8, 6, 14, 14, 12, 0, 10, 9, 2, 13, 11, 7, 5, 8, 15, 3, 6, 1, 4, 7, 5, 0, 13, 11, 6, 1, 2, 3, 10, 12, 15, 4, 14, 9, 8, 2, 7, 12, 15, 9, 5, 10, 11, 1, 4, 0, 13, 6, 8, 14, 3, 8, 3, 2, 6, 4, 13, 14, 11, 12, 1, 7, 15, 10, 0, 9, 5, 5, 2, 10, 11, 9, 1, 12, 3, 7, 4, 13, 0, 6, 15, 8, 14, 0, 4, 11, 14, 8, 3, 7, 1, 10, 2, 9, 6, 15, 13, 5, 12} // fill-array
            org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_B = r1
            byte[] r1 = new byte[r0]
            r1 = {x0144: FILL_ARRAY_DATA , data: [1, 11, 12, 2, 9, 13, 0, 15, 4, 5, 8, 14, 10, 7, 6, 3, 0, 1, 7, 13, 11, 4, 5, 2, 8, 14, 15, 12, 9, 10, 6, 3, 8, 2, 5, 0, 4, 9, 15, 10, 3, 7, 12, 13, 6, 14, 1, 11, 3, 6, 0, 1, 5, 13, 10, 8, 11, 2, 9, 7, 14, 15, 12, 4, 8, 13, 11, 0, 4, 5, 1, 2, 9, 3, 12, 14, 6, 15, 10, 7, 12, 9, 11, 1, 8, 14, 2, 4, 7, 3, 6, 5, 10, 0, 15, 13, 10, 9, 6, 8, 13, 14, 2, 0, 15, 3, 5, 11, 4, 1, 12, 7, 7, 4, 0, 5, 10, 2, 15, 14, 12, 6, 1, 11, 13, 9, 3, 8} // fill-array
            org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_C = r1
            byte[] r1 = new byte[r0]
            r1 = {x0188: FILL_ARRAY_DATA , data: [15, 12, 2, 10, 6, 4, 5, 0, 7, 9, 14, 13, 1, 11, 8, 3, 11, 6, 3, 4, 12, 15, 14, 2, 7, 13, 8, 0, 5, 10, 9, 1, 1, 12, 11, 0, 15, 14, 6, 5, 10, 13, 4, 8, 9, 3, 7, 2, 1, 5, 14, 12, 10, 7, 0, 13, 6, 2, 11, 4, 9, 3, 15, 8, 0, 12, 8, 9, 13, 2, 10, 11, 7, 3, 6, 5, 4, 14, 15, 1, 8, 0, 15, 3, 2, 5, 14, 11, 1, 10, 4, 7, 12, 9, 13, 6, 3, 0, 6, 15, 1, 14, 9, 2, 13, 8, 12, 4, 11, 10, 5, 7, 1, 10, 6, 8, 15, 11, 0, 4, 12, 3, 5, 9, 7, 13, 2, 14} // fill-array
            org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_D = r1
            byte[] r1 = new byte[r0]
            r1 = {x01cc: FILL_ARRAY_DATA , data: [4, 10, 9, 2, 13, 8, 0, 14, 6, 11, 1, 12, 7, 15, 5, 3, 14, 11, 4, 12, 6, 13, 15, 10, 2, 3, 8, 1, 0, 7, 5, 9, 5, 8, 1, 13, 10, 3, 4, 2, 14, 15, 12, 7, 6, 0, 9, 11, 7, 13, 10, 1, 0, 8, 9, 15, 14, 4, 6, 12, 11, 2, 5, 3, 6, 12, 7, 1, 5, 15, 13, 8, 4, 10, 9, 14, 0, 3, 11, 2, 4, 11, 10, 0, 7, 2, 1, 13, 3, 6, 8, 5, 9, 12, 15, 14, 13, 11, 4, 1, 3, 15, 5, 9, 0, 10, 14, 7, 6, 8, 2, 12, 1, 15, 13, 0, 5, 7, 10, 4, 9, 2, 3, 14, 6, 11, 8, 12} // fill-array
            org.bouncycastle.crypto.engines.GOST28147Engine.DSbox_Test = r1
            byte[] r0 = new byte[r0]
            r0 = {x0210: FILL_ARRAY_DATA , data: [10, 4, 5, 6, 8, 1, 3, 7, 13, 12, 14, 0, 9, 2, 11, 15, 5, 15, 4, 0, 2, 13, 11, 9, 1, 7, 6, 3, 12, 14, 10, 8, 7, 15, 12, 14, 9, 4, 1, 0, 3, 11, 5, 2, 6, 10, 8, 13, 4, 10, 7, 12, 0, 15, 2, 8, 14, 1, 6, 5, 13, 11, 9, 3, 7, 6, 4, 11, 9, 12, 2, 10, 1, 8, 0, 14, 15, 13, 3, 5, 7, 6, 2, 4, 13, 9, 15, 0, 10, 1, 5, 11, 8, 14, 12, 3, 13, 14, 4, 1, 7, 0, 5, 10, 3, 12, 8, 15, 6, 2, 9, 11, 1, 3, 10, 9, 5, 11, 4, 15, 8, 6, 7, 14, 13, 0, 2, 12} // fill-array
            org.bouncycastle.crypto.engines.GOST28147Engine.DSbox_A = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes = r0
            byte[] r1 = org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_Test
            java.lang.String r2 = "E-TEST"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes
            byte[] r1 = org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_A
            java.lang.String r2 = "E-A"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes
            byte[] r1 = org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_B
            java.lang.String r2 = "E-B"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes
            byte[] r1 = org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_C
            java.lang.String r2 = "E-C"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes
            byte[] r1 = org.bouncycastle.crypto.engines.GOST28147Engine.ESbox_D
            java.lang.String r2 = "E-D"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes
            byte[] r1 = org.bouncycastle.crypto.engines.GOST28147Engine.DSbox_Test
            java.lang.String r2 = "D-TEST"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes
            byte[] r1 = org.bouncycastle.crypto.engines.GOST28147Engine.DSbox_A
            java.lang.String r2 = "D-A"
            r0.put(r2, r1)
            return
    }

    public GOST28147Engine() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.workingKey = r0
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = new byte[r0]
            r0 = {x0010: FILL_ARRAY_DATA , data: [4, 10, 9, 2, 13, 8, 0, 14, 6, 11, 1, 12, 7, 15, 5, 3, 14, 11, 4, 12, 6, 13, 15, 10, 2, 3, 8, 1, 0, 7, 5, 9, 5, 8, 1, 13, 10, 3, 4, 2, 14, 15, 12, 7, 6, 0, 9, 11, 7, 13, 10, 1, 0, 8, 9, 15, 14, 4, 6, 12, 11, 2, 5, 3, 6, 12, 7, 1, 5, 15, 13, 8, 4, 10, 9, 14, 0, 3, 11, 2, 4, 11, 10, 0, 7, 2, 1, 13, 3, 6, 8, 5, 9, 12, 15, 14, 13, 11, 4, 1, 3, 15, 5, 9, 0, 10, 14, 7, 6, 8, 2, 12, 1, 15, 13, 0, 5, 7, 10, 4, 9, 2, 3, 14, 6, 11, 8, 12} // fill-array
            r1.S = r0
            return
    }

    private void GOST28147Func(int[] r9, byte[] r10, int r11, byte[] r12, int r13) {
            r8 = this;
            int r0 = r8.bytesToint(r10, r11)
            int r11 = r11 + 4
            int r10 = r8.bytesToint(r10, r11)
            boolean r11 = r8.forEncryption
            r1 = 7
            r2 = 3
            r3 = 8
            r4 = 0
            if (r11 == 0) goto L3a
            r11 = 0
        L14:
            if (r11 >= r2) goto L29
            r5 = 0
        L17:
            if (r5 >= r3) goto L26
            r6 = r9[r5]
            int r6 = r8.GOST28147_mainStep(r0, r6)
            r10 = r10 ^ r6
            int r5 = r5 + 1
            r7 = r0
            r0 = r10
            r10 = r7
            goto L17
        L26:
            int r11 = r11 + 1
            goto L14
        L29:
            r11 = r10
            r10 = r0
        L2b:
            if (r1 <= 0) goto L68
            r0 = r9[r1]
            int r0 = r8.GOST28147_mainStep(r10, r0)
            r11 = r11 ^ r0
            int r1 = r1 + (-1)
            r7 = r11
            r11 = r10
            r10 = r7
            goto L2b
        L3a:
            r11 = 0
        L3b:
            if (r11 >= r3) goto L4a
            r5 = r9[r11]
            int r5 = r8.GOST28147_mainStep(r0, r5)
            r10 = r10 ^ r5
            int r11 = r11 + 1
            r7 = r0
            r0 = r10
            r10 = r7
            goto L3b
        L4a:
            r11 = r10
            r10 = r0
            r0 = 0
        L4d:
            if (r0 >= r2) goto L68
            r3 = 7
        L50:
            if (r3 < 0) goto L65
            r5 = 2
            if (r0 != r5) goto L58
            if (r3 != 0) goto L58
            goto L65
        L58:
            r5 = r9[r3]
            int r5 = r8.GOST28147_mainStep(r10, r5)
            r11 = r11 ^ r5
            int r3 = r3 + (-1)
            r7 = r11
            r11 = r10
            r10 = r7
            goto L50
        L65:
            int r0 = r0 + 1
            goto L4d
        L68:
            r9 = r9[r4]
            int r9 = r8.GOST28147_mainStep(r10, r9)
            r9 = r9 ^ r11
            r8.intTobytes(r10, r12, r13)
            int r13 = r13 + 4
            r8.intTobytes(r9, r12, r13)
            return
    }

    private int GOST28147_mainStep(int r3, int r4) {
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

    private int[] generateWorkingKey(boolean r4, byte[] r5) {
            r3 = this;
            r3.forEncryption = r4
            int r4 = r5.length
            r0 = 32
            if (r4 != r0) goto L1a
            r4 = 8
            int[] r0 = new int[r4]
            r1 = 0
        Lc:
            if (r1 == r4) goto L19
            int r2 = r1 * 4
            int r2 = r3.bytesToint(r5, r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto Lc
        L19:
            return r0
        L1a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "Key length invalid. Key needs to be 32 byte - 256 bit!!!"
            r4.<init>(r5)
            throw r4
    }

    public static byte[] getSBox(java.lang.String r3) {
            java.util.Hashtable r0 = org.bouncycastle.crypto.engines.GOST28147Engine.sBoxes
            java.lang.String r3 = org.bouncycastle.util.Strings.toUpperCase(r3)
            java.lang.Object r3 = r0.get(r3)
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            if (r3 == 0) goto L18
            int r0 = r3.length
            byte[] r1 = new byte[r0]
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r1, r2, r0)
            return r1
        L18:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown S-Box - possible types: \"E-Test\", \"E-A\", \"E-B\", \"E-C\", \"E-D\", \"D-Test\", \"D-A\"."
            r3.<init>(r0)
            throw r3
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
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "GOST28147"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 8
            return r0
    }

    @Override
    public void init(boolean r5, org.bouncycastle.crypto.CipherParameters r6) {
            r4 = this;
            boolean r0 = r6 instanceof org.bouncycastle.crypto.params.ParametersWithSBox
            if (r0 == 0) goto L2c
            org.bouncycastle.crypto.params.ParametersWithSBox r6 = (org.bouncycastle.crypto.params.ParametersWithSBox) r6
            byte[] r0 = r6.getSBox()
            byte[] r1 = r4.S
            byte[] r2 = r6.getSBox()
            int r2 = r2.length
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            org.bouncycastle.crypto.CipherParameters r0 = r6.getParameters()
            if (r0 == 0) goto L3c
            org.bouncycastle.crypto.CipherParameters r6 = r6.getParameters()
            org.bouncycastle.crypto.params.KeyParameter r6 = (org.bouncycastle.crypto.params.KeyParameter) r6
            byte[] r6 = r6.getKey()
            int[] r5 = r4.generateWorkingKey(r5, r6)
            r4.workingKey = r5
            goto L3c
        L2c:
            boolean r0 = r6 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L3d
            org.bouncycastle.crypto.params.KeyParameter r6 = (org.bouncycastle.crypto.params.KeyParameter) r6
            byte[] r6 = r6.getKey()
            int[] r5 = r4.generateWorkingKey(r5, r6)
            r4.workingKey = r5
        L3c:
            return
        L3d:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to GOST28147 init - "
            r0.append(r1)
            java.lang.Class r6 = r6.getClass()
            java.lang.String r6 = r6.getName()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.<init>(r6)
            throw r5
    }

    @Override
    public int processBlock(byte[] r7, int r8, byte[] r9, int r10) {
            r6 = this;
            int[] r1 = r6.workingKey
            if (r1 == 0) goto L29
            int r0 = r8 + 8
            int r2 = r7.length
            if (r0 > r2) goto L21
            int r0 = r10 + 8
            int r2 = r9.length
            if (r0 > r2) goto L19
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.GOST28147Func(r1, r2, r3, r4, r5)
            r7 = 8
            return r7
        L19:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "output buffer too short"
            r7.<init>(r8)
            throw r7
        L21:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "input buffer too short"
            r7.<init>(r8)
            throw r7
        L29:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "GOST28147 engine not initialised"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
