package org.bouncycastle.jce.provider;

public class JDKPSSSigner extends java.security.SignatureSpi {
    private org.bouncycastle.crypto.Digest digest;
    private java.security.AlgorithmParameters engineParams;
    private java.security.spec.PSSParameterSpec originalSpec;
    private java.security.spec.PSSParameterSpec paramSpec;
    private org.bouncycastle.crypto.signers.PSSSigner pss;
    private int saltLength;
    private org.bouncycastle.crypto.AsymmetricBlockCipher signer;
    private byte trailer;

    public static class PSSwithRSA extends org.bouncycastle.jce.provider.JDKPSSSigner {
        public PSSwithRSA() {
                r2 = this;
                org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r0.<init>()
                r1 = 0
                r2.<init>(r0, r1)
                return
        }
    }

    public static class SHA1withRSA extends org.bouncycastle.jce.provider.JDKPSSSigner {
        public SHA1withRSA() {
                r2 = this;
                org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r0.<init>()
                java.security.spec.PSSParameterSpec r1 = java.security.spec.PSSParameterSpec.DEFAULT
                r2.<init>(r0, r1)
                return
        }
    }

    public static class SHA224withRSA extends org.bouncycastle.jce.provider.JDKPSSSigner {
        public SHA224withRSA() {
                r8 = this;
                org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r0.<init>()
                java.security.spec.PSSParameterSpec r7 = new java.security.spec.PSSParameterSpec
                java.security.spec.MGF1ParameterSpec r4 = new java.security.spec.MGF1ParameterSpec
                java.lang.String r1 = "SHA-224"
                r4.<init>(r1)
                java.lang.String r2 = "SHA-224"
                java.lang.String r3 = "MGF1"
                r5 = 28
                r6 = 1
                r1 = r7
                r1.<init>(r2, r3, r4, r5, r6)
                r8.<init>(r0, r7)
                return
        }
    }

    public static class SHA256withRSA extends org.bouncycastle.jce.provider.JDKPSSSigner {
        public SHA256withRSA() {
                r8 = this;
                org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r0.<init>()
                java.security.spec.PSSParameterSpec r7 = new java.security.spec.PSSParameterSpec
                java.security.spec.MGF1ParameterSpec r4 = new java.security.spec.MGF1ParameterSpec
                java.lang.String r1 = "SHA-256"
                r4.<init>(r1)
                java.lang.String r2 = "SHA-256"
                java.lang.String r3 = "MGF1"
                r5 = 32
                r6 = 1
                r1 = r7
                r1.<init>(r2, r3, r4, r5, r6)
                r8.<init>(r0, r7)
                return
        }
    }

    public static class SHA384withRSA extends org.bouncycastle.jce.provider.JDKPSSSigner {
        public SHA384withRSA() {
                r8 = this;
                org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r0.<init>()
                java.security.spec.PSSParameterSpec r7 = new java.security.spec.PSSParameterSpec
                java.security.spec.MGF1ParameterSpec r4 = new java.security.spec.MGF1ParameterSpec
                java.lang.String r1 = "SHA-384"
                r4.<init>(r1)
                java.lang.String r2 = "SHA-384"
                java.lang.String r3 = "MGF1"
                r5 = 48
                r6 = 1
                r1 = r7
                r1.<init>(r2, r3, r4, r5, r6)
                r8.<init>(r0, r7)
                return
        }
    }

    public static class SHA512withRSA extends org.bouncycastle.jce.provider.JDKPSSSigner {
        public SHA512withRSA() {
                r8 = this;
                org.bouncycastle.crypto.engines.RSABlindedEngine r0 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r0.<init>()
                java.security.spec.PSSParameterSpec r7 = new java.security.spec.PSSParameterSpec
                java.security.spec.MGF1ParameterSpec r4 = new java.security.spec.MGF1ParameterSpec
                java.lang.String r1 = "SHA-512"
                r4.<init>(r1)
                java.lang.String r2 = "SHA-512"
                java.lang.String r3 = "MGF1"
                r5 = 64
                r6 = 1
                r1 = r7
                r1.<init>(r2, r3, r4, r5, r6)
                r8.<init>(r0, r7)
                return
        }
    }

    protected JDKPSSSigner(org.bouncycastle.crypto.AsymmetricBlockCipher r1, java.security.spec.PSSParameterSpec r2) {
            r0 = this;
            r0.<init>()
            r0.signer = r1
            if (r2 != 0) goto Ld
            r1 = 0
            r0.originalSpec = r1
            java.security.spec.PSSParameterSpec r2 = java.security.spec.PSSParameterSpec.DEFAULT
            goto L11
        Ld:
            r0.originalSpec = r2
            r0.paramSpec = r2
        L11:
            java.lang.String r1 = r2.getDigestAlgorithm()
            org.bouncycastle.crypto.Digest r1 = org.bouncycastle.jce.provider.JCEDigestUtil.getDigest(r1)
            r0.digest = r1
            int r1 = r2.getSaltLength()
            r0.saltLength = r1
            int r1 = r2.getTrailerField()
            byte r1 = r0.getTrailer(r1)
            r0.trailer = r1
            return
    }

