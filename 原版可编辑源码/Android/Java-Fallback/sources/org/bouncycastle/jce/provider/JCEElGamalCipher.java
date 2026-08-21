package org.bouncycastle.jce.provider;

public class JCEElGamalCipher extends org.bouncycastle.jce.provider.WrapCipherSpi {
    private org.bouncycastle.crypto.BufferedAsymmetricBlockCipher cipher;
    private java.security.AlgorithmParameters engineParams;
    private java.security.spec.AlgorithmParameterSpec paramSpec;

    public static class NoPadding extends org.bouncycastle.jce.provider.JCEElGamalCipher {
        public NoPadding() {
                r1 = this;
                org.bouncycastle.crypto.engines.ElGamalEngine r0 = new org.bouncycastle.crypto.engines.ElGamalEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class PKCS1v1_5Padding extends org.bouncycastle.jce.provider.JCEElGamalCipher {
        public PKCS1v1_5Padding() {
                r2 = this;
                org.bouncycastle.crypto.encodings.PKCS1Encoding r0 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.ElGamalEngine r1 = new org.bouncycastle.crypto.engines.ElGamalEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public JCEElGamalCipher(org.bouncycastle.crypto.AsymmetricBlockCipher r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r0 = new org.bouncycastle.crypto.BufferedAsymmetricBlockCipher
            r0.<init>(r2)
            r1.cipher = r0
            return
    }

    private void initFromSpec(javax.crypto.spec.OAEPParameterSpec r6) throws javax.crypto.NoSuchPaddingException {
            r5 = this;
            java.security.spec.AlgorithmParameterSpec r0 = r6.getMGFParameters()
            java.security.spec.MGF1ParameterSpec r0 = (java.security.spec.MGF1ParameterSpec) r0
            java.lang.String r1 = r0.getDigestAlgorithm()
            org.bouncycastle.crypto.Digest r1 = org.bouncycastle.jce.provider.JCEDigestUtil.getDigest(r1)
            if (r1 == 0) goto L2e
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r0 = new org.bouncycastle.crypto.BufferedAsymmetricBlockCipher
            org.bouncycastle.crypto.encodings.OAEPEncoding r2 = new org.bouncycastle.crypto.encodings.OAEPEncoding
            org.bouncycastle.crypto.engines.ElGamalEngine r3 = new org.bouncycastle.crypto.engines.ElGamalEngine
            r3.<init>()
            javax.crypto.spec.PSource r4 = r6.getPSource()
            javax.crypto.spec.PSource$PSpecified r4 = (javax.crypto.spec.PSource.PSpecified) r4
            byte[] r4 = r4.getValue()
            r2.<init>(r3, r1, r4)
            r0.<init>(r2)
            r5.cipher = r0
            r5.paramSpec = r6
            return
        L2e:
            javax.crypto.NoSuchPaddingException r6 = new javax.crypto.NoSuchPaddingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "no match on OAEP constructor for digest algorithm: "
            r1.append(r2)
            java.lang.String r0 = r0.getDigestAlgorithm()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r6.<init>(r0)
            throw r6
    }

    @Override
    protected int engineDoFinal(byte[] r2, int r3, int r4, byte[] r5, int r6) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r1 = this;
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r0 = r1.cipher
            r0.processBytes(r2, r3, r4)
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r2 = r1.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1a
            byte[] r2 = r2.doFinal()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L1a
            r3 = 0
        Lc:
            int r4 = r2.length
            if (r3 == r4) goto L18
            int r4 = r6 + r3
            r0 = r2[r3]
            r5[r4] = r0
            int r3 = r3 + 1
            goto Lc
        L18:
            int r2 = r2.length
            return r2
        L1a:
            r2 = move-exception
            javax.crypto.BadPaddingException r3 = new javax.crypto.BadPaddingException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
    }

    @Override
    protected byte[] engineDoFinal(byte[] r2, int r3, int r4) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r1 = this;
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r0 = r1.cipher
            r0.processBytes(r2, r3, r4)
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r2 = r1.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> Lc
            byte[] r2 = r2.doFinal()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> Lc
            return r2
        Lc:
            r2 = move-exception
            javax.crypto.BadPaddingException r3 = new javax.crypto.BadPaddingException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
    }

    @Override
    protected int engineGetBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r0 = r1.cipher
            int r0 = r0.getInputBlockSize()
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
            boolean r0 = r2 instanceof org.bouncycastle.jce.interfaces.ElGamalKey
            if (r0 == 0) goto L13
            org.bouncycastle.jce.interfaces.ElGamalKey r2 = (org.bouncycastle.jce.interfaces.ElGamalKey) r2
            org.bouncycastle.jce.spec.ElGamalParameterSpec r2 = r2.getParameters()
            java.math.BigInteger r2 = r2.getP()
        Le:
            int r2 = r2.bitLength()
            return r2
        L13:
            boolean r0 = r2 instanceof javax.crypto.interfaces.DHKey
            if (r0 == 0) goto L22
            javax.crypto.interfaces.DHKey r2 = (javax.crypto.interfaces.DHKey) r2
            javax.crypto.spec.DHParameterSpec r2 = r2.getParams()
            java.math.BigInteger r2 = r2.getP()
            goto Le
        L22:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "not an ElGamal key!"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected int engineGetOutputSize(int r1) {
            r0 = this;
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r1 = r0.cipher
            int r1 = r1.getOutputBlockSize()
            return r1
    }

    @Override
    protected java.security.AlgorithmParameters engineGetParameters() {
            r2 = this;
            java.security.AlgorithmParameters r0 = r2.engineParams
            if (r0 != 0) goto L23
            java.security.spec.AlgorithmParameterSpec r0 = r2.paramSpec
            if (r0 == 0) goto L23
            java.lang.String r0 = "OAEP"
            java.lang.String r1 = "BC"
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)     // Catch: java.lang.Exception -> L18
            r2.engineParams = r0     // Catch: java.lang.Exception -> L18
            java.security.spec.AlgorithmParameterSpec r1 = r2.paramSpec     // Catch: java.lang.Exception -> L18
            r0.init(r1)     // Catch: java.lang.Exception -> L18
            goto L23
        L18:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
        L23:
            java.security.AlgorithmParameters r0 = r2.engineParams
            return r0
    }

