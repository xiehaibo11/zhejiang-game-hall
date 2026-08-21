package org.bouncycastle.jce.provider.symmetric;

public final class AES {

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
                java.lang.String r1 = "AES"
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
                java.lang.String r0 = "AES IV"
                return r0
        }
    }

    public static class CBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public CBC() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.AESFastEngine r1 = new org.bouncycastle.crypto.engines.AESFastEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 128(0x80, float:1.8E-43)
                r2.<init>(r0, r1)
                return
        }
    }

    public static class CFB extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public CFB() {
                r3 = this;
                org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
                org.bouncycastle.crypto.engines.AESFastEngine r1 = new org.bouncycastle.crypto.engines.AESFastEngine
                r1.<init>()
                r2 = 128(0x80, float:1.8E-43)
                r0.<init>(r1, r2)
                r3.<init>(r0, r2)
                return
        }
    }

    public static class ECB extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public ECB() {
                r1 = this;
                org.bouncycastle.crypto.engines.AESFastEngine r0 = new org.bouncycastle.crypto.engines.AESFastEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class KeyGen extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public KeyGen() {
                r1 = this;
                r0 = 192(0xc0, float:2.69E-43)
                r1.<init>(r0)
                return
        }

        public KeyGen(int r3) {
                r2 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "AES"
                r2.<init>(r1, r3, r0)
                return
        }
    }

    public static class KeyGen128 extends org.bouncycastle.jce.provider.symmetric.AES.KeyGen {
        public KeyGen128() {
                r1 = this;
                r0 = 128(0x80, float:1.8E-43)
                r1.<init>(r0)
                return
        }
    }

    public static class KeyGen192 extends org.bouncycastle.jce.provider.symmetric.AES.KeyGen {
        public KeyGen192() {
                r1 = this;
                r0 = 192(0xc0, float:2.69E-43)
                r1.<init>(r0)
                return
        }
    }

    public static class KeyGen256 extends org.bouncycastle.jce.provider.symmetric.AES.KeyGen {
        public KeyGen256() {
                r1 = this;
                r0 = 256(0x100, float:3.59E-43)
                r1.<init>(r0)
                return
        }
    }

    public static class OFB extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public OFB() {
                r3 = this;
                org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
                org.bouncycastle.crypto.engines.AESFastEngine r1 = new org.bouncycastle.crypto.engines.AESFastEngine
                r1.<init>()
                r2 = 128(0x80, float:1.8E-43)
                r0.<init>(r1, r2)
                r3.<init>(r0, r2)
                return
        }
    }

    public static class RFC3211Wrap extends org.bouncycastle.jce.provider.WrapCipherSpi {
        public RFC3211Wrap() {
                r2 = this;
                org.bouncycastle.crypto.engines.RFC3211WrapEngine r0 = new org.bouncycastle.crypto.engines.RFC3211WrapEngine
                org.bouncycastle.crypto.engines.AESEngine r1 = new org.bouncycastle.crypto.engines.AESEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 16
                r2.<init>(r0, r1)
                return
        }
    }

    public static class Wrap extends org.bouncycastle.jce.provider.WrapCipherSpi {
        public Wrap() {
                r1 = this;
                org.bouncycastle.crypto.engines.AESWrapEngine r0 = new org.bouncycastle.crypto.engines.AESWrapEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    private AES() {
            r0 = this;
            r0.<init>()
            return
    }
}
