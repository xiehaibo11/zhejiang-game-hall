package org.bouncycastle.crypto.macs;

public class CFBBlockCipherMac implements org.bouncycastle.crypto.Mac {
    private byte[] buf;
    private int bufOff;
    private org.bouncycastle.crypto.macs.MacCFBBlockCipher cipher;
    private byte[] mac;
    private int macSize;
    private org.bouncycastle.crypto.paddings.BlockCipherPadding padding;

    public CFBBlockCipherMac(org.bouncycastle.crypto.BlockCipher r4) {
            r3 = this;
            int r0 = r4.getBlockSize()
            r1 = 8
            int r0 = r0 * 8
            int r0 = r0 / 2
            r2 = 0
            r3.<init>(r4, r1, r0, r2)
            return
    }

    public CFBBlockCipherMac(org.bouncycastle.crypto.BlockCipher r2, int r3, int r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public CFBBlockCipherMac(org.bouncycastle.crypto.BlockCipher r2, int r3, int r4, org.bouncycastle.crypto.paddings.BlockCipherPadding r5) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.padding = r0
            int r0 = r4 % 8
            if (r0 != 0) goto L2b
            int r0 = r2.getBlockSize()
            byte[] r0 = new byte[r0]
            r1.mac = r0
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = new org.bouncycastle.crypto.macs.MacCFBBlockCipher
            r0.<init>(r2, r3)
            r1.cipher = r0
            r1.padding = r5
            int r4 = r4 / 8
            r1.macSize = r4
            int r2 = r0.getBlockSize()
            byte[] r2 = new byte[r2]
            r1.buf = r2
            r2 = 0
            r1.bufOff = r2
            return
        L2b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "MAC size must be multiple of 8"
            r2.<init>(r3)
            throw r2
    }

    public CFBBlockCipherMac(org.bouncycastle.crypto.BlockCipher r3, org.bouncycastle.crypto.paddings.BlockCipherPadding r4) {
            r2 = this;
            int r0 = r3.getBlockSize()
            r1 = 8
            int r0 = r0 * 8
            int r0 = r0 / 2
            r2.<init>(r3, r1, r0, r4)
            return
    }

    @Override
    public int doFinal(byte[] r5, int r6) {
            r4 = this;
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r4.cipher
            int r0 = r0.getBlockSize()
            org.bouncycastle.crypto.paddings.BlockCipherPadding r1 = r4.padding
            r2 = 0
            if (r1 != 0) goto L18
        Lb:
            int r1 = r4.bufOff
            if (r1 >= r0) goto L1f
            byte[] r3 = r4.buf
            r3[r1] = r2
            int r1 = r1 + 1
            r4.bufOff = r1
            goto Lb
        L18:
            byte[] r0 = r4.buf
            int r3 = r4.bufOff
            r1.addPadding(r0, r3)
        L1f:
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r4.cipher
            byte[] r1 = r4.buf
            byte[] r3 = r4.mac
            r0.processBlock(r1, r2, r3, r2)
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r4.cipher
            byte[] r1 = r4.mac
            r0.getMacBlock(r1)
            byte[] r0 = r4.mac
            int r1 = r4.macSize
            java.lang.System.arraycopy(r0, r2, r5, r6, r1)
            r4.reset()
            int r5 = r4.macSize
            return r5
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r1.cipher
            java.lang.String r0 = r0.getAlgorithmName()
            return r0
    }

    @Override
    public int getMacSize() {
            r1 = this;
            int r0 = r1.macSize
            return r0
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r2) {
            r1 = this;
            r1.reset()
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r1.cipher
            r0.init(r2)
            return
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
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r4.cipher
            r0.reset()
            return
    }

    @Override
    public void update(byte r5) {
            r4 = this;
            int r0 = r4.bufOff
            byte[] r1 = r4.buf
            int r2 = r1.length
            if (r0 != r2) goto L11
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r4.cipher
            byte[] r2 = r4.mac
            r3 = 0
            r0.processBlock(r1, r3, r2, r3)
            r4.bufOff = r3
        L11:
            byte[] r0 = r4.buf
            int r1 = r4.bufOff
            int r2 = r1 + 1
            r4.bufOff = r2
            r0[r1] = r5
            return
    }

    @Override
    public void update(byte[] r7, int r8, int r9) {
            r6 = this;
            if (r9 < 0) goto L3a
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r0 = r6.cipher
            int r0 = r0.getBlockSize()
            int r1 = r6.bufOff
            int r2 = r0 - r1
            if (r9 <= r2) goto L2d
            byte[] r3 = r6.buf
            java.lang.System.arraycopy(r7, r8, r3, r1, r2)
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r1 = r6.cipher
            byte[] r3 = r6.buf
            byte[] r4 = r6.mac
            r5 = 0
            r1.processBlock(r3, r5, r4, r5)
            r6.bufOff = r5
            int r9 = r9 - r2
            int r8 = r8 + r2
        L21:
            if (r9 <= r0) goto L2d
            org.bouncycastle.crypto.macs.MacCFBBlockCipher r1 = r6.cipher
            byte[] r2 = r6.mac
            r1.processBlock(r7, r8, r2, r5)
            int r9 = r9 - r0
            int r8 = r8 + r0
            goto L21
        L2d:
            byte[] r0 = r6.buf
            int r1 = r6.bufOff
            java.lang.System.arraycopy(r7, r8, r0, r1, r9)
            int r7 = r6.bufOff
            int r7 = r7 + r9
            r6.bufOff = r7
            return
        L3a:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Can't have a negative input length!"
            r7.<init>(r8)
            throw r7
    }
}
