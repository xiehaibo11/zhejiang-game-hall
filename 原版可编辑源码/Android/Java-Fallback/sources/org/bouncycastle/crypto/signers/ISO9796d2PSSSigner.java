package org.bouncycastle.crypto.signers;

public class ISO9796d2PSSSigner implements org.bouncycastle.crypto.SignerWithRecovery {
    public static final int TRAILER_IMPLICIT = 188;
    public static final int TRAILER_RIPEMD128 = 13004;
    public static final int TRAILER_RIPEMD160 = 12748;
    public static final int TRAILER_SHA1 = 13260;
    private byte[] block;
    private org.bouncycastle.crypto.AsymmetricBlockCipher cipher;
    private org.bouncycastle.crypto.Digest digest;
    private boolean fullMessage;
    private int hLen;
    private int keyBits;
    private byte[] mBuf;
    private int messageLength;
    private java.security.SecureRandom random;
    private byte[] recoveredMessage;
    private int saltLength;
    private byte[] standardSalt;
    private int trailer;

    public ISO9796d2PSSSigner(org.bouncycastle.crypto.AsymmetricBlockCipher r2, org.bouncycastle.crypto.Digest r3, int r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public ISO9796d2PSSSigner(org.bouncycastle.crypto.AsymmetricBlockCipher r1, org.bouncycastle.crypto.Digest r2, int r3, boolean r4) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            r0.digest = r2
            int r1 = r2.getDigestSize()
            r0.hLen = r1
            r0.saltLength = r3
            if (r4 == 0) goto L16
            r1 = 188(0xbc, float:2.63E-43)
        L13:
            r0.trailer = r1
            goto L2b
        L16:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.digests.SHA1Digest
            if (r1 == 0) goto L1d
            r1 = 13260(0x33cc, float:1.8581E-41)
            goto L13
        L1d:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.digests.RIPEMD160Digest
            if (r1 == 0) goto L24
            r1 = 12748(0x31cc, float:1.7864E-41)
            goto L13
        L24:
            boolean r1 = r2 instanceof org.bouncycastle.crypto.digests.RIPEMD128Digest
            if (r1 == 0) goto L2c
            r1 = 13004(0x32cc, float:1.8222E-41)
            goto L13
        L2b:
            return
        L2c:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "no valid trailer for digest"
            r1.<init>(r2)
            throw r1
    }

    private void ItoOSP(int r4, byte[] r5) {
            r3 = this;
            int r0 = r4 >>> 24
            byte r0 = (byte) r0
            r1 = 0
            r5[r1] = r0
            int r0 = r4 >>> 16
            byte r0 = (byte) r0
            r2 = 1
            r5[r2] = r0
            int r0 = r4 >>> 8
            byte r0 = (byte) r0
            r2 = 2
            r5[r2] = r0
            int r4 = r4 >>> r1
            byte r4 = (byte) r4
            r0 = 3
            r5[r0] = r4
            return
    }

    private void LtoOSP(long r5, byte[] r7) {
            r4 = this;
            r0 = 56
            long r0 = r5 >>> r0
            int r1 = (int) r0
            byte r0 = (byte) r1
            r1 = 0
            r7[r1] = r0
            r0 = 48
            long r2 = r5 >>> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 1
            r7[r2] = r0
            r0 = 40
            long r2 = r5 >>> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 2
            r7[r2] = r0
            r0 = 32
            long r2 = r5 >>> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 3
            r7[r2] = r0
            r0 = 24
            long r2 = r5 >>> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 4
            r7[r2] = r0
            r0 = 16
            long r2 = r5 >>> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 5
            r7[r2] = r0
            r0 = 8
            long r2 = r5 >>> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 6
            r7[r2] = r0
            long r5 = r5 >>> r1
            int r6 = (int) r5
            byte r5 = (byte) r6
            r6 = 7
            r7[r6] = r5
            return
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
            int r1 = r6.length
            r2 = 0
            if (r0 == r1) goto L7
            return r2
        L7:
            r0 = 0
        L8:
            int r1 = r6.length
            if (r0 == r1) goto L15
            r1 = r5[r0]
            r3 = r6[r0]
            if (r1 == r3) goto L12
            return r2
        L12:
            int r0 = r0 + 1
            goto L8
        L15:
            r5 = 1
            return r5
    }

