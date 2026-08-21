package org.bouncycastle.crypto.modes;

public class EAXBlockCipher implements org.bouncycastle.crypto.modes.AEADBlockCipher {
    private static final byte cTAG = 2;
    private static final byte hTAG = 1;
    private static final byte nTAG = 0;
    private byte[] associatedTextMac;
    private int blockSize;
    private byte[] bufBlock;
    private int bufOff;
    private org.bouncycastle.crypto.modes.SICBlockCipher cipher;
    private boolean forEncryption;
    private org.bouncycastle.crypto.Mac mac;
    private byte[] macBlock;
    private int macSize;
    private byte[] nonceMac;

    public EAXBlockCipher(org.bouncycastle.crypto.BlockCipher r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.getBlockSize()
            r3.blockSize = r0
            org.bouncycastle.crypto.macs.CMac r0 = new org.bouncycastle.crypto.macs.CMac
            r0.<init>(r4)
            r3.mac = r0
            int r1 = r3.blockSize
            byte[] r2 = new byte[r1]
            r3.macBlock = r2
            int r1 = r1 * 2
            byte[] r1 = new byte[r1]
            r3.bufBlock = r1
            int r0 = r0.getMacSize()
            byte[] r0 = new byte[r0]
            r3.associatedTextMac = r0
            org.bouncycastle.crypto.Mac r0 = r3.mac
            int r0 = r0.getMacSize()
            byte[] r0 = new byte[r0]
            r3.nonceMac = r0
            org.bouncycastle.crypto.modes.SICBlockCipher r0 = new org.bouncycastle.crypto.modes.SICBlockCipher
            r0.<init>(r4)
            r3.cipher = r0
            return
    }

    private void calculateMac() {
            r5 = this;
            int r0 = r5.blockSize
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Mac r1 = r5.mac
            r2 = 0
            r1.doFinal(r0, r2)
        La:
            byte[] r1 = r5.macBlock
            int r3 = r1.length
            if (r2 >= r3) goto L21
            byte[] r3 = r5.nonceMac
            r3 = r3[r2]
            byte[] r4 = r5.associatedTextMac
            r4 = r4[r2]
            r3 = r3 ^ r4
            r4 = r0[r2]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto La
        L21:
            return
    }

    private int process(byte r4, byte[] r5, int r6) {
            r3 = this;
            byte[] r0 = r3.bufBlock
            int r1 = r3.bufOff
            int r2 = r1 + 1
            r3.bufOff = r2
            r0[r1] = r4
            int r4 = r0.length
            r1 = 0
            if (r2 != r4) goto L39
            boolean r4 = r3.forEncryption
            if (r4 == 0) goto L20
            org.bouncycastle.crypto.modes.SICBlockCipher r4 = r3.cipher
            int r4 = r4.processBlock(r0, r1, r5, r6)
            org.bouncycastle.crypto.Mac r0 = r3.mac
            int r2 = r3.blockSize
            r0.update(r5, r6, r2)
            goto L2f
        L20:
            org.bouncycastle.crypto.Mac r4 = r3.mac
            int r2 = r3.blockSize
            r4.update(r0, r1, r2)
            org.bouncycastle.crypto.modes.SICBlockCipher r4 = r3.cipher
            byte[] r0 = r3.bufBlock
            int r4 = r4.processBlock(r0, r1, r5, r6)
        L2f:
            int r5 = r3.blockSize
            r3.bufOff = r5
            byte[] r6 = r3.bufBlock
            java.lang.System.arraycopy(r6, r5, r6, r1, r5)
            return r4
        L39:
            return r1
    }

    private boolean verifyMac(byte[] r5, int r6) {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            int r2 = r4.macSize
            if (r1 >= r2) goto L14
            byte[] r2 = r4.macBlock
            r2 = r2[r1]
            int r3 = r6 + r1
            r3 = r5[r3]
            if (r2 == r3) goto L11
            return r0
        L11:
            int r1 = r1 + 1
            goto L2
        L14:
            r5 = 1
            return r5
    }

