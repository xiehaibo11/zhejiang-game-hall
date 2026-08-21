package org.bouncycastle.jce.provider;

public abstract class JDKAlgorithmParameterGenerator extends java.security.AlgorithmParameterGeneratorSpi {
    protected java.security.SecureRandom random;
    protected int strength;

    public static class DES extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        public DES() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r3 = this;
                r0 = 8
                byte[] r0 = new byte[r0]
                java.security.SecureRandom r1 = r3.random
                if (r1 != 0) goto Lf
                java.security.SecureRandom r1 = new java.security.SecureRandom
                r1.<init>()
                r3.random = r1
            Lf:
                java.security.SecureRandom r1 = r3.random
                r1.nextBytes(r0)
                java.lang.String r1 = "DES"
                java.lang.String r2 = "BC"
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r1, r2)     // Catch: java.lang.Exception -> L25
                javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L25
                r2.<init>(r0)     // Catch: java.lang.Exception -> L25
                r1.init(r2)     // Catch: java.lang.Exception -> L25
                return r1
            L25:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r1, java.security.SecureRandom r2) throws java.security.InvalidAlgorithmParameterException {
                r0 = this;
                java.security.InvalidAlgorithmParameterException r1 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r2 = "No supported AlgorithmParameterSpec for DES parameter generation."
                r1.<init>(r2)
                throw r1
        }
    }

    public static class DH extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        private int l;

        public DH() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.l = r0
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r5 = this;
                org.bouncycastle.crypto.generators.DHParametersGenerator r0 = new org.bouncycastle.crypto.generators.DHParametersGenerator
                r0.<init>()
                java.security.SecureRandom r1 = r5.random
                r2 = 20
                if (r1 == 0) goto L10
                int r1 = r5.strength
                java.security.SecureRandom r3 = r5.random
                goto L17
            L10:
                int r1 = r5.strength
                java.security.SecureRandom r3 = new java.security.SecureRandom
                r3.<init>()
            L17:
                r0.init(r1, r2, r3)
                org.bouncycastle.crypto.params.DHParameters r0 = r0.generateParameters()
                java.lang.String r1 = "DH"
                java.lang.String r2 = "BC"
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r1, r2)     // Catch: java.lang.Exception -> L39
                javax.crypto.spec.DHParameterSpec r2 = new javax.crypto.spec.DHParameterSpec     // Catch: java.lang.Exception -> L39
                java.math.BigInteger r3 = r0.getP()     // Catch: java.lang.Exception -> L39
                java.math.BigInteger r0 = r0.getG()     // Catch: java.lang.Exception -> L39
                int r4 = r5.l     // Catch: java.lang.Exception -> L39
                r2.<init>(r3, r0, r4)     // Catch: java.lang.Exception -> L39
                r1.init(r2)     // Catch: java.lang.Exception -> L39
                return r1
            L39:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2, java.security.SecureRandom r3) throws java.security.InvalidAlgorithmParameterException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.DHGenParameterSpec
                if (r0 == 0) goto L15
                javax.crypto.spec.DHGenParameterSpec r2 = (javax.crypto.spec.DHGenParameterSpec) r2
                int r0 = r2.getPrimeSize()
                r1.strength = r0
                int r2 = r2.getExponentSize()
                r1.l = r2
                r1.random = r3
                return
            L15:
                java.security.InvalidAlgorithmParameterException r2 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r3 = "DH parameter generator requires a DHGenParameterSpec for initialisation"
                r2.<init>(r3)
                throw r2
        }
    }

    public static class DSA extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        public DSA() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r5 = this;
                org.bouncycastle.crypto.generators.DSAParametersGenerator r0 = new org.bouncycastle.crypto.generators.DSAParametersGenerator
                r0.<init>()
                java.security.SecureRandom r1 = r5.random
                r2 = 20
                if (r1 == 0) goto L10
                int r1 = r5.strength
                java.security.SecureRandom r3 = r5.random
                goto L17
            L10:
                int r1 = r5.strength
                java.security.SecureRandom r3 = new java.security.SecureRandom
                r3.<init>()
            L17:
                r0.init(r1, r2, r3)
                org.bouncycastle.crypto.params.DSAParameters r0 = r0.generateParameters()
                java.lang.String r1 = "DSA"
                java.lang.String r2 = "BC"
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r1, r2)     // Catch: java.lang.Exception -> L3b
                java.security.spec.DSAParameterSpec r2 = new java.security.spec.DSAParameterSpec     // Catch: java.lang.Exception -> L3b
                java.math.BigInteger r3 = r0.getP()     // Catch: java.lang.Exception -> L3b
                java.math.BigInteger r4 = r0.getQ()     // Catch: java.lang.Exception -> L3b
                java.math.BigInteger r0 = r0.getG()     // Catch: java.lang.Exception -> L3b
                r2.<init>(r3, r4, r0)     // Catch: java.lang.Exception -> L3b
                r1.init(r2)     // Catch: java.lang.Exception -> L3b
                return r1
            L3b:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected void engineInit(int r2, java.security.SecureRandom r3) {
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
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r1, java.security.SecureRandom r2) throws java.security.InvalidAlgorithmParameterException {
                r0 = this;
                java.security.InvalidAlgorithmParameterException r1 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r2 = "No supported AlgorithmParameterSpec for DSA parameter generation."
                r1.<init>(r2)
                throw r1
        }
    }

    public static class ElGamal extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        private int l;

        public ElGamal() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.l = r0
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r5 = this;
                org.bouncycastle.crypto.generators.ElGamalParametersGenerator r0 = new org.bouncycastle.crypto.generators.ElGamalParametersGenerator
                r0.<init>()
                java.security.SecureRandom r1 = r5.random
                r2 = 20
                if (r1 == 0) goto L10
                int r1 = r5.strength
                java.security.SecureRandom r3 = r5.random
                goto L17
            L10:
                int r1 = r5.strength
                java.security.SecureRandom r3 = new java.security.SecureRandom
                r3.<init>()
            L17:
                r0.init(r1, r2, r3)
                org.bouncycastle.crypto.params.ElGamalParameters r0 = r0.generateParameters()
                java.lang.String r1 = "ElGamal"
                java.lang.String r2 = "BC"
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r1, r2)     // Catch: java.lang.Exception -> L39
                javax.crypto.spec.DHParameterSpec r2 = new javax.crypto.spec.DHParameterSpec     // Catch: java.lang.Exception -> L39
                java.math.BigInteger r3 = r0.getP()     // Catch: java.lang.Exception -> L39
                java.math.BigInteger r0 = r0.getG()     // Catch: java.lang.Exception -> L39
                int r4 = r5.l     // Catch: java.lang.Exception -> L39
                r2.<init>(r3, r0, r4)     // Catch: java.lang.Exception -> L39
                r1.init(r2)     // Catch: java.lang.Exception -> L39
                return r1
            L39:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2, java.security.SecureRandom r3) throws java.security.InvalidAlgorithmParameterException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.DHGenParameterSpec
                if (r0 == 0) goto L15
                javax.crypto.spec.DHGenParameterSpec r2 = (javax.crypto.spec.DHGenParameterSpec) r2
                int r0 = r2.getPrimeSize()
                r1.strength = r0
                int r2 = r2.getExponentSize()
                r1.l = r2
                r1.random = r3
                return
            L15:
                java.security.InvalidAlgorithmParameterException r2 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r3 = "DH parameter generator requires a DHGenParameterSpec for initialisation"
                r2.<init>(r3)
                throw r2
        }
    }

    public static class GOST3410 extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        public GOST3410() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r6 = this;
                org.bouncycastle.crypto.generators.GOST3410ParametersGenerator r0 = new org.bouncycastle.crypto.generators.GOST3410ParametersGenerator
                r0.<init>()
                java.security.SecureRandom r1 = r6.random
                r2 = 2
                if (r1 == 0) goto Lf
                int r1 = r6.strength
                java.security.SecureRandom r3 = r6.random
                goto L16
            Lf:
                int r1 = r6.strength
                java.security.SecureRandom r3 = new java.security.SecureRandom
                r3.<init>()
            L16:
                r0.init(r1, r2, r3)
                org.bouncycastle.crypto.params.GOST3410Parameters r0 = r0.generateParameters()
                java.lang.String r1 = "GOST3410"
                java.lang.String r2 = "BC"
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r1, r2)     // Catch: java.lang.Exception -> L3f
                org.bouncycastle.jce.spec.GOST3410ParameterSpec r2 = new org.bouncycastle.jce.spec.GOST3410ParameterSpec     // Catch: java.lang.Exception -> L3f
                org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r3 = new org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec     // Catch: java.lang.Exception -> L3f
                java.math.BigInteger r4 = r0.getP()     // Catch: java.lang.Exception -> L3f
                java.math.BigInteger r5 = r0.getQ()     // Catch: java.lang.Exception -> L3f
                java.math.BigInteger r0 = r0.getA()     // Catch: java.lang.Exception -> L3f
                r3.<init>(r4, r5, r0)     // Catch: java.lang.Exception -> L3f
                r2.<init>(r3)     // Catch: java.lang.Exception -> L3f
                r1.init(r2)     // Catch: java.lang.Exception -> L3f
                return r1
            L3f:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r1, java.security.SecureRandom r2) throws java.security.InvalidAlgorithmParameterException {
                r0 = this;
                java.security.InvalidAlgorithmParameterException r1 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r2 = "No supported AlgorithmParameterSpec for GOST3410 parameter generation."
                r1.<init>(r2)
                throw r1
        }
    }

    public static class IDEA extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        public IDEA() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r3 = this;
                r0 = 8
                byte[] r0 = new byte[r0]
                java.security.SecureRandom r1 = r3.random
                if (r1 != 0) goto Lf
                java.security.SecureRandom r1 = new java.security.SecureRandom
                r1.<init>()
                r3.random = r1
            Lf:
                java.security.SecureRandom r1 = r3.random
                r1.nextBytes(r0)
                java.lang.String r1 = "IDEA"
                java.lang.String r2 = "BC"
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r1, r2)     // Catch: java.lang.Exception -> L25
                javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L25
                r2.<init>(r0)     // Catch: java.lang.Exception -> L25
                r1.init(r2)     // Catch: java.lang.Exception -> L25
                return r1
            L25:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r1, java.security.SecureRandom r2) throws java.security.InvalidAlgorithmParameterException {
                r0 = this;
                java.security.InvalidAlgorithmParameterException r1 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r2 = "No supported AlgorithmParameterSpec for IDEA parameter generation."
                r1.<init>(r2)
                throw r1
        }
    }

    public static class RC2 extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        javax.crypto.spec.RC2ParameterSpec spec;

        public RC2() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.spec = r0
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r4 = this;
                javax.crypto.spec.RC2ParameterSpec r0 = r4.spec
                java.lang.String r1 = "BC"
                java.lang.String r2 = "RC2"
                if (r0 != 0) goto L34
                r0 = 8
                byte[] r0 = new byte[r0]
                java.security.SecureRandom r3 = r4.random
                if (r3 != 0) goto L17
                java.security.SecureRandom r3 = new java.security.SecureRandom
                r3.<init>()
                r4.random = r3
            L17:
                java.security.SecureRandom r3 = r4.random
                r3.nextBytes(r0)
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r2, r1)     // Catch: java.lang.Exception -> L29
                javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Exception -> L29
                r2.<init>(r0)     // Catch: java.lang.Exception -> L29
                r1.init(r2)     // Catch: java.lang.Exception -> L29
                goto L3d
            L29:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
            L34:
                java.security.AlgorithmParameters r1 = java.security.AlgorithmParameters.getInstance(r2, r1)     // Catch: java.lang.Exception -> L3e
                javax.crypto.spec.RC2ParameterSpec r0 = r4.spec     // Catch: java.lang.Exception -> L3e
                r1.init(r0)     // Catch: java.lang.Exception -> L3e
            L3d:
                return r1
            L3e:
                r0 = move-exception
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.String r0 = r0.getMessage()
                r1.<init>(r0)
                throw r1
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r1, java.security.SecureRandom r2) throws java.security.InvalidAlgorithmParameterException {
                r0 = this;
                boolean r2 = r1 instanceof javax.crypto.spec.RC2ParameterSpec
                if (r2 == 0) goto L9
                javax.crypto.spec.RC2ParameterSpec r1 = (javax.crypto.spec.RC2ParameterSpec) r1
                r0.spec = r1
                return
            L9:
                java.security.InvalidAlgorithmParameterException r1 = new java.security.InvalidAlgorithmParameterException
                java.lang.String r2 = "No supported AlgorithmParameterSpec for RC2 parameter generation."
                r1.<init>(r2)
                throw r1
        }
    }

    public JDKAlgorithmParameterGenerator() {
            r1 = this;
            r1.<init>()
            r0 = 1024(0x400, float:1.435E-42)
            r1.strength = r0
            return
    }

    @Override
    protected void engineInit(int r1, java.security.SecureRandom r2) {
            r0 = this;
            r0.strength = r1
            r0.random = r2
            return
    }
}
