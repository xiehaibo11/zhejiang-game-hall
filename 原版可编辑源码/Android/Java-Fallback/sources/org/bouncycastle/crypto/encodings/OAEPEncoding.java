package org.bouncycastle.crypto.encodings;

public class OAEPEncoding implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private byte[] defHash;
    private org.bouncycastle.crypto.AsymmetricBlockCipher engine;
    private boolean forEncryption;
    private org.bouncycastle.crypto.Digest hash;
    private java.security.SecureRandom random;

    public OAEPEncoding(org.bouncycastle.crypto.AsymmetricBlockCipher r3) {
            r2 = this;
            org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
            r0.<init>()
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public OAEPEncoding(org.bouncycastle.crypto.AsymmetricBlockCipher r2, org.bouncycastle.crypto.Digest r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public OAEPEncoding(org.bouncycastle.crypto.AsymmetricBlockCipher r2, org.bouncycastle.crypto.Digest r3, byte[] r4) {
            r1 = this;
            r1.<init>()
            r1.engine = r2
            r1.hash = r3
            int r2 = r3.getDigestSize()
            byte[] r2 = new byte[r2]
            r1.defHash = r2
            r2 = 0
            if (r4 == 0) goto L16
            int r0 = r4.length
            r3.update(r4, r2, r0)
        L16:
            byte[] r4 = r1.defHash
            r3.doFinal(r4, r2)
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

    private byte[] maskGeneratorFunction1(byte[] r9, int r10, int r11, int r12) {
            r8 = this;
            byte[] r0 = new byte[r12]
            byte[] r1 = r8.defHash
            int r1 = r1.length
            byte[] r1 = new byte[r1]
            r2 = 4
            byte[] r3 = new byte[r2]
            org.bouncycastle.crypto.Digest r4 = r8.hash
            r4.reset()
            r4 = 0
            r5 = 0
        L11:
            r8.ItoOSP(r5, r3)
            org.bouncycastle.crypto.Digest r6 = r8.hash
            r6.update(r9, r10, r11)
            org.bouncycastle.crypto.Digest r6 = r8.hash
            r6.update(r3, r4, r2)
            org.bouncycastle.crypto.Digest r6 = r8.hash
            r6.doFinal(r1, r4)
            byte[] r6 = r8.defHash
            int r7 = r6.length
            int r7 = r7 * r5
            int r6 = r6.length
            java.lang.System.arraycopy(r1, r4, r0, r7, r6)
            int r5 = r5 + 1
            byte[] r6 = r8.defHash
            int r7 = r6.length
            int r7 = r12 / r7
            if (r5 < r7) goto L11
            int r6 = r6.length
            int r6 = r6 * r5
            if (r6 >= r12) goto L58
            r8.ItoOSP(r5, r3)
            org.bouncycastle.crypto.Digest r6 = r8.hash
            r6.update(r9, r10, r11)
            org.bouncycastle.crypto.Digest r9 = r8.hash
            r9.update(r3, r4, r2)
            org.bouncycastle.crypto.Digest r9 = r8.hash
            r9.doFinal(r1, r4)
            byte[] r9 = r8.defHash
            int r10 = r9.length
            int r10 = r10 * r5
            int r9 = r9.length
            int r5 = r5 * r9
            int r12 = r12 - r5
            java.lang.System.arraycopy(r1, r4, r0, r10, r12)
        L58:
            return r0
    }

    public byte[] decodeBlock(byte[] r5, int r6, int r7) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r4 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r4.engine
            byte[] r5 = r0.processBlock(r5, r6, r7)
            int r6 = r5.length
            org.bouncycastle.crypto.AsymmetricBlockCipher r7 = r4.engine
            int r7 = r7.getOutputBlockSize()
            r0 = 0
            if (r6 >= r7) goto L1f
            org.bouncycastle.crypto.AsymmetricBlockCipher r6 = r4.engine
            int r6 = r6.getOutputBlockSize()
            byte[] r7 = new byte[r6]
            int r1 = r5.length
            int r6 = r6 - r1
            int r1 = r5.length
            java.lang.System.arraycopy(r5, r0, r7, r6, r1)
            r5 = r7
        L1f:
            int r6 = r5.length
            byte[] r7 = r4.defHash
            int r1 = r7.length
            int r1 = r1 * 2
            r2 = 1
            int r1 = r1 + r2
            if (r6 < r1) goto Lb4
            int r6 = r7.length
            int r1 = r5.length
            int r3 = r7.length
            int r1 = r1 - r3
            int r7 = r7.length
            byte[] r6 = r4.maskGeneratorFunction1(r5, r6, r1, r7)
            r7 = 0
        L33:
            byte[] r1 = r4.defHash
            int r3 = r1.length
            if (r7 == r3) goto L43
            r1 = r5[r7]
            r3 = r6[r7]
            r1 = r1 ^ r3
            byte r1 = (byte) r1
            r5[r7] = r1
            int r7 = r7 + 1
            goto L33
        L43:
            int r6 = r1.length
            int r7 = r5.length
            int r1 = r1.length
            int r7 = r7 - r1
            byte[] r6 = r4.maskGeneratorFunction1(r5, r0, r6, r7)
            byte[] r7 = r4.defHash
            int r7 = r7.length
        L4e:
            int r1 = r5.length
            if (r7 == r1) goto L61
            r1 = r5[r7]
            byte[] r3 = r4.defHash
            int r3 = r3.length
            int r3 = r7 - r3
            r3 = r6[r3]
            r1 = r1 ^ r3
            byte r1 = (byte) r1
            r5[r7] = r1
            int r7 = r7 + 1
            goto L4e
        L61:
            r6 = 0
        L62:
            byte[] r7 = r4.defHash
            int r1 = r7.length
            if (r6 == r1) goto L7a
            r1 = r7[r6]
            int r7 = r7.length
            int r7 = r7 + r6
            r7 = r5[r7]
            if (r1 != r7) goto L72
            int r6 = r6 + 1
            goto L62
        L72:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "data hash wrong"
            r5.<init>(r6)
            throw r5
        L7a:
            int r6 = r7.length
            int r6 = r6 * 2
        L7d:
            int r7 = r5.length
            if (r6 == r7) goto L8c
            r7 = r5[r6]
            if (r7 == r2) goto L8c
            r7 = r5[r6]
            if (r7 == 0) goto L89
            goto L8c
        L89:
            int r6 = r6 + 1
            goto L7d
        L8c:
            int r7 = r5.length
            int r7 = r7 - r2
            if (r6 >= r7) goto L9d
            r7 = r5[r6]
            if (r7 != r2) goto L9d
            int r6 = r6 + r2
            int r7 = r5.length
            int r7 = r7 - r6
            byte[] r1 = new byte[r7]
            java.lang.System.arraycopy(r5, r6, r1, r0, r7)
            return r1
        L9d:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "data start wrong "
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r5.<init>(r6)
            throw r5
        Lb4:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "data too short"
            r5.<init>(r6)
            throw r5
    }

    public byte[] encodeBlock(byte[] r6, int r7, int r8) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r5 = this;
            int r0 = r5.getInputBlockSize()
            r1 = 1
            int r0 = r0 + r1
            byte[] r2 = r5.defHash
            int r2 = r2.length
            int r2 = r2 * 2
            int r0 = r0 + r2
            byte[] r2 = new byte[r0]
            int r3 = r0 - r8
            java.lang.System.arraycopy(r6, r7, r2, r3, r8)
            int r3 = r3 - r1
            r2[r3] = r1
            byte[] r6 = r5.defHash
            int r7 = r6.length
            int r8 = r6.length
            r1 = 0
            java.lang.System.arraycopy(r6, r1, r2, r7, r8)
            byte[] r6 = r5.defHash
            int r6 = r6.length
            byte[] r7 = new byte[r6]
            java.security.SecureRandom r8 = r5.random
            r8.nextBytes(r7)
            byte[] r8 = r5.defHash
            int r8 = r8.length
            int r8 = r0 - r8
            byte[] r6 = r5.maskGeneratorFunction1(r7, r1, r6, r8)
            byte[] r8 = r5.defHash
            int r8 = r8.length
        L34:
            if (r8 == r0) goto L46
            r3 = r2[r8]
            byte[] r4 = r5.defHash
            int r4 = r4.length
            int r4 = r8 - r4
            r4 = r6[r4]
            r3 = r3 ^ r4
            byte r3 = (byte) r3
            r2[r8] = r3
            int r8 = r8 + 1
            goto L34
        L46:
            byte[] r6 = r5.defHash
            int r6 = r6.length
            java.lang.System.arraycopy(r7, r1, r2, r1, r6)
            byte[] r6 = r5.defHash
            int r7 = r6.length
            int r8 = r6.length
            int r8 = r0 - r8
            int r6 = r6.length
            byte[] r6 = r5.maskGeneratorFunction1(r2, r7, r8, r6)
            r7 = 0
        L58:
            byte[] r8 = r5.defHash
            int r8 = r8.length
            if (r7 == r8) goto L68
            r8 = r2[r7]
            r3 = r6[r7]
            r8 = r8 ^ r3
            byte r8 = (byte) r8
            r2[r7] = r8
            int r7 = r7 + 1
            goto L58
        L68:
            org.bouncycastle.crypto.AsymmetricBlockCipher r6 = r5.engine
            byte[] r6 = r6.processBlock(r2, r1, r0)
            return r6
    }

    @Override
    public int getInputBlockSize() {
            r2 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r2.engine
            int r0 = r0.getInputBlockSize()
            boolean r1 = r2.forEncryption
            if (r1 == 0) goto L12
            int r0 = r0 + (-1)
            byte[] r1 = r2.defHash
            int r1 = r1.length
            int r1 = r1 * 2
            int r0 = r0 - r1
        L12:
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
            int r0 = r0 + (-1)
            byte[] r1 = r2.defHash
            int r1 = r1.length
            int r1 = r1 * 2
            int r0 = r0 - r1
            return r0
    }

    public org.bouncycastle.crypto.AsymmetricBlockCipher getUnderlyingCipher() {
            r1 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.engine
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto Lc
            r0 = r3
            org.bouncycastle.crypto.params.ParametersWithRandom r0 = (org.bouncycastle.crypto.params.ParametersWithRandom) r0
            java.security.SecureRandom r0 = r0.getRandom()
            goto L11
        Lc:
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
        L11:
            r1.random = r0
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r1.engine
            r0.init(r2, r3)
            r1.forEncryption = r2
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
}
