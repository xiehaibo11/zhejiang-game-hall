package org.bouncycastle.jce.provider;

public class JCEIESCipher extends org.bouncycastle.jce.provider.WrapCipherSpi {
    private java.lang.Class[] availableSpecs;
    private java.io.ByteArrayOutputStream buffer;
    private org.bouncycastle.crypto.engines.IESEngine cipher;
    private java.security.AlgorithmParameters engineParam;
    private org.bouncycastle.jce.spec.IESParameterSpec engineParams;
    private int state;

    public static class BrokenECIES extends org.bouncycastle.jce.provider.JCEIESCipher {
        public BrokenECIES() {
                r5 = this;
                org.bouncycastle.crypto.engines.IESEngine r0 = new org.bouncycastle.crypto.engines.IESEngine
                org.bouncycastle.crypto.agreement.ECDHBasicAgreement r1 = new org.bouncycastle.crypto.agreement.ECDHBasicAgreement
                r1.<init>()
                org.bouncycastle.jce.provider.BrokenKDF2BytesGenerator r2 = new org.bouncycastle.jce.provider.BrokenKDF2BytesGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
                r3.<init>()
                r2.<init>(r3)
                org.bouncycastle.crypto.macs.HMac r3 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
                r4.<init>()
                r3.<init>(r4)
                r0.<init>(r1, r2, r3)
                r5.<init>(r0)
                return
        }
    }

    public static class BrokenIES extends org.bouncycastle.jce.provider.JCEIESCipher {
        public BrokenIES() {
                r5 = this;
                org.bouncycastle.crypto.engines.IESEngine r0 = new org.bouncycastle.crypto.engines.IESEngine
                org.bouncycastle.crypto.agreement.DHBasicAgreement r1 = new org.bouncycastle.crypto.agreement.DHBasicAgreement
                r1.<init>()
                org.bouncycastle.jce.provider.BrokenKDF2BytesGenerator r2 = new org.bouncycastle.jce.provider.BrokenKDF2BytesGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
                r3.<init>()
                r2.<init>(r3)
                org.bouncycastle.crypto.macs.HMac r3 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
                r4.<init>()
                r3.<init>(r4)
                r0.<init>(r1, r2, r3)
                r5.<init>(r0)
                return
        }
    }

    public static class ECIES extends org.bouncycastle.jce.provider.JCEIESCipher {
        public ECIES() {
                r5 = this;
                org.bouncycastle.crypto.engines.IESEngine r0 = new org.bouncycastle.crypto.engines.IESEngine
                org.bouncycastle.crypto.agreement.ECDHBasicAgreement r1 = new org.bouncycastle.crypto.agreement.ECDHBasicAgreement
                r1.<init>()
                org.bouncycastle.crypto.generators.KDF2BytesGenerator r2 = new org.bouncycastle.crypto.generators.KDF2BytesGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
                r3.<init>()
                r2.<init>(r3)
                org.bouncycastle.crypto.macs.HMac r3 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
                r4.<init>()
                r3.<init>(r4)
                r0.<init>(r1, r2, r3)
                r5.<init>(r0)
                return
        }
    }

    public static class IES extends org.bouncycastle.jce.provider.JCEIESCipher {
        public IES() {
                r5 = this;
                org.bouncycastle.crypto.engines.IESEngine r0 = new org.bouncycastle.crypto.engines.IESEngine
                org.bouncycastle.crypto.agreement.DHBasicAgreement r1 = new org.bouncycastle.crypto.agreement.DHBasicAgreement
                r1.<init>()
                org.bouncycastle.crypto.generators.KDF2BytesGenerator r2 = new org.bouncycastle.crypto.generators.KDF2BytesGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
                r3.<init>()
                r2.<init>(r3)
                org.bouncycastle.crypto.macs.HMac r3 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
                r4.<init>()
                r3.<init>(r4)
                r0.<init>(r1, r2, r3)
                r5.<init>(r0)
                return
        }
    }

