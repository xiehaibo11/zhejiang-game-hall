package org.bouncycastle.jce.provider;

public abstract class WrapCipherSpi extends javax.crypto.CipherSpi implements org.bouncycastle.jce.provider.PBE {
    private java.lang.Class[] availableSpecs;
    protected java.security.AlgorithmParameters engineParams;
    private byte[] iv;
    private int ivSize;
    protected int pbeHash;
    protected int pbeIvSize;
    protected int pbeKeySize;
    protected int pbeType;
    protected org.bouncycastle.crypto.Wrapper wrapEngine;

    public static class DESEDEWrap extends org.bouncycastle.jce.provider.WrapCipherSpi {
        public DESEDEWrap() {
                r1 = this;
                org.bouncycastle.crypto.engines.DESedeWrapEngine r0 = new org.bouncycastle.crypto.engines.DESedeWrapEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class RC2Wrap extends org.bouncycastle.jce.provider.WrapCipherSpi {
        public RC2Wrap() {
                r1 = this;
                org.bouncycastle.crypto.engines.RC2WrapEngine r0 = new org.bouncycastle.crypto.engines.RC2WrapEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class RFC3211DESedeWrap extends org.bouncycastle.jce.provider.WrapCipherSpi {
        public RFC3211DESedeWrap() {
                r2 = this;
                org.bouncycastle.crypto.engines.RFC3211WrapEngine r0 = new org.bouncycastle.crypto.engines.RFC3211WrapEngine
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 8
                r2.<init>(r0, r1)
                return
        }
    }

    protected WrapCipherSpi() {
            r5 = this;
            r5.<init>()
            r0 = 4
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r2 = javax.crypto.spec.IvParameterSpec.class
            r0[r1] = r2
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r1 = javax.crypto.spec.PBEParameterSpec.class
            r2 = 1
            r0[r2] = r1
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r3 = 2
            r0[r3] = r1
            r1 = 3
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r4 = javax.crypto.spec.RC5ParameterSpec.class
            r0[r1] = r4
            r5.availableSpecs = r0
            r5.pbeType = r3
            r5.pbeHash = r2
            r0 = 0
            r5.engineParams = r0
            r5.wrapEngine = r0
            return
    }

    protected WrapCipherSpi(org.bouncycastle.crypto.Wrapper r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    protected WrapCipherSpi(org.bouncycastle.crypto.Wrapper r6, int r7) {
            r5 = this;
            r5.<init>()
            r0 = 4
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r2 = javax.crypto.spec.IvParameterSpec.class
            r0[r1] = r2
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r1 = javax.crypto.spec.PBEParameterSpec.class
            r2 = 1
            r0[r2] = r1
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r3 = 2
            r0[r3] = r1
            r1 = 3
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r4 = javax.crypto.spec.RC5ParameterSpec.class
            r0[r1] = r4
            r5.availableSpecs = r0
            r5.pbeType = r3
            r5.pbeHash = r2
            r0 = 0
            r5.engineParams = r0
            r5.wrapEngine = r0
            r5.wrapEngine = r6
            r5.ivSize = r7
            return
    }

    @Override
    protected int engineDoFinal(byte[] r1, int r2, int r3, byte[] r4, int r5) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected byte[] engineDoFinal(byte[] r1, int r2, int r3) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r0 = this;
            r1 = 0
            return r1
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
            byte[] r0 = r1.iv
            java.lang.Object r0 = r0.clone()
            byte[] r0 = (byte[]) r0
            byte[] r0 = (byte[]) r0
            return r0
    }

    @Override
    protected int engineGetKeySize(java.security.Key r1) {
            r0 = this;
            byte[] r1 = r1.getEncoded()
            int r1 = r1.length
            return r1
    }

    @Override
    protected int engineGetOutputSize(int r1) {
            r0 = this;
            r1 = -1
            return r1
    }

    @Override
    protected java.security.AlgorithmParameters engineGetParameters() {
            r1 = this;
            r0 = 0
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
            r4.engineParams = r7
            r4.engineInit(r5, r6, r0, r8)
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
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
    }

    @Override
    protected void engineInit(int r2, java.security.Key r3, java.security.spec.AlgorithmParameterSpec r4, java.security.SecureRandom r5) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r1 = this;
            boolean r0 = r3 instanceof org.bouncycastle.jce.provider.JCEPBEKey
            if (r0 == 0) goto L28
            org.bouncycastle.jce.provider.JCEPBEKey r3 = (org.bouncycastle.jce.provider.JCEPBEKey) r3
            boolean r0 = r4 instanceof javax.crypto.spec.PBEParameterSpec
            if (r0 == 0) goto L15
            org.bouncycastle.crypto.Wrapper r0 = r1.wrapEngine
            java.lang.String r0 = r0.getAlgorithmName()
            org.bouncycastle.crypto.CipherParameters r3 = org.bouncycastle.jce.provider.PBE.Util.makePBEParameters(r3, r4, r0)
            goto L32
        L15:
            org.bouncycastle.crypto.CipherParameters r0 = r3.getParam()
            if (r0 == 0) goto L20
            org.bouncycastle.crypto.CipherParameters r3 = r3.getParam()
            goto L32
        L20:
            java.security.InvalidAlgorithmParameterException r2 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r3 = "PBE requires PBE parameters to be set."
            r2.<init>(r3)
            throw r2
        L28:
            org.bouncycastle.crypto.params.KeyParameter r0 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r3 = r3.getEncoded()
            r0.<init>(r3)
            r3 = r0
        L32:
            boolean r0 = r4 instanceof javax.crypto.spec.IvParameterSpec
            if (r0 == 0) goto L42
            javax.crypto.spec.IvParameterSpec r4 = (javax.crypto.spec.IvParameterSpec) r4
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r4 = r4.getIV()
            r0.<init>(r3, r4)
            r3 = r0
        L42:
            boolean r4 = r3 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r4 == 0) goto L59
            int r4 = r1.ivSize
            if (r4 == 0) goto L59
            byte[] r4 = new byte[r4]
            r1.iv = r4
            r5.nextBytes(r4)
            org.bouncycastle.crypto.params.ParametersWithIV r4 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r5 = r1.iv
            r4.<init>(r3, r5)
            r3 = r4
        L59:
            r4 = 1
            if (r2 == r4) goto L77
            r5 = 2
            if (r2 == r5) goto L77
            r5 = 3
            if (r2 == r5) goto L71
            r4 = 4
            if (r2 == r4) goto L6d
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.String r3 = "eeek!"
            r2.println(r3)
            goto L76
        L6d:
            org.bouncycastle.crypto.Wrapper r2 = r1.wrapEngine
            r4 = 0
            goto L73
        L71:
            org.bouncycastle.crypto.Wrapper r2 = r1.wrapEngine
        L73:
            r2.init(r4, r3)
        L76:
            return
        L77:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "engine only valid for wrapping"
            r2.<init>(r3)
            throw r2
    }

    @Override
    protected void engineSetMode(java.lang.String r4) throws java.security.NoSuchAlgorithmException {
            r3 = this;
            java.security.NoSuchAlgorithmException r0 = new java.security.NoSuchAlgorithmException
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
    protected void engineSetPadding(java.lang.String r4) throws javax.crypto.NoSuchPaddingException {
            r3 = this;
            javax.crypto.NoSuchPaddingException r0 = new javax.crypto.NoSuchPaddingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Padding "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " unknown."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    protected java.security.Key engineUnwrap(byte[] r5, java.lang.String r6, int r7) throws java.security.InvalidKeyException {
            r4 = this;
            java.lang.String r0 = "Unknown key type "
            org.bouncycastle.crypto.Wrapper r1 = r4.wrapEngine     // Catch: javax.crypto.IllegalBlockSizeException -> L116 javax.crypto.BadPaddingException -> L121 org.bouncycastle.crypto.InvalidCipherTextException -> L12c
            r2 = 0
            if (r1 != 0) goto Ld
            int r1 = r5.length     // Catch: javax.crypto.IllegalBlockSizeException -> L116 javax.crypto.BadPaddingException -> L121 org.bouncycastle.crypto.InvalidCipherTextException -> L12c
            byte[] r5 = r4.engineDoFinal(r5, r2, r1)     // Catch: javax.crypto.IllegalBlockSizeException -> L116 javax.crypto.BadPaddingException -> L121 org.bouncycastle.crypto.InvalidCipherTextException -> L12c
            goto L14
        Ld:
            org.bouncycastle.crypto.Wrapper r1 = r4.wrapEngine     // Catch: javax.crypto.IllegalBlockSizeException -> L116 javax.crypto.BadPaddingException -> L121 org.bouncycastle.crypto.InvalidCipherTextException -> L12c
            int r3 = r5.length     // Catch: javax.crypto.IllegalBlockSizeException -> L116 javax.crypto.BadPaddingException -> L121 org.bouncycastle.crypto.InvalidCipherTextException -> L12c
            byte[] r5 = r1.unwrap(r5, r2, r3)     // Catch: javax.crypto.IllegalBlockSizeException -> L116 javax.crypto.BadPaddingException -> L121 org.bouncycastle.crypto.InvalidCipherTextException -> L12c
        L14:
            r1 = 3
            if (r7 != r1) goto L1d
            javax.crypto.spec.SecretKeySpec r7 = new javax.crypto.spec.SecretKeySpec
            r7.<init>(r5, r6)
            return r7
        L1d:
            java.lang.String r1 = ""
            boolean r1 = r6.equals(r1)
            r2 = 2
            if (r1 == 0) goto L94
            if (r7 != r2) goto L94
            org.bouncycastle.asn1.ASN1InputStream r6 = new org.bouncycastle.asn1.ASN1InputStream
            r6.<init>(r5)
            org.bouncycastle.asn1.DERObject r5 = r6.readObject()     // Catch: java.lang.Exception -> L8c
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5     // Catch: java.lang.Exception -> L8c
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r6 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo     // Catch: java.lang.Exception -> L8c
            r6.<init>(r5)     // Catch: java.lang.Exception -> L8c
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r5 = r6.getAlgorithmId()     // Catch: java.lang.Exception -> L8c
            org.bouncycastle.asn1.DERObjectIdentifier r5 = r5.getObjectId()     // Catch: java.lang.Exception -> L8c
            org.bouncycastle.asn1.DERObjectIdentifier r7 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey     // Catch: java.lang.Exception -> L8c
            boolean r7 = r5.equals(r7)     // Catch: java.lang.Exception -> L8c
            if (r7 == 0) goto L4e
            org.bouncycastle.jce.provider.JCEECPrivateKey r5 = new org.bouncycastle.jce.provider.JCEECPrivateKey     // Catch: java.lang.Exception -> L8c
            r5.<init>(r6)     // Catch: java.lang.Exception -> L8c
            goto L8b
        L4e:
            org.bouncycastle.asn1.DERObjectIdentifier r7 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94     // Catch: java.lang.Exception -> L8c
            boolean r7 = r5.equals(r7)     // Catch: java.lang.Exception -> L8c
            if (r7 == 0) goto L5c
            org.bouncycastle.jce.provider.JDKGOST3410PrivateKey r5 = new org.bouncycastle.jce.provider.JDKGOST3410PrivateKey     // Catch: java.lang.Exception -> L8c
            r5.<init>(r6)     // Catch: java.lang.Exception -> L8c
            goto L8b
        L5c:
            org.bouncycastle.asn1.DERObjectIdentifier r7 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa     // Catch: java.lang.Exception -> L8c
            boolean r7 = r5.equals(r7)     // Catch: java.lang.Exception -> L8c
            if (r7 == 0) goto L6a
            org.bouncycastle.jce.provider.JDKDSAPrivateKey r5 = new org.bouncycastle.jce.provider.JDKDSAPrivateKey     // Catch: java.lang.Exception -> L8c
            r5.<init>(r6)     // Catch: java.lang.Exception -> L8c
            goto L8b
        L6a:
            org.bouncycastle.asn1.DERObjectIdentifier r7 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.dhKeyAgreement     // Catch: java.lang.Exception -> L8c
            boolean r7 = r5.equals(r7)     // Catch: java.lang.Exception -> L8c
            if (r7 == 0) goto L78
            org.bouncycastle.jce.provider.JCEDHPrivateKey r5 = new org.bouncycastle.jce.provider.JCEDHPrivateKey     // Catch: java.lang.Exception -> L8c
            r5.<init>(r6)     // Catch: java.lang.Exception -> L8c
            goto L8b
        L78:
            org.bouncycastle.asn1.DERObjectIdentifier r7 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.dhpublicnumber     // Catch: java.lang.Exception -> L8c
            boolean r5 = r5.equals(r7)     // Catch: java.lang.Exception -> L8c
            if (r5 == 0) goto L86
            org.bouncycastle.jce.provider.JCEDHPrivateKey r5 = new org.bouncycastle.jce.provider.JCEDHPrivateKey     // Catch: java.lang.Exception -> L8c
            r5.<init>(r6)     // Catch: java.lang.Exception -> L8c
            goto L8b
        L86:
            org.bouncycastle.jce.provider.JCERSAPrivateCrtKey r5 = new org.bouncycastle.jce.provider.JCERSAPrivateCrtKey     // Catch: java.lang.Exception -> L8c
            r5.<init>(r6)     // Catch: java.lang.Exception -> L8c
        L8b:
            return r5
        L8c:
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.String r6 = "Invalid key encoding."
            r5.<init>(r6)
            throw r5
        L94:
            java.lang.String r1 = "BC"
            java.security.KeyFactory r6 = java.security.KeyFactory.getInstance(r6, r1)     // Catch: java.security.spec.InvalidKeySpecException -> Lc8 java.security.NoSuchAlgorithmException -> Le2 java.security.NoSuchProviderException -> Lfc
            r1 = 1
            if (r7 != r1) goto La7
            java.security.spec.X509EncodedKeySpec r7 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> Lc8 java.security.NoSuchAlgorithmException -> Le2 java.security.NoSuchProviderException -> Lfc
            r7.<init>(r5)     // Catch: java.security.spec.InvalidKeySpecException -> Lc8 java.security.NoSuchAlgorithmException -> Le2 java.security.NoSuchProviderException -> Lfc
            java.security.PublicKey r5 = r6.generatePublic(r7)     // Catch: java.security.spec.InvalidKeySpecException -> Lc8 java.security.NoSuchAlgorithmException -> Le2 java.security.NoSuchProviderException -> Lfc
            return r5
        La7:
            if (r7 != r2) goto Lb3
            java.security.spec.PKCS8EncodedKeySpec r7 = new java.security.spec.PKCS8EncodedKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> Lc8 java.security.NoSuchAlgorithmException -> Le2 java.security.NoSuchProviderException -> Lfc
            r7.<init>(r5)     // Catch: java.security.spec.InvalidKeySpecException -> Lc8 java.security.NoSuchAlgorithmException -> Le2 java.security.NoSuchProviderException -> Lfc
            java.security.PrivateKey r5 = r6.generatePrivate(r7)     // Catch: java.security.spec.InvalidKeySpecException -> Lc8 java.security.NoSuchAlgorithmException -> Le2 java.security.NoSuchProviderException -> Lfc
            return r5
        Lb3:
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            throw r5
        Lc8:
            r5 = move-exception
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r0)
            java.lang.String r5 = r5.getMessage()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        Le2:
            r5 = move-exception
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r0)
            java.lang.String r5 = r5.getMessage()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        Lfc:
            r5 = move-exception
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r0)
            java.lang.String r5 = r5.getMessage()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L116:
            r5 = move-exception
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r5 = r5.getMessage()
            r6.<init>(r5)
            throw r6
        L121:
            r5 = move-exception
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r5 = r5.getMessage()
            r6.<init>(r5)
            throw r6
        L12c:
            r5 = move-exception
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r5 = r5.getMessage()
            r6.<init>(r5)
            throw r6
    }

