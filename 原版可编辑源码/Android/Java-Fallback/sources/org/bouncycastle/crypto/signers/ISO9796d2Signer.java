package org.bouncycastle.crypto.signers;

public class ISO9796d2Signer implements org.bouncycastle.crypto.SignerWithRecovery {
    public static final int TRAILER_IMPLICIT = 188;
    public static final int TRAILER_RIPEMD128 = 13004;
    public static final int TRAILER_RIPEMD160 = 12748;
    public static final int TRAILER_SHA1 = 13260;
    private byte[] block;
    private org.bouncycastle.crypto.AsymmetricBlockCipher cipher;
    private org.bouncycastle.crypto.Digest digest;
    private boolean fullMessage;
    private int keyBits;
    private byte[] mBuf;
    private int messageLength;
    private byte[] recoveredMessage;
    private int trailer;

    public ISO9796d2Signer(org.bouncycastle.crypto.AsymmetricBlockCipher r2, org.bouncycastle.crypto.Digest r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ISO9796d2Signer(org.bouncycastle.crypto.AsymmetricBlockCipher r1, org.bouncycastle.crypto.Digest r2, boolean r3) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            r0.digest = r2
            if (r3 == 0) goto Le
            r1 = 188(0xbc, float:2.63E-43)
        Lb:
            r0.trailer = r1
            goto L23
        Le:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.digests.SHA1Digest
            if (r1 == 0) goto L15
            r1 = 13260(0x33cc, float:1.8581E-41)
            goto Lb
        L15:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.digests.RIPEMD160Digest
            if (r1 == 0) goto L1c
            r1 = 12748(0x31cc, float:1.7864E-41)
            goto Lb
        L1c:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.digests.RIPEMD128Digest
            if (r1 == 0) goto L24
            r1 = 13004(0x32cc, float:1.8222E-41)
            goto Lb
        L23:
            return
        L24:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "no valid trailer for digest"
            r1.<init>(r2)
            throw r1
    }

    private void clearBlock(byte[] r4) {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            int r2 = r4.length
            if (r1 == r2) goto La
            r4[r1] = r0
            int r1 = r1 + 1
            goto L2
        La:
            return
    }

    private boolean isSameAs(byte[] r5, byte[] r6) {
            r4 = this;
            int r0 = r4.messageLength
            byte[] r1 = r4.mBuf
            int r2 = r1.length
            r3 = 0
            if (r0 <= r2) goto L1d
            int r0 = r1.length
            int r1 = r6.length
            if (r0 <= r1) goto Ld
            return r3
        Ld:
            r0 = 0
        Le:
            byte[] r1 = r4.mBuf
            int r1 = r1.length
            if (r0 == r1) goto L2f
            r1 = r5[r0]
            r2 = r6[r0]
            if (r1 == r2) goto L1a
            return r3
        L1a:
            int r0 = r0 + 1
            goto Le
        L1d:
            int r1 = r6.length
            if (r0 == r1) goto L21
            return r3
        L21:
            r0 = 0
        L22:
            int r1 = r6.length
            if (r0 == r1) goto L2f
            r1 = r5[r0]
            r2 = r6[r0]
            if (r1 == r2) goto L2c
            return r3
        L2c:
            int r0 = r0 + 1
            goto L22
        L2f:
            r5 = 1
            return r5
    }

