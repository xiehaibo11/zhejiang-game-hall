package org.bouncycastle.jce.provider;

public interface BrokenPBE {
    public static final int MD5 = 0;
    public static final int OLD_PKCS12 = 3;
    public static final int PKCS12 = 2;
    public static final int PKCS5S1 = 0;
    public static final int PKCS5S2 = 1;
    public static final int RIPEMD160 = 2;
    public static final int SHA1 = 1;

    public static class Util {
        public Util() {
                r0 = this;
                r0.<init>()
                return
        }

        private static org.bouncycastle.crypto.PBEParametersGenerator makePBEGenerator(int r4, int r5) {
                r0 = 1
                if (r4 != 0) goto L26
                if (r5 == 0) goto L1b
                if (r5 != r0) goto L13
                org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r5 = new org.bouncycastle.crypto.digests.SHA1Digest
                r5.<init>()
                r4.<init>(r5)
                goto L8d
            L13:
                java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
                java.lang.String r5 = "PKCS5 scheme 1 only supports only MD5 and SHA1."
                r4.<init>(r5)
                throw r4
            L1b:
                org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS5S1ParametersGenerator
                org.bouncycastle.crypto.digests.MD5Digest r5 = new org.bouncycastle.crypto.digests.MD5Digest
                r5.<init>()
                r4.<init>(r5)
                goto L8d
            L26:
                if (r4 != r0) goto L2e
                org.bouncycastle.crypto.generators.PKCS5S2ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS5S2ParametersGenerator
                r4.<init>()
                goto L8d
            L2e:
                r1 = 3
                java.lang.String r2 = "unknown digest scheme for PBE encryption."
                r3 = 2
                if (r4 != r1) goto L61
                if (r5 == 0) goto L56
                if (r5 == r0) goto L4b
                if (r5 != r3) goto L45
                org.bouncycastle.jce.provider.OldPKCS12ParametersGenerator r4 = new org.bouncycastle.jce.provider.OldPKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.RIPEMD160Digest r5 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r5.<init>()
                r4.<init>(r5)
                goto L8d
            L45:
                java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
                r4.<init>(r2)
                throw r4
            L4b:
                org.bouncycastle.jce.provider.OldPKCS12ParametersGenerator r4 = new org.bouncycastle.jce.provider.OldPKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r5 = new org.bouncycastle.crypto.digests.SHA1Digest
                r5.<init>()
                r4.<init>(r5)
                goto L8d
            L56:
                org.bouncycastle.jce.provider.OldPKCS12ParametersGenerator r4 = new org.bouncycastle.jce.provider.OldPKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.MD5Digest r5 = new org.bouncycastle.crypto.digests.MD5Digest
                r5.<init>()
                r4.<init>(r5)
                goto L8d
            L61:
                if (r5 == 0) goto L83
                if (r5 == r0) goto L78
                if (r5 != r3) goto L72
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.RIPEMD160Digest r5 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r5.<init>()
                r4.<init>(r5)
                goto L8d
            L72:
                java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
                r4.<init>(r2)
                throw r4
            L78:
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.SHA1Digest r5 = new org.bouncycastle.crypto.digests.SHA1Digest
                r5.<init>()
                r4.<init>(r5)
                goto L8d
            L83:
                org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
                org.bouncycastle.crypto.digests.MD5Digest r5 = new org.bouncycastle.crypto.digests.MD5Digest
                r5.<init>()
                r4.<init>(r5)
            L8d:
                return r4
        }

