package org.bouncycastle.crypto.macs;

public class ISO9797Alg3Mac implements org.bouncycastle.crypto.Mac {
    private byte[] buf;
    private int bufOff;
    private org.bouncycastle.crypto.BlockCipher cipher;
    private org.bouncycastle.crypto.params.KeyParameter lastKey2;
    private org.bouncycastle.crypto.params.KeyParameter lastKey3;
    private byte[] mac;
    private int macSize;
    private org.bouncycastle.crypto.paddings.BlockCipherPadding padding;

    public ISO9797Alg3Mac(org.bouncycastle.crypto.BlockCipher r3) {
            r2 = this;
            int r0 = r3.getBlockSize()
            int r0 = r0 * 8
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public ISO9797Alg3Mac(org.bouncycastle.crypto.BlockCipher r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ISO9797Alg3Mac(org.bouncycastle.crypto.BlockCipher r2, int r3, org.bouncycastle.crypto.paddings.BlockCipherPadding r4) {
            r1 = this;
            r1.<init>()
            int r0 = r3 % 8
            if (r0 != 0) goto L34
            boolean r0 = r2 instanceof org.bouncycastle.crypto.engines.DESEngine
            if (r0 == 0) goto L2c
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            r0.<init>(r2)
            r1.cipher = r0
            r1.padding = r4
            int r3 = r3 / 8
            r1.macSize = r3
            int r3 = r2.getBlockSize()
            byte[] r3 = new byte[r3]
            r1.mac = r3
            int r2 = r2.getBlockSize()
            byte[] r2 = new byte[r2]
            r1.buf = r2
            r2 = 0
            r1.bufOff = r2
            return
        L2c:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "cipher must be instance of DESEngine"
            r2.<init>(r3)
            throw r2
        L34:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "MAC size must be multiple of 8"
            r2.<init>(r3)
            throw r2
    }

    public ISO9797Alg3Mac(org.bouncycastle.crypto.BlockCipher r2, org.bouncycastle.crypto.paddings.BlockCipherPadding r3) {
            r1 = this;
            int r0 = r2.getBlockSize()
            int r0 = r0 * 8
            r1.<init>(r2, r0, r3)
            return
    }

    @Override
    public int doFinal(byte[] r5, int r6) {
            r4 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            int r0 = r0.getBlockSize()
            org.bouncycastle.crypto.paddings.BlockCipherPadding r1 = r4.padding
            r2 = 0
            if (r1 != 0) goto L18
        Lb:
            int r1 = r4.bufOff
            if (r1 >= r0) goto L30
            byte[] r3 = r4.buf
            r3[r1] = r2
            int r1 = r1 + 1
            r4.bufOff = r1
            goto Lb
        L18:
            int r1 = r4.bufOff
            if (r1 != r0) goto L27
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            byte[] r1 = r4.buf
            byte[] r3 = r4.mac
            r0.processBlock(r1, r2, r3, r2)
            r4.bufOff = r2
        L27:
            org.bouncycastle.crypto.paddings.BlockCipherPadding r0 = r4.padding
            byte[] r1 = r4.buf
            int r3 = r4.bufOff
            r0.addPadding(r1, r3)
        L30:
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
            byte[] r1 = r4.buf
            byte[] r3 = r4.mac
            r0.processBlock(r1, r2, r3, r2)
            org.bouncycastle.crypto.engines.DESEngine r0 = new org.bouncycastle.crypto.engines.DESEngine
            r0.<init>()
            org.bouncycastle.crypto.params.KeyParameter r1 = r4.lastKey2
            r0.init(r2, r1)
            byte[] r1 = r4.mac
            r0.processBlock(r1, r2, r1, r2)
            org.bouncycastle.crypto.params.KeyParameter r1 = r4.lastKey3
            r3 = 1
            r0.init(r3, r1)
            byte[] r1 = r4.mac
            r0.processBlock(r1, r2, r1, r2)
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
            java.lang.String r0 = "ISO9797Alg3"
            return r0
    }

    @Override
    public int getMacSize() {
            r1 = this;
            int r0 = r1.macSize
            return r0
    }

    @Override
    public void init(org.bouncycastle.crypto.CipherParameters r6) {
            r5 = this;
            r5.reset()
            boolean r0 = r6 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L4b
            org.bouncycastle.crypto.params.KeyParameter r6 = (org.bouncycastle.crypto.params.KeyParameter) r6
            byte[] r6 = r6.getKey()
            int r0 = r6.length
            r1 = 0
            r2 = 16
            r3 = 8
            if (r0 != r2) goto L24
            org.bouncycastle.crypto.params.KeyParameter r0 = new org.bouncycastle.crypto.params.KeyParameter
            r0.<init>(r6, r1, r3)
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r1.<init>(r6, r3, r3)
            r5.lastKey2 = r1
            r5.lastKey3 = r0
            goto L3c
        L24:
            int r0 = r6.length
            r4 = 24
            if (r0 != r4) goto L43
            org.bouncycastle.crypto.params.KeyParameter r0 = new org.bouncycastle.crypto.params.KeyParameter
            r0.<init>(r6, r1, r3)
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r1.<init>(r6, r3, r3)
            r5.lastKey2 = r1
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r1.<init>(r6, r2, r3)
            r5.lastKey3 = r1
        L3c:
            org.bouncycastle.crypto.BlockCipher r6 = r5.cipher
            r1 = 1
            r6.init(r1, r0)
            return
        L43:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Key must be either 112 or 168 bit long"
            r6.<init>(r0)
            throw r6
        L4b:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "params must be an instance of KeyParameter"
            r6.<init>(r0)
            throw r6
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
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
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
            org.bouncycastle.crypto.BlockCipher r0 = r4.cipher
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
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
            int r0 = r0.getBlockSize()
            int r1 = r6.bufOff
            int r2 = r0 - r1
            if (r9 <= r2) goto L2d
            byte[] r3 = r6.buf
            java.lang.System.arraycopy(r7, r8, r3, r1, r2)
            org.bouncycastle.crypto.BlockCipher r1 = r6.cipher
            byte[] r3 = r6.buf
            byte[] r4 = r6.mac
            r5 = 0
            r1.processBlock(r3, r5, r4, r5)
            r6.bufOff = r5
            int r9 = r9 - r2
            int r8 = r8 + r2
        L21:
            if (r9 <= r0) goto L2d
            org.bouncycastle.crypto.BlockCipher r1 = r6.cipher
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
