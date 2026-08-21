package org.bouncycastle.jce.provider;

public abstract class JDKKeyPairGenerator extends java.security.KeyPairGenerator {

    public static class DH extends org.bouncycastle.jce.provider.JDKKeyPairGenerator {
        int certainty;
        org.bouncycastle.crypto.generators.DHBasicKeyPairGenerator engine;
        boolean initialised;
        org.bouncycastle.crypto.params.DHKeyGenerationParameters param;
        java.security.SecureRandom random;
        int strength;

        public DH() {
                r1 = this;
                java.lang.String r0 = "DH"
                r1.<init>(r0)
                org.bouncycastle.crypto.generators.DHBasicKeyPairGenerator r0 = new org.bouncycastle.crypto.generators.DHBasicKeyPairGenerator
                r0.<init>()
                r1.engine = r0
                r0 = 1024(0x400, float:1.435E-42)
                r1.strength = r0
                r0 = 20
                r1.certainty = r0
                java.security.SecureRandom r0 = new java.security.SecureRandom
                r0.<init>()
                r1.random = r0
                r0 = 0
                r1.initialised = r0
                return
        }

        @Override
        public java.security.KeyPair generateKeyPair() {
                r4 = this;
                boolean r0 = r4.initialised
                if (r0 != 0) goto L27
                org.bouncycastle.crypto.generators.DHParametersGenerator r0 = new org.bouncycastle.crypto.generators.DHParametersGenerator
                r0.<init>()
                int r1 = r4.strength
                int r2 = r4.certainty
                java.security.SecureRandom r3 = r4.random
                r0.init(r1, r2, r3)
                org.bouncycastle.crypto.params.DHKeyGenerationParameters r1 = new org.bouncycastle.crypto.params.DHKeyGenerationParameters
                java.security.SecureRandom r2 = r4.random
                org.bouncycastle.crypto.params.DHParameters r0 = r0.generateParameters()
                r1.<init>(r2, r0)
                r4.param = r1
                org.bouncycastle.crypto.generators.DHBasicKeyPairGenerator r0 = r4.engine
                r0.init(r1)
                r0 = 1
                r4.initialised = r0
            L27:
                org.bouncycastle.crypto.generators.DHBasicKeyPairGenerator r0 = r4.engine
                org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = r0.generateKeyPair()
                org.bouncycastle.crypto.CipherParameters r1 = r0.getPublic()
                org.bouncycastle.crypto.params.DHPublicKeyParameters r1 = (org.bouncycastle.crypto.params.DHPublicKeyParameters) r1
                org.bouncycastle.crypto.CipherParameters r0 = r0.getPrivate()
                org.bouncycastle.crypto.params.DHPrivateKeyParameters r0 = (org.bouncycastle.crypto.params.DHPrivateKeyParameters) r0
                java.security.KeyPair r2 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JCEDHPublicKey r3 = new org.bouncycastle.jce.provider.JCEDHPublicKey
                r3.<init>(r1)
                org.bouncycastle.jce.provider.JCEDHPrivateKey r1 = new org.bouncycastle.jce.provider.JCEDHPrivateKey
                r1.<init>(r0)
                r2.<init>(r3, r1)
                return r2
        }

        @Override
        public void initialize(int r1, java.security.SecureRandom r2) {
                r0 = this;
                r0.strength = r1
                r0.random = r2
                return
        }

        @Override
        public void initialize(java.security.spec.AlgorithmParameterSpec r6, java.security.SecureRandom r7) throws java.security.InvalidAlgorithmParameterException {
                r5 = this;
                boolean r0 = r6 instanceof javax.crypto.spec.DHParameterSpec
                if (r0 == 0) goto L28
                javax.crypto.spec.DHParameterSpec r6 = (javax.crypto.spec.DHParameterSpec) r6
                org.bouncycastle.crypto.params.DHKeyGenerationParameters r0 = new org.bouncycastle.crypto.params.DHKeyGenerationParameters
                org.bouncycastle.crypto.params.DHParameters r1 = new org.bouncycastle.crypto.params.DHParameters
                java.math.BigInteger r2 = r6.getP()
                java.math.BigInteger r3 = r6.getG()
                r4 = 0
                int r6 = r6.getL()
                r1.<init>(r2, r3, r4, r6)
                r0.<init>(r7, r1)
                r5.param = r0
                org.bouncycastle.crypto.generators.DHBasicKeyPairGenerator r6 = r5.engine
                r6.init(r0)
                r6 = 1
                r5.initialised = r6
                return
            L28:
                java.security.InvalidAlgorithmParameterException r6 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r7 = "parameter object not a DHParameterSpec"
                r6.<init>(r7)
                throw r6
        }
    }

    public static class DSA extends org.bouncycastle.jce.provider.JDKKeyPairGenerator {
        int certainty;
        org.bouncycastle.crypto.generators.DSAKeyPairGenerator engine;
        boolean initialised;
        org.bouncycastle.crypto.params.DSAKeyGenerationParameters param;
        java.security.SecureRandom random;
        int strength;