    @Override
    protected void engineInit(int r1, java.security.Key r2, java.security.AlgorithmParameters r3, java.security.SecureRandom r4) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r0 = this;
            java.security.InvalidAlgorithmParameterException r1 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r2 = "can't handle parameters in ElGamal"
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected void engineInit(int r2, java.security.Key r3, java.security.SecureRandom r4) throws java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.spec.AlgorithmParameterSpec r0 = (java.security.spec.AlgorithmParameterSpec) r0
            r1.engineInit(r2, r3, r0, r4)
            return
    }

    @Override
    protected void engineInit(int r1, java.security.Key r2, java.security.spec.AlgorithmParameterSpec r3, java.security.SecureRandom r4) throws java.security.InvalidKeyException {
            r0 = this;
            if (r3 != 0) goto L5a
            boolean r3 = r2 instanceof org.bouncycastle.jce.interfaces.ElGamalPublicKey
            if (r3 == 0) goto Ld
            java.security.PublicKey r2 = (java.security.PublicKey) r2
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r2 = org.bouncycastle.jce.provider.ElGamalUtil.generatePublicKeyParameter(r2)
            goto L17
        Ld:
            boolean r3 = r2 instanceof org.bouncycastle.jce.interfaces.ElGamalPrivateKey
            if (r3 == 0) goto L52
            java.security.PrivateKey r2 = (java.security.PrivateKey) r2
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r2 = org.bouncycastle.jce.provider.ElGamalUtil.generatePrivateKeyParameter(r2)
        L17:
            if (r4 == 0) goto L1f
            org.bouncycastle.crypto.params.ParametersWithRandom r3 = new org.bouncycastle.crypto.params.ParametersWithRandom
            r3.<init>(r2, r4)
            r2 = r3
        L1f:
            r3 = 1
            if (r1 == r3) goto L4c
            r4 = 2
            if (r1 == r4) goto L48
            r4 = 3
            if (r1 == r4) goto L4c
            r3 = 4
            if (r1 != r3) goto L2c
            goto L48
        L2c:
            java.security.InvalidParameterException r2 = new java.security.InvalidParameterException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "unknown opmode "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = " passed to ElGamal"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
        L48:
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r1 = r0.cipher
            r3 = 0
            goto L4e
        L4c:
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r1 = r0.cipher
        L4e:
            r1.init(r3, r2)
            return
        L52:
            java.security.InvalidKeyException r1 = new java.security.InvalidKeyException
            java.lang.String r2 = "unknown key type passed to ElGamal"
            r1.<init>(r2)
            throw r1
        L5a:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "unknown parameter type."
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected void engineSetMode(java.lang.String r4) throws java.security.NoSuchAlgorithmException {
            r3 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r4)
            java.lang.String r1 = "NONE"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L2c
            java.lang.String r1 = "ECB"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L15
            goto L2c
        L15:
            java.security.NoSuchAlgorithmException r0 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't support mode "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L2c:
            return
    }

