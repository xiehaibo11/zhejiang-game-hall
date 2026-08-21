package org.bouncycastle.jce.provider;

public interface PBE {
    public static final int MD2 = 5;
    public static final int MD5 = 0;
    public static final int OPENSSL = 3;
    public static final int PKCS12 = 2;
    public static final int PKCS5S1 = 0;
    public static final int PKCS5S2 = 1;
    public static final int RIPEMD160 = 2;
    public static final int SHA1 = 1;
    public static final int SHA256 = 4;
    public static final int TIGER = 3;

    public static class Util {
        public Util() {
                r0 = this;
                r0.<init>()
                return
        }

        private static org.bouncycastle.crypto.PBEParametersGenerator makePBEGenerator(int r3, int r4) {
                r0 = 5
                r1 = 1
                if (r3 != 0) goto L36
                if (r4 == 0) goto L2a
                if (r4 == r1) goto L1e
                if (r4 != r0) goto L16
                org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator
                org.bouncycastle.crypto.digests.MD2Digest r4 = new org.bouncycastle.crypto.digests.MD2Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L16:
                java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
                java.lang.String r4 = "PKCS5 scheme 1 only supports MD2, MD5 and SHA1."
                r3.<init>(r4)
                throw r3
            L1e:
                org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L2a:
                org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator
                org.bouncycastle.crypto.digests.MD5Digest r4 = new org.bouncycastle.crypto.digests.MD5Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L36:
                if (r3 != r1) goto L3e
                org.bouncycastle.crypto.generators.PKCS5S2ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS5S2ParametersGenerator
                r3.<init>()
                goto L9e
            L3e:
                r2 = 2
                if (r3 != r2) goto L99
                if (r4 == 0) goto L8e
                if (r4 == r1) goto L83
                if (r4 == r2) goto L78
                r3 = 3
                if (r4 == r3) goto L6d
                r3 = 4
                if (r4 == r3) goto L62
                if (r4 != r0) goto L5a
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.MD2Digest r4 = new org.bouncycastle.crypto.digests.MD2Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L5a:
                java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
                java.lang.String r4 = "unknown digest scheme for PBE encryption."
                r3.<init>(r4)
                throw r3
            L62:
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.SHA256Digest r4 = new org.bouncycastle.crypto.digests.SHA256Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L6d:
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.TigerDigest r4 = new org.bouncycastle.crypto.digests.TigerDigest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L78:
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.RIPEMD160Digest r4 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L83:
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r4 = new org.bouncycastle.crypto.digests.SHA1Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L8e:
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r3 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.MD5Digest r4 = new org.bouncycastle.crypto.digests.MD5Digest
                r4.<init>()
                r3.<init>(r4)
                goto L9e
            L99:
                org.bouncycastle.crypto.generators.OpenSSLPBEParametersGenerator r3 = new org.bouncycastle.crypto.generators.OpenSSLPBEParametersGenerator
                r3.<init>()
            L9e:
                return r3
        }

        static org.bouncycastle.crypto.CipherParameters makePBEMacParameters(javax.crypto.spec.PBEKeySpec r1, int r2, int r3, int r4) {
                org.bouncycastle.crypto.PBEParametersGenerator r3 = makePBEGenerator(r2, r3)
                r0 = 2
                if (r2 != r0) goto L10
                char[] r2 = r1.getPassword()
                byte[] r2 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS12PasswordToBytes(r2)
                goto L18
            L10:
                char[] r2 = r1.getPassword()
                byte[] r2 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS5PasswordToBytes(r2)
            L18:
                byte[] r0 = r1.getSalt()
                int r1 = r1.getIterationCount()
                r3.init(r2, r0, r1)
                org.bouncycastle.crypto.CipherParameters r1 = r3.generateDerivedMacParameters(r4)
                r3 = 0
                r4 = 0
            L29:
                int r0 = r2.length
                if (r4 == r0) goto L31
                r2[r4] = r3
                int r4 = r4 + 1
                goto L29
            L31:
                return r1
        }