        public DSA() {
                r1 = this;
                java.lang.String r0 = "DSA"
                r1.<init>(r0)
                org.bouncycastle.crypto.generators.DSAKeyPairGenerator r0 = new org.bouncycastle.crypto.generators.DSAKeyPairGenerator
                r0.<init>()
                r1.engine = r0
                r0 = 1024(0x400, float:1.435E-42)
                r1.strength = r0
                r0 = 20
                r1.certainty = r0
                java.security.SecureRandom r0 = new java.security.SecureRandom
                r0.<init>()
                r1.random = r0
                r0 = 0
                r1.initialised = r0
                return
        }

        @Override
        public java.security.KeyPair generateKeyPair() {
                r4 = this;
                boolean r0 = r4.initialised
                if (r0 != 0) goto L27
                org.bouncycastle.crypto.generators.DSAParametersGenerator r0 = new org.bouncycastle.crypto.generators.DSAParametersGenerator
                r0.<init>()
                int r1 = r4.strength
                int r2 = r4.certainty
                java.security.SecureRandom r3 = r4.random
                r0.init(r1, r2, r3)
                org.bouncycastle.crypto.params.DSAKeyGenerationParameters r1 = new org.bouncycastle.crypto.params.DSAKeyGenerationParameters
                java.security.SecureRandom r2 = r4.random
                org.bouncycastle.crypto.params.DSAParameters r0 = r0.generateParameters()
                r1.<init>(r2, r0)
                r4.param = r1
                org.bouncycastle.crypto.generators.DSAKeyPairGenerator r0 = r4.engine
                r0.init(r1)
                r0 = 1
                r4.initialised = r0
            L27:
                org.bouncycastle.crypto.generators.DSAKeyPairGenerator r0 = r4.engine
                org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = r0.generateKeyPair()
                org.bouncycastle.crypto.CipherParameters r1 = r0.getPublic()
                org.bouncycastle.crypto.params.DSAPublicKeyParameters r1 = (org.bouncycastle.crypto.params.DSAPublicKeyParameters) r1
                org.bouncycastle.crypto.CipherParameters r0 = r0.getPrivate()
                org.bouncycastle.crypto.params.DSAPrivateKeyParameters r0 = (org.bouncycastle.crypto.params.DSAPrivateKeyParameters) r0
                java.security.KeyPair r2 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JDKDSAPublicKey r3 = new org.bouncycastle.jce.provider.JDKDSAPublicKey
                r3.<init>(r1)
                org.bouncycastle.jce.provider.JDKDSAPrivateKey r1 = new org.bouncycastle.jce.provider.JDKDSAPrivateKey
                r1.<init>(r0)
                r2.<init>(r3, r1)
                return r2
        }

        @Override
        public void initialize(int r2, java.security.SecureRandom r3) {
                r1 = this;
                r0 = 512(0x200, float:7.17E-43)
                if (r2 < r0) goto L11
                r0 = 1024(0x400, float:1.435E-42)
                if (r2 > r0) goto L11
                int r0 = r2 % 64
                if (r0 != 0) goto L11
                r1.strength = r2
                r1.random = r3
                return
            L11:
                java.security.InvalidParameterException r2 = new java.security.InvalidParameterException
                java.lang.String r3 = "strength must be from 512 - 1024 and a multiple of 64"
                r2.<init>(r3)
                throw r2
        }

        @Override
        public void initialize(java.security.spec.AlgorithmParameterSpec r5, java.security.SecureRandom r6) throws java.security.InvalidAlgorithmParameterException {
                r4 = this;
                boolean r0 = r5 instanceof java.security.spec.DSAParameterSpec
                if (r0 == 0) goto L27
                java.security.spec.DSAParameterSpec r5 = (java.security.spec.DSAParameterSpec) r5
                org.bouncycastle.crypto.params.DSAKeyGenerationParameters r0 = new org.bouncycastle.crypto.params.DSAKeyGenerationParameters
                org.bouncycastle.crypto.params.DSAParameters r1 = new org.bouncycastle.crypto.params.DSAParameters
                java.math.BigInteger r2 = r5.getP()
                java.math.BigInteger r3 = r5.getQ()
                java.math.BigInteger r5 = r5.getG()
                r1.<init>(r2, r3, r5)
                r0.<init>(r6, r1)
                r4.param = r0
                org.bouncycastle.crypto.generators.DSAKeyPairGenerator r5 = r4.engine
                r5.init(r0)
                r5 = 1
                r4.initialised = r5
                return
            L27:
                java.security.InvalidAlgorithmParameterException r5 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r6 = "parameter object not a DSAParameterSpec"
                r5.<init>(r6)
                throw r5
        }
    }

    public static class EC extends org.bouncycastle.jce.provider.JDKKeyPairGenerator {
        private static java.util.Hashtable ecParameters;
        java.lang.String algorithm;
        int certainty;
        java.lang.Object ecParams;
        org.bouncycastle.crypto.generators.ECKeyPairGenerator engine;
        boolean initialised;
        org.bouncycastle.crypto.params.ECKeyGenerationParameters param;
        java.security.SecureRandom random;
        int strength;

