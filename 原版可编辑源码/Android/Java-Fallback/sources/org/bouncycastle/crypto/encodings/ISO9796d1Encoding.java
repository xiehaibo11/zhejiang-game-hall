package org.bouncycastle.crypto.encodings;

public class ISO9796d1Encoding implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private static byte[] inverse;
    private static byte[] shadows;
    private int bitSize;
    private org.bouncycastle.crypto.AsymmetricBlockCipher engine;
    private boolean forEncryption;
    private int padBits;

    static {
            r0 = 16
            byte[] r1 = new byte[r0]
            r1 = {x0012: FILL_ARRAY_DATA , data: [14, 3, 5, 8, 9, 4, 2, 15, 0, 13, 11, 6, 7, 10, 12, 1} // fill-array
            org.bouncycastle.crypto.encodings.ISO9796d1Encoding.shadows = r1
            byte[] r0 = new byte[r0]
            r0 = {x001e: FILL_ARRAY_DATA , data: [8, 15, 6, 1, 5, 2, 11, 12, 3, 4, 13, 10, 14, 9, 0, 7} // fill-array
            org.bouncycastle.crypto.encodings.ISO9796d1Encoding.inverse = r0
            return
    }

    public ISO9796d1Encoding(org.bouncycastle.crypto.AsymmetricBlockCipher r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.padBits = r0
            r1.engine = r2
            return
    }

    private byte[] decodeBlock(byte[] r9, int r10, int r11) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r8 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r8.engine
            byte[] r9 = r0.processBlock(r9, r10, r11)
            int r10 = r8.bitSize
            int r10 = r10 + 13
            int r10 = r10 / 16
            int r11 = r9.length
            r0 = 1
            int r11 = r11 - r0
            r11 = r9[r11]
            r11 = r11 & 15
            r1 = 6
            if (r11 != r1) goto L9f
            int r11 = r9.length
            int r11 = r11 - r0
            int r1 = r9.length
            int r1 = r1 - r0
            r1 = r9[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 >>> 4
            byte[] r2 = org.bouncycastle.crypto.encodings.ISO9796d1Encoding.inverse
            int r3 = r9.length
            int r3 = r3 + (-2)
            r3 = r9[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 >> 4
            r2 = r2[r3]
            int r2 = r2 << 4
            r1 = r1 | r2
            byte r1 = (byte) r1
            r9[r11] = r1
            byte[] r11 = org.bouncycastle.crypto.encodings.ISO9796d1Encoding.shadows
            r1 = r9[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 >>> 4
            r1 = r11[r1]
            int r1 = r1 << 4
            r2 = r9[r0]
            r2 = r2 & 15
            r11 = r11[r2]
            r11 = r11 | r1
            byte r11 = (byte) r11
            r1 = 0
            r9[r1] = r11
            int r11 = r9.length
            int r11 = r11 - r0
            r2 = 0
            r3 = 0
            r4 = 1
        L4f:
            int r5 = r9.length
            int r6 = r10 * 2
            int r5 = r5 - r6
            if (r11 < r5) goto L86
            byte[] r5 = org.bouncycastle.crypto.encodings.ISO9796d1Encoding.shadows
            r6 = r9[r11]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r6 = r6 >>> 4
            r6 = r5[r6]
            int r6 = r6 << 4
            r7 = r9[r11]
            r7 = r7 & 15
            r5 = r5[r7]
            r5 = r5 | r6
            int r6 = r11 + (-1)
            r7 = r9[r6]
            r7 = r7 ^ r5
            r7 = r7 & 255(0xff, float:3.57E-43)
            if (r7 == 0) goto L83
            if (r3 != 0) goto L7b
            r2 = r9[r6]
            r2 = r2 ^ r5
            r4 = r2 & 255(0xff, float:3.57E-43)
            r2 = r6
            r3 = 1
            goto L83
        L7b:
            org.bouncycastle.crypto.InvalidCipherTextException r9 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r10 = "invalid tsums in block"
            r9.<init>(r10)
            throw r9
        L83:
            int r11 = r11 + (-2)
            goto L4f
        L86:
            r9[r2] = r1
            int r10 = r9.length
            int r10 = r10 - r2
            int r10 = r10 / 2
            byte[] r11 = new byte[r10]
        L8e:
            if (r1 >= r10) goto L9b
            int r3 = r1 * 2
            int r3 = r3 + r2
            int r3 = r3 + r0
            r3 = r9[r3]
            r11[r1] = r3
            int r1 = r1 + 1
            goto L8e
        L9b:
            int r4 = r4 - r0
            r8.padBits = r4
            return r11
        L9f:
            org.bouncycastle.crypto.InvalidCipherTextException r9 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r10 = "invalid forcing byte in block"
            r9.<init>(r10)
            throw r9
    }

    private byte[] encodeBlock(byte[] r12, int r13, int r14) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r11 = this;
            int r0 = r11.bitSize
            int r1 = r0 + 7
            r2 = 8
            int r1 = r1 / r2
            byte[] r3 = new byte[r1]
            int r4 = r11.padBits
            r5 = 1
            int r4 = r4 + r5
            int r0 = r0 + 13
            int r0 = r0 / 16
            r6 = 0
            r7 = 0
        L13:
            if (r7 >= r0) goto L2d
            int r8 = r0 - r14
            if (r7 <= r8) goto L24
            int r8 = r13 + r14
            int r9 = r0 - r7
            int r8 = r8 - r9
            int r10 = r1 - r0
            java.lang.System.arraycopy(r12, r8, r3, r10, r9)
            goto L2b
        L24:
            int r8 = r7 + r14
            int r8 = r1 - r8
            java.lang.System.arraycopy(r12, r13, r3, r8, r14)
        L2b:
            int r7 = r7 + r14
            goto L13
        L2d:
            int r12 = r0 * 2
            int r12 = r1 - r12
        L31:
            if (r12 == r1) goto L53
            int r13 = r1 - r0
            int r7 = r12 / 2
            int r13 = r13 + r7
            r13 = r3[r13]
            byte[] r7 = org.bouncycastle.crypto.encodings.ISO9796d1Encoding.shadows
            r8 = r13 & 255(0xff, float:3.57E-43)
            int r8 = r8 >>> 4
            r8 = r7[r8]
            int r8 = r8 << 4
            r9 = r13 & 15
            r7 = r7[r9]
            r7 = r7 | r8
            byte r7 = (byte) r7
            r3[r12] = r7
            int r7 = r12 + 1
            r3[r7] = r13
            int r12 = r12 + 2
            goto L31
        L53:
            int r14 = r14 * 2
            int r12 = r1 - r14
            r13 = r3[r12]
            r13 = r13 ^ r4
            byte r13 = (byte) r13
            r3[r12] = r13
            int r12 = r1 + (-1)
            r13 = r3[r12]
            int r13 = r13 << 4
            r13 = r13 | 6
            byte r13 = (byte) r13
            r3[r12] = r13
            int r12 = r11.bitSize
            int r12 = r12 - r5
            int r12 = r12 % r2
            int r12 = 8 - r12
            r13 = 128(0x80, float:1.8E-43)
            if (r12 == r2) goto L85
            r14 = r3[r6]
            r0 = 255(0xff, float:3.57E-43)
            int r0 = r0 >>> r12
            r14 = r14 & r0
            byte r14 = (byte) r14
            r3[r6] = r14
            r14 = r3[r6]
            int r12 = r13 >>> r12
            r12 = r12 | r14
            byte r12 = (byte) r12
            r3[r6] = r12
            r5 = 0
            goto L8d
        L85:
            r3[r6] = r6
            r12 = r3[r5]
            r12 = r12 | r13
            byte r12 = (byte) r12
            r3[r5] = r12
        L8d:
            org.bouncycastle.crypto.AsymmetricBlockCipher r12 = r11.engine
            int r1 = r1 - r5
            byte[] r12 = r12.processBlock(r3, r5, r1)
            return r12
    }

    @Override
    public int getInputBlockSize() {
            r2 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r2.engine
            int r0 = r0.getInputBlockSize()
            boolean r1 = r2.forEncryption
            if (r1 == 0) goto Le
            int r0 = r0 + 1
            int r0 = r0 / 2
        Le:
            return r0
    }

    @Override
    public int getOutputBlockSize() {
            r2 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r2.engine
            int r0 = r0.getOutputBlockSize()
            boolean r1 = r2.forEncryption
            if (r1 == 0) goto Lb
            return r0
        Lb:
            int r0 = r0 + 1
            int r0 = r0 / 2
            return r0
    }

    public int getPadBits() {
            r1 = this;
            int r0 = r1.padBits
            return r0
    }

    public org.bouncycastle.crypto.AsymmetricBlockCipher getUnderlyingCipher() {
            r1 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.engine
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto Le
            r0 = r4
            org.bouncycastle.crypto.params.ParametersWithRandom r0 = (org.bouncycastle.crypto.params.ParametersWithRandom) r0
            org.bouncycastle.crypto.CipherParameters r0 = r0.getParameters()
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = (org.bouncycastle.crypto.params.RSAKeyParameters) r0
            goto L11
        Le:
            r0 = r4
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = (org.bouncycastle.crypto.params.RSAKeyParameters) r0
        L11:
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r2.engine
            r1.init(r3, r4)
            java.math.BigInteger r4 = r0.getModulus()
            int r4 = r4.bitLength()
            r2.bitSize = r4
            r2.forEncryption = r3
            return
    }

    @Override
    public byte[] processBlock(byte[] r2, int r3, int r4) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r1 = this;
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto L9
            byte[] r2 = r1.encodeBlock(r2, r3, r4)
            return r2
        L9:
            byte[] r2 = r1.decodeBlock(r2, r3, r4)
            return r2
    }

    public void setPadBits(int r2) {
            r1 = this;
            r0 = 7
            if (r2 > r0) goto L6
            r1.padBits = r2
            return
        L6:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "padBits > 7"
            r2.<init>(r0)
            throw r2
    }
}