    private byte[] maskGeneratorFunction1(byte[] r9, int r10, int r11, int r12) {
            r8 = this;
            byte[] r0 = new byte[r12]
            int r1 = r8.hLen
            byte[] r1 = new byte[r1]
            r2 = 4
            byte[] r3 = new byte[r2]
            org.bouncycastle.crypto.Digest r4 = r8.digest
            r4.reset()
            r4 = 0
            r5 = 0
        L10:
            int r6 = r8.hLen
            int r7 = r12 / r6
            if (r5 >= r7) goto L32
            r8.ItoOSP(r5, r3)
            org.bouncycastle.crypto.Digest r6 = r8.digest
            r6.update(r9, r10, r11)
            org.bouncycastle.crypto.Digest r6 = r8.digest
            r6.update(r3, r4, r2)
            org.bouncycastle.crypto.Digest r6 = r8.digest
            r6.doFinal(r1, r4)
            int r6 = r8.hLen
            int r7 = r5 * r6
            java.lang.System.arraycopy(r1, r4, r0, r7, r6)
            int r5 = r5 + 1
            goto L10
        L32:
            int r6 = r6 * r5
            if (r6 >= r12) goto L52
            r8.ItoOSP(r5, r3)
            org.bouncycastle.crypto.Digest r6 = r8.digest
            r6.update(r9, r10, r11)
            org.bouncycastle.crypto.Digest r9 = r8.digest
            r9.update(r3, r4, r2)
            org.bouncycastle.crypto.Digest r9 = r8.digest
            r9.doFinal(r1, r4)
            int r9 = r8.hLen
            int r10 = r5 * r9
            int r5 = r5 * r9
            int r12 = r12 - r5
            java.lang.System.arraycopy(r1, r4, r0, r10, r12)
        L52:
            return r0
    }