    @Override
    public byte[] generateSignature() throws org.bouncycastle.crypto.CryptoException {
            r8 = this;
            org.bouncycastle.crypto.Digest r0 = r8.digest
            int r0 = r0.getDigestSize()
            int r1 = r8.trailer
            r2 = 8
            r3 = 188(0xbc, float:2.63E-43)
            if (r1 != r3) goto L25
            byte[] r1 = r8.block
            int r3 = r1.length
            int r3 = r3 - r0
            int r3 = r3 + (-1)
            org.bouncycastle.crypto.Digest r4 = r8.digest
            r4.doFinal(r1, r3)
            byte[] r1 = r8.block
            int r4 = r1.length
            int r4 = r4 + (-1)
            r5 = -68
            r1[r4] = r5
            r1 = 8
            goto L45
        L25:
            r1 = 16
            byte[] r3 = r8.block
            int r4 = r3.length
            int r4 = r4 - r0
            int r4 = r4 + (-2)
            org.bouncycastle.crypto.Digest r5 = r8.digest
            r5.doFinal(r3, r4)
            byte[] r3 = r8.block
            int r5 = r3.length
            int r5 = r5 + (-2)
            int r6 = r8.trailer
            int r7 = r6 >>> 8
            byte r7 = (byte) r7
            r3[r5] = r7
            int r5 = r3.length
            int r5 = r5 + (-1)
            byte r6 = (byte) r6
            r3[r5] = r6
            r3 = r4
        L45:
            int r4 = r8.messageLength
            int r0 = r0 + r4
            int r0 = r0 * 8
            int r0 = r0 + r1
            int r0 = r0 + 4
            int r1 = r8.keyBits
            int r0 = r0 - r1
            r1 = 0
            if (r0 <= 0) goto L62
            int r0 = r0 + 7
            int r0 = r0 / r2
            int r4 = r4 - r0
            r0 = 96
            int r3 = r3 - r4
            byte[] r2 = r8.mBuf
            byte[] r5 = r8.block
            java.lang.System.arraycopy(r2, r1, r5, r3, r4)
            goto L6c
        L62:
            r0 = 64
            int r3 = r3 - r4
            byte[] r2 = r8.mBuf
            byte[] r5 = r8.block
            java.lang.System.arraycopy(r2, r1, r5, r3, r4)
        L6c:
            int r3 = r3 + (-1)
            if (r3 <= 0) goto L90
            r2 = r3
        L71:
            if (r2 == 0) goto L7c
            byte[] r4 = r8.block
            r5 = -69
            r4[r2] = r5
            int r2 = r2 + (-1)
            goto L71
        L7c:
            byte[] r2 = r8.block
            r4 = r2[r3]
            r4 = r4 ^ 1
            byte r4 = (byte) r4
            r2[r3] = r4
            r3 = 11
            r2[r1] = r3
            r3 = r2[r1]
            r0 = r0 | r3
            byte r0 = (byte) r0
            r2[r1] = r0
            goto L9c
        L90:
            byte[] r2 = r8.block
            r3 = 10
            r2[r1] = r3
            r3 = r2[r1]
            r0 = r0 | r3
            byte r0 = (byte) r0
            r2[r1] = r0
        L9c:
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r8.cipher
            byte[] r2 = r8.block
            int r3 = r2.length
            byte[] r0 = r0.processBlock(r2, r1, r3)
            byte[] r1 = r8.mBuf
            r8.clearBlock(r1)
            byte[] r1 = r8.block
            r8.clearBlock(r1)
            return r0
    }

    @Override
    public byte[] getRecoveredMessage() {
            r1 = this;
            byte[] r0 = r1.recoveredMessage
            return r0
    }

    @Override
    public boolean hasFullMessage() {
            r1 = this;
            boolean r0 = r1.fullMessage
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r3 = (org.bouncycastle.crypto.params.RSAKeyParameters) r3
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.cipher
            r0.init(r2, r3)
            java.math.BigInteger r2 = r3.getModulus()
            int r2 = r2.bitLength()
            r1.keyBits = r2
            int r2 = r2 + 7
            int r2 = r2 / 8
            byte[] r2 = new byte[r2]
            r1.block = r2
            int r3 = r1.trailer
            r0 = 188(0xbc, float:2.63E-43)
            int r2 = r2.length
            if (r3 != r0) goto L2e
            org.bouncycastle.crypto.Digest r3 = r1.digest
            int r3 = r3.getDigestSize()
            int r2 = r2 - r3
            int r2 = r2 + (-2)
            byte[] r2 = new byte[r2]
            r1.mBuf = r2
            goto L3b
        L2e:
            org.bouncycastle.crypto.Digest r3 = r1.digest
            int r3 = r3.getDigestSize()
            int r2 = r2 - r3
            int r2 = r2 + (-3)
            byte[] r2 = new byte[r2]
            r1.mBuf = r2
        L3b:
            r1.reset()
            return
    }