    @Override
    public int doFinal(byte[] r7, int r8) throws java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
            r6 = this;
            int r0 = r6.bufOff
            byte[] r1 = r6.bufBlock
            int r2 = r1.length
            byte[] r2 = new byte[r2]
            r3 = 0
            r6.bufOff = r3
            boolean r4 = r6.forEncryption
            if (r4 == 0) goto L33
            org.bouncycastle.crypto.modes.SICBlockCipher r4 = r6.cipher
            r4.processBlock(r1, r3, r2, r3)
            org.bouncycastle.crypto.modes.SICBlockCipher r1 = r6.cipher
            byte[] r4 = r6.bufBlock
            int r5 = r6.blockSize
            r1.processBlock(r4, r5, r2, r5)
            java.lang.System.arraycopy(r2, r3, r7, r8, r0)
            org.bouncycastle.crypto.Mac r1 = r6.mac
            r1.update(r2, r3, r0)
            r6.calculateMac()
            byte[] r1 = r6.macBlock
            int r8 = r8 + r0
            int r2 = r6.macSize
            java.lang.System.arraycopy(r1, r3, r7, r8, r2)
            int r7 = r6.macSize
            int r0 = r0 + r7
            return r0
        L33:
            int r4 = r6.macSize
            if (r0 <= r4) goto L55
            org.bouncycastle.crypto.Mac r5 = r6.mac
            int r4 = r0 - r4
            r5.update(r1, r3, r4)
            org.bouncycastle.crypto.modes.SICBlockCipher r1 = r6.cipher
            byte[] r4 = r6.bufBlock
            r1.processBlock(r4, r3, r2, r3)
            org.bouncycastle.crypto.modes.SICBlockCipher r1 = r6.cipher
            byte[] r4 = r6.bufBlock
            int r5 = r6.blockSize
            r1.processBlock(r4, r5, r2, r5)
            int r1 = r6.macSize
            int r1 = r0 - r1
            java.lang.System.arraycopy(r2, r3, r7, r8, r1)
        L55:
            r6.calculateMac()
            byte[] r7 = r6.bufBlock
            int r8 = r6.macSize
            int r8 = r0 - r8
            boolean r7 = r6.verifyMac(r7, r8)
            if (r7 == 0) goto L68
            int r7 = r6.macSize
            int r0 = r0 - r7
            return r0
        L68:
            org.bouncycastle.crypto.InvalidCipherTextException r7 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r8 = "mac check in EAX failed"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.modes.SICBlockCipher r1 = r2.cipher
            org.bouncycastle.crypto.BlockCipher r1 = r1.getUnderlyingCipher()
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "/EAX"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public int getBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.modes.SICBlockCipher r0 = r1.cipher
            int r0 = r0.getBlockSize()
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
            if (r0 == 0) goto Lb
            int r0 = r1.bufOff
            int r2 = r2 + r0
            int r0 = r1.macSize
            int r2 = r2 + r0
            return r2
        Lb:
            int r0 = r1.bufOff
            int r2 = r2 + r0
            int r0 = r1.macSize
            int r2 = r2 - r0
            return r2
    }

    @Override
    public org.bouncycastle.crypto.BlockCipher getUnderlyingCipher() {
            r1 = this;
            org.bouncycastle.crypto.modes.SICBlockCipher r0 = r1.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            return r0
    }

    @Override
    public int getUpdateOutputSize(int r2) {
            r1 = this;
            int r0 = r1.bufOff
            int r2 = r2 + r0
            int r0 = r1.blockSize
            int r2 = r2 / r0
            int r2 = r2 * r0
            return r2
    }

    @Override
    public void init(boolean r8, org.bouncycastle.crypto.CipherParameters r9) throws java.lang.IllegalArgumentException {
            r7 = this;
            r7.forEncryption = r8
            boolean r8 = r9 instanceof org.bouncycastle.crypto.params.AEADParameters
            r0 = 2
            r1 = 0
            if (r8 == 0) goto L1f
            org.bouncycastle.crypto.params.AEADParameters r9 = (org.bouncycastle.crypto.params.AEADParameters) r9
            byte[] r8 = r9.getNonce()
            byte[] r2 = r9.getAssociatedText()
            int r3 = r9.getMacSize()
            int r3 = r3 / 8
            r7.macSize = r3
            org.bouncycastle.crypto.params.KeyParameter r9 = r9.getKey()
            goto L38
        L1f:
            boolean r8 = r9 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r8 == 0) goto L8a
            org.bouncycastle.crypto.params.ParametersWithIV r9 = (org.bouncycastle.crypto.params.ParametersWithIV) r9
            byte[] r8 = r9.getIV()
            byte[] r2 = new byte[r1]
            org.bouncycastle.crypto.Mac r3 = r7.mac
            int r3 = r3.getMacSize()
            int r3 = r3 / r0
            r7.macSize = r3
            org.bouncycastle.crypto.CipherParameters r9 = r9.getParameters()
        L38:
            int r3 = r7.blockSize
            byte[] r3 = new byte[r3]
            org.bouncycastle.crypto.Mac r4 = r7.mac
            r4.init(r9)
            int r4 = r7.blockSize
            int r5 = r4 + (-1)
            r6 = 1
            r3[r5] = r6
            org.bouncycastle.crypto.Mac r5 = r7.mac
            r5.update(r3, r1, r4)
            org.bouncycastle.crypto.Mac r4 = r7.mac
            int r5 = r2.length
            r4.update(r2, r1, r5)
            org.bouncycastle.crypto.Mac r2 = r7.mac
            byte[] r4 = r7.associatedTextMac
            r2.doFinal(r4, r1)
            int r2 = r7.blockSize
            int r4 = r2 + (-1)
            r3[r4] = r1
            org.bouncycastle.crypto.Mac r4 = r7.mac
            r4.update(r3, r1, r2)
            org.bouncycastle.crypto.Mac r2 = r7.mac
            int r4 = r8.length
            r2.update(r8, r1, r4)
            org.bouncycastle.crypto.Mac r8 = r7.mac
            byte[] r2 = r7.nonceMac
            r8.doFinal(r2, r1)
            int r8 = r7.blockSize
            int r2 = r8 + (-1)
            r3[r2] = r0
            org.bouncycastle.crypto.Mac r0 = r7.mac
            r0.update(r3, r1, r8)
            org.bouncycastle.crypto.modes.SICBlockCipher r8 = r7.cipher
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r1 = r7.nonceMac
            r0.<init>(r9, r1)
            r8.init(r6, r0)
            return
        L8a:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "invalid parameters passed to EAX"
            r8.<init>(r9)
            throw r8
    }

    @Override
    public int processByte(byte r1, byte[] r2, int r3) throws org.bouncycastle.crypto.DataLengthException {
            r0 = this;
            int r1 = r0.process(r1, r2, r3)
            return r1
    }

    @Override
    public int processBytes(byte[] r5, int r6, int r7, byte[] r8, int r9) throws org.bouncycastle.crypto.DataLengthException {
            r4 = this;
            r0 = 0
            r1 = 0
        L2:
            if (r0 == r7) goto L12
            int r2 = r6 + r0
            r2 = r5[r2]
            int r3 = r9 + r1
            int r2 = r4.process(r2, r8, r3)
            int r1 = r1 + r2
            int r0 = r0 + 1
            goto L2
        L12:
            return r1
    }

    @Override
    public void reset() {
            r1 = this;
            org.bouncycastle.crypto.modes.SICBlockCipher r0 = r1.cipher
            r0.reset()
            org.bouncycastle.crypto.Mac r0 = r1.mac
            r0.reset()
            r0 = 0
            r1.bufOff = r0
            return
    }
}