    @Override
    public byte[] generateSignature() throws org.bouncycastle.crypto.CryptoException {
            r12 = this;
            org.bouncycastle.crypto.Digest r0 = r12.digest
            int r0 = r0.getDigestSize()
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.Digest r2 = r12.digest
            r3 = 0
            r2.doFinal(r1, r3)
            r2 = 8
            byte[] r4 = new byte[r2]
            int r5 = r12.messageLength
            int r5 = r5 * 8
            long r5 = (long) r5
            r12.LtoOSP(r5, r4)
            org.bouncycastle.crypto.Digest r5 = r12.digest
            r5.update(r4, r3, r2)
            org.bouncycastle.crypto.Digest r2 = r12.digest
            byte[] r4 = r12.mBuf
            int r5 = r12.messageLength
            r2.update(r4, r3, r5)
            org.bouncycastle.crypto.Digest r2 = r12.digest
            r2.update(r1, r3, r0)
            byte[] r0 = r12.standardSalt
            if (r0 == 0) goto L32
            goto L3b
        L32:
            int r0 = r12.saltLength
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = r12.random
            r1.nextBytes(r0)
        L3b:
            org.bouncycastle.crypto.Digest r1 = r12.digest
            int r2 = r0.length
            r1.update(r0, r3, r2)
            org.bouncycastle.crypto.Digest r1 = r12.digest
            int r1 = r1.getDigestSize()
            byte[] r2 = new byte[r1]
            org.bouncycastle.crypto.Digest r4 = r12.digest
            r4.doFinal(r2, r3)
            int r4 = r12.trailer
            r5 = 188(0xbc, float:2.63E-43)
            r6 = 2
            r7 = 1
            if (r4 != r5) goto L58
            r4 = 1
            goto L59
        L58:
            r4 = 2
        L59:
            byte[] r8 = r12.block
            int r9 = r8.length
            int r10 = r12.messageLength
            int r9 = r9 - r10
            int r11 = r0.length
            int r9 = r9 - r11
            int r11 = r12.hLen
            int r9 = r9 - r11
            int r9 = r9 - r4
            int r9 = r9 - r7
            r8[r9] = r7
            byte[] r11 = r12.mBuf
            int r9 = r9 + r7
            java.lang.System.arraycopy(r11, r3, r8, r9, r10)
            byte[] r8 = r12.block
            int r10 = r12.messageLength
            int r9 = r9 + r10
            int r10 = r0.length
            java.lang.System.arraycopy(r0, r3, r8, r9, r10)
            byte[] r0 = r12.block
            int r0 = r0.length
            int r8 = r12.hLen
            int r0 = r0 - r8
            int r0 = r0 - r4
            byte[] r0 = r12.maskGeneratorFunction1(r2, r3, r1, r0)
            r1 = 0
        L83:
            int r8 = r0.length
            if (r1 == r8) goto L93
            byte[] r8 = r12.block
            r9 = r8[r1]
            r10 = r0[r1]
            r9 = r9 ^ r10
            byte r9 = (byte) r9
            r8[r1] = r9
            int r1 = r1 + 1
            goto L83
        L93:
            byte[] r0 = r12.block
            int r1 = r0.length
            int r8 = r12.hLen
            int r1 = r1 - r8
            int r1 = r1 - r4
            java.lang.System.arraycopy(r2, r3, r0, r1, r8)
            int r0 = r12.trailer
            if (r0 != r5) goto Laa
            byte[] r0 = r12.block
            int r1 = r0.length
            int r1 = r1 - r7
            r2 = -68
            r0[r1] = r2
            goto Lb8
        Laa:
            byte[] r1 = r12.block
            int r2 = r1.length
            int r2 = r2 - r6
            int r4 = r0 >>> 8
            byte r4 = (byte) r4
            r1[r2] = r4
            int r2 = r1.length
            int r2 = r2 - r7
            byte r0 = (byte) r0
            r1[r2] = r0
        Lb8:
            byte[] r0 = r12.block
            r1 = r0[r3]
            r1 = r1 & 127(0x7f, float:1.78E-43)
            byte r1 = (byte) r1
            r0[r3] = r1
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r12.cipher
            int r2 = r0.length
            byte[] r0 = r1.processBlock(r0, r3, r2)
            byte[] r1 = r12.mBuf
            r12.clearBlock(r1)
            byte[] r1 = r12.block
            r12.clearBlock(r1)
            r12.messageLength = r3
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
    public void init(boolean r4, org.bouncycastle.crypto.CipherParameters r5) {
            r3 = this;
            int r0 = r3.saltLength
            boolean r1 = r5 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r1 == 0) goto L17
            org.bouncycastle.crypto.params.ParametersWithRandom r5 = (org.bouncycastle.crypto.params.ParametersWithRandom) r5
            org.bouncycastle.crypto.CipherParameters r1 = r5.getParameters()
            org.bouncycastle.crypto.params.RSAKeyParameters r1 = (org.bouncycastle.crypto.params.RSAKeyParameters) r1
            if (r4 == 0) goto L44
            java.security.SecureRandom r5 = r5.getRandom()
        L14:
            r3.random = r5
            goto L44
        L17:
            boolean r1 = r5 instanceof org.bouncycastle.crypto.params.ParametersWithSalt
            if (r1 == 0) goto L39
            org.bouncycastle.crypto.params.ParametersWithSalt r5 = (org.bouncycastle.crypto.params.ParametersWithSalt) r5
            org.bouncycastle.crypto.CipherParameters r0 = r5.getParameters()
            r1 = r0
            org.bouncycastle.crypto.params.RSAKeyParameters r1 = (org.bouncycastle.crypto.params.RSAKeyParameters) r1
            byte[] r5 = r5.getSalt()
            r3.standardSalt = r5
            int r0 = r5.length
            int r5 = r5.length
            int r2 = r3.saltLength
            if (r5 != r2) goto L31
            goto L44
        L31:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "Fixed salt is of wrong length"
            r4.<init>(r5)
            throw r4
        L39:
            r1 = r5
            org.bouncycastle.crypto.params.RSAKeyParameters r1 = (org.bouncycastle.crypto.params.RSAKeyParameters) r1
            if (r4 == 0) goto L44
            java.security.SecureRandom r5 = new java.security.SecureRandom
            r5.<init>()
            goto L14
        L44:
            org.bouncycastle.crypto.AsymmetricBlockCipher r5 = r3.cipher
            r5.init(r4, r1)
            java.math.BigInteger r4 = r1.getModulus()
            int r4 = r4.bitLength()
            r3.keyBits = r4
            int r4 = r4 + 7
            int r4 = r4 / 8
            byte[] r4 = new byte[r4]
            r3.block = r4
            int r5 = r3.trailer
            r1 = 188(0xbc, float:2.63E-43)
            int r4 = r4.length
            if (r5 != r1) goto L73
            org.bouncycastle.crypto.Digest r5 = r3.digest
            int r5 = r5.getDigestSize()
            int r4 = r4 - r5
            int r4 = r4 - r0
            int r4 = r4 + (-1)
            int r4 = r4 + (-1)
            byte[] r4 = new byte[r4]
            r3.mBuf = r4
            goto L83
        L73:
            org.bouncycastle.crypto.Digest r5 = r3.digest
            int r5 = r5.getDigestSize()
            int r4 = r4 - r5
            int r4 = r4 - r0
            int r4 = r4 + (-1)
            int r4 = r4 + (-2)
            byte[] r4 = new byte[r4]
            r3.mBuf = r4
        L83:
            r3.reset()
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
            if (r1 == 0) goto Lf
            r2.clearBlock(r1)
        Lf:
            byte[] r1 = r2.recoveredMessage
            if (r1 == 0) goto L19
            r2.clearBlock(r1)
            r1 = 0
            r2.recoveredMessage = r1
        L19:
            r2.fullMessage = r0
            return
    }