    @Override
    public void reset() {
            r2 = this;
            org.bouncycastle.crypto.Digest r0 = r2.digest
            r0.reset()
            r0 = 0
            r2.messageLength = r0
            byte[] r1 = r2.mBuf
            r2.clearBlock(r1)
            byte[] r1 = r2.recoveredMessage
            if (r1 == 0) goto L14
            r2.clearBlock(r1)
        L14:
            r1 = 0
            r2.recoveredMessage = r1
            r2.fullMessage = r0
            return
    }

    @Override
    public void update(byte r4) {
            r3 = this;
            org.bouncycastle.crypto.Digest r0 = r3.digest
            r0.update(r4)
            int r0 = r3.messageLength
            byte[] r1 = r3.mBuf
            int r2 = r1.length
            if (r0 >= r2) goto Le
            r1[r0] = r4
        Le:
            int r4 = r3.messageLength
            int r4 = r4 + 1
            r3.messageLength = r4
            return
    }

    @Override
    public void update(byte[] r6, int r7, int r8) {
            r5 = this;
            org.bouncycastle.crypto.Digest r0 = r5.digest
            r0.update(r6, r7, r8)
            int r0 = r5.messageLength
            byte[] r1 = r5.mBuf
            int r1 = r1.length
            if (r0 >= r1) goto L22
            r0 = 0
        Ld:
            if (r0 >= r8) goto L22
            int r1 = r5.messageLength
            int r2 = r0 + r1
            byte[] r3 = r5.mBuf
            int r4 = r3.length
            if (r2 >= r4) goto L22
            int r1 = r1 + r0
            int r2 = r7 + r0
            r2 = r6[r2]
            r3[r1] = r2
            int r0 = r0 + 1
            goto Ld
        L22:
            int r6 = r5.messageLength
            int r6 = r6 + r8
            r5.messageLength = r6
            return
    }

