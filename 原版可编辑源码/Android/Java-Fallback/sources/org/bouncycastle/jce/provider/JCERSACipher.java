package org.bouncycastle.jce.provider;

public class JCERSACipher extends org.bouncycastle.jce.provider.WrapCipherSpi {
    private java.io.ByteArrayOutputStream bOut;
    private org.bouncycastle.crypto.AsymmetricBlockCipher cipher;
    private java.security.AlgorithmParameters engineParams;
    private java.security.spec.AlgorithmParameterSpec paramSpec;
    private boolean privateKeyOnly;
    private boolean publicKeyOnly;

    public static class ISO9796d1Padding extends org.bouncycastle.jce.provider.JCERSACipher {
        public ISO9796d1Padding() {
                r2 = this;
                org.bouncycastle.crypto.encodings.ISO9796d1Encoding r0 = new org.bouncycastle.crypto.encodings.ISO9796d1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class NoPadding extends org.bouncycastle.jce.provider.JCERSACipher {
        public NoPadding() {
                r1 = this;
                org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class OAEPPadding extends org.bouncycastle.jce.provider.JCERSACipher {
        public OAEPPadding() {
                r1 = this;
                javax.crypto.spec.OAEPParameterSpec r0 = javax.crypto.spec.OAEPParameterSpec.DEFAULT
                r1.<init>(r0)
                return
        }
    }

    public static class PKCS1v1_5Padding extends org.bouncycastle.jce.provider.JCERSACipher {
        public PKCS1v1_5Padding() {
                r2 = this;
                org.bouncycastle.crypto.encodings.PKCS1Encoding r0 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PKCS1v1_5Padding_PrivateOnly extends org.bouncycastle.jce.provider.JCERSACipher {
        public PKCS1v1_5Padding_PrivateOnly() {
                r3 = this;
                org.bouncycastle.crypto.encodings.PKCS1Encoding r0 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 0
                r2 = 1
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class PKCS1v1_5Padding_PublicOnly extends org.bouncycastle.jce.provider.JCERSACipher {
        public PKCS1v1_5Padding_PublicOnly() {
                r3 = this;
                org.bouncycastle.crypto.encodings.PKCS1Encoding r0 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 1
                r2 = 0
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public JCERSACipher(javax.crypto.spec.OAEPParameterSpec r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.publicKeyOnly = r0
            r1.privateKeyOnly = r0
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1.bOut = r0
            r1.initFromSpec(r2)     // Catch: javax.crypto.NoSuchPaddingException -> L13
            return
        L13:
            r2 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.getMessage()
            r0.<init>(r2)
            throw r0
    }

    public JCERSACipher(org.bouncycastle.crypto.AsymmetricBlockCipher r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.publicKeyOnly = r0
            r1.privateKeyOnly = r0
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1.bOut = r0
            r1.cipher = r2
            return
    }

    public JCERSACipher(boolean r2, boolean r3, org.bouncycastle.crypto.AsymmetricBlockCipher r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.publicKeyOnly = r0
            r1.privateKeyOnly = r0
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1.bOut = r0
            r1.publicKeyOnly = r2
            r1.privateKeyOnly = r3
            r1.cipher = r4
            return
    }

    private void initFromSpec(javax.crypto.spec.OAEPParameterSpec r5) throws javax.crypto.NoSuchPaddingException {
            r4 = this;
            java.security.spec.AlgorithmParameterSpec r0 = r5.getMGFParameters()
            java.security.spec.MGF1ParameterSpec r0 = (java.security.spec.MGF1ParameterSpec) r0
            java.lang.String r1 = r0.getDigestAlgorithm()
            org.bouncycastle.crypto.Digest r1 = org.bouncycastle.jce.provider.JCEDigestUtil.getDigest(r1)
            if (r1 == 0) goto L29
            org.bouncycastle.crypto.encodings.OAEPEncoding r0 = new org.bouncycastle.crypto.encodings.OAEPEncoding
            org.bouncycastle.crypto.engines.RSABlindedEngine r2 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r2.<init>()
            javax.crypto.spec.PSource r3 = r5.getPSource()
            javax.crypto.spec.PSource$PSpecified r3 = (javax.crypto.spec.PSource.PSpecified) r3
            byte[] r3 = r3.getValue()
            r0.<init>(r2, r1, r3)
            r4.cipher = r0
            r4.paramSpec = r5
            return
        L29:
            javax.crypto.NoSuchPaddingException r5 = new javax.crypto.NoSuchPaddingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "no match on OAEP constructor for digest algorithm: "
            r1.append(r2)
            java.lang.String r0 = r0.getDigestAlgorithm()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
    }

    @Override
    protected int engineDoFinal(byte[] r2, int r3, int r4, byte[] r5, int r6) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r1 = this;
            if (r2 == 0) goto L7
            java.io.ByteArrayOutputStream r0 = r1.bOut
            r0.write(r2, r3, r4)
        L7:
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r1.cipher
            boolean r2 = r2 instanceof org.bouncycastle.crypto.engines.RSABlindedEngine
            java.lang.String r3 = "too much data for RSA block"
            if (r2 == 0) goto L26
            java.io.ByteArrayOutputStream r2 = r1.bOut
            int r2 = r2.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r1.cipher
            int r4 = r4.getInputBlockSize()
            int r4 = r4 + 1
            if (r2 > r4) goto L20
            goto L34
        L20:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>(r3)
            throw r2
        L26:
            java.io.ByteArrayOutputStream r2 = r1.bOut
            int r2 = r2.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r1.cipher
            int r4 = r4.getInputBlockSize()
            if (r2 > r4) goto L60
        L34:
            java.io.ByteArrayOutputStream r2 = r1.bOut     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L55
            byte[] r2 = r2.toByteArray()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L55
            java.io.ByteArrayOutputStream r3 = r1.bOut     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L55
            r3.reset()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L55
            org.bouncycastle.crypto.AsymmetricBlockCipher r3 = r1.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L55
            int r4 = r2.length     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L55
            r0 = 0
            byte[] r2 = r3.processBlock(r2, r0, r4)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L55
        L47:
            int r3 = r2.length
            if (r0 == r3) goto L53
            int r3 = r6 + r0
            r4 = r2[r0]
            r5[r3] = r4
            int r0 = r0 + 1
            goto L47
        L53:
            int r2 = r2.length
            return r2
        L55:
            r2 = move-exception
            javax.crypto.BadPaddingException r3 = new javax.crypto.BadPaddingException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
        L60:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>(r3)
            throw r2
    }

    @Override
    protected byte[] engineDoFinal(byte[] r2, int r3, int r4) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r1 = this;
            if (r2 == 0) goto L7
            java.io.ByteArrayOutputStream r0 = r1.bOut
            r0.write(r2, r3, r4)
        L7:
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r1.cipher
            boolean r2 = r2 instanceof org.bouncycastle.crypto.engines.RSABlindedEngine
            java.lang.String r3 = "too much data for RSA block"
            if (r2 == 0) goto L26
            java.io.ByteArrayOutputStream r2 = r1.bOut
            int r2 = r2.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r1.cipher
            int r4 = r4.getInputBlockSize()
            int r4 = r4 + 1
            if (r2 > r4) goto L20
            goto L34
        L20:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>(r3)
            throw r2
        L26:
            java.io.ByteArrayOutputStream r2 = r1.bOut
            int r2 = r2.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r1.cipher
            int r4 = r4.getInputBlockSize()
            if (r2 > r4) goto L53
        L34:
            java.io.ByteArrayOutputStream r2 = r1.bOut     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L48
            byte[] r2 = r2.toByteArray()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L48
            java.io.ByteArrayOutputStream r3 = r1.bOut     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L48
            r3.reset()     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L48
            org.bouncycastle.crypto.AsymmetricBlockCipher r3 = r1.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L48
            r4 = 0
            int r0 = r2.length     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L48
            byte[] r2 = r3.processBlock(r2, r4, r0)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L48
            return r2
        L48:
            r2 = move-exception
            javax.crypto.BadPaddingException r3 = new javax.crypto.BadPaddingException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
        L53:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>(r3)
            throw r2
    }

    @Override
    protected int engineGetBlockSize() {
            r2 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r2.cipher     // Catch: java.lang.NullPointerException -> L7
            int r0 = r0.getInputBlockSize()     // Catch: java.lang.NullPointerException -> L7
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "RSA Cipher not initialised"
            r0.<init>(r1)
            throw r0
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
            boolean r0 = r2 instanceof java.security.interfaces.RSAPrivateKey
            if (r0 == 0) goto Lf
            java.security.interfaces.RSAPrivateKey r2 = (java.security.interfaces.RSAPrivateKey) r2
            java.math.BigInteger r2 = r2.getModulus()
        La:
            int r2 = r2.bitLength()
            return r2
        Lf:
            boolean r0 = r2 instanceof java.security.interfaces.RSAPublicKey
            if (r0 == 0) goto L1a
            java.security.interfaces.RSAPublicKey r2 = (java.security.interfaces.RSAPublicKey) r2
            java.math.BigInteger r2 = r2.getModulus()
            goto La
        L1a:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "not an RSA key!"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected int engineGetOutputSize(int r2) {
            r1 = this;
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r1.cipher     // Catch: java.lang.NullPointerException -> L7
            int r2 = r2.getOutputBlockSize()     // Catch: java.lang.NullPointerException -> L7
            return r2
        L7:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "RSA Cipher not initialised"
            r2.<init>(r0)
            throw r2
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
    protected void engineInit(int r2, java.security.Key r3, java.security.AlgorithmParameters r4, java.security.SecureRandom r5) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r1 = this;
            if (r4 == 0) goto L25
            java.lang.Class<javax.crypto.spec.OAEPParameterSpec> r0 = javax.crypto.spec.OAEPParameterSpec.class
            java.security.spec.AlgorithmParameterSpec r0 = r4.getParameterSpec(r0)     // Catch: java.security.spec.InvalidParameterSpecException -> L9
            goto L26
        L9:
            r2 = move-exception
            java.security.InvalidAlgorithmParameterException r3 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "cannot recognise parameters: "
            r4.append(r5)
            java.lang.String r5 = r2.toString()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4, r2)
            throw r3
        L25:
            r0 = 0
        L26:
            r1.engineParams = r4
            r1.engineInit(r2, r3, r0, r5)
            return
    }

    @Override
    protected void engineInit(int r2, java.security.Key r3, java.security.SecureRandom r4) throws java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.spec.AlgorithmParameterSpec r0 = (java.security.spec.AlgorithmParameterSpec) r0     // Catch: java.security.InvalidAlgorithmParameterException -> L7
            r1.engineInit(r2, r3, r0, r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L7
            return
        L7:
            r2 = move-exception
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Eeeek! "
            r4.append(r0)
            java.lang.String r0 = r2.toString()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4, r2)
            throw r3
    }

    @Override
    protected void engineInit(int r4, java.security.Key r5, java.security.spec.AlgorithmParameterSpec r6, java.security.SecureRandom r7) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r3 = this;
            if (r6 == 0) goto Lf
            boolean r0 = r6 instanceof javax.crypto.spec.OAEPParameterSpec
            if (r0 == 0) goto L7
            goto Lf
        L7:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "unknown parameter type."
            r4.<init>(r5)
            throw r4
        Lf:
            boolean r0 = r5 instanceof java.security.interfaces.RSAPublicKey
            if (r0 == 0) goto L26
            boolean r0 = r3.privateKeyOnly
            if (r0 != 0) goto L1e
            java.security.interfaces.RSAPublicKey r5 = (java.security.interfaces.RSAPublicKey) r5
            org.bouncycastle.crypto.params.RSAKeyParameters r5 = org.bouncycastle.jce.provider.RSAUtil.generatePublicKeyParameter(r5)
            goto L34
        L1e:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.String r5 = "mode 1 requires RSAPrivateKey"
            r4.<init>(r5)
            throw r4
        L26:
            boolean r0 = r5 instanceof java.security.interfaces.RSAPrivateKey
            if (r0 == 0) goto L11a
            boolean r0 = r3.publicKeyOnly
            if (r0 != 0) goto L112
            java.security.interfaces.RSAPrivateKey r5 = (java.security.interfaces.RSAPrivateKey) r5
            org.bouncycastle.crypto.params.RSAKeyParameters r5 = org.bouncycastle.jce.provider.RSAUtil.generatePrivateKeyParameter(r5)
        L34:
            if (r6 == 0) goto Lc8
            r0 = r6
            javax.crypto.spec.OAEPParameterSpec r0 = (javax.crypto.spec.OAEPParameterSpec) r0
            r3.paramSpec = r6
            java.lang.String r6 = r0.getMGFAlgorithm()
            java.lang.String r1 = "MGF1"
            boolean r6 = r6.equalsIgnoreCase(r1)
            if (r6 != 0) goto L60
            java.lang.String r6 = r0.getMGFAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_mgf1
            java.lang.String r1 = r1.getId()
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L58
            goto L60
        L58:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "unknown mask generation function specified"
            r4.<init>(r5)
            throw r4
        L60:
            java.security.spec.AlgorithmParameterSpec r6 = r0.getMGFParameters()
            boolean r6 = r6 instanceof java.security.spec.MGF1ParameterSpec
            if (r6 == 0) goto Lc0
            java.security.spec.AlgorithmParameterSpec r6 = r0.getMGFParameters()
            java.security.spec.MGF1ParameterSpec r6 = (java.security.spec.MGF1ParameterSpec) r6
            java.lang.String r1 = r6.getDigestAlgorithm()
            java.lang.String r2 = r0.getDigestAlgorithm()
            boolean r1 = org.bouncycastle.jce.provider.JCEDigestUtil.isSameDigest(r1, r2)
            if (r1 == 0) goto Lb8
            java.lang.String r1 = r6.getDigestAlgorithm()
            org.bouncycastle.crypto.Digest r1 = org.bouncycastle.jce.provider.JCEDigestUtil.getDigest(r1)
            if (r1 == 0) goto L9d
            org.bouncycastle.crypto.encodings.OAEPEncoding r6 = new org.bouncycastle.crypto.encodings.OAEPEncoding
            org.bouncycastle.crypto.engines.RSABlindedEngine r2 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r2.<init>()
            javax.crypto.spec.PSource r0 = r0.getPSource()
            javax.crypto.spec.PSource$PSpecified r0 = (javax.crypto.spec.PSource.PSpecified) r0
            byte[] r0 = r0.getValue()
            r6.<init>(r2, r1, r0)
            r3.cipher = r6
            goto Lc8
        L9d:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "no match on MGF digest algorithm: "
            r5.append(r7)
            java.lang.String r6 = r6.getDigestAlgorithm()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        Lb8:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "digest algorithm for MGF should be the same as for OAEP parameters."
            r4.<init>(r5)
            throw r4
        Lc0:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "unkown MGF parameters"
            r4.<init>(r5)
            throw r4
        Lc8:
            org.bouncycastle.crypto.AsymmetricBlockCipher r6 = r3.cipher
            boolean r6 = r6 instanceof org.bouncycastle.crypto.engines.RSABlindedEngine
            if (r6 != 0) goto Ldf
            org.bouncycastle.crypto.params.ParametersWithRandom r6 = new org.bouncycastle.crypto.params.ParametersWithRandom
            if (r7 == 0) goto Ld6
            r6.<init>(r5, r7)
            goto Lde
        Ld6:
            java.security.SecureRandom r7 = new java.security.SecureRandom
            r7.<init>()
            r6.<init>(r5, r7)
        Lde:
            r5 = r6
        Ldf:
            r6 = 1
            if (r4 == r6) goto L10c
            r7 = 2
            if (r4 == r7) goto L108
            r7 = 3
            if (r4 == r7) goto L10c
            r6 = 4
            if (r4 != r6) goto Lec
            goto L108
        Lec:
            java.security.InvalidParameterException r5 = new java.security.InvalidParameterException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "unknown opmode "
            r6.append(r7)
            r6.append(r4)
            java.lang.String r4 = " passed to RSA"
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
        L108:
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r3.cipher
            r6 = 0
            goto L10e
        L10c:
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r3.cipher
        L10e:
            r4.init(r6, r5)
            return
        L112:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.String r5 = "mode 2 requires RSAPublicKey"
            r4.<init>(r5)
            throw r4
        L11a:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.String r5 = "unknown key type passed to RSA"
            r4.<init>(r5)
            throw r4
    }

    @Override
    protected void engineSetMode(java.lang.String r5) throws java.security.NoSuchAlgorithmException {
            r4 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r5)
            java.lang.String r1 = "NONE"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L48
            java.lang.String r1 = "ECB"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L15
            goto L48
        L15:
            java.lang.String r1 = "1"
            boolean r1 = r0.equals(r1)
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L24
            r4.privateKeyOnly = r3
            r4.publicKeyOnly = r2
            return
        L24:
            java.lang.String r1 = "2"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L31
            r4.privateKeyOnly = r2
            r4.publicKeyOnly = r3
            return
        L31:
            java.security.NoSuchAlgorithmException r0 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't support mode "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L48:
            return
    }

    @Override
    protected void engineSetPadding(java.lang.String r5) throws javax.crypto.NoSuchPaddingException {
            r4 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r5)
            java.lang.String r1 = "NOPADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L15
            org.bouncycastle.crypto.engines.RSABlindedEngine r5 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r5.<init>()
        L11:
            r4.cipher = r5
            goto Lbe
        L15:
            java.lang.String r1 = "PKCS1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L28
            org.bouncycastle.crypto.encodings.PKCS1Encoding r5 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
            org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r0.<init>()
            r5.<init>(r0)
            goto L11
        L28:
            java.lang.String r1 = "ISO9796-1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L3b
            org.bouncycastle.crypto.encodings.ISO9796d1Encoding r5 = new org.bouncycastle.crypto.encodings.ISO9796d1Encoding
            org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r0.<init>()
            r5.<init>(r0)
            goto L11
        L3b:
            java.lang.String r1 = "OAEPWITHMD5ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            java.lang.String r2 = "MGF1"
            if (r1 == 0) goto L57
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = new java.security.spec.MGF1ParameterSpec
            java.lang.String r1 = "MD5"
            r0.<init>(r1)
            javax.crypto.spec.PSource$PSpecified r3 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            r5.<init>(r1, r2, r0, r3)
        L53:
            r4.initFromSpec(r5)
            goto Lbe
        L57:
            java.lang.String r1 = "OAEPPADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L62
        L5f:
            javax.crypto.spec.OAEPParameterSpec r5 = javax.crypto.spec.OAEPParameterSpec.DEFAULT
            goto L53
        L62:
            java.lang.String r1 = "OAEPWITHSHA1ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L6b
            goto L5f
        L6b:
            java.lang.String r1 = "OAEPWITHSHA224ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L82
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = new java.security.spec.MGF1ParameterSpec
            java.lang.String r1 = "SHA-224"
            r0.<init>(r1)
            javax.crypto.spec.PSource$PSpecified r3 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            r5.<init>(r1, r2, r0, r3)
            goto L53
        L82:
            java.lang.String r1 = "OAEPWITHSHA256ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L96
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = java.security.spec.MGF1ParameterSpec.SHA256
            javax.crypto.spec.PSource$PSpecified r1 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            java.lang.String r3 = "SHA-256"
            r5.<init>(r3, r2, r0, r1)
            goto L53
        L96:
            java.lang.String r1 = "OAEPWITHSHA384ANDMGF1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Laa
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = java.security.spec.MGF1ParameterSpec.SHA384
            javax.crypto.spec.PSource$PSpecified r1 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            java.lang.String r3 = "SHA-384"
            r5.<init>(r3, r2, r0, r1)
            goto L53
        Laa:
            java.lang.String r1 = "OAEPWITHSHA512ANDMGF1PADDING"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lbf
            javax.crypto.spec.OAEPParameterSpec r5 = new javax.crypto.spec.OAEPParameterSpec
            java.security.spec.MGF1ParameterSpec r0 = java.security.spec.MGF1ParameterSpec.SHA512
            javax.crypto.spec.PSource$PSpecified r1 = javax.crypto.spec.PSource.PSpecified.DEFAULT
            java.lang.String r3 = "SHA-512"
            r5.<init>(r3, r2, r0, r1)
            goto L53
        Lbe:
            return
        Lbf:
            javax.crypto.NoSuchPaddingException r0 = new javax.crypto.NoSuchPaddingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r5 = " unavailable with RSA."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    @Override
    protected int engineUpdate(byte[] r1, int r2, int r3, byte[] r4, int r5) {
            r0 = this;
            java.io.ByteArrayOutputStream r4 = r0.bOut
            r4.write(r1, r2, r3)
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r0.cipher
            boolean r1 = r1 instanceof org.bouncycastle.crypto.engines.RSABlindedEngine
            java.lang.String r2 = "too much data for RSA block"
            if (r1 == 0) goto L24
            java.io.ByteArrayOutputStream r1 = r0.bOut
            int r1 = r1.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r3 = r0.cipher
            int r3 = r3.getInputBlockSize()
            int r3 = r3 + 1
            if (r1 > r3) goto L1e
            goto L32
        L1e:
            java.lang.ArrayIndexOutOfBoundsException r1 = new java.lang.ArrayIndexOutOfBoundsException
            r1.<init>(r2)
            throw r1
        L24:
            java.io.ByteArrayOutputStream r1 = r0.bOut
            int r1 = r1.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r3 = r0.cipher
            int r3 = r3.getInputBlockSize()
            if (r1 > r3) goto L34
        L32:
            r1 = 0
            return r1
        L34:
            java.lang.ArrayIndexOutOfBoundsException r1 = new java.lang.ArrayIndexOutOfBoundsException
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected byte[] engineUpdate(byte[] r2, int r3, int r4) {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1.bOut
            r0.write(r2, r3, r4)
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r1.cipher
            boolean r2 = r2 instanceof org.bouncycastle.crypto.engines.RSABlindedEngine
            java.lang.String r3 = "too much data for RSA block"
            if (r2 == 0) goto L24
            java.io.ByteArrayOutputStream r2 = r1.bOut
            int r2 = r2.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r1.cipher
            int r4 = r4.getInputBlockSize()
            int r4 = r4 + 1
            if (r2 > r4) goto L1e
            goto L32
        L1e:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>(r3)
            throw r2
        L24:
            java.io.ByteArrayOutputStream r2 = r1.bOut
            int r2 = r2.size()
            org.bouncycastle.crypto.AsymmetricBlockCipher r4 = r1.cipher
            int r4 = r4.getInputBlockSize()
            if (r2 > r4) goto L34
        L32:
            r2 = 0
            return r2
        L34:
            java.lang.ArrayIndexOutOfBoundsException r2 = new java.lang.ArrayIndexOutOfBoundsException
            r2.<init>(r3)
            throw r2
    }
}