        static {
                java.util.Hashtable r0 = new java.util.Hashtable
                r0.<init>()
                org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC.ecParameters = r0
                java.lang.Integer r1 = new java.lang.Integer
                r2 = 192(0xc0, float:2.69E-43)
                r1.<init>(r2)
                java.security.spec.ECGenParameterSpec r2 = new java.security.spec.ECGenParameterSpec
                java.lang.String r3 = "prime192v1"
                r2.<init>(r3)
                r0.put(r1, r2)
                java.util.Hashtable r0 = org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC.ecParameters
                java.lang.Integer r1 = new java.lang.Integer
                r2 = 239(0xef, float:3.35E-43)
                r1.<init>(r2)
                java.security.spec.ECGenParameterSpec r2 = new java.security.spec.ECGenParameterSpec
                java.lang.String r3 = "prime239v1"
                r2.<init>(r3)
                r0.put(r1, r2)
                java.util.Hashtable r0 = org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC.ecParameters
                java.lang.Integer r1 = new java.lang.Integer
                r2 = 256(0x100, float:3.59E-43)
                r1.<init>(r2)
                java.security.spec.ECGenParameterSpec r2 = new java.security.spec.ECGenParameterSpec
                java.lang.String r3 = "prime256v1"
                r2.<init>(r3)
                r0.put(r1, r2)
                return
        }

        public EC() {
                r2 = this;
                java.lang.String r0 = "EC"
                r2.<init>(r0)
                org.bouncycastle.crypto.generators.ECKeyPairGenerator r1 = new org.bouncycastle.crypto.generators.ECKeyPairGenerator
                r1.<init>()
                r2.engine = r1
                r1 = 0
                r2.ecParams = r1
                r1 = 239(0xef, float:3.35E-43)
                r2.strength = r1
                r1 = 50
                r2.certainty = r1
                java.security.SecureRandom r1 = new java.security.SecureRandom
                r1.<init>()
                r2.random = r1
                r1 = 0
                r2.initialised = r1
                r2.algorithm = r0
                return
        }

        public EC(java.lang.String r2) {
                r1 = this;
                r1.<init>(r2)
                org.bouncycastle.crypto.generators.ECKeyPairGenerator r0 = new org.bouncycastle.crypto.generators.ECKeyPairGenerator
                r0.<init>()
                r1.engine = r0
                r0 = 0
                r1.ecParams = r0
                r0 = 239(0xef, float:3.35E-43)
                r1.strength = r0
                r0 = 50
                r1.certainty = r0
                java.security.SecureRandom r0 = new java.security.SecureRandom
                r0.<init>()
                r1.random = r0
                r0 = 0
                r1.initialised = r0
                r1.algorithm = r2
                return
        }