    private byte getTrailer(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L6
            r2 = -68
            return r2
        L6:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown trailer field"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected java.lang.Object engineGetParameter(java.lang.String r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "engineGetParameter unsupported"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected java.security.AlgorithmParameters engineGetParameters() {
            r2 = this;
            java.security.AlgorithmParameters r0 = r2.engineParams
            if (r0 != 0) goto L23
            java.security.spec.PSSParameterSpec r0 = r2.paramSpec
            if (r0 == 0) goto L23
            java.lang.String r0 = "PSS"
            java.lang.String r1 = "BC"
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)     // Catch: java.lang.Exception -> L18
            r2.engineParams = r0     // Catch: java.lang.Exception -> L18
            java.security.spec.PSSParameterSpec r1 = r2.paramSpec     // Catch: java.lang.Exception -> L18
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
    protected void engineInitSign(java.security.PrivateKey r6) throws java.security.InvalidKeyException {
            r5 = this;
            boolean r0 = r6 instanceof java.security.interfaces.RSAPrivateKey
            if (r0 == 0) goto L1e
            org.bouncycastle.crypto.signers.PSSSigner r0 = new org.bouncycastle.crypto.signers.PSSSigner
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r5.signer
            org.bouncycastle.crypto.Digest r2 = r5.digest
            int r3 = r5.saltLength
            byte r4 = r5.trailer
            r0.<init>(r1, r2, r3, r4)
            r5.pss = r0
            r1 = 1
            java.security.interfaces.RSAPrivateKey r6 = (java.security.interfaces.RSAPrivateKey) r6
            org.bouncycastle.crypto.params.RSAKeyParameters r6 = org.bouncycastle.jce.provider.RSAUtil.generatePrivateKeyParameter(r6)
            r0.init(r1, r6)
            return
        L1e:
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r0 = "Supplied key is not a RSAPrivateKey instance"
            r6.<init>(r0)
            throw r6
    }

    @Override
    protected void engineInitSign(java.security.PrivateKey r6, java.security.SecureRandom r7) throws java.security.InvalidKeyException {
            r5 = this;
            boolean r0 = r6 instanceof java.security.interfaces.RSAPrivateKey
            if (r0 == 0) goto L23
            org.bouncycastle.crypto.signers.PSSSigner r0 = new org.bouncycastle.crypto.signers.PSSSigner
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r5.signer
            org.bouncycastle.crypto.Digest r2 = r5.digest
            int r3 = r5.saltLength
            byte r4 = r5.trailer
            r0.<init>(r1, r2, r3, r4)
            r5.pss = r0
            r1 = 1
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = new org.bouncycastle.crypto.params.ParametersWithRandom
            java.security.interfaces.RSAPrivateKey r6 = (java.security.interfaces.RSAPrivateKey) r6
            org.bouncycastle.crypto.params.RSAKeyParameters r6 = org.bouncycastle.jce.provider.RSAUtil.generatePrivateKeyParameter(r6)
            r2.<init>(r6, r7)
            r0.init(r1, r2)
            return
        L23:
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r7 = "Supplied key is not a RSAPrivateKey instance"
            r6.<init>(r7)
            throw r6
    }

    @Override
    protected void engineInitVerify(java.security.PublicKey r5) throws java.security.InvalidKeyException {
            r4 = this;
            boolean r0 = r5 instanceof java.security.interfaces.RSAPublicKey
            if (r0 == 0) goto L1c
            org.bouncycastle.crypto.signers.PSSSigner r0 = new org.bouncycastle.crypto.signers.PSSSigner
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r4.signer
            org.bouncycastle.crypto.Digest r2 = r4.digest
            int r3 = r4.saltLength
            r0.<init>(r1, r2, r3)
            r4.pss = r0
            r1 = 0
            java.security.interfaces.RSAPublicKey r5 = (java.security.interfaces.RSAPublicKey) r5
            org.bouncycastle.crypto.params.RSAKeyParameters r5 = org.bouncycastle.jce.provider.RSAUtil.generatePublicKeyParameter(r5)
            r0.init(r1, r5)
            return
        L1c:
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.String r0 = "Supplied key is not a RSAPublicKey instance"
            r5.<init>(r0)
            throw r5
    }