    @Override
    protected void engineSetPadding(java.lang.String r5) throws javax.crypto.NoSuchPaddingException {
            r4 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r5)
            java.lang.String r1 = "NOPADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L1a
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r5 = new org.bouncycastle.crypto.BufferedAsymmetricBlockCipher
            org.bouncycastle.crypto.engines.ElGamalEngine r0 = new org.bouncycastle.crypto.engines.ElGamalEngine
            r0.<init>()
            r5.<init>(r0)
        L16:
            r4.cipher = r5
            goto Lce
        L1a:
            java.lang.String r1 = "PKCS1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L32
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r5 = new org.bouncycastle.crypto.BufferedAsymmetricBlockCipher
            org.bouncycastle.crypto.encodings.PKCS1Encoding r0 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
            org.bouncycastle.crypto.engines.ElGamalEngine r1 = new org.bouncycastle.crypto.engines.ElGamalEngine
            r1.<init>()
            r0.<init>(r1)
            r5.<init>(r0)
            goto L16
        L32:
            java.lang.String r1 = "ISO9796-1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L4a
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r5 = new org.bouncycastle.crypto.BufferedAsymmetricBlockCipher
            org.bouncycastle.crypto.encodings.ISO9796d1Encoding r0 = new org.bouncycastle.crypto.encodings.ISO9796d1Encoding
            org.bouncycastle.crypto.engines.ElGamalEngine r1 = new org.bouncycastle.crypto.engines.ElGamalEngine
            r1.<init>()
            r0.<init>(r1)
            r5.<init>(r0)
            goto L16
        L4a:
            java.lang.String r1 = "OAEPPADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L59
        L52:
            javax.crypto.spec.OAEPParameterSpec r5 = javax.crypto.spec.OAEPParameterSpec.DEFAULT
        L54:
            r4.initFromSpec(r5)
            goto Lce
        L59:
            java.lang.String r1 = "OAEPWITHMD5ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            java.lang.String r2 = "MGF1"
            if (r1 == 0) goto L72
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = new java.security.spec.MGF1ParameterSpec
            java.lang.String r1 = "MD5"
            r0.<init>(r1)
            javax.crypto.spec.PSource$PSpecified r3 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            r5.<init>(r1, r2, r0, r3)
            goto L54
        L72:
            java.lang.String r1 = "OAEPWITHSHA1ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L7b
            goto L52
        L7b:
            java.lang.String r1 = "OAEPWITHSHA224ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L92
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = new java.security.spec.MGF1ParameterSpec
            java.lang.String r1 = "SHA-224"
            r0.<init>(r1)
            javax.crypto.spec.PSource$PSpecified r3 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            r5.<init>(r1, r2, r0, r3)
            goto L54
        L92:
            java.lang.String r1 = "OAEPWITHSHA256ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto La6
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = java.security.spec.MGF1ParameterSpec.SHA256
            javax.crypto.spec.PSource$PSpecified r1 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            java.lang.String r3 = "SHA-256"
            r5.<init>(r3, r2, r0, r1)
            goto L54
        La6:
            java.lang.String r1 = "OAEPWITHSHA384ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Lba
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = java.security.spec.MGF1ParameterSpec.SHA384
            javax.crypto.spec.PSource$PSpecified r1 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            java.lang.String r3 = "SHA-384"
            r5.<init>(r3, r2, r0, r1)
            goto L54
        Lba:
            java.lang.String r1 = "OAEPWITHSHA512ANDMGF1PADDING"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lcf
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = java.security.spec.MGF1ParameterSpec.SHA512
            javax.crypto.spec.PSource$PSpecified r1 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            java.lang.String r3 = "SHA-512"
            r5.<init>(r3, r2, r0, r1)
            goto L54
        Lce:
            return
        Lcf:
            javax.crypto.NoSuchPaddingException r0 = new javax.crypto.NoSuchPaddingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r5 = " unavailable with ElGamal."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    @Override
    protected int engineUpdate(byte[] r1, int r2, int r3, byte[] r4, int r5) {
            r0 = this;
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r4 = r0.cipher
            r4.processBytes(r1, r2, r3)
            r1 = 0
            return r1
    }

    @Override
    protected byte[] engineUpdate(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.BufferedAsymmetricBlockCipher r0 = r1.cipher
            r0.processBytes(r2, r3, r4)
            r2 = 0
            return r2
    }
}