    @Override
    protected int engineUpdate(byte[] r1, int r2, int r3, byte[] r4, int r5) throws javax.crypto.ShortBufferException {
            r0 = this;
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "not supported for wrapping"
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected byte[] engineUpdate(byte[] r1, int r2, int r3) {
            r0 = this;
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "not supported for wrapping"
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected byte[] engineWrap(java.security.Key r4) throws javax.crypto.IllegalBlockSizeException, java.security.InvalidKeyException {
            r3 = this;
            byte[] r4 = r4.getEncoded()
            if (r4 == 0) goto L24
            org.bouncycastle.crypto.Wrapper r0 = r3.wrapEngine     // Catch: javax.crypto.BadPaddingException -> L19
            r1 = 0
            if (r0 != 0) goto L11
            int r0 = r4.length     // Catch: javax.crypto.BadPaddingException -> L19
            byte[] r4 = r3.engineDoFinal(r4, r1, r0)     // Catch: javax.crypto.BadPaddingException -> L19
            return r4
        L11:
            org.bouncycastle.crypto.Wrapper r0 = r3.wrapEngine     // Catch: javax.crypto.BadPaddingException -> L19
            int r2 = r4.length     // Catch: javax.crypto.BadPaddingException -> L19
            byte[] r4 = r0.wrap(r4, r1, r2)     // Catch: javax.crypto.BadPaddingException -> L19
            return r4
        L19:
            r4 = move-exception
            javax.crypto.IllegalBlockSizeException r0 = new javax.crypto.IllegalBlockSizeException
            java.lang.String r4 = r4.getMessage()
            r0.<init>(r4)
            throw r0
        L24:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.String r0 = "Cannot wrap key, null encoding."
            r4.<init>(r0)
            throw r4
    }
}
