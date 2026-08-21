package org.bouncycastle.crypto.engines;

public class NoekeonEngine implements org.bouncycastle.crypto.BlockCipher {
    private static final int genericSize = 16;
    private static final int[] nullVector = null;
    private static final int[] roundConstants = null;
    private boolean _forEncryption;
    private boolean _initialised;
    private int[] decryptKeys;
    private int[] state;
    private int[] subKeys;

    static {
            r0 = 4
            int[] r0 = new int[r0]
            r0 = {x0012: FILL_ARRAY_DATA , data: [0, 0, 0, 0} // fill-array
            org.bouncycastle.crypto.engines.NoekeonEngine.nullVector = r0
            r0 = 17
            int[] r0 = new int[r0]
            r0 = {x001e: FILL_ARRAY_DATA , data: [128, 27, 54, 108, 216, 171, 77, 154, 47, 94, 188, 99, 198, 151, 53, 106, 212} // fill-array
            org.bouncycastle.crypto.engines.NoekeonEngine.roundConstants = r0
            return
    }

    public NoekeonEngine() {
            r2 = this;
            r2.<init>()
            r0 = 4
            int[] r1 = new int[r0]
            r2.state = r1
            int[] r1 = new int[r0]
            r2.subKeys = r1
            int[] r0 = new int[r0]
            r2.decryptKeys = r0
            r0 = 0
            r2._initialised = r0
            return
    }

    private int bytesToIntBig(byte[] r3, int r4) {
            r2 = this;
            int r0 = r4 + 1
            r4 = r3[r4]
            int r4 = r4 << 24
            int r1 = r0 + 1
            r0 = r3[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 16
            r4 = r4 | r0
            int r0 = r1 + 1
            r1 = r3[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r4 = r4 | r1
            r3 = r3[r0]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r3 | r4
            return r3
    }

    private int decryptBlock(byte[] r8, int r9, byte[] r10, int r11) {
            r7 = this;
            int[] r0 = r7.state
            int r1 = r7.bytesToIntBig(r8, r9)
            r2 = 0
            r0[r2] = r1
            int[] r0 = r7.state
            int r1 = r9 + 4
            int r1 = r7.bytesToIntBig(r8, r1)
            r3 = 1
            r0[r3] = r1
            int[] r0 = r7.state
            int r1 = r9 + 8
            int r1 = r7.bytesToIntBig(r8, r1)
            r4 = 2
            r0[r4] = r1
            int[] r0 = r7.state
            int r9 = r9 + 12
            int r8 = r7.bytesToIntBig(r8, r9)
            r9 = 3
            r0[r9] = r8
            int[] r8 = r7.subKeys
            int[] r0 = r7.decryptKeys
            int r1 = r8.length
            java.lang.System.arraycopy(r8, r2, r0, r2, r1)
            int[] r8 = r7.decryptKeys
            int[] r0 = org.bouncycastle.crypto.engines.NoekeonEngine.nullVector
            r7.theta(r8, r0)
            r8 = 16
            r0 = 16
        L3d:
            int[] r1 = r7.state
            int[] r5 = r7.decryptKeys
            if (r0 <= 0) goto L61
            r7.theta(r1, r5)
            int[] r1 = r7.state
            r5 = r1[r2]
            int[] r6 = org.bouncycastle.crypto.engines.NoekeonEngine.roundConstants
            r6 = r6[r0]
            r5 = r5 ^ r6
            r1[r2] = r5
            r7.pi1(r1)
            int[] r1 = r7.state
            r7.gamma(r1)
            int[] r1 = r7.state
            r7.pi2(r1)
            int r0 = r0 + (-1)
            goto L3d
        L61:
            r7.theta(r1, r5)
            int[] r1 = r7.state
            r5 = r1[r2]
            int[] r6 = org.bouncycastle.crypto.engines.NoekeonEngine.roundConstants
            r0 = r6[r0]
            r0 = r0 ^ r5
            r1[r2] = r0
            r0 = r1[r2]
            r7.intToBytesBig(r0, r10, r11)
            int[] r0 = r7.state
            r0 = r0[r3]
            int r1 = r11 + 4
            r7.intToBytesBig(r0, r10, r1)
            int[] r0 = r7.state
            r0 = r0[r4]
            int r1 = r11 + 8
            r7.intToBytesBig(r0, r10, r1)
            int[] r0 = r7.state
            r9 = r0[r9]
            int r11 = r11 + 12
            r7.intToBytesBig(r9, r10, r11)
            return r8
    }

    private int encryptBlock(byte[] r8, int r9, byte[] r10, int r11) {
            r7 = this;
            int[] r0 = r7.state
            int r1 = r7.bytesToIntBig(r8, r9)
            r2 = 0
            r0[r2] = r1
            int[] r0 = r7.state
            int r1 = r9 + 4
            int r1 = r7.bytesToIntBig(r8, r1)
            r3 = 1
            r0[r3] = r1
            int[] r0 = r7.state
            int r1 = r9 + 8
            int r1 = r7.bytesToIntBig(r8, r1)
            r4 = 2
            r0[r4] = r1
            int[] r0 = r7.state
            int r9 = r9 + 12
            int r8 = r7.bytesToIntBig(r8, r9)
            r9 = 3
            r0[r9] = r8
            r8 = 0
        L2b:
            r0 = 16
            if (r8 >= r0) goto L51
            int[] r0 = r7.state
            r1 = r0[r2]
            int[] r5 = org.bouncycastle.crypto.engines.NoekeonEngine.roundConstants
            r5 = r5[r8]
            r1 = r1 ^ r5
            r0[r2] = r1
            int[] r1 = r7.subKeys
            r7.theta(r0, r1)
            int[] r0 = r7.state
            r7.pi1(r0)
            int[] r0 = r7.state
            r7.gamma(r0)
            int[] r0 = r7.state
            r7.pi2(r0)
            int r8 = r8 + 1
            goto L2b
        L51:
            int[] r1 = r7.state
            r5 = r1[r2]
            int[] r6 = org.bouncycastle.crypto.engines.NoekeonEngine.roundConstants
            r8 = r6[r8]
            r8 = r8 ^ r5
            r1[r2] = r8
            int[] r8 = r7.subKeys
            r7.theta(r1, r8)
            int[] r8 = r7.state
            r8 = r8[r2]
            r7.intToBytesBig(r8, r10, r11)
            int[] r8 = r7.state
            r8 = r8[r3]
            int r1 = r11 + 4
            r7.intToBytesBig(r8, r10, r1)
            int[] r8 = r7.state
            r8 = r8[r4]
            int r1 = r11 + 8
            r7.intToBytesBig(r8, r10, r1)
            int[] r8 = r7.state
            r8 = r8[r9]
            int r11 = r11 + 12
            r7.intToBytesBig(r8, r10, r11)
            return r0
    }

    private void gamma(int[] r8) {
            r7 = this;
            r0 = 1
            r1 = r8[r0]
            r2 = 3
            r3 = r8[r2]
            int r3 = ~r3
            r4 = 2
            r5 = r8[r4]
            int r5 = ~r5
            r3 = r3 & r5
            r1 = r1 ^ r3
            r8[r0] = r1
            r1 = 0
            r3 = r8[r1]
            r5 = r8[r4]
            r6 = r8[r0]
            r5 = r5 & r6
            r3 = r3 ^ r5
            r8[r1] = r3
            r3 = r8[r2]
            r5 = r8[r1]
            r8[r2] = r5
            r8[r1] = r3
            r3 = r8[r4]
            r5 = r8[r1]
            r6 = r8[r0]
            r5 = r5 ^ r6
            r6 = r8[r2]
            r5 = r5 ^ r6
            r3 = r3 ^ r5
            r8[r4] = r3
            r3 = r8[r0]
            r2 = r8[r2]
            int r2 = ~r2
            r5 = r8[r4]
            int r5 = ~r5
            r2 = r2 & r5
            r2 = r2 ^ r3
            r8[r0] = r2
            r2 = r8[r1]
            r3 = r8[r4]
            r0 = r8[r0]
            r0 = r0 & r3
            r0 = r0 ^ r2
            r8[r1] = r0
            return
    }

    private void intToBytesBig(int r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r5 + 1
            int r1 = r3 >>> 24
            byte r1 = (byte) r1
            r4[r5] = r1
            int r5 = r0 + 1
            int r1 = r3 >>> 16
            byte r1 = (byte) r1
            r4[r0] = r1
            int r0 = r5 + 1
            int r1 = r3 >>> 8
            byte r1 = (byte) r1
            r4[r5] = r1
            byte r3 = (byte) r3
            r4[r0] = r3
            return
    }

    private void pi1(int[] r4) {
            r3 = this;
            r0 = 1
            r1 = r4[r0]
            int r1 = r3.rotl(r1, r0)
            r4[r0] = r1
            r0 = 2
            r1 = r4[r0]
            r2 = 5
            int r1 = r3.rotl(r1, r2)
            r4[r0] = r1
            r1 = 3
            r2 = r4[r1]
            int r0 = r3.rotl(r2, r0)
            r4[r1] = r0
            return
    }

    private void pi2(int[] r4) {
            r3 = this;
            r0 = 1
            r1 = r4[r0]
            r2 = 31
            int r1 = r3.rotl(r1, r2)
            r4[r0] = r1
            r0 = 2
            r1 = r4[r0]
            r2 = 27
            int r1 = r3.rotl(r1, r2)
            r4[r0] = r1
            r0 = 3
            r1 = r4[r0]
            r2 = 30
            int r1 = r3.rotl(r1, r2)
            r4[r0] = r1
            return
    }

    private int rotl(int r2, int r3) {
            r1 = this;
            int r0 = r2 << r3
            int r3 = 32 - r3
            int r2 = r2 >>> r3
            r2 = r2 | r0
            return r2
    }

    private void setKey(byte[] r4) {
            r3 = this;
            int[] r0 = r3.subKeys
            r1 = 0
            int r2 = r3.bytesToIntBig(r4, r1)
            r0[r1] = r2
            int[] r0 = r3.subKeys
            r1 = 4
            int r1 = r3.bytesToIntBig(r4, r1)
            r2 = 1
            r0[r2] = r1
            int[] r0 = r3.subKeys
            r1 = 8
            int r1 = r3.bytesToIntBig(r4, r1)
            r2 = 2
            r0[r2] = r1
            int[] r0 = r3.subKeys
            r1 = 12
            int r4 = r3.bytesToIntBig(r4, r1)
            r1 = 3
            r0[r1] = r4
            return
    }

    private void theta(int[] r10, int[] r11) {
            r9 = this;
            r0 = 0
            r1 = r10[r0]
            r2 = 2
            r3 = r10[r2]
            r1 = r1 ^ r3
            r3 = 8
            int r4 = r9.rotl(r1, r3)
            r5 = 24
            int r6 = r9.rotl(r1, r5)
            r4 = r4 ^ r6
            r1 = r1 ^ r4
            r4 = 1
            r6 = r10[r4]
            r6 = r6 ^ r1
            r10[r4] = r6
            r6 = 3
            r7 = r10[r6]
            r1 = r1 ^ r7
            r10[r6] = r1
            r1 = 0
        L22:
            r7 = 4
            if (r1 >= r7) goto L2f
            r7 = r10[r1]
            r8 = r11[r1]
            r7 = r7 ^ r8
            r10[r1] = r7
            int r1 = r1 + 1
            goto L22
        L2f:
            r11 = r10[r4]
            r1 = r10[r6]
            r11 = r11 ^ r1
            int r1 = r9.rotl(r11, r3)
            int r3 = r9.rotl(r11, r5)
            r1 = r1 ^ r3
            r11 = r11 ^ r1
            r1 = r10[r0]
            r1 = r1 ^ r11
            r10[r0] = r1
            r0 = r10[r2]
            r11 = r11 ^ r0
            r10[r2] = r11
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "Noekeon"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 16
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L13
            r2._forEncryption = r3
            r3 = 1
            r2._initialised = r3
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r3 = r4.getKey()
            r2.setKey(r3)
            return
        L13:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to Noekeon init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public int processBlock(byte[] r3, int r4, byte[] r5, int r6) {
            r2 = this;
            boolean r0 = r2._initialised
            if (r0 == 0) goto L2c
            int r0 = r4 + 16
            int r1 = r3.length
            if (r0 > r1) goto L24
            int r0 = r6 + 16
            int r1 = r5.length
            if (r0 > r1) goto L1c
            boolean r0 = r2._forEncryption
            if (r0 == 0) goto L17
            int r3 = r2.encryptBlock(r3, r4, r5, r6)
            goto L1b
        L17:
            int r3 = r2.decryptBlock(r3, r4, r5, r6)
        L1b:
            return r3
        L1c:
            org.bouncycastle.crypto.DataLengthException r3 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r4 = "output buffer too short"
            r3.<init>(r4)
            throw r3
        L24:
            org.bouncycastle.crypto.DataLengthException r3 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r4 = "input buffer too short"
            r3.<init>(r4)
            throw r3
        L2c:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r2.getAlgorithmName()
            r4.append(r5)
            java.lang.String r5 = " not initialised"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