        static org.bouncycastle.crypto.CipherParameters makePBEMacParameters(org.bouncycastle.jce.provider.JCEPBEKey r1, java.security.spec.AlgorithmParameterSpec r2, int r3, int r4, int r5) {
                if (r2 == 0) goto L2a
                boolean r0 = r2 instanceof javax.crypto.spec.PBEParameterSpec
                if (r0 == 0) goto L2a
                javax.crypto.spec.PBEParameterSpec r2 = (javax.crypto.spec.PBEParameterSpec) r2
                org.bouncycastle.crypto.PBEParametersGenerator r3 = makePBEGenerator(r3, r4)
                byte[] r1 = r1.getEncoded()
                byte[] r4 = r2.getSalt()
                int r2 = r2.getIterationCount()
                r3.init(r1, r4, r2)
                org.bouncycastle.crypto.CipherParameters r2 = r3.generateDerivedMacParameters(r5)
                r3 = 0
                r4 = 0
            L21:
                int r5 = r1.length
                if (r4 == r5) goto L29
                r1[r4] = r3
                int r4 = r4 + 1
                goto L21
            L29:
                return r2
            L2a:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Need a PBEParameter spec with a PBE key."
                r1.<init>(r2)
                throw r1
        }

        static org.bouncycastle.crypto.CipherParameters makePBEParameters(org.bouncycastle.jce.provider.JCEPBEKey r1, java.security.spec.AlgorithmParameterSpec r2, int r3, int r4, java.lang.String r5, int r6, int r7) {
                if (r2 == 0) goto L58
                boolean r0 = r2 instanceof javax.crypto.spec.PBEParameterSpec
                if (r0 == 0) goto L58
                javax.crypto.spec.PBEParameterSpec r2 = (javax.crypto.spec.PBEParameterSpec) r2
                org.bouncycastle.crypto.PBEParametersGenerator r3 = makePBEGenerator(r3, r4)
                byte[] r1 = r1.getEncoded()
                byte[] r4 = r2.getSalt()
                int r2 = r2.getIterationCount()
                r3.init(r1, r4, r2)
                if (r7 == 0) goto L22
                org.bouncycastle.crypto.CipherParameters r2 = r3.generateDerivedParameters(r6, r7)
                goto L26
            L22:
                org.bouncycastle.crypto.CipherParameters r2 = r3.generateDerivedParameters(r6)
            L26:
                java.lang.String r3 = "DES"
                boolean r3 = r5.startsWith(r3)
                if (r3 == 0) goto L4d
                boolean r3 = r2 instanceof org.bouncycastle.crypto.params.ParametersWithIV
                if (r3 == 0) goto L43
                r3 = r2
                org.bouncycastle.crypto.params.ParametersWithIV r3 = (org.bouncycastle.crypto.params.ParametersWithIV) r3
                org.bouncycastle.crypto.CipherParameters r3 = r3.getParameters()
                org.bouncycastle.crypto.params.KeyParameter r3 = (org.bouncycastle.crypto.params.KeyParameter) r3
                byte[] r3 = r3.getKey()
                setOddParity(r3)
                goto L4d
            L43:
                r3 = r2
                org.bouncycastle.crypto.params.KeyParameter r3 = (org.bouncycastle.crypto.params.KeyParameter) r3
                byte[] r3 = r3.getKey()
                setOddParity(r3)
            L4d:
                r3 = 0
                r4 = 0
            L4f:
                int r5 = r1.length
                if (r4 == r5) goto L57
                r1[r4] = r3
                int r4 = r4 + 1
                goto L4f
            L57:
                return r2
            L58:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Need a PBEParameter spec with a PBE key."
                r1.<init>(r2)
                throw r1
        }

        private static void setOddParity(byte[] r5) {
                r0 = 0
            L1:
                int r1 = r5.length
                if (r0 >= r1) goto L25
                r1 = r5[r0]
                r2 = r1 & 254(0xfe, float:3.56E-43)
                int r3 = r1 >> 1
                int r4 = r1 >> 2
                r3 = r3 ^ r4
                int r4 = r1 >> 3
                r3 = r3 ^ r4
                int r4 = r1 >> 4
                r3 = r3 ^ r4
                int r4 = r1 >> 5
                r3 = r3 ^ r4
                int r4 = r1 >> 6
                r3 = r3 ^ r4
                int r1 = r1 >> 7
                r1 = r1 ^ r3
                r1 = r1 ^ 1
                r1 = r1 | r2
                byte r1 = (byte) r1
                r5[r0] = r1
                int r0 = r0 + 1
                goto L1
            L25:
                return
        }
    }
}