    @Override
    public boolean verifySignature(byte[] r12) {
            r11 = this;
            r0 = 0
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r11.cipher     // Catch: java.lang.Exception -> L130
            int r2 = r12.length     // Catch: java.lang.Exception -> L130
            byte[] r12 = r1.processBlock(r12, r0, r2)     // Catch: java.lang.Exception -> L130
            r1 = r12[r0]
            r1 = r1 & 192(0xc0, float:2.69E-43)
            r1 = r1 ^ 64
            if (r1 == 0) goto L19
            byte[] r1 = r11.mBuf
            r11.clearBlock(r1)
        L15:
            r11.clearBlock(r12)
            return r0
        L19:
            int r1 = r12.length
            r2 = 1
            int r1 = r1 - r2
            r1 = r12[r1]
            r1 = r1 & 15
            r1 = r1 ^ 12
            if (r1 == 0) goto L2a
            byte[] r1 = r11.mBuf
            r11.clearBlock(r1)
            goto L15
        L2a:
            int r1 = r12.length
            int r1 = r1 - r2
            r1 = r12[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 ^ 188(0xbc, float:2.63E-43)
            r3 = 2
            if (r1 != 0) goto L37
            r3 = 1
            goto L7e
        L37:
            int r1 = r12.length
            int r1 = r1 - r3
            r1 = r12[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            int r4 = r12.length
            int r4 = r4 - r2
            r4 = r12[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r1 = r1 | r4
            r4 = 12748(0x31cc, float:1.7864E-41)
            if (r1 == r4) goto L78
            r4 = 13004(0x32cc, float:1.8222E-41)
            if (r1 == r4) goto L69
            r4 = 13260(0x33cc, float:1.8581E-41)
            if (r1 != r4) goto L61
            org.bouncycastle.crypto.Digest r1 = r11.digest
            boolean r1 = r1 instanceof org.bouncycastle.crypto.digests.SHA1Digest
            if (r1 == 0) goto L59
            goto L7e
        L59:
            java.lang.IllegalStateException r12 = new java.lang.IllegalStateException
            java.lang.String r0 = "signer should be initialised with SHA1"
            r12.<init>(r0)
            throw r12
        L61:
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unrecognised hash in signature"
            r12.<init>(r0)
            throw r12
        L69:
            org.bouncycastle.crypto.Digest r1 = r11.digest
            boolean r1 = r1 instanceof org.bouncycastle.crypto.digests.RIPEMD128Digest
            if (r1 == 0) goto L70
            goto L7e
        L70:
            java.lang.IllegalStateException r12 = new java.lang.IllegalStateException
            java.lang.String r0 = "signer should be initialised with RIPEMD128"
            r12.<init>(r0)
            throw r12
        L78:
            org.bouncycastle.crypto.Digest r1 = r11.digest
            boolean r1 = r1 instanceof org.bouncycastle.crypto.digests.RIPEMD160Digest
            if (r1 == 0) goto L128
        L7e:
            r1 = 0
        L7f:
            int r4 = r12.length
            if (r1 == r4) goto L8e
            r4 = r12[r1]
            r4 = r4 & 15
            r4 = r4 ^ 10
            if (r4 != 0) goto L8b
            goto L8e
        L8b:
            int r1 = r1 + 1
            goto L7f
        L8e:
            int r1 = r1 + r2
            org.bouncycastle.crypto.Digest r4 = r11.digest
            int r4 = r4.getDigestSize()
            byte[] r5 = new byte[r4]
            int r6 = r12.length
            int r6 = r6 - r3
            int r6 = r6 - r4
            int r3 = r6 - r1
            if (r3 > 0) goto La5
            byte[] r1 = r11.mBuf
            r11.clearBlock(r1)
            goto L15
        La5:
            r7 = r12[r0]
            r7 = r7 & 32
            if (r7 != 0) goto Le0
            r11.fullMessage = r2
            org.bouncycastle.crypto.Digest r7 = r11.digest
            r7.reset()
            org.bouncycastle.crypto.Digest r7 = r11.digest
            r7.update(r12, r1, r3)
            org.bouncycastle.crypto.Digest r7 = r11.digest
            r7.doFinal(r5, r0)
            r7 = 0
        Lbd:
            if (r7 == r4) goto Ld7
            int r8 = r6 + r7
            r9 = r12[r8]
            r10 = r5[r7]
            r9 = r9 ^ r10
            byte r9 = (byte) r9
            r12[r8] = r9
            r8 = r12[r8]
            if (r8 == 0) goto Ld4
            byte[] r1 = r11.mBuf
            r11.clearBlock(r1)
            goto L15
        Ld4:
            int r7 = r7 + 1
            goto Lbd
        Ld7:
            byte[] r3 = new byte[r3]
            r11.recoveredMessage = r3
            int r4 = r3.length
            java.lang.System.arraycopy(r12, r1, r3, r0, r4)
            goto L10a
        Le0:
            r11.fullMessage = r0
            org.bouncycastle.crypto.Digest r7 = r11.digest
            r7.doFinal(r5, r0)
            r7 = 0
        Le8:
            if (r7 == r4) goto L102
            int r8 = r6 + r7
            r9 = r12[r8]
            r10 = r5[r7]
            r9 = r9 ^ r10
            byte r9 = (byte) r9
            r12[r8] = r9
            r8 = r12[r8]
            if (r8 == 0) goto Lff
            byte[] r1 = r11.mBuf
            r11.clearBlock(r1)
            goto L15
        Lff:
            int r7 = r7 + 1
            goto Le8
        L102:
            byte[] r3 = new byte[r3]
            r11.recoveredMessage = r3
            int r4 = r3.length
            java.lang.System.arraycopy(r12, r1, r3, r0, r4)
        L10a:
            int r1 = r11.messageLength
            if (r1 == 0) goto L11f
            byte[] r1 = r11.mBuf
            byte[] r3 = r11.recoveredMessage
            boolean r1 = r11.isSameAs(r1, r3)
            if (r1 != 0) goto L11f
            byte[] r1 = r11.mBuf
            r11.clearBlock(r1)
            goto L15
        L11f:
            byte[] r0 = r11.mBuf
            r11.clearBlock(r0)
            r11.clearBlock(r12)
            return r2
        L128:
            java.lang.IllegalStateException r12 = new java.lang.IllegalStateException
            java.lang.String r0 = "signer should be initialised with RIPEMD160"
            r12.<init>(r0)
            throw r12
        L130:
            return r0
    }
}
