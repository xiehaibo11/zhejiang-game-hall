package org.bouncycastle.crypto.modes;

public class CCMBlockCipher implements org.bouncycastle.crypto.modes.AEADBlockCipher {
    private byte[] associatedText;
    private int blockSize;
    private org.bouncycastle.crypto.BlockCipher cipher;
    private java.io.ByteArrayOutputStream data;
    private boolean forEncryption;
    private org.bouncycastle.crypto.CipherParameters keyParam;
    private byte[] macBlock;
    private int macSize;
    private byte[] nonce;

    public CCMBlockCipher(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            r1.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1.data = r0
            r1.cipher = r2
            int r2 = r2.getBlockSize()
            r1.blockSize = r2
            byte[] r0 = new byte[r2]
            r1.macBlock = r0
            r0 = 16
            if (r2 != r0) goto L1b
            return
        L1b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "cipher required with a block size of 16."
            r2.<init>(r0)
            throw r2
    }

    private int calculateMac(byte[] r11, int r12, int r13, byte[] r14) {
            r10 = this;
            org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
            org.bouncycastle.crypto.BlockCipher r1 = r10.cipher
            int r2 = r10.macSize
            int r2 = r2 * 8
            r0.<init>(r1, r2)
            org.bouncycastle.crypto.CipherParameters r1 = r10.keyParam
            r0.init(r1)
            r1 = 16
            byte[] r2 = new byte[r1]
            boolean r3 = r10.hasAssociatedText()
            r4 = 0
            if (r3 == 0) goto L22
            r3 = r2[r4]
            r3 = r3 | 64
            byte r3 = (byte) r3
            r2[r4] = r3
        L22:
            r3 = r2[r4]
            int r5 = r0.getMacSize()
            r6 = 2
            int r5 = r5 - r6
            int r5 = r5 / r6
            r5 = r5 & 7
            int r5 = r5 << 3
            r3 = r3 | r5
            byte r3 = (byte) r3
            r2[r4] = r3
            r3 = r2[r4]
            byte[] r5 = r10.nonce
            int r7 = r5.length
            int r7 = 15 - r7
            r8 = 1
            int r7 = r7 - r8
            r7 = r7 & 7
            r3 = r3 | r7
            byte r3 = (byte) r3
            r2[r4] = r3
            int r3 = r5.length
            java.lang.System.arraycopy(r5, r4, r2, r8, r3)
            r3 = r13
            r5 = 1
        L48:
            if (r3 <= 0) goto L55
            int r7 = 16 - r5
            r9 = r3 & 255(0xff, float:3.57E-43)
            byte r9 = (byte) r9
            r2[r7] = r9
            int r3 = r3 >>> 8
            int r5 = r5 + r8
            goto L48
        L55:
            r0.update(r2, r4, r1)
            boolean r2 = r10.hasAssociatedText()
            if (r2 == 0) goto Lb7
            byte[] r2 = r10.associatedText
            int r3 = r2.length
            r5 = 65280(0xff00, float:9.1477E-41)
            if (r3 >= r5) goto L75
            int r2 = r2.length
            int r2 = r2 >> 8
            byte r2 = (byte) r2
            r0.update(r2)
            byte[] r2 = r10.associatedText
            int r2 = r2.length
            byte r2 = (byte) r2
            r0.update(r2)
            goto L9f
        L75:
            r2 = -1
            r0.update(r2)
            r2 = -2
            r0.update(r2)
            byte[] r2 = r10.associatedText
            int r2 = r2.length
            int r2 = r2 >> 24
            byte r2 = (byte) r2
            r0.update(r2)
            byte[] r2 = r10.associatedText
            int r2 = r2.length
            int r2 = r2 >> r1
            byte r2 = (byte) r2
            r0.update(r2)
            byte[] r2 = r10.associatedText
            int r2 = r2.length
            int r2 = r2 >> 8
            byte r2 = (byte) r2
            r0.update(r2)
            byte[] r2 = r10.associatedText
            int r2 = r2.length
            byte r2 = (byte) r2
            r0.update(r2)
            r6 = 6
        L9f:
            byte[] r2 = r10.associatedText
            int r3 = r2.length
            r0.update(r2, r4, r3)
            byte[] r2 = r10.associatedText
            int r2 = r2.length
            int r6 = r6 + r2
            int r6 = r6 % r1
            if (r6 == 0) goto Lb7
            r2 = 0
        Lad:
            int r3 = 16 - r6
            if (r2 == r3) goto Lb7
            r0.update(r4)
            int r2 = r2 + 1
            goto Lad
        Lb7:
            r0.update(r11, r12, r13)
            int r11 = r0.doFinal(r14, r4)
            return r11
    }