    public JCEIESCipher(org.bouncycastle.crypto.engines.IESEngine r4) {
            r3 = this;
            r3.<init>()
            r0 = -1
            r3.state = r0
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r3.buffer = r0
            r0 = 0
            r3.engineParam = r0
            r3.engineParams = r0
            r0 = 1
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            java.lang.Class<org.bouncycastle.jce.spec.IESParameterSpec> r2 = org.bouncycastle.jce.spec.IESParameterSpec.class
            r0[r1] = r2
            r3.availableSpecs = r0
            r3.cipher = r4
            return
    }

    @Override
    protected int engineDoFinal(byte[] r2, int r3, int r4, byte[] r5, int r6) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r1 = this;
            if (r4 == 0) goto L7
            java.io.ByteArrayOutputStream r0 = r1.buffer
            r0.write(r2, r3, r4)
        L7:
            java.io.ByteArrayOutputStream r2 = r1.buffer     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            byte[] r2 = r2.toByteArray()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            java.io.ByteArrayOutputStream r3 = r1.buffer     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            r3.reset()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            org.bouncycastle.crypto.engines.IESEngine r3 = r1.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            int r4 = r2.length     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            r0 = 0
            byte[] r2 = r3.processBlock(r2, r0, r4)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            int r3 = r2.length     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            java.lang.System.arraycopy(r2, r0, r5, r6, r3)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            int r2 = r2.length     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L20
            return r2
        L20:
            r2 = move-exception
            javax.crypto.BadPaddingException r3 = new javax.crypto.BadPaddingException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
    }

    @Override
    protected byte[] engineDoFinal(byte[] r2, int r3, int r4) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r1 = this;
            if (r4 == 0) goto L7
            java.io.ByteArrayOutputStream r0 = r1.buffer
            r0.write(r2, r3, r4)
        L7:
            java.io.ByteArrayOutputStream r2 = r1.buffer     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1b
            byte[] r2 = r2.toByteArray()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1b
            java.io.ByteArrayOutputStream r3 = r1.buffer     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1b
            r3.reset()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1b
            org.bouncycastle.crypto.engines.IESEngine r3 = r1.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1b
            r4 = 0
            int r0 = r2.length     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1b
            byte[] r2 = r3.processBlock(r2, r4, r0)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1b
            return r2
        L1b:
            r2 = move-exception
            javax.crypto.BadPaddingException r3 = new javax.crypto.BadPaddingException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
    }

    @Override
    protected int engineGetBlockSize() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected byte[] engineGetIV() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected int engineGetKeySize(java.security.Key r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.jce.interfaces.IESKey
            if (r0 == 0) goto L38
            org.bouncycastle.jce.interfaces.IESKey r2 = (org.bouncycastle.jce.interfaces.IESKey) r2
            java.security.PrivateKey r0 = r2.getPrivate()
            boolean r0 = r0 instanceof javax.crypto.interfaces.DHPrivateKey
            if (r0 == 0) goto L1d
            java.security.PrivateKey r2 = r2.getPrivate()
            javax.crypto.interfaces.DHPrivateKey r2 = (javax.crypto.interfaces.DHPrivateKey) r2
            java.math.BigInteger r2 = r2.getX()
        L18:
            int r2 = r2.bitLength()
            return r2
        L1d:
            java.security.PrivateKey r0 = r2.getPrivate()
            boolean r0 = r0 instanceof org.bouncycastle.jce.interfaces.ECPrivateKey
            if (r0 == 0) goto L30
            java.security.PrivateKey r2 = r2.getPrivate()
            org.bouncycastle.jce.interfaces.ECPrivateKey r2 = (org.bouncycastle.jce.interfaces.ECPrivateKey) r2
            java.math.BigInteger r2 = r2.getD()
            goto L18
        L30:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "not an IE key!"
            r2.<init>(r0)
            throw r2
        L38:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "must be passed IE key"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected int engineGetOutputSize(int r3) {
            r2 = this;
            int r0 = r2.state
            r1 = 1
            if (r0 == r1) goto L22
            r1 = 3
            if (r0 != r1) goto L9
            goto L22
        L9:
            r1 = 2
            if (r0 == r1) goto L18
            r1 = 4
            if (r0 != r1) goto L10
            goto L18
        L10:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "cipher not initialised"
            r3.<init>(r0)
            throw r3
        L18:
            java.io.ByteArrayOutputStream r0 = r2.buffer
            int r0 = r0.size()
            int r0 = r0 + r3
            int r0 = r0 + (-20)
            return r0
        L22:
            java.io.ByteArrayOutputStream r0 = r2.buffer
            int r0 = r0.size()
            int r0 = r0 + r3
            int r0 = r0 + 20
            return r0
    }

    @Override
    protected java.security.AlgorithmParameters engineGetParameters() {
            r2 = this;
            java.security.AlgorithmParameters r0 = r2.engineParam
            if (r0 != 0) goto L23
            org.bouncycastle.jce.spec.IESParameterSpec r0 = r2.engineParams
            if (r0 == 0) goto L23
            java.lang.String r0 = "IES"
            java.lang.String r1 = "BC"
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)     // Catch: java.lang.Exception -> L18
            r2.engineParam = r0     // Catch: java.lang.Exception -> L18
            org.bouncycastle.jce.spec.IESParameterSpec r1 = r2.engineParams     // Catch: java.lang.Exception -> L18
            r0.init(r1)     // Catch: java.lang.Exception -> L18
            goto L23
        L18:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
        L23:
            java.security.AlgorithmParameters r0 = r2.engineParam
            return r0
    }

    @Override
    protected void engineInit(int r5, java.security.Key r6, java.security.AlgorithmParameters r7, java.security.SecureRandom r8) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r4 = this;
            r0 = 0
            if (r7 == 0) goto L31
            r1 = 0
        L4:
            java.lang.Class[] r2 = r4.availableSpecs
            int r3 = r2.length
            if (r1 == r3) goto L13
            r2 = r2[r1]     // Catch: java.lang.Exception -> L10
            java.security.spec.AlgorithmParameterSpec r0 = r7.getParameterSpec(r2)     // Catch: java.lang.Exception -> L10
            goto L13
        L10:
            int r1 = r1 + 1
            goto L4
        L13:
            if (r0 == 0) goto L16
            goto L31
        L16:
            java.security.InvalidAlgorithmParameterException r5 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r8 = "can't handle parameter "
            r6.append(r8)
            java.lang.String r7 = r7.toString()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
        L31:
            r4.engineParam = r7
            r4.engineInit(r5, r6, r0, r8)
            return
    }

    @Override
    protected void engineInit(int r2, java.security.Key r3, java.security.SecureRandom r4) throws java.security.InvalidKeyException {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto L6
            r0 = 3
            if (r2 != r0) goto Ld
        L6:
            r0 = 0
            java.security.spec.AlgorithmParameterSpec r0 = (java.security.spec.AlgorithmParameterSpec) r0     // Catch: java.security.InvalidAlgorithmParameterException -> Ld
            r1.engineInit(r2, r3, r0, r4)     // Catch: java.security.InvalidAlgorithmParameterException -> Ld
            return
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "can't handle null parameter spec in IES"
            r2.<init>(r3)
            throw r2
    }

    @Override
    protected void engineInit(int r6, java.security.Key r7, java.security.spec.AlgorithmParameterSpec r8, java.security.SecureRandom r9) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r5 = this;
            boolean r0 = r7 instanceof org.bouncycastle.jce.interfaces.IESKey
            if (r0 == 0) goto La0
            r0 = 3
            r1 = 1
            if (r8 != 0) goto L28
            if (r6 == r1) goto Lc
            if (r6 != r0) goto L28
        Lc:
            r8 = 16
            byte[] r2 = new byte[r8]
            byte[] r8 = new byte[r8]
            if (r9 != 0) goto L19
            java.security.SecureRandom r9 = new java.security.SecureRandom
            r9.<init>()
        L19:
            r9.nextBytes(r2)
            r9.nextBytes(r8)
            org.bouncycastle.jce.spec.IESParameterSpec r9 = new org.bouncycastle.jce.spec.IESParameterSpec
            r3 = 128(0x80, float:1.8E-43)
            r9.<init>(r2, r8, r3)
            r8 = r9
            goto L2c
        L28:
            boolean r9 = r8 instanceof org.bouncycastle.jce.spec.IESParameterSpec
            if (r9 == 0) goto L98
        L2c:
            org.bouncycastle.jce.interfaces.IESKey r7 = (org.bouncycastle.jce.interfaces.IESKey) r7
            java.security.PublicKey r9 = r7.getPublic()
            boolean r9 = r9 instanceof org.bouncycastle.jce.interfaces.ECPublicKey
            if (r9 == 0) goto L47
            java.security.PublicKey r9 = r7.getPublic()
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r9 = org.bouncycastle.jce.provider.ECUtil.generatePublicKeyParameter(r9)
            java.security.PrivateKey r7 = r7.getPrivate()
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r7 = org.bouncycastle.jce.provider.ECUtil.generatePrivateKeyParameter(r7)
            goto L57
        L47:
            java.security.PublicKey r9 = r7.getPublic()
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r9 = org.bouncycastle.jce.provider.DHUtil.generatePublicKeyParameter(r9)
            java.security.PrivateKey r7 = r7.getPrivate()
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r7 = org.bouncycastle.jce.provider.DHUtil.generatePrivateKeyParameter(r7)
        L57:
            org.bouncycastle.jce.spec.IESParameterSpec r8 = (org.bouncycastle.jce.spec.IESParameterSpec) r8
            r5.engineParams = r8
            org.bouncycastle.crypto.params.IESParameters r8 = new org.bouncycastle.crypto.params.IESParameters
            org.bouncycastle.jce.spec.IESParameterSpec r2 = r5.engineParams
            byte[] r2 = r2.getDerivationV()
            org.bouncycastle.jce.spec.IESParameterSpec r3 = r5.engineParams
            byte[] r3 = r3.getEncodingV()
            org.bouncycastle.jce.spec.IESParameterSpec r4 = r5.engineParams
            int r4 = r4.getMacKeySize()
            r8.<init>(r2, r3, r4)
            r5.state = r6
            java.io.ByteArrayOutputStream r2 = r5.buffer
            r2.reset()
            if (r6 == r1) goto L92
            r2 = 2
            if (r6 == r2) goto L8b
            if (r6 == r0) goto L92
            r0 = 4
            if (r6 == r0) goto L8b
            java.io.PrintStream r6 = java.lang.System.out
            java.lang.String r7 = "eeek!"
            r6.println(r7)
            goto L97
        L8b:
            org.bouncycastle.crypto.engines.IESEngine r6 = r5.cipher
            r0 = 0
            r6.init(r0, r7, r9, r8)
            goto L97
        L92:
            org.bouncycastle.crypto.engines.IESEngine r6 = r5.cipher
            r6.init(r1, r7, r9, r8)
        L97:
            return
        L98:
            java.security.InvalidAlgorithmParameterException r6 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r7 = "must be passed IES parameters"
            r6.<init>(r7)
            throw r6
        La0:
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r7 = "must be passed IE key"
            r6.<init>(r7)
            throw r6
    }

    @Override
    protected void engineSetMode(java.lang.String r4) {
            r3 = this;
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't support mode "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    protected void engineSetPadding(java.lang.String r3) throws javax.crypto.NoSuchPaddingException {
            r2 = this;
            javax.crypto.NoSuchPaddingException r0 = new javax.crypto.NoSuchPaddingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = " unavailable with RSA."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    protected int engineUpdate(byte[] r1, int r2, int r3, byte[] r4, int r5) {
            r0 = this;
            java.io.ByteArrayOutputStream r4 = r0.buffer
            r4.write(r1, r2, r3)
            r1 = 0
            return r1
    }

    @Override
    protected byte[] engineUpdate(byte[] r2, int r3, int r4) {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1.buffer
            r0.write(r2, r3, r4)
            r2 = 0
            return r2
    }
}
