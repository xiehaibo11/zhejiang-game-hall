package org.bouncycastle.jce.provider;

public abstract class JDKKeyFactory extends java.security.KeyFactorySpi {
    protected boolean elGamalFactory;

    public static class DH extends org.bouncycastle.jce.provider.JDKKeyFactory {
        public DH() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.PrivateKey engineGeneratePrivate(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.DHPrivateKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JCEDHPrivateKey r0 = new org.bouncycastle.jce.provider.JCEDHPrivateKey
                javax.crypto.spec.DHPrivateKeySpec r2 = (javax.crypto.spec.DHPrivateKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                java.security.PrivateKey r2 = super.engineGeneratePrivate(r2)
                return r2
        }

        @Override
        protected java.security.PublicKey engineGeneratePublic(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.DHPublicKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JCEDHPublicKey r0 = new org.bouncycastle.jce.provider.JCEDHPublicKey
                javax.crypto.spec.DHPublicKeySpec r2 = (javax.crypto.spec.DHPublicKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                java.security.PublicKey r2 = super.engineGeneratePublic(r2)
                return r2
        }
    }

    public static class DSA extends org.bouncycastle.jce.provider.JDKKeyFactory {
        public DSA() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.PrivateKey engineGeneratePrivate(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof java.security.spec.DSAPrivateKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JDKDSAPrivateKey r0 = new org.bouncycastle.jce.provider.JDKDSAPrivateKey
                java.security.spec.DSAPrivateKeySpec r2 = (java.security.spec.DSAPrivateKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                java.security.PrivateKey r2 = super.engineGeneratePrivate(r2)
                return r2
        }

        @Override
        protected java.security.PublicKey engineGeneratePublic(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof java.security.spec.DSAPublicKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JDKDSAPublicKey r0 = new org.bouncycastle.jce.provider.JDKDSAPublicKey
                java.security.spec.DSAPublicKeySpec r2 = (java.security.spec.DSAPublicKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                java.security.PublicKey r2 = super.engineGeneratePublic(r2)
                return r2
        }
    }

    public static class EC extends org.bouncycastle.jce.provider.JDKKeyFactory {
        java.lang.String algorithm;

        public EC() {
                r1 = this;
                java.lang.String r0 = "EC"
                r1.<init>(r0)
                return
        }

        public EC(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.algorithm = r1
                return
        }

        @Override
        protected java.security.PrivateKey engineGeneratePrivate(java.security.spec.KeySpec r4) throws java.security.spec.InvalidKeySpecException {
                r3 = this;
                boolean r0 = r4 instanceof java.security.spec.PKCS8EncodedKeySpec
                if (r0 == 0) goto L23
                java.security.spec.PKCS8EncodedKeySpec r4 = (java.security.spec.PKCS8EncodedKeySpec) r4     // Catch: java.lang.Exception -> L18
                byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L18
                java.security.PrivateKey r4 = org.bouncycastle.jce.provider.JDKKeyFactory.createPrivateKeyFromDERStream(r4)     // Catch: java.lang.Exception -> L18
                org.bouncycastle.jce.provider.JCEECPrivateKey r4 = (org.bouncycastle.jce.provider.JCEECPrivateKey) r4     // Catch: java.lang.Exception -> L18
                org.bouncycastle.jce.provider.JCEECPrivateKey r0 = new org.bouncycastle.jce.provider.JCEECPrivateKey     // Catch: java.lang.Exception -> L18
                java.lang.String r1 = r3.algorithm     // Catch: java.lang.Exception -> L18
                r0.<init>(r1, r4)     // Catch: java.lang.Exception -> L18
                return r0
            L18:
                r4 = move-exception
                java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
                java.lang.String r4 = r4.toString()
                r0.<init>(r4)
                throw r0
            L23:
                boolean r0 = r4 instanceof org.bouncycastle.jce.spec.ECPrivateKeySpec
                if (r0 == 0) goto L31
                org.bouncycastle.jce.provider.JCEECPrivateKey r0 = new org.bouncycastle.jce.provider.JCEECPrivateKey
                java.lang.String r1 = r3.algorithm
                org.bouncycastle.jce.spec.ECPrivateKeySpec r4 = (org.bouncycastle.jce.spec.ECPrivateKeySpec) r4
                r0.<init>(r1, r4)
                return r0
            L31:
                boolean r0 = r4 instanceof java.security.spec.ECPrivateKeySpec
                if (r0 == 0) goto L3f
                org.bouncycastle.jce.provider.JCEECPrivateKey r0 = new org.bouncycastle.jce.provider.JCEECPrivateKey
                java.lang.String r1 = r3.algorithm
                java.security.spec.ECPrivateKeySpec r4 = (java.security.spec.ECPrivateKeySpec) r4
                r0.<init>(r1, r4)
                return r0
            L3f:
                java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Unknown KeySpec type: "
                r1.append(r2)
                java.lang.Class r4 = r4.getClass()
                java.lang.String r4 = r4.getName()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        @Override
        protected java.security.PublicKey engineGeneratePublic(java.security.spec.KeySpec r4) throws java.security.spec.InvalidKeySpecException {
                r3 = this;
                boolean r0 = r4 instanceof java.security.spec.X509EncodedKeySpec
                if (r0 == 0) goto L23
                java.security.spec.X509EncodedKeySpec r4 = (java.security.spec.X509EncodedKeySpec) r4     // Catch: java.lang.Exception -> L18
                byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L18
                java.security.PublicKey r4 = org.bouncycastle.jce.provider.JDKKeyFactory.createPublicKeyFromDERStream(r4)     // Catch: java.lang.Exception -> L18
                org.bouncycastle.jce.provider.JCEECPublicKey r4 = (org.bouncycastle.jce.provider.JCEECPublicKey) r4     // Catch: java.lang.Exception -> L18
                org.bouncycastle.jce.provider.JCEECPublicKey r0 = new org.bouncycastle.jce.provider.JCEECPublicKey     // Catch: java.lang.Exception -> L18
                java.lang.String r1 = r3.algorithm     // Catch: java.lang.Exception -> L18
                r0.<init>(r1, r4)     // Catch: java.lang.Exception -> L18
                return r0
            L18:
                r4 = move-exception
                java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
                java.lang.String r4 = r4.toString()
                r0.<init>(r4)
                throw r0
            L23:
                boolean r0 = r4 instanceof org.bouncycastle.jce.spec.ECPublicKeySpec
                if (r0 == 0) goto L31
                org.bouncycastle.jce.provider.JCEECPublicKey r0 = new org.bouncycastle.jce.provider.JCEECPublicKey
                java.lang.String r1 = r3.algorithm
                org.bouncycastle.jce.spec.ECPublicKeySpec r4 = (org.bouncycastle.jce.spec.ECPublicKeySpec) r4
                r0.<init>(r1, r4)
                return r0
            L31:
                boolean r0 = r4 instanceof java.security.spec.ECPublicKeySpec
                if (r0 == 0) goto L3f
                org.bouncycastle.jce.provider.JCEECPublicKey r0 = new org.bouncycastle.jce.provider.JCEECPublicKey
                java.lang.String r1 = r3.algorithm
                java.security.spec.ECPublicKeySpec r4 = (java.security.spec.ECPublicKeySpec) r4
                r0.<init>(r1, r4)
                return r0
            L3f:
                java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Unknown KeySpec type: "
                r1.append(r2)
                java.lang.Class r4 = r4.getClass()
                java.lang.String r4 = r4.getName()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }
    }

    public static class ECDH extends org.bouncycastle.jce.provider.JDKKeyFactory.EC {
        public ECDH() {
                r1 = this;
                java.lang.String r0 = "ECDH"
                r1.<init>(r0)
                return
        }
    }

    public static class ECDHC extends org.bouncycastle.jce.provider.JDKKeyFactory.EC {
        public ECDHC() {
                r1 = this;
                java.lang.String r0 = "ECDHC"
                r1.<init>(r0)
                return
        }
    }

    public static class ECDSA extends org.bouncycastle.jce.provider.JDKKeyFactory.EC {
        public ECDSA() {
                r1 = this;
                java.lang.String r0 = "ECDSA"
                r1.<init>(r0)
                return
        }
    }

    public static class ECGOST3410 extends org.bouncycastle.jce.provider.JDKKeyFactory.EC {
        public ECGOST3410() {
                r1 = this;
                java.lang.String r0 = "ECGOST3410"
                r1.<init>(r0)
                return
        }
    }

    public static class ElGamal extends org.bouncycastle.jce.provider.JDKKeyFactory {
        public ElGamal() {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.elGamalFactory = r0
                return
        }

        @Override
        protected java.security.PrivateKey engineGeneratePrivate(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof org.bouncycastle.jce.spec.ElGamalPrivateKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JCEElGamalPrivateKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPrivateKey
                org.bouncycastle.jce.spec.ElGamalPrivateKeySpec r2 = (org.bouncycastle.jce.spec.ElGamalPrivateKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                boolean r0 = r2 instanceof javax.crypto.spec.DHPrivateKeySpec
                if (r0 == 0) goto L18
                org.bouncycastle.jce.provider.JCEElGamalPrivateKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPrivateKey
                javax.crypto.spec.DHPrivateKeySpec r2 = (javax.crypto.spec.DHPrivateKeySpec) r2
                r0.<init>(r2)
                return r0
            L18:
                java.security.PrivateKey r2 = super.engineGeneratePrivate(r2)
                return r2
        }

        @Override
        protected java.security.PublicKey engineGeneratePublic(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof org.bouncycastle.jce.spec.ElGamalPublicKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JCEElGamalPublicKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPublicKey
                org.bouncycastle.jce.spec.ElGamalPublicKeySpec r2 = (org.bouncycastle.jce.spec.ElGamalPublicKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                boolean r0 = r2 instanceof javax.crypto.spec.DHPublicKeySpec
                if (r0 == 0) goto L18
                org.bouncycastle.jce.provider.JCEElGamalPublicKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPublicKey
                javax.crypto.spec.DHPublicKeySpec r2 = (javax.crypto.spec.DHPublicKeySpec) r2
                r0.<init>(r2)
                return r0
            L18:
                java.security.PublicKey r2 = super.engineGeneratePublic(r2)
                return r2
        }
    }

    public static class GOST3410 extends org.bouncycastle.jce.provider.JDKKeyFactory {
        public GOST3410() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.PrivateKey engineGeneratePrivate(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof org.bouncycastle.jce.spec.GOST3410PrivateKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JDKGOST3410PrivateKey r0 = new org.bouncycastle.jce.provider.JDKGOST3410PrivateKey
                org.bouncycastle.jce.spec.GOST3410PrivateKeySpec r2 = (org.bouncycastle.jce.spec.GOST3410PrivateKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                java.security.PrivateKey r2 = super.engineGeneratePrivate(r2)
                return r2
        }

        @Override
        protected java.security.PublicKey engineGeneratePublic(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof org.bouncycastle.jce.spec.GOST3410PublicKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JDKGOST3410PublicKey r0 = new org.bouncycastle.jce.provider.JDKGOST3410PublicKey
                org.bouncycastle.jce.spec.GOST3410PublicKeySpec r2 = (org.bouncycastle.jce.spec.GOST3410PublicKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                java.security.PublicKey r2 = super.engineGeneratePublic(r2)
                return r2
        }
    }

    public static class RSA extends org.bouncycastle.jce.provider.JDKKeyFactory {
        public RSA() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.PrivateKey engineGeneratePrivate(java.security.spec.KeySpec r4) throws java.security.spec.InvalidKeySpecException {
                r3 = this;
                boolean r0 = r4 instanceof java.security.spec.PKCS8EncodedKeySpec
                if (r0 == 0) goto L32
                r0 = r4
                java.security.spec.PKCS8EncodedKeySpec r0 = (java.security.spec.PKCS8EncodedKeySpec) r0     // Catch: java.lang.Exception -> L10
                byte[] r0 = r0.getEncoded()     // Catch: java.lang.Exception -> L10
                java.security.PrivateKey r4 = org.bouncycastle.jce.provider.JDKKeyFactory.createPrivateKeyFromDERStream(r0)     // Catch: java.lang.Exception -> L10
                return r4
            L10:
                org.bouncycastle.jce.provider.JCERSAPrivateCrtKey r0 = new org.bouncycastle.jce.provider.JCERSAPrivateCrtKey     // Catch: java.lang.Exception -> L27
                org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r1 = new org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure     // Catch: java.lang.Exception -> L27
                java.security.spec.PKCS8EncodedKeySpec r4 = (java.security.spec.PKCS8EncodedKeySpec) r4     // Catch: java.lang.Exception -> L27
                byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L27
                org.bouncycastle.asn1.ASN1Object r4 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r4)     // Catch: java.lang.Exception -> L27
                org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.lang.Exception -> L27
                r1.<init>(r4)     // Catch: java.lang.Exception -> L27
                r0.<init>(r1)     // Catch: java.lang.Exception -> L27
                return r0
            L27:
                r4 = move-exception
                java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
                java.lang.String r4 = r4.toString()
                r0.<init>(r4)
                throw r0
            L32:
                boolean r0 = r4 instanceof java.security.spec.RSAPrivateCrtKeySpec
                if (r0 == 0) goto L3e
                org.bouncycastle.jce.provider.JCERSAPrivateCrtKey r0 = new org.bouncycastle.jce.provider.JCERSAPrivateCrtKey
                java.security.spec.RSAPrivateCrtKeySpec r4 = (java.security.spec.RSAPrivateCrtKeySpec) r4
                r0.<init>(r4)
                return r0
            L3e:
                boolean r0 = r4 instanceof java.security.spec.RSAPrivateKeySpec
                if (r0 == 0) goto L4a
                org.bouncycastle.jce.provider.JCERSAPrivateKey r0 = new org.bouncycastle.jce.provider.JCERSAPrivateKey
                java.security.spec.RSAPrivateKeySpec r4 = (java.security.spec.RSAPrivateKeySpec) r4
                r0.<init>(r4)
                return r0
            L4a:
                java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Unknown KeySpec type: "
                r1.append(r2)
                java.lang.Class r4 = r4.getClass()
                java.lang.String r4 = r4.getName()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        @Override
        protected java.security.PublicKey engineGeneratePublic(java.security.spec.KeySpec r2) throws java.security.spec.InvalidKeySpecException {
                r1 = this;
                boolean r0 = r2 instanceof java.security.spec.RSAPublicKeySpec
                if (r0 == 0) goto Lc
                org.bouncycastle.jce.provider.JCERSAPublicKey r0 = new org.bouncycastle.jce.provider.JCERSAPublicKey
                java.security.spec.RSAPublicKeySpec r2 = (java.security.spec.RSAPublicKeySpec) r2
                r0.<init>(r2)
                return r0
            Lc:
                java.security.PublicKey r2 = super.engineGeneratePublic(r2)
                return r2
        }
    }

    public static class X509 extends org.bouncycastle.jce.provider.JDKKeyFactory {
        public X509() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public JDKKeyFactory() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.elGamalFactory = r0
            return
    }

    static java.security.PrivateKey createPrivateKeyFromDERStream(byte[] r1) throws java.io.IOException {
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            java.security.PrivateKey r1 = createPrivateKeyFromPrivateKeyInfo(r0)
            return r1
    }

    static java.security.PrivateKey createPrivateKeyFromPrivateKeyInfo(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r3) {
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r3.getAlgorithmId()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            boolean r1 = org.bouncycastle.jce.provider.RSAUtil.isRsaOid(r0)
            if (r1 == 0) goto L14
            org.bouncycastle.jce.provider.JCERSAPrivateCrtKey r0 = new org.bouncycastle.jce.provider.JCERSAPrivateCrtKey
            r0.<init>(r3)
            return r0
        L14:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.dhKeyAgreement
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L22
            org.bouncycastle.jce.provider.JCEDHPrivateKey r0 = new org.bouncycastle.jce.provider.JCEDHPrivateKey
            r0.<init>(r3)
            return r0
        L22:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.elGamalAlgorithm
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L30
            org.bouncycastle.jce.provider.JCEElGamalPrivateKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPrivateKey
            r0.<init>(r3)
            return r0
        L30:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L3e
            org.bouncycastle.jce.provider.JDKDSAPrivateKey r0 = new org.bouncycastle.jce.provider.JDKDSAPrivateKey
            r0.<init>(r3)
            return r0
        L3e:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L4c
            org.bouncycastle.jce.provider.JCEECPrivateKey r0 = new org.bouncycastle.jce.provider.JCEECPrivateKey
            r0.<init>(r3)
            return r0
        L4c:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L5a
            org.bouncycastle.jce.provider.JDKGOST3410PrivateKey r0 = new org.bouncycastle.jce.provider.JDKGOST3410PrivateKey
            r0.<init>(r3)
            return r0
        L5a:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L68
            org.bouncycastle.jce.provider.JCEECPrivateKey r0 = new org.bouncycastle.jce.provider.JCEECPrivateKey
            r0.<init>(r3)
            return r0
        L68:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "algorithm identifier "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = " in key not recognised"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
            throw r3
    }

    static java.security.PublicKey createPublicKeyFromDERStream(byte[] r1) throws java.io.IOException {
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            java.security.PublicKey r1 = createPublicKeyFromPublicKeyInfo(r0)
            return r1
    }

    static java.security.PublicKey createPublicKeyFromPublicKeyInfo(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r3) {
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r3.getAlgorithmId()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            boolean r1 = org.bouncycastle.jce.provider.RSAUtil.isRsaOid(r0)
            if (r1 == 0) goto L14
            org.bouncycastle.jce.provider.JCERSAPublicKey r0 = new org.bouncycastle.jce.provider.JCERSAPublicKey
            r0.<init>(r3)
            return r0
        L14:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.dhKeyAgreement
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L22
            org.bouncycastle.jce.provider.JCEDHPublicKey r0 = new org.bouncycastle.jce.provider.JCEDHPublicKey
            r0.<init>(r3)
            return r0
        L22:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.dhpublicnumber
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L30
            org.bouncycastle.jce.provider.JCEDHPublicKey r0 = new org.bouncycastle.jce.provider.JCEDHPublicKey
            r0.<init>(r3)
            return r0
        L30:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.elGamalAlgorithm
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L3e
            org.bouncycastle.jce.provider.JCEElGamalPublicKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPublicKey
            r0.<init>(r3)
            return r0
        L3e:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L4c
            org.bouncycastle.jce.provider.JDKDSAPublicKey r0 = new org.bouncycastle.jce.provider.JDKDSAPublicKey
            r0.<init>(r3)
            return r0
        L4c:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.dsaWithSHA1
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L5a
            org.bouncycastle.jce.provider.JDKDSAPublicKey r0 = new org.bouncycastle.jce.provider.JDKDSAPublicKey
            r0.<init>(r3)
            return r0
        L5a:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L68
            org.bouncycastle.jce.provider.JCEECPublicKey r0 = new org.bouncycastle.jce.provider.JCEECPublicKey
            r0.<init>(r3)
            return r0
        L68:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L76
            org.bouncycastle.jce.provider.JDKGOST3410PublicKey r0 = new org.bouncycastle.jce.provider.JDKGOST3410PublicKey
            r0.<init>(r3)
            return r0
        L76:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L84
            org.bouncycastle.jce.provider.JCEECPublicKey r0 = new org.bouncycastle.jce.provider.JCEECPublicKey
            r0.<init>(r3)
            return r0
        L84:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "algorithm identifier "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = " in key not recognised"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
            throw r3
    }

    @Override
    protected java.security.PrivateKey engineGeneratePrivate(java.security.spec.KeySpec r4) throws java.security.spec.InvalidKeySpecException {
            r3 = this;
            boolean r0 = r4 instanceof java.security.spec.PKCS8EncodedKeySpec
            if (r0 == 0) goto L1a
            java.security.spec.PKCS8EncodedKeySpec r4 = (java.security.spec.PKCS8EncodedKeySpec) r4     // Catch: java.lang.Exception -> Lf
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> Lf
            java.security.PrivateKey r4 = createPrivateKeyFromDERStream(r4)     // Catch: java.lang.Exception -> Lf
            return r4
        Lf:
            r4 = move-exception
            java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
            java.lang.String r4 = r4.toString()
            r0.<init>(r4)
            throw r0
        L1a:
            java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown KeySpec type: "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    protected java.security.PublicKey engineGeneratePublic(java.security.spec.KeySpec r4) throws java.security.spec.InvalidKeySpecException {
            r3 = this;
            boolean r0 = r4 instanceof java.security.spec.X509EncodedKeySpec
            if (r0 == 0) goto L1a
            java.security.spec.X509EncodedKeySpec r4 = (java.security.spec.X509EncodedKeySpec) r4     // Catch: java.lang.Exception -> Lf
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> Lf
            java.security.PublicKey r4 = createPublicKeyFromDERStream(r4)     // Catch: java.lang.Exception -> Lf
            return r4
        Lf:
            r4 = move-exception
            java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
            java.lang.String r4 = r4.toString()
            r0.<init>(r4)
            throw r0
        L1a:
            java.security.spec.InvalidKeySpecException r0 = new java.security.spec.InvalidKeySpecException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown KeySpec type: "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    protected java.security.spec.KeySpec engineGetKeySpec(java.security.Key r10, java.lang.Class r11) throws java.security.spec.InvalidKeySpecException {
            r9 = this;
            java.lang.Class<java.security.spec.PKCS8EncodedKeySpec> r0 = java.security.spec.PKCS8EncodedKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto L1e
            java.lang.String r0 = r10.getFormat()
            java.lang.String r1 = "PKCS#8"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1e
            java.security.spec.PKCS8EncodedKeySpec r11 = new java.security.spec.PKCS8EncodedKeySpec
            byte[] r10 = r10.getEncoded()
            r11.<init>(r10)
            return r11
        L1e:
            java.lang.Class<java.security.spec.X509EncodedKeySpec> r0 = java.security.spec.X509EncodedKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto L3c
            java.lang.String r0 = r10.getFormat()
            java.lang.String r1 = "X.509"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3c
            java.security.spec.X509EncodedKeySpec r11 = new java.security.spec.X509EncodedKeySpec
            byte[] r10 = r10.getEncoded()
            r11.<init>(r10)
            return r11
        L3c:
            java.lang.Class<java.security.spec.RSAPublicKeySpec> r0 = java.security.spec.RSAPublicKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto L58
            boolean r0 = r10 instanceof java.security.interfaces.RSAPublicKey
            if (r0 == 0) goto L58
            java.security.interfaces.RSAPublicKey r10 = (java.security.interfaces.RSAPublicKey) r10
            java.security.spec.RSAPublicKeySpec r11 = new java.security.spec.RSAPublicKeySpec
            java.math.BigInteger r0 = r10.getModulus()
            java.math.BigInteger r10 = r10.getPublicExponent()
            r11.<init>(r0, r10)
            return r11
        L58:
            java.lang.Class<java.security.spec.RSAPrivateKeySpec> r0 = java.security.spec.RSAPrivateKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto L74
            boolean r0 = r10 instanceof java.security.interfaces.RSAPrivateKey
            if (r0 == 0) goto L74
            java.security.interfaces.RSAPrivateKey r10 = (java.security.interfaces.RSAPrivateKey) r10
            java.security.spec.RSAPrivateKeySpec r11 = new java.security.spec.RSAPrivateKeySpec
            java.math.BigInteger r0 = r10.getModulus()
            java.math.BigInteger r10 = r10.getPrivateExponent()
            r11.<init>(r0, r10)
            return r11
        L74:
            java.lang.Class<java.security.spec.RSAPrivateCrtKeySpec> r0 = java.security.spec.RSAPrivateCrtKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto La9
            boolean r0 = r10 instanceof java.security.interfaces.RSAPrivateCrtKey
            if (r0 == 0) goto La9
            java.security.interfaces.RSAPrivateCrtKey r10 = (java.security.interfaces.RSAPrivateCrtKey) r10
            java.security.spec.RSAPrivateCrtKeySpec r11 = new java.security.spec.RSAPrivateCrtKeySpec
            java.math.BigInteger r1 = r10.getModulus()
            java.math.BigInteger r2 = r10.getPublicExponent()
            java.math.BigInteger r3 = r10.getPrivateExponent()
            java.math.BigInteger r4 = r10.getPrimeP()
            java.math.BigInteger r5 = r10.getPrimeQ()
            java.math.BigInteger r6 = r10.getPrimeExponentP()
            java.math.BigInteger r7 = r10.getPrimeExponentQ()
            java.math.BigInteger r8 = r10.getCrtCoefficient()
            r0 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return r11
        La9:
            java.lang.Class<javax.crypto.spec.DHPrivateKeySpec> r0 = javax.crypto.spec.DHPrivateKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto Ld1
            boolean r0 = r10 instanceof javax.crypto.interfaces.DHPrivateKey
            if (r0 == 0) goto Ld1
            javax.crypto.interfaces.DHPrivateKey r10 = (javax.crypto.interfaces.DHPrivateKey) r10
            javax.crypto.spec.DHPrivateKeySpec r11 = new javax.crypto.spec.DHPrivateKeySpec
            java.math.BigInteger r0 = r10.getX()
            javax.crypto.spec.DHParameterSpec r1 = r10.getParams()
            java.math.BigInteger r1 = r1.getP()
            javax.crypto.spec.DHParameterSpec r10 = r10.getParams()
            java.math.BigInteger r10 = r10.getG()
            r11.<init>(r0, r1, r10)
            return r11
        Ld1:
            java.lang.Class<javax.crypto.spec.DHPublicKeySpec> r0 = javax.crypto.spec.DHPublicKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto Lf9
            boolean r0 = r10 instanceof javax.crypto.interfaces.DHPublicKey
            if (r0 == 0) goto Lf9
            javax.crypto.interfaces.DHPublicKey r10 = (javax.crypto.interfaces.DHPublicKey) r10
            javax.crypto.spec.DHPublicKeySpec r11 = new javax.crypto.spec.DHPublicKeySpec
            java.math.BigInteger r0 = r10.getY()
            javax.crypto.spec.DHParameterSpec r1 = r10.getParams()
            java.math.BigInteger r1 = r1.getP()
            javax.crypto.spec.DHParameterSpec r10 = r10.getParams()
            java.math.BigInteger r10 = r10.getG()
            r11.<init>(r0, r1, r10)
            return r11
        Lf9:
            java.lang.Class<java.security.spec.ECPublicKeySpec> r0 = java.security.spec.ECPublicKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto L115
            boolean r0 = r10 instanceof java.security.interfaces.ECPublicKey
            if (r0 == 0) goto L115
            java.security.interfaces.ECPublicKey r10 = (java.security.interfaces.ECPublicKey) r10
            java.security.spec.ECPublicKeySpec r11 = new java.security.spec.ECPublicKeySpec
            java.security.spec.ECPoint r0 = r10.getW()
            java.security.spec.ECParameterSpec r10 = r10.getParams()
            r11.<init>(r0, r10)
            return r11
        L115:
            java.lang.Class<java.security.spec.ECPrivateKeySpec> r0 = java.security.spec.ECPrivateKeySpec.class
            boolean r0 = r11.isAssignableFrom(r0)
            if (r0 == 0) goto L131
            boolean r0 = r10 instanceof java.security.interfaces.ECPrivateKey
            if (r0 == 0) goto L131
            java.security.interfaces.ECPrivateKey r10 = (java.security.interfaces.ECPrivateKey) r10
            java.security.spec.ECPrivateKeySpec r11 = new java.security.spec.ECPrivateKeySpec
            java.math.BigInteger r0 = r10.getS()
            java.security.spec.ECParameterSpec r10 = r10.getParams()
            r11.<init>(r0, r10)
            return r11
        L131:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "not implemented yet "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r10 = " "
            r1.append(r10)
            r1.append(r11)
            java.lang.String r10 = r1.toString()
            r0.<init>(r10)
            throw r0
    }

    @Override
    protected java.security.Key engineTranslateKey(java.security.Key r2) throws java.security.InvalidKeyException {
            r1 = this;
            boolean r0 = r2 instanceof java.security.interfaces.RSAPublicKey
            if (r0 == 0) goto Lc
            org.bouncycastle.jce.provider.JCERSAPublicKey r0 = new org.bouncycastle.jce.provider.JCERSAPublicKey
            java.security.interfaces.RSAPublicKey r2 = (java.security.interfaces.RSAPublicKey) r2
            r0.<init>(r2)
            return r0
        Lc:
            boolean r0 = r2 instanceof java.security.interfaces.RSAPrivateCrtKey
            if (r0 == 0) goto L18
            org.bouncycastle.jce.provider.JCERSAPrivateCrtKey r0 = new org.bouncycastle.jce.provider.JCERSAPrivateCrtKey
            java.security.interfaces.RSAPrivateCrtKey r2 = (java.security.interfaces.RSAPrivateCrtKey) r2
            r0.<init>(r2)
            return r0
        L18:
            boolean r0 = r2 instanceof java.security.interfaces.RSAPrivateKey
            if (r0 == 0) goto L24
            org.bouncycastle.jce.provider.JCERSAPrivateKey r0 = new org.bouncycastle.jce.provider.JCERSAPrivateKey
            java.security.interfaces.RSAPrivateKey r2 = (java.security.interfaces.RSAPrivateKey) r2
            r0.<init>(r2)
            return r0
        L24:
            boolean r0 = r2 instanceof javax.crypto.interfaces.DHPublicKey
            if (r0 == 0) goto L3c
            boolean r0 = r1.elGamalFactory
            if (r0 == 0) goto L34
            org.bouncycastle.jce.provider.JCEElGamalPublicKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPublicKey
            javax.crypto.interfaces.DHPublicKey r2 = (javax.crypto.interfaces.DHPublicKey) r2
            r0.<init>(r2)
            return r0
        L34:
            org.bouncycastle.jce.provider.JCEDHPublicKey r0 = new org.bouncycastle.jce.provider.JCEDHPublicKey
            javax.crypto.interfaces.DHPublicKey r2 = (javax.crypto.interfaces.DHPublicKey) r2
            r0.<init>(r2)
            return r0
        L3c:
            boolean r0 = r2 instanceof javax.crypto.interfaces.DHPrivateKey
            if (r0 == 0) goto L54
            boolean r0 = r1.elGamalFactory
            if (r0 == 0) goto L4c
            org.bouncycastle.jce.provider.JCEElGamalPrivateKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPrivateKey
            javax.crypto.interfaces.DHPrivateKey r2 = (javax.crypto.interfaces.DHPrivateKey) r2
            r0.<init>(r2)
            return r0
        L4c:
            org.bouncycastle.jce.provider.JCEDHPrivateKey r0 = new org.bouncycastle.jce.provider.JCEDHPrivateKey
            javax.crypto.interfaces.DHPrivateKey r2 = (javax.crypto.interfaces.DHPrivateKey) r2
            r0.<init>(r2)
            return r0
        L54:
            boolean r0 = r2 instanceof java.security.interfaces.DSAPublicKey
            if (r0 == 0) goto L60
            org.bouncycastle.jce.provider.JDKDSAPublicKey r0 = new org.bouncycastle.jce.provider.JDKDSAPublicKey
            java.security.interfaces.DSAPublicKey r2 = (java.security.interfaces.DSAPublicKey) r2
            r0.<init>(r2)
            return r0
        L60:
            boolean r0 = r2 instanceof java.security.interfaces.DSAPrivateKey
            if (r0 == 0) goto L6c
            org.bouncycastle.jce.provider.JDKDSAPrivateKey r0 = new org.bouncycastle.jce.provider.JDKDSAPrivateKey
            java.security.interfaces.DSAPrivateKey r2 = (java.security.interfaces.DSAPrivateKey) r2
            r0.<init>(r2)
            return r0
        L6c:
            boolean r0 = r2 instanceof org.bouncycastle.jce.interfaces.ElGamalPublicKey
            if (r0 == 0) goto L78
            org.bouncycastle.jce.provider.JCEElGamalPublicKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPublicKey
            org.bouncycastle.jce.interfaces.ElGamalPublicKey r2 = (org.bouncycastle.jce.interfaces.ElGamalPublicKey) r2
            r0.<init>(r2)
            return r0
        L78:
            boolean r0 = r2 instanceof org.bouncycastle.jce.interfaces.ElGamalPrivateKey
            if (r0 == 0) goto L84
            org.bouncycastle.jce.provider.JCEElGamalPrivateKey r0 = new org.bouncycastle.jce.provider.JCEElGamalPrivateKey
            org.bouncycastle.jce.interfaces.ElGamalPrivateKey r2 = (org.bouncycastle.jce.interfaces.ElGamalPrivateKey) r2
            r0.<init>(r2)
            return r0
        L84:
            boolean r0 = r2 instanceof java.security.interfaces.ECPublicKey
            if (r0 == 0) goto L90
            org.bouncycastle.jce.provider.JCEECPublicKey r0 = new org.bouncycastle.jce.provider.JCEECPublicKey
            java.security.interfaces.ECPublicKey r2 = (java.security.interfaces.ECPublicKey) r2
            r0.<init>(r2)
            return r0
        L90:
            boolean r0 = r2 instanceof java.security.interfaces.ECPrivateKey
            if (r0 == 0) goto L9c
            org.bouncycastle.jce.provider.JCEECPrivateKey r0 = new org.bouncycastle.jce.provider.JCEECPrivateKey
            java.security.interfaces.ECPrivateKey r2 = (java.security.interfaces.ECPrivateKey) r2
            r0.<init>(r2)
            return r0
        L9c:
            java.security.InvalidKeyException r2 = new java.security.InvalidKeyException
            java.lang.String r0 = "key type unknown"
            r2.<init>(r0)
            throw r2
    }
}