    private boolean hasAssociatedText() {
            r1 = this;
            byte[] r0 = r1.associatedText
            if (r0 == 0) goto L9
            int r0 = r0.length
            if (r0 == 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public int doFinal(byte[] r4, int r5) throws java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = r3.data
            byte[] r0 = r0.toByteArray()
            int r1 = r0.length
            r2 = 0
            byte[] r0 = r3.processPacket(r0, r2, r1)
            int r1 = r0.length
            java.lang.System.arraycopy(r0, r2, r4, r5, r1)
            r3.reset()
            int r4 = r0.length
            return r4
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.BlockCipher r1 = r2.cipher
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/CCM"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public byte[] getMac() {
            r4 = this;
            int r0 = r4.macSize
            byte[] r1 = new byte[r0]
            byte[] r2 = r4.macBlock
            r3 = 0
            java.lang.System.arraycopy(r2, r3, r1, r3, r0)
            return r1
    }

    @Override
    public int getOutputSize(int r2) {
            r1 = this;
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto Lf
            java.io.ByteArrayOutputStream r0 = r1.data
            int r0 = r0.size()
            int r0 = r0 + r2
            int r2 = r1.macSize
            int r0 = r0 + r2
            return r0
        Lf:
            java.io.ByteArrayOutputStream r0 = r1.data
            int r0 = r0.size()
            int r0 = r0 + r2
            int r2 = r1.macSize
            int r0 = r0 - r2
            return r0
    }

    @Override
    public org.bouncycastle.crypto.BlockCipher getUnderlyingCipher() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            return r0
    }

