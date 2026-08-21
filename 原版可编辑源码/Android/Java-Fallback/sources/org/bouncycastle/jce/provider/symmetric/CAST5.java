package org.bouncycastle.jce.provider.symmetric;

public final class CAST5 {

    public static class AlgParamGen extends org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator {
        public AlgParamGen() {
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
                java.lang.String r1 = "CAST5"
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
                java.lang.String r2 = "No supported AlgorithmParameterSpec for CAST5 parameter generation."
                r1.<init>(r2)
                throw r1
        }
    }

    public static class AlgParams extends org.bouncycastle.jce.provider.JDKAlgorithmParameters {
        private byte[] iv;
        private int keyLength;

        public AlgParams() {
                r1 = this;
                r1.<init>()
                r0 = 128(0x80, float:1.8E-43)
                r1.keyLength = r0
                return
        }

        @Override
        protected byte[] engineGetEncoded() {
                r4 = this;
                byte[] r0 = r4.iv
                int r1 = r0.length
                byte[] r1 = new byte[r1]
                int r2 = r0.length
                r3 = 0
                java.lang.System.arraycopy(r0, r3, r1, r3, r2)
                return r1
        }

        @Override
        protected byte[] engineGetEncoded(java.lang.String r3) throws java.io.IOException {
                r2 = this;
                boolean r0 = r2.isASN1FormatString(r3)
                if (r0 == 0) goto L16
                org.bouncycastle.asn1.misc.CAST5CBCParameters r3 = new org.bouncycastle.asn1.misc.CAST5CBCParameters
                byte[] r0 = r2.engineGetEncoded()
                int r1 = r2.keyLength
                r3.<init>(r0, r1)
                byte[] r3 = r3.getEncoded()
                return r3
            L16:
                java.lang.String r0 = "RAW"
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto L23
                byte[] r3 = r2.engineGetEncoded()
                return r3
            L23:
                r3 = 0
                return r3
        }

        @Override
        protected void engineInit(java.security.spec.AlgorithmParameterSpec r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                boolean r0 = r2 instanceof javax.crypto.spec.IvParameterSpec
                if (r0 == 0) goto Ld
                javax.crypto.spec.IvParameterSpec r2 = (javax.crypto.spec.IvParameterSpec) r2
                byte[] r2 = r2.getIV()
                r1.iv = r2
                return
            Ld:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "IvParameterSpec required to initialise a CAST5 parameters algorithm parameters object"
                r2.<init>(r0)
                throw r2
        }

        @Override
        protected void engineInit(byte[] r4) throws java.io.IOException {
                r3 = this;
                int r0 = r4.length
                byte[] r0 = new byte[r0]
                r3.iv = r0
                int r1 = r0.length
                r2 = 0
                java.lang.System.arraycopy(r4, r2, r0, r2, r1)
                return
        }

        @Override
        protected void engineInit(byte[] r2, java.lang.String r3) throws java.io.IOException {
                r1 = this;
                boolean r0 = r1.isASN1FormatString(r3)
                if (r0 == 0) goto L20
                org.bouncycastle.asn1.ASN1InputStream r3 = new org.bouncycastle.asn1.ASN1InputStream
                r3.<init>(r2)
                org.bouncycastle.asn1.DERObject r2 = r3.readObject()
                org.bouncycastle.asn1.misc.CAST5CBCParameters r2 = org.bouncycastle.asn1.misc.CAST5CBCParameters.getInstance(r2)
                int r3 = r2.getKeyLength()
                r1.keyLength = r3
                byte[] r2 = r2.getIV()
                r1.iv = r2
                return
            L20:
                java.lang.String r0 = "RAW"
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto L2c
                r1.engineInit(r2)
                return
            L2c:
                java.io.IOException r2 = new java.io.IOException
                java.lang.String r3 = "Unknown parameters format in IV parameters object"
                r2.<init>(r3)
                throw r2
        }

        @Override
        protected java.lang.String engineToString() {
                r1 = this;
                java.lang.String r0 = "CAST5 Parameters"
                return r0
        }

        @Override
        protected java.security.spec.AlgorithmParameterSpec localEngineGetParameterSpec(java.lang.Class r2) throws java.security.spec.InvalidParameterSpecException {
                r1 = this;
                java.lang.Class<javax.crypto.spec.IvParameterSpec> r0 = javax.crypto.spec.IvParameterSpec.class
                if (r2 != r0) goto Lc
                javax.crypto.spec.IvParameterSpec r2 = new javax.crypto.spec.IvParameterSpec
                byte[] r0 = r1.iv
                r2.<init>(r0)
                return r2
            Lc:
                java.security.spec.InvalidParameterSpecException r2 = new java.security.spec.InvalidParameterSpecException
                java.lang.String r0 = "unknown parameter spec passed to CAST5 parameters object."
                r2.<init>(r0)
                throw r2
        }
    }

    public static class CBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public CBC() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.CAST5Engine r1 = new org.bouncycastle.crypto.engines.CAST5Engine
                r1.<init>()
                r0.<init>(r1)
                r1 = 64
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ECB extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public ECB() {
                r1 = this;
                org.bouncycastle.crypto.engines.CAST5Engine r0 = new org.bouncycastle.crypto.engines.CAST5Engine
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
                java.lang.String r1 = "CAST5"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    private CAST5() {
            r0 = this;
            r0.<init>()
            return
    }
}