        static org.bouncycastle.crypto.CipherParameters makePBEMacParameters(org.bouncycastle.jce.provider.JCEPBEKey r3, java.security.spec.AlgorithmParameterSpec r4) {
                if (r4 == 0) goto L3f
                boolean r0 = r4 instanceof javax.crypto.spec.PBEParameterSpec
                if (r0 == 0) goto L3f
                javax.crypto.spec.PBEParameterSpec r4 = (javax.crypto.spec.PBEParameterSpec) r4
                int r0 = r3.getType()
                int r1 = r3.getDigest()
                org.bouncycastle.crypto.PBEParametersGenerator r0 = makePBEGenerator(r0, r1)
                byte[] r1 = r3.getEncoded()
                boolean r2 = r3.shouldTryWrongPKCS12()
                if (r2 == 0) goto L21
                r1 = 2
                byte[] r1 = new byte[r1]
            L21:
                byte[] r2 = r4.getSalt()
                int r4 = r4.getIterationCount()
                r0.init(r1, r2, r4)
                int r3 = r3.getKeySize()
                org.bouncycastle.crypto.CipherParameters r3 = r0.generateDerivedMacParameters(r3)
                r4 = 0
                r0 = 0
            L36:
                int r2 = r1.length
                if (r0 == r2) goto L3e
                r1[r0] = r4
                int r0 = r0 + 1
                goto L36
            L3e:
                return r3
            L3f:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r4 = "Need a PBEParameter spec with a PBE key."
                r3.<init>(r4)
                throw r3
        }

        static org.bouncycastle.crypto.CipherParameters makePBEParameters(javax.crypto.spec.PBEKeySpec r1, int r2, int r3, int r4, int r5) {
                org.bouncycastle.crypto.PBEParametersGenerator r3 = makePBEGenerator(r2, r3)
                r0 = 2
                if (r2 != r0) goto L10
                char[] r2 = r1.getPassword()
                byte[] r2 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS12PasswordToBytes(r2)
                goto L18
            L10:
                char[] r2 = r1.getPassword()
                byte[] r2 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS5PasswordToBytes(r2)
            L18:
                byte[] r0 = r1.getSalt()
                int r1 = r1.getIterationCount()
                r3.init(r2, r0, r1)
                if (r5 == 0) goto L2a
                org.bouncycastle.crypto.CipherParameters r1 = r3.generateDerivedParameters(r4, r5)
                goto L2e
            L2a:
                org.bouncycastle.crypto.CipherParameters r1 = r3.generateDerivedParameters(r4)
            L2e:
                r3 = 0
                r4 = 0
            L30:
                int r5 = r2.length
                if (r4 == r5) goto L38
                r2[r4] = r3
                int r4 = r4 + 1
                goto L30
            L38:
                return r1
        }

        static org.bouncycastle.crypto.CipherParameters makePBEParameters(org.bouncycastle.jce.provider.JCEPBEKey r3, java.security.spec.AlgorithmParameterSpec r4, java.lang.String r5) {
                if (r4 == 0) goto L79
                boolean r0 = r4 instanceof javax.crypto.spec.PBEParameterSpec
                if (r0 == 0) goto L79
                javax.crypto.spec.PBEParameterSpec r4 = (javax.crypto.spec.PBEParameterSpec) r4
                int r0 = r3.getType()
                int r1 = r3.getDigest()
                org.bouncycastle.crypto.PBEParametersGenerator r0 = makePBEGenerator(r0, r1)
                byte[] r1 = r3.getEncoded()
                boolean r2 = r3.shouldTryWrongPKCS12()
                if (r2 == 0) goto L21
                r1 = 2
                byte[] r1 = new byte[r1]
            L21:
                byte[] r2 = r4.getSalt()
                int r4 = r4.getIterationCount()
                r0.init(r1, r2, r4)
                int r4 = r3.getIvSize()
                if (r4 == 0) goto L3f
                int r4 = r3.getKeySize()
                int r3 = r3.getIvSize()
                org.bouncycastle.crypto.CipherParameters r3 = r0.generateDerivedParameters(r4, r3)
                goto L47
            L3f:
                int r3 = r3.getKeySize()
                org.bouncycastle.crypto.CipherParameters r3 = r0.generateDerivedParameters(r3)
            L47:
                java.lang.String r4 = "DES"
                boolean r4 = r5.startsWith(r4)
                if (r4 == 0) goto L6e
                boolean r4 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithIV
                if (r4 == 0) goto L64
                r4 = r3
                org.bouncycastle.crypto.params.ParametersWithIV r4 = (org.bouncycastle.crypto.params.ParametersWithIV) r4
                org.bouncycastle.crypto.CipherParameters r4 = r4.getParameters()
                org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
                byte[] r4 = r4.getKey()
                org.bouncycastle.crypto.params.DESParameters.setOddParity(r4)
                goto L6e
            L64:
                r4 = r3
                org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
                byte[] r4 = r4.getKey()
                org.bouncycastle.crypto.params.DESParameters.setOddParity(r4)
            L6e:
                r4 = 0
                r5 = 0
            L70:
                int r0 = r1.length
                if (r5 == r0) goto L78
                r1[r5] = r4
                int r5 = r5 + 1
                goto L70
            L78:
                return r3
            L79:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r4 = "Need a PBEParameter spec with a PBE key."
                r3.<init>(r4)
                throw r3
        }
    }
}
