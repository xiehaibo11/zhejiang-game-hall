package org.bouncycastle.jce.provider.symmetric;

public final class Noekeon {

    public static class AlgParamGen extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        public AlgParamGen() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.security.AlgorithmParameters engineGenerateParameters() {
                r3 = this;
                r0 = 16
                byte[] r0 = new byte[r0]
                java.security.SecureRandom r1 = r3.random
                if (r1 != 0) goto Lf
                java.security.SecureRandom r1 = new java.security.SecureRandom
                r1.<init>()
                r3.random = r1
            Lf:
                java.security.SecureRandom r1 = r3.random
                r1.nextBytes(r0)
                java.lang.String r1 = "Noekeon"
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
                java.lang.String r2 = "No supported AlgorithmParameterSpec for AES parameter generation."
                r1.<init>(r2)
                throw r1
        }
    }

    public static class AlgParams extends org.bouncycastle.jce.provider.JDKAlgorithmParameters.IVAlgorithmParameters {
        public AlgParams() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "Noekeon IV"
                return r0
        }
    }

    public static class ECB extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public ECB() {
                r1 = this;
                org.bouncycastle.crypto.engines.NoekeonEngine r0 = new org.bouncycastle.crypto.engines.NoekeonEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class KeyGen extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public KeyGen() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "Noekeon"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    private Noekeon() {
            r0 = this;
            r0.<init>()
            return
    }
}
