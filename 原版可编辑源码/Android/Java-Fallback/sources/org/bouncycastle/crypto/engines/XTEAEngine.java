package org.bouncycastle.crypto.engines;

public class XTEAEngine implements org.bouncycastle.crypto.BlockCipher {
    private static final int block_size = 8;
    private static final int d_sum = -957401312;
    private static final int delta = -1640531527;
    private static final int key_size = 16;
    private static final int rounds = 32;
    private int[] _S;
    private boolean _forEncryption;
    private boolean _initialised;

    public XTEAEngine() {
            r1 = this;
            r1.<init>()
            r0 = 4
            int[] r0 = new int[r0]
            r1._S = r0
            r0 = 0
            r1._initialised = r0
            return
    }

    private int bytesToInt(byte[] r3, int r4) {
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

    private int decryptBlock(byte[] r6, int r7, byte[] r8, int r9) {
            r5 = this;
            int r0 = r5.bytesToInt(r6, r7)
            int r7 = r7 + 4
            int r6 = r5.bytesToInt(r6, r7)
            r7 = -957401312(0xffffffffc6ef3720, float:-30619.562)
            r1 = 0
        Le:
            r2 = 32
            if (r1 == r2) goto L37
            int r2 = r0 << 4
            int r3 = r0 >>> 5
            r2 = r2 ^ r3
            int r2 = r2 + r0
            int[] r3 = r5._S
            int r4 = r7 >>> 11
            r4 = r4 & 3
            r4 = r3[r4]
            int r4 = r4 + r7
            r2 = r2 ^ r4
            int r6 = r6 - r2
            r2 = 1640531527(0x61c88647, float:4.6237806E20)
            int r7 = r7 + r2
            int r2 = r6 << 4
            int r4 = r6 >>> 5
            r2 = r2 ^ r4
            int r2 = r2 + r6
            r4 = r7 & 3
            r3 = r3[r4]
            int r3 = r3 + r7
            r2 = r2 ^ r3
            int r0 = r0 - r2
            int r1 = r1 + 1
            goto Le
        L37:
            r5.unpackInt(r0, r8, r9)
            int r9 = r9 + 4
            r5.unpackInt(r6, r8, r9)
            r6 = 8
            return r6
    }

    private int encryptBlock(byte[] r6, int r7, byte[] r8, int r9) {
            r5 = this;
            int r0 = r5.bytesToInt(r6, r7)
            int r7 = r7 + 4
            int r6 = r5.bytesToInt(r6, r7)
            r7 = 0
            r1 = r0
            r0 = 0
        Ld:
            r2 = 32
            if (r7 == r2) goto L36
            int r2 = r6 << 4
            int r3 = r6 >>> 5
            r2 = r2 ^ r3
            int r2 = r2 + r6
            int[] r3 = r5._S
            r4 = r0 & 3
            r4 = r3[r4]
            int r4 = r4 + r0
            r2 = r2 ^ r4
            int r1 = r1 + r2
            r2 = 1640531527(0x61c88647, float:4.6237806E20)
            int r0 = r0 - r2
            int r2 = r1 << 4
            int r4 = r1 >>> 5
            r2 = r2 ^ r4
            int r2 = r2 + r1
            int r4 = r0 >>> 11
            r4 = r4 & 3
            r3 = r3[r4]
            int r3 = r3 + r0
            r2 = r2 ^ r3
            int r6 = r6 + r2
            int r7 = r7 + 1
            goto Ld
        L36:
            r5.unpackInt(r1, r8, r9)
            int r9 = r9 + 4
            r5.unpackInt(r6, r8, r9)
            r6 = 8
            return r6
    }

    private void setKey(byte[] r4) {
            r3 = this;
            int[] r0 = r3._S
            r1 = 0
            int r2 = r3.bytesToInt(r4, r1)
            r0[r1] = r2
            int[] r0 = r3._S
            r1 = 4
            int r1 = r3.bytesToInt(r4, r1)
            r2 = 1
            r0[r2] = r1
            int[] r0 = r3._S
            r1 = 8
            int r1 = r3.bytesToInt(r4, r1)
            r2 = 2
            r0[r2] = r1
            int[] r0 = r3._S
            r1 = 12
            int r4 = r3.bytesToInt(r4, r1)
            r1 = 3
            r0[r1] = r4
            return
    }

    private void unpackInt(int r3, byte[] r4, int r5) {
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

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "XTEA"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 8
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
            java.lang.String r1 = "invalid parameter passed to TEA init - "
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
            int r0 = r4 + 8
            int r1 = r3.length
            if (r0 > r1) goto L24
            int r0 = r6 + 8
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
