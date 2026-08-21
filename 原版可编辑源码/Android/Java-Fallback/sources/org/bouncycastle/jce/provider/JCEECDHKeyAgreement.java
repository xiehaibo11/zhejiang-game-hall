package org.bouncycastle.jce.provider;

public class JCEECDHKeyAgreement extends javax.crypto.KeyAgreementSpi {
    private static final java.util.Hashtable algorithms = null;
    private static final org.bouncycastle.asn1.x9.X9IntegerConverter converter = null;
    private org.bouncycastle.crypto.BasicAgreement agreement;
    private org.bouncycastle.crypto.DerivationFunction kdf;
    private org.bouncycastle.crypto.params.ECPrivateKeyParameters privKey;
    private java.math.BigInteger result;

    public static class DH extends org.bouncycastle.jce.provider.JCEECDHKeyAgreement {
        public DH() {
                r1 = this;
                org.bouncycastle.crypto.agreement.ECDHBasicAgreement r0 = new org.bouncycastle.crypto.agreement.ECDHBasicAgreement
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class DHC extends org.bouncycastle.jce.provider.JCEECDHKeyAgreement {
        public DHC() {
                r1 = this;
                org.bouncycastle.crypto.agreement.ECDHCBasicAgreement r0 = new org.bouncycastle.crypto.agreement.ECDHCBasicAgreement
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class DHwithSHA1KDF extends org.bouncycastle.jce.provider.JCEECDHKeyAgreement {
        public DHwithSHA1KDF() {
                r3 = this;
                org.bouncycastle.crypto.agreement.ECDHBasicAgreement r0 = new org.bouncycastle.crypto.agreement.ECDHBasicAgreement
                r0.<init>()
                org.bouncycastle.crypto.agreement.kdf.ECDHKEKGenerator r1 = new org.bouncycastle.crypto.agreement.kdf.ECDHKEKGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r2 = new org.bouncycastle.crypto.digests.SHA1Digest
                r2.<init>()
                r1.<init>(r2)
                r3.<init>(r0, r1)
                return
        }
    }

    static {
            org.bouncycastle.asn1.x9.X9IntegerConverter r0 = new org.bouncycastle.asn1.x9.X9IntegerConverter
            r0.<init>()
            org.bouncycastle.jce.provider.JCEECDHKeyAgreement.converter = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms = r0
            java.lang.Integer r0 = new java.lang.Integer
            r1 = 128(0x80, float:1.8E-43)
            r0.<init>(r1)
            java.lang.Integer r1 = new java.lang.Integer
            r2 = 192(0xc0, float:2.69E-43)
            r1.<init>(r2)
            java.lang.Integer r2 = new java.lang.Integer
            r3 = 256(0x100, float:3.59E-43)
            r2.<init>(r3)
            java.util.Hashtable r3 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CBC
            java.lang.String r4 = r4.getId()
            r3.put(r4, r0)
            java.util.Hashtable r3 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CBC
            java.lang.String r4 = r4.getId()
            r3.put(r4, r1)
            java.util.Hashtable r3 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CBC
            java.lang.String r4 = r4.getId()
            r3.put(r4, r2)
            java.util.Hashtable r3 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_wrap
            java.lang.String r4 = r4.getId()
            r3.put(r4, r0)
            java.util.Hashtable r0 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_wrap
            java.lang.String r3 = r3.getId()
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_wrap
            java.lang.String r3 = r3.getId()
            r0.put(r3, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_alg_CMS3DESwrap
            java.lang.String r2 = r2.getId()
            r0.put(r2, r1)
            return
    }

    protected JCEECDHKeyAgreement(org.bouncycastle.crypto.BasicAgreement r1) {
            r0 = this;
            r0.<init>()
            r0.agreement = r1
            return
    }

    protected JCEECDHKeyAgreement(org.bouncycastle.crypto.BasicAgreement r1, org.bouncycastle.crypto.DerivationFunction r2) {
            r0 = this;
            r0.<init>()
            r0.agreement = r1
            r0.kdf = r2
            return
    }

    private byte[] bigIntToBytes(java.math.BigInteger r3) {
            r2 = this;
            org.bouncycastle.asn1.x9.X9IntegerConverter r0 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.converter
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = r2.privKey
            org.bouncycastle.crypto.params.ECDomainParameters r1 = r1.getParameters()
            org.bouncycastle.math.ec.ECPoint r1 = r1.getG()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            int r1 = r0.getByteLength(r1)
            byte[] r3 = r0.integerToBytes(r3, r1)
            return r3
    }

    @Override
    protected java.security.Key engineDoPhase(java.security.Key r2, boolean r3) throws java.security.InvalidKeyException, java.lang.IllegalStateException {
            r1 = this;
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r0 = r1.privKey
            if (r0 == 0) goto L2a
            if (r3 == 0) goto L22
            boolean r3 = r2 instanceof org.bouncycastle.jce.interfaces.ECPublicKey
            if (r3 == 0) goto L1a
            java.security.PublicKey r2 = (java.security.PublicKey) r2
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r2 = org.bouncycastle.jce.provider.ECUtil.generatePublicKeyParameter(r2)
            org.bouncycastle.crypto.BasicAgreement r3 = r1.agreement
            java.math.BigInteger r2 = r3.calculateAgreement(r2)
            r1.result = r2
            r2 = 0
            return r2
        L1a:
            java.security.InvalidKeyException r2 = new java.security.InvalidKeyException
            java.lang.String r3 = "EC Key Agreement doPhase requires ECPublicKey"
            r2.<init>(r3)
            throw r2
        L22:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "EC Diffie-Hellman can only be between two parties."
            r2.<init>(r3)
            throw r2
        L2a:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "EC Diffie-Hellman not initialised."
            r2.<init>(r3)
            throw r2
    }

    @Override
    protected int engineGenerateSecret(byte[] r4, int r5) throws java.lang.IllegalStateException, javax.crypto.ShortBufferException {
            r3 = this;
            java.math.BigInteger r0 = r3.result
            byte[] r0 = r3.bigIntToBytes(r0)
            int r1 = r4.length
            int r1 = r1 - r5
            int r2 = r0.length
            if (r1 < r2) goto L12
            r1 = 0
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r1, r4, r5, r2)
            int r4 = r0.length
            return r4
        L12:
            javax.crypto.ShortBufferException r4 = new javax.crypto.ShortBufferException
            java.lang.String r5 = "ECKeyAgreement - buffer too short"
            r4.<init>(r5)
            throw r4
    }

    @Override
    protected javax.crypto.SecretKey engineGenerateSecret(java.lang.String r5) throws java.security.NoSuchAlgorithmException {
            r4 = this;
            org.bouncycastle.crypto.DerivationFunction r0 = r4.kdf
            if (r0 == 0) goto L54
            java.util.Hashtable r0 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            boolean r0 = r0.containsKey(r5)
            if (r0 == 0) goto L3d
            java.util.Hashtable r0 = org.bouncycastle.jce.provider.JCEECDHKeyAgreement.algorithms
            java.lang.Object r0 = r0.get(r5)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            org.bouncycastle.crypto.agreement.kdf.DHKDFParameters r1 = new org.bouncycastle.crypto.agreement.kdf.DHKDFParameters
            org.bouncycastle.asn1.DERObjectIdentifier r2 = new org.bouncycastle.asn1.DERObjectIdentifier
            r2.<init>(r5)
            java.math.BigInteger r3 = r4.result
            byte[] r3 = r4.bigIntToBytes(r3)
            r1.<init>(r2, r0, r3)
            int r0 = r0 / 8
            byte[] r2 = new byte[r0]
            org.bouncycastle.crypto.DerivationFunction r3 = r4.kdf
            r3.init(r1)
            org.bouncycastle.crypto.DerivationFunction r1 = r4.kdf
            r3 = 0
            r1.generateBytes(r2, r3, r0)
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            r0.<init>(r2, r5)
            return r0
        L3d:
            java.security.NoSuchAlgorithmException r0 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown algorithm encountered: "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L54:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            java.math.BigInteger r1 = r4.result
            byte[] r1 = r4.bigIntToBytes(r1)
            r0.<init>(r1, r5)
            return r0
    }

    @Override
    protected byte[] engineGenerateSecret() throws java.lang.IllegalStateException {
            r1 = this;
            java.math.BigInteger r0 = r1.result
            byte[] r0 = r1.bigIntToBytes(r0)
            return r0
    }

    @Override
    protected void engineInit(java.security.Key r1, java.security.SecureRandom r2) throws java.security.InvalidKeyException {
            r0 = this;
            boolean r2 = r1 instanceof org.bouncycastle.jce.interfaces.ECPrivateKey
            if (r2 == 0) goto L14
            java.security.PrivateKey r1 = (java.security.PrivateKey) r1
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r1 = org.bouncycastle.jce.provider.ECUtil.generatePrivateKeyParameter(r1)
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r1
            r0.privKey = r1
            org.bouncycastle.crypto.BasicAgreement r2 = r0.agreement
            r2.init(r1)
            return
        L14:
            java.security.InvalidKeyException r1 = new java.security.InvalidKeyException
            java.lang.String r2 = "ECKeyAgreement requires ECPrivateKey"
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected void engineInit(java.security.Key r1, java.security.spec.AlgorithmParameterSpec r2, java.security.SecureRandom r3) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r0 = this;
            boolean r2 = r1 instanceof org.bouncycastle.jce.interfaces.ECPrivateKey
            if (r2 == 0) goto L14
            java.security.PrivateKey r1 = (java.security.PrivateKey) r1
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r1 = org.bouncycastle.jce.provider.ECUtil.generatePrivateKeyParameter(r1)
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r1 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r1
            r0.privKey = r1
            org.bouncycastle.crypto.BasicAgreement r2 = r0.agreement
            r2.init(r1)
            return
        L14:
            java.security.InvalidKeyException r1 = new java.security.InvalidKeyException
            java.lang.String r2 = "ECKeyAgreement requires ECPrivateKey for initialisation"
            r1.<init>(r2)
            throw r1
    }
}
