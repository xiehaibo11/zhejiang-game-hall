package org.bouncycastle.crypto.macs;

public class CMac implements org.bouncycastle.crypto.Mac {
    private static final byte CONSTANT_128 = -121;
    private static final byte CONSTANT_64 = 27;
    private byte[] L;
    private byte[] Lu;
    private byte[] Lu2;
    private byte[] ZEROES;
    private byte[] buf;
    private int bufOff;
    private org.bouncycastle.crypto.BlockCipher cipher;
    private byte[] mac;
    private int macSize;

    public CMac(org.bouncycastle.crypto.BlockCipher r2) {
            r1 = this;
            int r0 = r2.getBlockSize()
            int r0 = r0 * 8
            r1.<init>(r2, r0)
            return
    }

    public CMac(org.bouncycastle.crypto.BlockCipher r4, int r5) {
            r3 = this;
            r3.<init>()
            int r0 = r5 % 8
            if (r0 != 0) goto L6b
            int r0 = r4.getBlockSize()
            r1 = 8
            int r0 = r0 * 8
            if (r5 > r0) goto L4e
            int r0 = r4.getBlockSize()
            if (r0 == r1) goto L28
            int r0 = r4.getBlockSize()
            r2 = 16
            if (r0 != r2) goto L20
            goto L28
        L20:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "Block size must be either 64 or 128 bits"
            r4.<init>(r5)
            throw r4
        L28:
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            r0.<init>(r4)
            r3.cipher = r0
            int r5 = r5 / r1
            r3.macSize = r5
            int r5 = r4.getBlockSize()
            byte[] r5 = new byte[r5]
            r3.mac = r5
            int r5 = r4.getBlockSize()
            byte[] r5 = new byte[r5]
            r3.buf = r5
            int r4 = r4.getBlockSize()
            byte[] r4 = new byte[r4]
            r3.ZEROES = r4
            r4 = 0
            r3.bufOff = r4
            return
        L4e:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "MAC size must be less or equal to "
            r0.append(r2)
            int r4 = r4.getBlockSize()
            int r4 = r4 * 8
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L6b:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "MAC size must be multiple of 8"
            r4.<init>(r5)
            throw r4
    }

    private final byte[] doubleLu(byte[] r7) {
            r6 = this;
            r0 = 0
            r1 = r7[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 >> 7
            int r2 = r7.length
            byte[] r2 = new byte[r2]
        La:
            int r3 = r7.length
            r4 = 1
            int r3 = r3 - r4
            if (r0 >= r3) goto L20
            r3 = r7[r0]
            int r3 = r3 << r4
            int r4 = r0 + 1
            r5 = r7[r4]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 >> 7
            int r3 = r3 + r5
            byte r3 = (byte) r3
            r2[r0] = r3
            r0 = r4
            goto La
        L20:
            int r0 = r7.length
            int r0 = r0 - r4
            int r3 = r7.length
            int r3 = r3 - r4
            r3 = r7[r3]
            int r3 = r3 << r4
            byte r3 = (byte) r3
            r2[r0] = r3
            if (r1 != r4) goto L3e
            int r0 = r7.length
            int r0 = r0 - r4
            r1 = r2[r0]
            int r7 = r7.length
            r3 = 16
            if (r7 != r3) goto L38
            r7 = -121(0xffffffffffffff87, float:NaN)
            goto L3a
        L38:
            r7 = 27
        L3a:
            r7 = r7 ^ r1
            byte r7 = (byte) r7
            r2[r0] = r7
        L3e:
            return r2
    }

    @Override
    public int doFinal(byte[] r7, int r8) {
            r6 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
            int r0 = r0.getBlockSize()
            int r1 = r6.bufOff
            if (r1 != r0) goto Ld
            byte[] r0 = r6.Lu
            goto L1b
        Ld:
            org.bouncycastle.crypto.paddings.ISO7816d4Padding r0 = new org.bouncycastle.crypto.paddings.ISO7816d4Padding
            r0.<init>()
            byte[] r1 = r6.buf
            int r2 = r6.bufOff
            r0.addPadding(r1, r2)
            byte[] r0 = r6.Lu2
        L1b:
            r1 = 0
            r2 = 0
        L1d:
            byte[] r3 = r6.mac
            int r4 = r3.length
            if (r2 >= r4) goto L2f
            byte[] r3 = r6.buf
            r4 = r3[r2]
            r5 = r0[r2]
            r4 = r4 ^ r5
            byte r4 = (byte) r4
            r3[r2] = r4
            int r2 = r2 + 1
            goto L1d
        L2f:
            org.bouncycastle.crypto.BlockCipher r0 = r6.cipher
            byte[] r2 = r6.buf
            r0.processBlock(r2, r1, r3, r1)
            byte[] r0 = r6.mac
            int r2 = r6.macSize
            java.lang.System.arraycopy(r0, r1, r7, r8, r2)
            r6.reset()
            int r7 = r6.macSize
            return r7
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.cipher
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
    public void init(org.bouncycastle.crypto.CipherParameters r6) {
            r5 = this;
            r5.reset()
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            r1 = 1
            r0.init(r1, r6)
            byte[] r0 = r5.ZEROES
            int r2 = r0.length
            byte[] r2 = new byte[r2]
            r5.L = r2
            org.bouncycastle.crypto.BlockCipher r3 = r5.cipher
            r4 = 0
            r3.processBlock(r0, r4, r2, r4)
            byte[] r0 = r5.L
            byte[] r0 = r5.doubleLu(r0)
            r5.Lu = r0
            byte[] r0 = r5.doubleLu(r0)
            r5.Lu2 = r0
            org.bouncycastle.crypto.BlockCipher r0 = r5.cipher
            r0.init(r1, r6)
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