    @Override
    protected void engineSetParameter(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "engineSetParameter unsupported"
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected void engineSetParameter(java.security.spec.AlgorithmParameterSpec r4) throws java.security.InvalidParameterException {
            r3 = this;
            boolean r0 = r4 instanceof java.security.spec.PSSParameterSpec
            if (r0 == 0) goto Ld1
            java.security.spec.PSSParameterSpec r4 = (java.security.spec.PSSParameterSpec) r4
            r3.paramSpec = r4
            java.security.spec.PSSParameterSpec r4 = r3.originalSpec
            if (r4 == 0) goto L3a
            java.lang.String r4 = r4.getDigestAlgorithm()
            java.security.spec.PSSParameterSpec r0 = r3.paramSpec
            java.lang.String r0 = r0.getDigestAlgorithm()
            boolean r4 = org.bouncycastle.jce.provider.JCEDigestUtil.isSameDigest(r4, r0)
            if (r4 == 0) goto L1d
            goto L3a
        L1d:
            java.security.InvalidParameterException r4 = new java.security.InvalidParameterException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "parameter must be using "
            r0.append(r1)
            java.security.spec.PSSParameterSpec r1 = r3.originalSpec
            java.lang.String r1 = r1.getDigestAlgorithm()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
        L3a:
            java.security.spec.PSSParameterSpec r4 = r3.paramSpec
            java.lang.String r4 = r4.getMGFAlgorithm()
            java.lang.String r0 = "MGF1"
            boolean r4 = r4.equalsIgnoreCase(r0)
            if (r4 != 0) goto L63
            java.security.spec.PSSParameterSpec r4 = r3.paramSpec
            java.lang.String r4 = r4.getMGFAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_mgf1
            java.lang.String r0 = r0.getId()
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L5b
            goto L63
        L5b:
            java.security.InvalidParameterException r4 = new java.security.InvalidParameterException
            java.lang.String r0 = "unknown mask generation function specified"
            r4.<init>(r0)
            throw r4
        L63:
            java.security.spec.PSSParameterSpec r4 = r3.paramSpec
            java.security.spec.AlgorithmParameterSpec r4 = r4.getMGFParameters()
            boolean r4 = r4 instanceof java.security.spec.MGF1ParameterSpec
            if (r4 == 0) goto Lc9
            java.security.spec.PSSParameterSpec r4 = r3.paramSpec
            java.security.spec.AlgorithmParameterSpec r4 = r4.getMGFParameters()
            java.security.spec.MGF1ParameterSpec r4 = (java.security.spec.MGF1ParameterSpec) r4
            java.lang.String r0 = r4.getDigestAlgorithm()
            java.security.spec.PSSParameterSpec r1 = r3.paramSpec
            java.lang.String r1 = r1.getDigestAlgorithm()
            boolean r0 = org.bouncycastle.jce.provider.JCEDigestUtil.isSameDigest(r0, r1)
            if (r0 == 0) goto Lc1
            java.lang.String r0 = r4.getDigestAlgorithm()
            org.bouncycastle.crypto.Digest r0 = org.bouncycastle.jce.provider.JCEDigestUtil.getDigest(r0)
            r3.digest = r0
            if (r0 == 0) goto La6
            java.security.spec.PSSParameterSpec r4 = r3.paramSpec
            int r4 = r4.getSaltLength()
            r3.saltLength = r4
            java.security.spec.PSSParameterSpec r4 = r3.paramSpec
            int r4 = r4.getTrailerField()
            byte r4 = r3.getTrailer(r4)
            r3.trailer = r4
            return
        La6:
            java.security.InvalidParameterException r0 = new java.security.InvalidParameterException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "no match on MGF digest algorithm: "
            r1.append(r2)
            java.lang.String r4 = r4.getDigestAlgorithm()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        Lc1:
            java.security.InvalidParameterException r4 = new java.security.InvalidParameterException
            java.lang.String r0 = "digest algorithm for MGF should be the same as for PSS parameters."
            r4.<init>(r0)
            throw r4
        Lc9:
            java.security.InvalidParameterException r4 = new java.security.InvalidParameterException
            java.lang.String r0 = "unkown MGF parameters"
            r4.<init>(r0)
            throw r4
        Ld1:
            java.security.InvalidParameterException r4 = new java.security.InvalidParameterException
            java.lang.String r0 = "Only PSSParameterSpec supported"
            r4.<init>(r0)
            throw r4
    }

    @Override
    protected byte[] engineSign() throws java.security.SignatureException {
            r2 = this;
            org.bouncycastle.crypto.signers.PSSSigner r0 = r2.pss     // Catch: org.bouncycastle.crypto.CryptoException -> L7
            byte[] r0 = r0.generateSignature()     // Catch: org.bouncycastle.crypto.CryptoException -> L7
            return r0
        L7:
            r0 = move-exception
            java.security.SignatureException r1 = new java.security.SignatureException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }

    @Override
    protected void engineUpdate(byte r2) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.signers.PSSSigner r0 = r1.pss
            r0.update(r2)
            return
    }

    @Override
    protected void engineUpdate(byte[] r2, int r3, int r4) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.signers.PSSSigner r0 = r1.pss
            r0.update(r2, r3, r4)
            return
    }

    @Override
    protected boolean engineVerify(byte[] r2) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.signers.PSSSigner r0 = r1.pss
            boolean r2 = r0.verifySignature(r2)
            return r2
    }
}