        @Override
        public java.security.KeyPair generateKeyPair() {
                r6 = this;
                boolean r0 = r6.initialised
                if (r0 == 0) goto L5e
                org.bouncycastle.crypto.generators.ECKeyPairGenerator r0 = r6.engine
                org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = r0.generateKeyPair()
                org.bouncycastle.crypto.CipherParameters r1 = r0.getPublic()
                org.bouncycastle.crypto.params.ECPublicKeyParameters r1 = (org.bouncycastle.crypto.params.ECPublicKeyParameters) r1
                org.bouncycastle.crypto.CipherParameters r0 = r0.getPrivate()
                org.bouncycastle.crypto.params.ECPrivateKeyParameters r0 = (org.bouncycastle.crypto.params.ECPrivateKeyParameters) r0
                java.lang.Object r2 = r6.ecParams
                boolean r3 = r2 instanceof org.bouncycastle.jce.spec.ECParameterSpec
                if (r3 == 0) goto L32
                org.bouncycastle.jce.spec.ECParameterSpec r2 = (org.bouncycastle.jce.spec.ECParameterSpec) r2
                java.security.KeyPair r3 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JCEECPublicKey r4 = new org.bouncycastle.jce.provider.JCEECPublicKey
                java.lang.String r5 = r6.algorithm
                r4.<init>(r5, r1, r2)
                org.bouncycastle.jce.provider.JCEECPrivateKey r1 = new org.bouncycastle.jce.provider.JCEECPrivateKey
                java.lang.String r5 = r6.algorithm
                r1.<init>(r5, r0, r2)
                r3.<init>(r4, r1)
                return r3
            L32:
                if (r2 != 0) goto L48
                java.security.KeyPair r2 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JCEECPublicKey r3 = new org.bouncycastle.jce.provider.JCEECPublicKey
                java.lang.String r4 = r6.algorithm
                r3.<init>(r4, r1)
                org.bouncycastle.jce.provider.JCEECPrivateKey r1 = new org.bouncycastle.jce.provider.JCEECPrivateKey
                java.lang.String r4 = r6.algorithm
                r1.<init>(r4, r0)
                r2.<init>(r3, r1)
                return r2
            L48:
                java.security.spec.ECParameterSpec r2 = (java.security.spec.ECParameterSpec) r2
                java.security.KeyPair r3 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JCEECPublicKey r4 = new org.bouncycastle.jce.provider.JCEECPublicKey
                java.lang.String r5 = r6.algorithm
                r4.<init>(r5, r1, r2)
                org.bouncycastle.jce.provider.JCEECPrivateKey r1 = new org.bouncycastle.jce.provider.JCEECPrivateKey
                java.lang.String r5 = r6.algorithm
                r1.<init>(r5, r0, r2)
                r3.<init>(r4, r1)
                return r3
            L5e:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "EC Key Pair Generator not initialised"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public void initialize(int r3, java.security.SecureRandom r4) {
                r2 = this;
                r2.strength = r3
                r2.random = r4
                java.util.Hashtable r0 = org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC.ecParameters
                java.lang.Integer r1 = new java.lang.Integer
                r1.<init>(r3)
                java.lang.Object r3 = r0.get(r1)
                r2.ecParams = r3
                if (r3 == 0) goto L21
                java.security.spec.ECGenParameterSpec r3 = (java.security.spec.ECGenParameterSpec) r3     // Catch: java.security.InvalidAlgorithmParameterException -> L19
                r2.initialize(r3, r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L19
                return
            L19:
                java.security.InvalidParameterException r3 = new java.security.InvalidParameterException
                java.lang.String r4 = "key size not configurable."
                r3.<init>(r4)
                throw r3
            L21:
                java.security.InvalidParameterException r3 = new java.security.InvalidParameterException
                java.lang.String r4 = "unknown key size."
                r3.<init>(r4)
                throw r3
        }

        @Override
        public void initialize(java.security.spec.AlgorithmParameterSpec r12, java.security.SecureRandom r13) throws java.security.InvalidAlgorithmParameterException {
                r11 = this;
                boolean r0 = r12 instanceof org.bouncycastle.jce.spec.ECParameterSpec
                r1 = 1
                if (r0 == 0) goto L2b
                r0 = r12
                org.bouncycastle.jce.spec.ECParameterSpec r0 = (org.bouncycastle.jce.spec.ECParameterSpec) r0
                r11.ecParams = r12
                org.bouncycastle.crypto.params.ECKeyGenerationParameters r12 = new org.bouncycastle.crypto.params.ECKeyGenerationParameters
                org.bouncycastle.crypto.params.ECDomainParameters r2 = new org.bouncycastle.crypto.params.ECDomainParameters
                org.bouncycastle.math.ec.ECCurve r3 = r0.getCurve()
                org.bouncycastle.math.ec.ECPoint r4 = r0.getG()
                java.math.BigInteger r0 = r0.getN()
                r2.<init>(r3, r4, r0)
                r12.<init>(r2, r13)
            L20:
                r11.param = r12
                org.bouncycastle.crypto.generators.ECKeyPairGenerator r13 = r11.engine
                r13.init(r12)
            L27:
                r11.initialised = r1
                goto L170
            L2b:
                boolean r0 = r12 instanceof java.security.spec.ECParameterSpec
                r2 = 0
                if (r0 == 0) goto L64
                r0 = r12
                java.security.spec.ECParameterSpec r0 = (java.security.spec.ECParameterSpec) r0
                r11.ecParams = r12
                java.security.spec.EllipticCurve r12 = r0.getCurve()
                org.bouncycastle.math.ec.ECCurve r12 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r12)
                java.security.spec.ECPoint r3 = r0.getGenerator()
                org.bouncycastle.math.ec.ECPoint r2 = org.bouncycastle.jce.provider.EC5Util.convertPoint(r12, r3, r2)
                org.bouncycastle.crypto.params.ECKeyGenerationParameters r3 = new org.bouncycastle.crypto.params.ECKeyGenerationParameters
                org.bouncycastle.crypto.params.ECDomainParameters r4 = new org.bouncycastle.crypto.params.ECDomainParameters
                java.math.BigInteger r5 = r0.getOrder()
                int r0 = r0.getCofactor()
                long r6 = (long) r0
                java.math.BigInteger r0 = java.math.BigInteger.valueOf(r6)
                r4.<init>(r12, r2, r5, r0)
                r3.<init>(r4, r13)
            L5c:
                r11.param = r3
                org.bouncycastle.crypto.generators.ECKeyPairGenerator r12 = r11.engine
                r12.init(r3)
                goto L27
            L64:
                boolean r0 = r12 instanceof java.security.spec.ECGenParameterSpec
                if (r0 == 0) goto L14a
                java.lang.String r0 = r11.algorithm
                java.lang.String r3 = "ECGOST3410"
                boolean r0 = r0.equals(r3)
                java.lang.String r3 = "unknown curve name: "
                java.security.spec.ECGenParameterSpec r12 = (java.security.spec.ECGenParameterSpec) r12
                if (r0 == 0) goto Lbb
                java.lang.String r0 = r12.getName()
                org.bouncycastle.crypto.params.ECDomainParameters r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getByName(r0)
                if (r0 == 0) goto La2
                org.bouncycastle.jce.spec.ECNamedCurveSpec r3 = new org.bouncycastle.jce.spec.ECNamedCurveSpec
                java.lang.String r5 = r12.getName()
                org.bouncycastle.math.ec.ECCurve r6 = r0.getCurve()
                org.bouncycastle.math.ec.ECPoint r7 = r0.getG()
                java.math.BigInteger r8 = r0.getN()
                java.math.BigInteger r9 = r0.getH()
                byte[] r10 = r0.getSeed()
                r4 = r3
                r4.<init>(r5, r6, r7, r8, r9, r10)
                r11.ecParams = r3
                goto L11d
            La2:
                java.security.InvalidAlgorithmParameterException r13 = new java.security.InvalidAlgorithmParameterException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r3)
                java.lang.String r12 = r12.getName()
                r0.append(r12)
                java.lang.String r12 = r0.toString()
                r13.<init>(r12)
                throw r13
            Lbb:
                java.lang.String r0 = r12.getName()
                org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.x9.X962NamedCurves.getByName(r0)
                if (r0 != 0) goto Lfd
                java.lang.String r0 = r12.getName()
                org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.sec.SECNamedCurves.getByName(r0)
                if (r0 != 0) goto Ld7
                java.lang.String r0 = r12.getName()
                org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.getByName(r0)
            Ld7:
                if (r0 != 0) goto Le1
                java.lang.String r0 = r12.getName()
                org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getByName(r0)
            Le1:
                if (r0 == 0) goto Le4
                goto Lfd
            Le4:
                java.security.InvalidAlgorithmParameterException r13 = new java.security.InvalidAlgorithmParameterException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r3)
                java.lang.String r12 = r12.getName()
                r0.append(r12)
                java.lang.String r12 = r0.toString()
                r13.<init>(r12)
                throw r13
            Lfd:
                org.bouncycastle.jce.spec.ECNamedCurveSpec r10 = new org.bouncycastle.jce.spec.ECNamedCurveSpec
                java.lang.String r4 = r12.getName()
                org.bouncycastle.math.ec.ECCurve r5 = r0.getCurve()
                org.bouncycastle.math.ec.ECPoint r6 = r0.getG()
                java.math.BigInteger r7 = r0.getN()
                java.math.BigInteger r8 = r0.getH()
                byte[] r9 = r0.getSeed()
                r3 = r10
                r3.<init>(r4, r5, r6, r7, r8, r9)
                r11.ecParams = r10
            L11d:
                java.lang.Object r12 = r11.ecParams
                java.security.spec.ECParameterSpec r12 = (java.security.spec.ECParameterSpec) r12
                java.security.spec.EllipticCurve r0 = r12.getCurve()
                org.bouncycastle.math.ec.ECCurve r0 = org.bouncycastle.jce.provider.EC5Util.convertCurve(r0)
                java.security.spec.ECPoint r3 = r12.getGenerator()
                org.bouncycastle.math.ec.ECPoint r2 = org.bouncycastle.jce.provider.EC5Util.convertPoint(r0, r3, r2)
                org.bouncycastle.crypto.params.ECKeyGenerationParameters r3 = new org.bouncycastle.crypto.params.ECKeyGenerationParameters
                org.bouncycastle.crypto.params.ECDomainParameters r4 = new org.bouncycastle.crypto.params.ECDomainParameters
                java.math.BigInteger r5 = r12.getOrder()
                int r12 = r12.getCofactor()
                long r6 = (long) r12
                java.math.BigInteger r12 = java.math.BigInteger.valueOf(r6)
                r4.<init>(r0, r2, r5, r12)
                r3.<init>(r4, r13)
                goto L5c
            L14a:
                if (r12 != 0) goto L171
                org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
                if (r0 == 0) goto L171
                org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
                r11.ecParams = r12
                org.bouncycastle.crypto.params.ECKeyGenerationParameters r12 = new org.bouncycastle.crypto.params.ECKeyGenerationParameters
                org.bouncycastle.crypto.params.ECDomainParameters r2 = new org.bouncycastle.crypto.params.ECDomainParameters
                org.bouncycastle.math.ec.ECCurve r3 = r0.getCurve()
                org.bouncycastle.math.ec.ECPoint r4 = r0.getG()
                java.math.BigInteger r0 = r0.getN()
                r2.<init>(r3, r4, r0)
                r12.<init>(r2, r13)
                goto L20
            L170:
                return
            L171:
                if (r12 != 0) goto L181
                org.bouncycastle.jce.spec.ECParameterSpec r12 = org.bouncycastle.jce.provider.ProviderUtil.getEcImplicitlyCa()
                if (r12 != 0) goto L181
                java.security.InvalidAlgorithmParameterException r12 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r13 = "null parameter passed by no implicitCA set"
                r12.<init>(r13)
                throw r12
            L181:
                java.security.InvalidAlgorithmParameterException r12 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r13 = "parameter object not a ECParameterSpec"
                r12.<init>(r13)
                throw r12
        }
    }

    public static class ECDH extends org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC {
        public ECDH() {
                r1 = this;
                java.lang.String r0 = "ECDH"
                r1.<init>(r0)
                return
        }
    }

    public static class ECDHC extends org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC {
        public ECDHC() {
                r1 = this;
                java.lang.String r0 = "ECDHC"
                r1.<init>(r0)
                return
        }
    }

    public static class ECDSA extends org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC {
        public ECDSA() {
                r1 = this;
                java.lang.String r0 = "ECDSA"
                r1.<init>(r0)
                return
        }
    }

    public static class ECGOST3410 extends org.bouncycastle.jce.provider.JDKKeyPairGenerator.EC {
        public ECGOST3410() {
                r1 = this;
                java.lang.String r0 = "ECGOST3410"
                r1.<init>(r0)
                return
        }
    }

    public static class ElGamal extends org.bouncycastle.jce.provider.JDKKeyPairGenerator {
        int certainty;
        org.bouncycastle.crypto.generators.ElGamalKeyPairGenerator engine;
        boolean initialised;
        org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters param;
        java.security.SecureRandom random;
        int strength;

        public ElGamal() {
                r1 = this;
                java.lang.String r0 = "ElGamal"
                r1.<init>(r0)
                org.bouncycastle.crypto.generators.ElGamalKeyPairGenerator r0 = new org.bouncycastle.crypto.generators.ElGamalKeyPairGenerator
                r0.<init>()
                r1.engine = r0
                r0 = 1024(0x400, float:1.435E-42)
                r1.strength = r0
                r0 = 20
                r1.certainty = r0
                java.security.SecureRandom r0 = new java.security.SecureRandom
                r0.<init>()
                r1.random = r0
                r0 = 0
                r1.initialised = r0
                return
        }

        @Override
        public java.security.KeyPair generateKeyPair() {
                r4 = this;
                boolean r0 = r4.initialised
                if (r0 != 0) goto L27
                org.bouncycastle.crypto.generators.ElGamalParametersGenerator r0 = new org.bouncycastle.crypto.generators.ElGamalParametersGenerator
                r0.<init>()
                int r1 = r4.strength
                int r2 = r4.certainty
                java.security.SecureRandom r3 = r4.random
                r0.init(r1, r2, r3)
                org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters r1 = new org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters
                java.security.SecureRandom r2 = r4.random
                org.bouncycastle.crypto.params.ElGamalParameters r0 = r0.generateParameters()
                r1.<init>(r2, r0)
                r4.param = r1
                org.bouncycastle.crypto.generators.ElGamalKeyPairGenerator r0 = r4.engine
                r0.init(r1)
                r0 = 1
                r4.initialised = r0
            L27:
                org.bouncycastle.crypto.generators.ElGamalKeyPairGenerator r0 = r4.engine
                org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = r0.generateKeyPair()
                org.bouncycastle.crypto.CipherParameters r1 = r0.getPublic()
                org.bouncycastle.crypto.params.ElGamalPublicKeyParameters r1 = (org.bouncycastle.crypto.params.ElGamalPublicKeyParameters) r1
                org.bouncycastle.crypto.CipherParameters r0 = r0.getPrivate()
                org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters r0 = (org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters) r0
                java.security.KeyPair r2 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JCEElGamalPublicKey r3 = new org.bouncycastle.jce.provider.JCEElGamalPublicKey
                r3.<init>(r1)
                org.bouncycastle.jce.provider.JCEElGamalPrivateKey r1 = new org.bouncycastle.jce.provider.JCEElGamalPrivateKey
                r1.<init>(r0)
                r2.<init>(r3, r1)
                return r2
        }

        @Override
        public void initialize(int r1, java.security.SecureRandom r2) {
                r0 = this;
                r0.strength = r1
                r0.random = r2
                return
        }

        @Override
        public void initialize(java.security.spec.AlgorithmParameterSpec r5, java.security.SecureRandom r6) throws java.security.InvalidAlgorithmParameterException {
                r4 = this;
                boolean r0 = r5 instanceof org.bouncycastle.jce.spec.ElGamalParameterSpec
                if (r0 != 0) goto L11
                boolean r1 = r5 instanceof javax.crypto.spec.DHParameterSpec
                if (r1 == 0) goto L9
                goto L11
            L9:
                java.security.InvalidAlgorithmParameterException r5 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r6 = "parameter object not a DHParameterSpec or an ElGamalParameterSpec"
                r5.<init>(r6)
                throw r5
            L11:
                if (r0 == 0) goto L28
                org.bouncycastle.jce.spec.ElGamalParameterSpec r5 = (org.bouncycastle.jce.spec.ElGamalParameterSpec) r5
                org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters r0 = new org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters
                org.bouncycastle.crypto.params.ElGamalParameters r1 = new org.bouncycastle.crypto.params.ElGamalParameters
                java.math.BigInteger r2 = r5.getP()
                java.math.BigInteger r5 = r5.getG()
                r1.<init>(r2, r5)
                r0.<init>(r6, r1)
                goto L40
            L28:
                javax.crypto.spec.DHParameterSpec r5 = (javax.crypto.spec.DHParameterSpec) r5
                org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters r0 = new org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters
                org.bouncycastle.crypto.params.ElGamalParameters r1 = new org.bouncycastle.crypto.params.ElGamalParameters
                java.math.BigInteger r2 = r5.getP()
                java.math.BigInteger r3 = r5.getG()
                int r5 = r5.getL()
                r1.<init>(r2, r3, r5)
                r0.<init>(r6, r1)
            L40:
                r4.param = r0
                org.bouncycastle.crypto.generators.ElGamalKeyPairGenerator r5 = r4.engine
                org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters r6 = r4.param
                r5.init(r6)
                r5 = 1
                r4.initialised = r5
                return
        }
    }

    public static class GOST3410 extends org.bouncycastle.jce.provider.JDKKeyPairGenerator {
        org.bouncycastle.crypto.generators.GOST3410KeyPairGenerator engine;
        org.bouncycastle.jce.spec.GOST3410ParameterSpec gost3410Params;
        boolean initialised;
        org.bouncycastle.crypto.params.GOST3410KeyGenerationParameters param;
        java.security.SecureRandom random;
        int strength;

        public GOST3410() {
                r1 = this;
                java.lang.String r0 = "GOST3410"
                r1.<init>(r0)
                org.bouncycastle.crypto.generators.GOST3410KeyPairGenerator r0 = new org.bouncycastle.crypto.generators.GOST3410KeyPairGenerator
                r0.<init>()
                r1.engine = r0
                r0 = 1024(0x400, float:1.435E-42)
                r1.strength = r0
                r0 = 0
                r1.random = r0
                r0 = 0
                r1.initialised = r0
                return
        }

        private void init(org.bouncycastle.jce.spec.GOST3410ParameterSpec r6, java.security.SecureRandom r7) {
                r5 = this;
                org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r0 = r6.getPublicKeyParameters()
                org.bouncycastle.crypto.params.GOST3410KeyGenerationParameters r1 = new org.bouncycastle.crypto.params.GOST3410KeyGenerationParameters
                org.bouncycastle.crypto.params.GOST3410Parameters r2 = new org.bouncycastle.crypto.params.GOST3410Parameters
                java.math.BigInteger r3 = r0.getP()
                java.math.BigInteger r4 = r0.getQ()
                java.math.BigInteger r0 = r0.getA()
                r2.<init>(r3, r4, r0)
                r1.<init>(r7, r2)
                r5.param = r1
                org.bouncycastle.crypto.generators.GOST3410KeyPairGenerator r7 = r5.engine
                r7.init(r1)
                r7 = 1
                r5.initialised = r7
                r5.gost3410Params = r6
                return
        }

        @Override
        public java.security.KeyPair generateKeyPair() {
                r5 = this;
                boolean r0 = r5.initialised
                if (r0 != 0) goto L17
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r0 = new org.bouncycastle.jce.spec.GOST3410ParameterSpec
                org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94_CryptoPro_A
                java.lang.String r1 = r1.getId()
                r0.<init>(r1)
                java.security.SecureRandom r1 = new java.security.SecureRandom
                r1.<init>()
                r5.init(r0, r1)
            L17:
                org.bouncycastle.crypto.generators.GOST3410KeyPairGenerator r0 = r5.engine
                org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = r0.generateKeyPair()
                org.bouncycastle.crypto.CipherParameters r1 = r0.getPublic()
                org.bouncycastle.crypto.params.GOST3410PublicKeyParameters r1 = (org.bouncycastle.crypto.params.GOST3410PublicKeyParameters) r1
                org.bouncycastle.crypto.CipherParameters r0 = r0.getPrivate()
                org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters r0 = (org.bouncycastle.crypto.params.GOST3410PrivateKeyParameters) r0
                java.security.KeyPair r2 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JDKGOST3410PublicKey r3 = new org.bouncycastle.jce.provider.JDKGOST3410PublicKey
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r4 = r5.gost3410Params
                r3.<init>(r1, r4)
                org.bouncycastle.jce.provider.JDKGOST3410PrivateKey r1 = new org.bouncycastle.jce.provider.JDKGOST3410PrivateKey
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r4 = r5.gost3410Params
                r1.<init>(r0, r4)
                r2.<init>(r3, r1)
                return r2
        }

        @Override
        public void initialize(int r1, java.security.SecureRandom r2) {
                r0 = this;
                r0.strength = r1
                r0.random = r2
                return
        }

        @Override
        public void initialize(java.security.spec.AlgorithmParameterSpec r2, java.security.SecureRandom r3) throws java.security.InvalidAlgorithmParameterException {
                r1 = this;
                boolean r0 = r2 instanceof org.bouncycastle.jce.spec.GOST3410ParameterSpec
                if (r0 == 0) goto La
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r2 = (org.bouncycastle.jce.spec.GOST3410ParameterSpec) r2
                r1.init(r2, r3)
                return
            La:
                java.security.InvalidAlgorithmParameterException r2 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r3 = "parameter object not a GOST3410ParameterSpec"
                r2.<init>(r3)
                throw r2
        }
    }

    public static class RSA extends org.bouncycastle.jce.provider.JDKKeyPairGenerator {
        static final java.math.BigInteger defaultPublicExponent = null;
        static final int defaultTests = 12;
        org.bouncycastle.crypto.generators.RSAKeyPairGenerator engine;
        org.bouncycastle.crypto.params.RSAKeyGenerationParameters param;

        static {
                r0 = 65537(0x10001, double:3.23796E-319)
                java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
                org.bouncycastle.jce.provider.JDKKeyPairGenerator.RSA.defaultPublicExponent = r0
                return
        }

        public RSA() {
                r5 = this;
                java.lang.String r0 = "RSA"
                r5.<init>(r0)
                org.bouncycastle.crypto.generators.RSAKeyPairGenerator r0 = new org.bouncycastle.crypto.generators.RSAKeyPairGenerator
                r0.<init>()
                r5.engine = r0
                org.bouncycastle.crypto.params.RSAKeyGenerationParameters r0 = new org.bouncycastle.crypto.params.RSAKeyGenerationParameters
                java.math.BigInteger r1 = org.bouncycastle.jce.provider.JDKKeyPairGenerator.RSA.defaultPublicExponent
                java.security.SecureRandom r2 = new java.security.SecureRandom
                r2.<init>()
                r3 = 2048(0x800, float:2.87E-42)
                r4 = 12
                r0.<init>(r1, r2, r3, r4)
                r5.param = r0
                org.bouncycastle.crypto.generators.RSAKeyPairGenerator r1 = r5.engine
                r1.init(r0)
                return
        }

        @Override
        public java.security.KeyPair generateKeyPair() {
                r4 = this;
                org.bouncycastle.crypto.generators.RSAKeyPairGenerator r0 = r4.engine
                org.bouncycastle.crypto.AsymmetricCipherKeyPair r0 = r0.generateKeyPair()
                org.bouncycastle.crypto.CipherParameters r1 = r0.getPublic()
                org.bouncycastle.crypto.params.RSAKeyParameters r1 = (org.bouncycastle.crypto.params.RSAKeyParameters) r1
                org.bouncycastle.crypto.CipherParameters r0 = r0.getPrivate()
                org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r0 = (org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters) r0
                java.security.KeyPair r2 = new java.security.KeyPair
                org.bouncycastle.jce.provider.JCERSAPublicKey r3 = new org.bouncycastle.jce.provider.JCERSAPublicKey
                r3.<init>(r1)
                org.bouncycastle.jce.provider.JCERSAPrivateCrtKey r1 = new org.bouncycastle.jce.provider.JCERSAPrivateCrtKey
                r1.<init>(r0)
                r2.<init>(r3, r1)
                return r2
        }

        @Override
        public void initialize(int r4, java.security.SecureRandom r5) {
                r3 = this;
                org.bouncycastle.crypto.params.RSAKeyGenerationParameters r0 = new org.bouncycastle.crypto.params.RSAKeyGenerationParameters
                java.math.BigInteger r1 = org.bouncycastle.jce.provider.JDKKeyPairGenerator.RSA.defaultPublicExponent
                r2 = 12
                r0.<init>(r1, r5, r4, r2)
                r3.param = r0
                org.bouncycastle.crypto.generators.RSAKeyPairGenerator r4 = r3.engine
                r4.init(r0)
                return
        }

        @Override
        public void initialize(java.security.spec.AlgorithmParameterSpec r4, java.security.SecureRandom r5) throws java.security.InvalidAlgorithmParameterException {
                r3 = this;
                boolean r0 = r4 instanceof java.security.spec.RSAKeyGenParameterSpec
                if (r0 == 0) goto L1d
                java.security.spec.RSAKeyGenParameterSpec r4 = (java.security.spec.RSAKeyGenParameterSpec) r4
                org.bouncycastle.crypto.params.RSAKeyGenerationParameters r0 = new org.bouncycastle.crypto.params.RSAKeyGenerationParameters
                java.math.BigInteger r1 = r4.getPublicExponent()
                int r4 = r4.getKeysize()
                r2 = 12
                r0.<init>(r1, r5, r4, r2)
                r3.param = r0
                org.bouncycastle.crypto.generators.RSAKeyPairGenerator r4 = r3.engine
                r4.init(r0)
                return
            L1d:
                java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r5 = "parameter object not a RSAKeyGenParameterSpec"
                r4.<init>(r5)
                throw r4
        }
    }

    public JDKKeyPairGenerator(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public abstract java.security.KeyPair generateKeyPair();

    @Override
    public abstract void initialize(int r1, java.security.SecureRandom r2);
}
