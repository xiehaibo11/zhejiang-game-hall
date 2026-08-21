package org.bouncycastle.crypto.encodings;

public class PKCS1Encoding implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private static final int HEADER_LENGTH = 10;
    public static final java.lang.String STRICT_LENGTH_ENABLED_PROPERTY = "org.bouncycastle.pkcs1.strict";
    private org.bouncycastle.crypto.AsymmetricBlockCipher engine;
    private boolean forEncryption;
    private boolean forPrivateKey;
    private java.security.SecureRandom random;
    private boolean useStrictLength;


    public PKCS1Encoding(org.bouncycastle.crypto.AsymmetricBlockCipher r1) {
            r0 = this;
            r0.<init>()
            r0.engine = r1
            boolean r1 = r0.useStrict()
            r0.useStrictLength = r1
            return
    }

    private byte[] decodeBlock(byte[] r5, int r6, int r7) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r4 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r4.engine
            byte[] r5 = r0.processBlock(r5, r6, r7)
            int r6 = r5.length
            int r7 = r4.getOutputBlockSize()
            if (r6 < r7) goto L67
            r6 = 0
            r7 = r5[r6]
            r0 = 1
            if (r7 == r0) goto L1f
            r1 = 2
            if (r7 != r1) goto L17
            goto L1f
        L17:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "unknown block type"
            r5.<init>(r6)
            throw r5
        L1f:
            boolean r1 = r4.useStrictLength
            if (r1 == 0) goto L35
            int r1 = r5.length
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r4.engine
            int r2 = r2.getOutputBlockSize()
            if (r1 != r2) goto L2d
            goto L35
        L2d:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "block incorrect size"
            r5.<init>(r6)
            throw r5
        L35:
            r1 = 1
        L36:
            int r2 = r5.length
            if (r1 == r2) goto L4f
            r2 = r5[r1]
            if (r2 != 0) goto L3e
            goto L4f
        L3e:
            if (r7 != r0) goto L4c
            r3 = -1
            if (r2 != r3) goto L44
            goto L4c
        L44:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "block padding incorrect"
            r5.<init>(r6)
            throw r5
        L4c:
            int r1 = r1 + 1
            goto L36
        L4f:
            int r1 = r1 + r0
            int r7 = r5.length
            if (r1 >= r7) goto L5f
            r7 = 10
            if (r1 < r7) goto L5f
            int r7 = r5.length
            int r7 = r7 - r1
            byte[] r0 = new byte[r7]
            java.lang.System.arraycopy(r5, r1, r0, r6, r7)
            return r0
        L5f:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "no data in block"
            r5.<init>(r6)
            throw r5
        L67:
            org.bouncycastle.crypto.InvalidCipherTextException r5 = new org.bouncycastle.crypto.InvalidCipherTextException
            java.lang.String r6 = "block truncated"
            r5.<init>(r6)
            throw r5
    }

    private byte[] encodeBlock(byte[] r7, int r8, int r9) throws org.bouncycastle.crypto.InvalidCipherTextException {
            r6 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r6.engine
            int r0 = r0.getInputBlockSize()
            byte[] r1 = new byte[r0]
            boolean r2 = r6.forPrivateKey
            r3 = 0
            r4 = 1
            if (r2 == 0) goto L1c
            r1[r3] = r4
            r2 = 1
        L11:
            int r5 = r0 - r9
            int r5 = r5 - r4
            if (r2 == r5) goto L3b
            r5 = -1
            r1[r2] = r5
            int r2 = r2 + 1
            goto L11
        L1c:
            java.security.SecureRandom r2 = r6.random
            r2.nextBytes(r1)
            r2 = 2
            r1[r3] = r2
            r2 = 1
        L25:
            int r5 = r0 - r9
            int r5 = r5 - r4
            if (r2 == r5) goto L3b
        L2a:
            r5 = r1[r2]
            if (r5 != 0) goto L38
            java.security.SecureRandom r5 = r6.random
            int r5 = r5.nextInt()
            byte r5 = (byte) r5
            r1[r2] = r5
            goto L2a
        L38:
            int r2 = r2 + 1
            goto L25
        L3b:
            int r2 = r0 - r9
            int r4 = r2 + (-1)
            r1[r4] = r3
            java.lang.System.arraycopy(r7, r8, r1, r2, r9)
            org.bouncycastle.crypto.AsymmetricBlockCipher r7 = r6.engine
            byte[] r7 = r7.processBlock(r1, r3, r0)
            return r7
    }

    private boolean useStrict() {
            r2 = this;
            org.bouncycastle.crypto.encodings.PKCS1Encoding$1 r0 = new org.bouncycastle.crypto.encodings.PKCS1Encoding$1
            r0.<init>(r2)
            java.lang.Object r0 = java.security.AccessController.doPrivileged(r0)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L18
            java.lang.String r1 = "true"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L16
            goto L18
        L16:
            r0 = 0
            goto L19
        L18:
            r0 = 1
        L19:
            return r0
    }

    @Override
    public int getInputBlockSize() {
            r2 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r2.engine
            int r0 = r0.getInputBlockSize()
            boolean r1 = r2.forEncryption
            if (r1 == 0) goto Lc
            int r0 = r0 + (-10)
        Lc:
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
            int r0 = r0 + (-10)
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
            if (r0 == 0) goto L14
            r0 = r4
            org.bouncycastle.crypto.params.ParametersWithRandom r0 = (org.bouncycastle.crypto.params.ParametersWithRandom) r0
            java.security.SecureRandom r1 = r0.getRandom()
            r2.random = r1
            org.bouncycastle.crypto.CipherParameters r0 = r0.getParameters()
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r0 = (org.bouncycastle.crypto.params.AsymmetricKeyParameter) r0
            goto L1e
        L14:
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            r2.random = r0
            r0 = r4
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r0 = (org.bouncycastle.crypto.params.AsymmetricKeyParameter) r0
        L1e:
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r2.engine
            r1.init(r3, r4)
            boolean r4 = r0.isPrivate()
            r2.forPrivateKey = r4
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
}