    @Override
    public int getUpdateOutputSize(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) throws java.lang.IllegalArgumentException {
            r0 = this;
            r0.forEncryption = r1
            boolean r1 = r2 instanceof org.bouncycastle.crypto.params.AEADParameters
            if (r1 == 0) goto L23
            org.bouncycastle.crypto.params.AEADParameters r2 = (org.bouncycastle.crypto.params.AEADParameters) r2
            byte[] r1 = r2.getNonce()
            r0.nonce = r1
            byte[] r1 = r2.getAssociatedText()
            r0.associatedText = r1
            int r1 = r2.getMacSize()
            int r1 = r1 / 8
            r0.macSize = r1
            org.bouncycastle.crypto.params.KeyParameter r1 = r2.getKey()
        L20:
            r0.keyParam = r1
            goto L3e
        L23:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r1 == 0) goto L3f
            org.bouncycastle.crypto.params.ParametersWithIV r2 = (org.bouncycastle.crypto.params.ParametersWithIV) r2
            byte[] r1 = r2.getIV()
            r0.nonce = r1
            r1 = 0
            r0.associatedText = r1
            byte[] r1 = r0.macBlock
            int r1 = r1.length
            int r1 = r1 / 2
            r0.macSize = r1
            org.bouncycastle.crypto.CipherParameters r1 = r2.getParameters()
            goto L20
        L3e:
            return
        L3f:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "invalid parameters passed to CCM"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public int processByte(byte r1, byte[] r2, int r3) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r0 = this;
            java.io.ByteArrayOutputStream r2 = r0.data
            r2.write(r1)
            r1 = 0
            return r1
    }

    @Override
    public int processBytes(byte[] r1, int r2, int r3, byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException, java.lang.IllegalStateException {
            r0 = this;
            java.io.ByteArrayOutputStream r4 = r0.data
            r4.write(r1, r2, r3)
            r1 = 0
            return r1
    }

    public byte[] processPacket(byte[] r8, int r9, int r10) throws java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
            r7 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r7.keyParam
            if (r0 == 0) goto Lb5
            org.bouncycastle.crypto.modes.SICBlockCipher r0 = new org.bouncycastle.crypto.modes.SICBlockCipher
            org.bouncycastle.crypto.BlockCipher r1 = r7.cipher
            r0.<init>(r1)
            int r1 = r7.blockSize
            byte[] r1 = new byte[r1]
            byte[] r2 = r7.nonce
            int r3 = r2.length
            int r3 = 15 - r3
            r4 = 1
            int r3 = r3 - r4
            r3 = r3 & 7
            byte r3 = (byte) r3
            r5 = 0
            r1[r5] = r3
            int r3 = r2.length
            java.lang.System.arraycopy(r2, r5, r1, r4, r3)
            boolean r2 = r7.forEncryption
            org.bouncycastle.crypto.params.ParametersWithIV r3 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.CipherParameters r4 = r7.keyParam
            r3.<init>(r4, r1)
            r0.init(r2, r3)
            boolean r1 = r7.forEncryption
            if (r1 == 0) goto L62
            int r1 = r7.macSize
            int r1 = r1 + r10
            byte[] r2 = new byte[r1]
            byte[] r3 = r7.macBlock
            r7.calculateMac(r8, r9, r10, r3)
            byte[] r3 = r7.macBlock
            r0.processBlock(r3, r5, r3, r5)
            r3 = 0
        L40:
            int r4 = r7.blockSize
            int r6 = r10 - r4
            if (r9 >= r6) goto L4e
            r0.processBlock(r8, r9, r2, r3)
            int r4 = r7.blockSize
            int r3 = r3 + r4
            int r9 = r9 + r4
            goto L40
        L4e:
            byte[] r4 = new byte[r4]
            int r10 = r10 - r9
            java.lang.System.arraycopy(r8, r9, r4, r5, r10)
            r0.processBlock(r4, r5, r4, r5)
            java.lang.System.arraycopy(r4, r5, r2, r3, r10)
            int r3 = r3 + r10
            byte[] r8 = r7.macBlock
            int r1 = r1 - r3
            java.lang.System.arraycopy(r8, r5, r2, r3, r1)
            goto Lac
        L62:
            int r1 = r7.macSize
            int r2 = r10 - r1
            byte[] r3 = new byte[r2]
            int r10 = r10 + r9
            int r10 = r10 - r1
            byte[] r4 = r7.macBlock
            java.lang.System.arraycopy(r8, r10, r4, r5, r1)
            byte[] r10 = r7.macBlock
            r0.processBlock(r10, r5, r10, r5)
            int r10 = r7.macSize
        L76:
            byte[] r1 = r7.macBlock
            int r4 = r1.length
            if (r10 == r4) goto L80
            r1[r10] = r5
            int r10 = r10 + 1
            goto L76
        L80:
            r10 = 0
        L81:
            int r1 = r7.blockSize
            int r4 = r2 - r1
            if (r10 >= r4) goto L8f
            r0.processBlock(r8, r9, r3, r10)
            int r1 = r7.blockSize
            int r10 = r10 + r1
            int r9 = r9 + r1
            goto L81
        L8f:
            byte[] r1 = new byte[r1]
            int r4 = r2 - r10
            java.lang.System.arraycopy(r8, r9, r1, r5, r4)
            r0.processBlock(r1, r5, r1, r5)
            java.lang.System.arraycopy(r1, r5, r3, r10, r4)
            int r8 = r7.blockSize
            byte[] r8 = new byte[r8]
            r7.calculateMac(r3, r5, r2, r8)
            byte[] r9 = r7.macBlock
            boolean r8 = org.bouncycastle.util.Arrays.areEqual(r9, r8)
            if (r8 == 0) goto Lad
            r2 = r3
        Lac:
            return r2
        Lad:
            org.bouncycastle.crypto.InvalidCipherTextException r8 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r9 = "mac check in CCM failed"
            r8.<init>(r9)
            throw r8
        Lb5:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "CCM cipher unitialized."
            r8.<init>(r9)
            throw r8
    }

    @Override
    public void reset() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
            r0.reset()
            java.io.ByteArrayOutputStream r0 = r1.data
            r0.reset()
            return
    }
}