    @Override
    public void update(byte r4) {
            r3 = this;
            int r0 = r3.messageLength
            byte[] r1 = r3.mBuf
            int r2 = r1.length
            if (r0 >= r2) goto Le
            int r2 = r0 + 1
            r3.messageLength = r2
            r1[r0] = r4
            goto L13
        Le:
            org.bouncycastle.crypto.Digest r0 = r3.digest
            r0.update(r4)
        L13:
            return
    }

    @Override
    public void update(byte[] r3, int r4, int r5) {
            r2 = this;
        L0:
            if (r5 <= 0) goto L13
            int r0 = r2.messageLength
            byte[] r1 = r2.mBuf
            int r1 = r1.length
            if (r0 >= r1) goto L13
            r0 = r3[r4]
            r2.update(r0)
            int r4 = r4 + 1
            int r5 = r5 + (-1)
            goto L0
        L13:
            if (r5 <= 0) goto L1a
            org.bouncycastle.crypto.Digest r0 = r2.digest
            r0.update(r3, r4, r5)
        L1a:
            return
    }

    @Override
    public boolean verifySignature(byte[] r11) {
            r10 = this;
            r0 = 0
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r10.cipher     // Catch: java.lang.Exception -> L149
            int r2 = r11.length     // Catch: java.lang.Exception -> L149
            byte[] r11 = r1.processBlock(r11, r0, r2)     // Catch: java.lang.Exception -> L149
            int r1 = r11.length
            int r2 = r10.keyBits
            int r3 = r2 + 7
            r4 = 8
            int r3 = r3 / r4
            if (r1 >= r3) goto L21
            int r2 = r2 + 7
            int r2 = r2 / r4
            byte[] r1 = new byte[r2]
            int r3 = r11.length
            int r2 = r2 - r3
            int r3 = r11.length
            java.lang.System.arraycopy(r11, r0, r1, r2, r3)
            r10.clearBlock(r11)
            r11 = r1
        L21:
            int r1 = r11.length
            r2 = 1
            int r1 = r1 - r2
            r1 = r11[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r1 = r1 ^ 188(0xbc, float:2.63E-43)
            r3 = 2
            if (r1 != 0) goto L2f
            r3 = 1
            goto L75
        L2f:
            int r1 = r11.length
            int r1 = r1 - r3
            r1 = r11[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << r4
            int r5 = r11.length
            int r5 = r5 - r2
            r5 = r11[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r1 = r1 | r5
            r5 = 12748(0x31cc, float:1.7864E-41)
            if (r1 == r5) goto L6f
            r5 = 13004(0x32cc, float:1.8222E-41)
            if (r1 == r5) goto L60
            r5 = 13260(0x33cc, float:1.8581E-41)
            if (r1 != r5) goto L58
            org.bouncycastle.crypto.Digest r1 = r10.digest
            boolean r1 = r1 instanceof org.bouncycastle.crypto.digests.SHA1Digest
            if (r1 == 0) goto L50
            goto L75
        L50:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.String r0 = "signer should be initialised with SHA1"
            r11.<init>(r0)
            throw r11
        L58:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unrecognised hash in signature"
            r11.<init>(r0)
            throw r11
        L60:
            org.bouncycastle.crypto.Digest r1 = r10.digest
            boolean r1 = r1 instanceof org.bouncycastle.crypto.digests.RIPEMD128Digest
            if (r1 == 0) goto L67
            goto L75
        L67:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.String r0 = "signer should be initialised with RIPEMD128"
            r11.<init>(r0)
            throw r11
        L6f:
            org.bouncycastle.crypto.Digest r1 = r10.digest
            boolean r1 = r1 instanceof org.bouncycastle.crypto.digests.RIPEMD160Digest
            if (r1 == 0) goto L141
        L75:
            int r1 = r10.hLen
            byte[] r5 = new byte[r1]
            org.bouncycastle.crypto.Digest r6 = r10.digest
            r6.doFinal(r5, r0)
            int r6 = r11.length
            int r7 = r10.hLen
            int r6 = r6 - r7
            int r6 = r6 - r3
            int r8 = r11.length
            int r8 = r8 - r7
            int r8 = r8 - r3
            byte[] r6 = r10.maskGeneratorFunction1(r11, r6, r7, r8)
            r7 = 0
        L8b:
            int r8 = r6.length
            if (r7 == r8) goto L99
            r8 = r11[r7]
            r9 = r6[r7]
            r8 = r8 ^ r9
            byte r8 = (byte) r8
            r11[r7] = r8
            int r7 = r7 + 1
            goto L8b
        L99:
            r7 = r11[r0]
            r7 = r7 & 127(0x7f, float:1.78E-43)
            byte r7 = (byte) r7
            r11[r0] = r7
            r7 = 0
        La1:
            int r8 = r11.length
            if (r7 == r8) goto Lac
            r8 = r11[r7]
            if (r8 != r2) goto La9
            goto Lac
        La9:
            int r7 = r7 + 1
            goto La1
        Lac:
            int r7 = r7 + r2
            int r8 = r11.length
            if (r7 < r8) goto Lb4
            r10.clearBlock(r11)
            return r0
        Lb4:
            if (r7 <= r2) goto Lb8
            r8 = 1
            goto Lb9
        Lb8:
            r8 = 0
        Lb9:
            r10.fullMessage = r8
            int r6 = r6.length
            int r6 = r6 - r7
            int r8 = r10.saltLength
            int r6 = r6 - r8
            byte[] r6 = new byte[r6]
            r10.recoveredMessage = r6
            int r8 = r6.length
            java.lang.System.arraycopy(r11, r7, r6, r0, r8)
            byte[] r6 = new byte[r4]
            byte[] r8 = r10.recoveredMessage
            int r8 = r8.length
            int r8 = r8 * 8
            long r8 = (long) r8
            r10.LtoOSP(r8, r6)
            org.bouncycastle.crypto.Digest r8 = r10.digest
            r8.update(r6, r0, r4)
            byte[] r4 = r10.recoveredMessage
            int r6 = r4.length
            if (r6 == 0) goto Le3
            org.bouncycastle.crypto.Digest r6 = r10.digest
            int r8 = r4.length
            r6.update(r4, r0, r8)
        Le3:
            org.bouncycastle.crypto.Digest r4 = r10.digest
            r4.update(r5, r0, r1)
            org.bouncycastle.crypto.Digest r1 = r10.digest
            byte[] r4 = r10.recoveredMessage
            int r4 = r4.length
            int r7 = r7 + r4
            int r4 = r10.saltLength
            r1.update(r11, r7, r4)
            org.bouncycastle.crypto.Digest r1 = r10.digest
            int r1 = r1.getDigestSize()
            byte[] r4 = new byte[r1]
            org.bouncycastle.crypto.Digest r5 = r10.digest
            r5.doFinal(r4, r0)
            int r5 = r11.length
            int r5 = r5 - r3
            int r5 = r5 - r1
            r3 = 0
        L104:
            if (r3 == r1) goto L11f
            r6 = r4[r3]
            int r7 = r5 + r3
            r7 = r11[r7]
            if (r6 == r7) goto L11c
            r10.clearBlock(r11)
            r10.clearBlock(r4)
            byte[] r11 = r10.recoveredMessage
            r10.clearBlock(r11)
            r10.fullMessage = r0
            return r0
        L11c:
            int r3 = r3 + 1
            goto L104
        L11f:
            r10.clearBlock(r11)
            r10.clearBlock(r4)
            int r11 = r10.messageLength
            if (r11 == 0) goto L13b
            byte[] r11 = r10.mBuf
            byte[] r1 = r10.recoveredMessage
            boolean r11 = r10.isSameAs(r11, r1)
            if (r11 != 0) goto L139
            byte[] r11 = r10.mBuf
            r10.clearBlock(r11)
            return r0
        L139:
            r10.messageLength = r0
        L13b:
            byte[] r11 = r10.mBuf
            r10.clearBlock(r11)
            return r2
        L141:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.String r0 = "signer should be initialised with RIPEMD160"
            r11.<init>(r0)
            throw r11
        L149:
            return r0
    }
}
