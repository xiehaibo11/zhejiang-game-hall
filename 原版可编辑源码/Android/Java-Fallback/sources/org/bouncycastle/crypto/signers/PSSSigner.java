package org.bouncycastle.crypto.signers;

public class PSSSigner implements org.bouncycastle.crypto.Signer {
    public static final byte TRAILER_IMPLICIT = -68;
    private byte[] block;
    private org.bouncycastle.crypto.AsymmetricBlockCipher cipher;
    private org.bouncycastle.crypto.Digest digest;
    private int emBits;
    private int hLen;
    private byte[] mDash;
    private java.security.SecureRandom random;
    private int sLen;
    private byte[] salt;
    private byte trailer;

    public PSSSigner(org.bouncycastle.crypto.AsymmetricBlockCipher r2, org.bouncycastle.crypto.Digest r3, int r4) {
            r1 = this;
            r0 = -68
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public PSSSigner(org.bouncycastle.crypto.AsymmetricBlockCipher r1, org.bouncycastle.crypto.Digest r2, int r3, byte r4) {
            r0 = this;
            r0.<init>()
            r0.cipher = r1
            r0.digest = r2
            int r1 = r2.getDigestSize()
            r0.hLen = r1
            r0.sLen = r3
            byte[] r2 = new byte[r3]
            r0.salt = r2
            int r3 = r3 + 8
            int r3 = r3 + r1
            byte[] r1 = new byte[r3]
            r0.mDash = r1
            r0.trailer = r4
            return
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
    public byte[] generateSignature() throws org.bouncycastle.crypto.CryptoException, org.bouncycastle.crypto.DataLengthException {
            r9 = this;
            int r0 = r9.emBits
            int r1 = r9.hLen
            int r2 = r1 * 8
            int r3 = r9.sLen
            int r4 = r3 * 8
            int r2 = r2 + r4
            int r2 = r2 + 9
            if (r0 < r2) goto La2
            org.bouncycastle.crypto.Digest r0 = r9.digest
            byte[] r2 = r9.mDash
            int r4 = r2.length
            int r4 = r4 - r1
            int r4 = r4 - r3
            r0.doFinal(r2, r4)
            int r0 = r9.sLen
            r1 = 0
            if (r0 == 0) goto L30
            java.security.SecureRandom r0 = r9.random
            byte[] r2 = r9.salt
            r0.nextBytes(r2)
            byte[] r0 = r9.salt
            byte[] r2 = r9.mDash
            int r3 = r2.length
            int r4 = r9.sLen
            int r3 = r3 - r4
            java.lang.System.arraycopy(r0, r1, r2, r3, r4)
        L30:
            int r0 = r9.hLen
            byte[] r2 = new byte[r0]
            org.bouncycastle.crypto.Digest r3 = r9.digest
            byte[] r4 = r9.mDash
            int r5 = r4.length
            r3.update(r4, r1, r5)
            org.bouncycastle.crypto.Digest r3 = r9.digest
            r3.doFinal(r2, r1)
            byte[] r3 = r9.block
            int r4 = r3.length
            int r5 = r9.sLen
            int r4 = r4 - r5
            r6 = 1
            int r4 = r4 - r6
            int r7 = r9.hLen
            int r4 = r4 - r7
            int r4 = r4 - r6
            r3[r4] = r6
            byte[] r4 = r9.salt
            int r8 = r3.length
            int r8 = r8 - r5
            int r8 = r8 - r7
            int r8 = r8 - r6
            java.lang.System.arraycopy(r4, r1, r3, r8, r5)
            byte[] r3 = r9.block
            int r3 = r3.length
            int r4 = r9.hLen
            int r3 = r3 - r4
            int r3 = r3 - r6
            byte[] r0 = r9.maskGeneratorFunction1(r2, r1, r0, r3)
            r3 = 0
        L64:
            int r4 = r0.length
            if (r3 == r4) goto L74
            byte[] r4 = r9.block
            r5 = r4[r3]
            r7 = r0[r3]
            r5 = r5 ^ r7
            byte r5 = (byte) r5
            r4[r3] = r5
            int r3 = r3 + 1
            goto L64
        L74:
            byte[] r0 = r9.block
            r3 = r0[r1]
            r4 = 255(0xff, float:3.57E-43)
            int r5 = r0.length
            int r5 = r5 * 8
            int r7 = r9.emBits
            int r5 = r5 - r7
            int r4 = r4 >> r5
            r3 = r3 & r4
            byte r3 = (byte) r3
            r0[r1] = r3
            int r3 = r0.length
            int r4 = r9.hLen
            int r3 = r3 - r4
            int r3 = r3 - r6
            java.lang.System.arraycopy(r2, r1, r0, r3, r4)
            byte[] r0 = r9.block
            int r2 = r0.length
            int r2 = r2 - r6
            byte r3 = r9.trailer
            r0[r2] = r3
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r9.cipher
            int r3 = r0.length
            byte[] r0 = r2.processBlock(r0, r1, r3)
            byte[] r1 = r9.block
            r9.clearBlock(r1)
            return r0
        La2:
            org.bouncycastle.crypto.DataLengthException r0 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r1 = "encoding error"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto L12
            org.bouncycastle.crypto.params.ParametersWithRandom r3 = (org.bouncycastle.crypto.params.ParametersWithRandom) r3
            org.bouncycastle.crypto.CipherParameters r0 = r3.getParameters()
            java.security.SecureRandom r3 = r3.getRandom()
            r1.random = r3
            r3 = r0
            goto L1b
        L12:
            if (r2 == 0) goto L1b
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            r1.random = r0
        L1b:
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.cipher
            r0.init(r2, r3)
            boolean r2 = r3 instanceof org.bouncycastle.crypto.params.RSABlindingParameters
            if (r2 == 0) goto L2b
            org.bouncycastle.crypto.params.RSABlindingParameters r3 = (org.bouncycastle.crypto.params.RSABlindingParameters) r3
            org.bouncycastle.crypto.params.RSAKeyParameters r2 = r3.getPublicKey()
            goto L2e
        L2b:
            r2 = r3
            org.bouncycastle.crypto.params.RSAKeyParameters r2 = (org.bouncycastle.crypto.params.RSAKeyParameters) r2
        L2e:
            java.math.BigInteger r2 = r2.getModulus()
            int r2 = r2.bitLength()
            int r2 = r2 + (-1)
            r1.emBits = r2
            int r2 = r2 + 7
            int r2 = r2 / 8
            byte[] r2 = new byte[r2]
            r1.block = r2
            r1.reset()
            return
    }

    @Override
    public void reset() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.reset()
            return
    }

    @Override
    public void update(byte r2) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2)
            return
    }

    @Override
    public void update(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2, r3, r4)
            return
    }

    @Override
    public boolean verifySignature(byte[] r7) {
            r6 = this;
            int r0 = r6.emBits
            int r1 = r6.hLen
            int r2 = r1 * 8
            int r3 = r6.sLen
            int r4 = r3 * 8
            int r2 = r2 + r4
            int r2 = r2 + 9
            r4 = 0
            if (r0 >= r2) goto L11
            return r4
        L11:
            org.bouncycastle.crypto.Digest r0 = r6.digest
            byte[] r2 = r6.mDash
            int r5 = r2.length
            int r5 = r5 - r1
            int r5 = r5 - r3
            r0.doFinal(r2, r5)
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r6.cipher     // Catch: java.lang.Exception -> Lde
            int r1 = r7.length     // Catch: java.lang.Exception -> Lde
            byte[] r7 = r0.processBlock(r7, r4, r1)     // Catch: java.lang.Exception -> Lde
            byte[] r0 = r6.block     // Catch: java.lang.Exception -> Lde
            byte[] r1 = r6.block     // Catch: java.lang.Exception -> Lde
            int r1 = r1.length     // Catch: java.lang.Exception -> Lde
            int r2 = r7.length     // Catch: java.lang.Exception -> Lde
            int r1 = r1 - r2
            int r2 = r7.length     // Catch: java.lang.Exception -> Lde
            java.lang.System.arraycopy(r7, r4, r0, r1, r2)     // Catch: java.lang.Exception -> Lde
            byte[] r7 = r6.block
            int r0 = r7.length
            r1 = 1
            int r0 = r0 - r1
            r0 = r7[r0]
            byte r2 = r6.trailer
            if (r0 == r2) goto L3c
            r6.clearBlock(r7)
            return r4
        L3c:
            int r0 = r7.length
            int r2 = r6.hLen
            int r0 = r0 - r2
            int r0 = r0 - r1
            int r3 = r7.length
            int r3 = r3 - r2
            int r3 = r3 - r1
            byte[] r7 = r6.maskGeneratorFunction1(r7, r0, r2, r3)
            r0 = 0
        L49:
            int r2 = r7.length
            if (r0 == r2) goto L59
            byte[] r2 = r6.block
            r3 = r2[r0]
            r5 = r7[r0]
            r3 = r3 ^ r5
            byte r3 = (byte) r3
            r2[r0] = r3
            int r0 = r0 + 1
            goto L49
        L59:
            byte[] r7 = r6.block
            r0 = r7[r4]
            r2 = 255(0xff, float:3.57E-43)
            int r3 = r7.length
            int r3 = r3 * 8
            int r5 = r6.emBits
            int r3 = r3 - r5
            int r2 = r2 >> r3
            r0 = r0 & r2
            byte r0 = (byte) r0
            r7[r4] = r0
            r7 = 0
        L6b:
            byte[] r0 = r6.block
            int r2 = r0.length
            int r3 = r6.hLen
            int r2 = r2 - r3
            int r5 = r6.sLen
            int r2 = r2 - r5
            int r2 = r2 + (-2)
            if (r7 == r2) goto L83
            r2 = r0[r7]
            if (r2 == 0) goto L80
            r6.clearBlock(r0)
            return r4
        L80:
            int r7 = r7 + 1
            goto L6b
        L83:
            int r7 = r0.length
            int r7 = r7 - r3
            int r7 = r7 - r5
            int r7 = r7 + (-2)
            r7 = r0[r7]
            if (r7 == r1) goto L90
            r6.clearBlock(r0)
            return r4
        L90:
            int r7 = r0.length
            int r7 = r7 - r5
            int r7 = r7 - r3
            int r7 = r7 - r1
            byte[] r2 = r6.mDash
            int r3 = r2.length
            int r3 = r3 - r5
            java.lang.System.arraycopy(r0, r7, r2, r3, r5)
            org.bouncycastle.crypto.Digest r7 = r6.digest
            byte[] r0 = r6.mDash
            int r2 = r0.length
            r7.update(r0, r4, r2)
            org.bouncycastle.crypto.Digest r7 = r6.digest
            byte[] r0 = r6.mDash
            int r2 = r0.length
            int r3 = r6.hLen
            int r2 = r2 - r3
            r7.doFinal(r0, r2)
            byte[] r7 = r6.block
            int r7 = r7.length
            int r0 = r6.hLen
            int r7 = r7 - r0
            int r7 = r7 - r1
            byte[] r2 = r6.mDash
            int r2 = r2.length
            int r2 = r2 - r0
        Lb9:
            byte[] r0 = r6.mDash
            int r3 = r0.length
            if (r2 == r3) goto Ld5
            byte[] r3 = r6.block
            r3 = r3[r7]
            r5 = r0[r2]
            r3 = r3 ^ r5
            if (r3 == 0) goto Ld0
            r6.clearBlock(r0)
            byte[] r7 = r6.block
            r6.clearBlock(r7)
            return r4
        Ld0:
            int r7 = r7 + 1
            int r2 = r2 + 1
            goto Lb9
        Ld5:
            r6.clearBlock(r0)
            byte[] r7 = r6.block
            r6.clearBlock(r7)
            return r1
        Lde:
            return r4
    }
}
