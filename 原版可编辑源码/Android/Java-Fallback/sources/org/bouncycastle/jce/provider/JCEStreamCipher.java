package org.bouncycastle.jce.provider;

public class JCEStreamCipher extends org.bouncycastle.jce.provider.WrapCipherSpi implements org.bouncycastle.jce.provider.PBE {
    private java.lang.Class[] availableSpecs;
    private org.bouncycastle.crypto.StreamCipher cipher;
    private int ivLength;
    private org.bouncycastle.crypto.params.ParametersWithIV ivParam;
    private java.lang.String pbeAlgorithm;
    private javax.crypto.spec.PBEParameterSpec pbeSpec;

    public static class Blowfish_CFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public Blowfish_CFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
                org.bouncycastle.crypto.engines.BlowfishEngine r1 = new org.bouncycastle.crypto.engines.BlowfishEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class Blowfish_OFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public Blowfish_OFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
                org.bouncycastle.crypto.engines.BlowfishEngine r1 = new org.bouncycastle.crypto.engines.BlowfishEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class DES_CFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public DES_CFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class DES_OFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public DES_OFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class DESede_CFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public DESede_CFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class DESede_OFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public DESede_OFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class HC128 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public HC128() {
                r2 = this;
                org.bouncycastle.crypto.engines.HC128Engine r0 = new org.bouncycastle.crypto.engines.HC128Engine
                r0.<init>()
                r1 = 16
                r2.<init>(r0, r1)
                return
        }
    }

    public static class HC256 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public HC256() {
                r2 = this;
                org.bouncycastle.crypto.engines.HC256Engine r0 = new org.bouncycastle.crypto.engines.HC256Engine
                r0.<init>()
                r1 = 32
                r2.<init>(r0, r1)
                return
        }
    }

    public static class IDEA_CFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public IDEA_CFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
                org.bouncycastle.crypto.engines.IDEAEngine r1 = new org.bouncycastle.crypto.engines.IDEAEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class IDEA_OFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public IDEA_OFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
                org.bouncycastle.crypto.engines.IDEAEngine r1 = new org.bouncycastle.crypto.engines.IDEAEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class PBEWithSHAAnd128BitRC4 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public PBEWithSHAAnd128BitRC4() {
                r2 = this;
                org.bouncycastle.crypto.engines.RC4Engine r0 = new org.bouncycastle.crypto.engines.RC4Engine
                r0.<init>()
                r1 = 0
                r2.<init>(r0, r1)
                return
        }
    }

    public static class PBEWithSHAAnd40BitRC4 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public PBEWithSHAAnd40BitRC4() {
                r2 = this;
                org.bouncycastle.crypto.engines.RC4Engine r0 = new org.bouncycastle.crypto.engines.RC4Engine
                r0.<init>()
                r1 = 0
                r2.<init>(r0, r1)
                return
        }
    }

    public static class RC4 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public RC4() {
                r2 = this;
                org.bouncycastle.crypto.engines.RC4Engine r0 = new org.bouncycastle.crypto.engines.RC4Engine
                r0.<init>()
                r1 = 0
                r2.<init>(r0, r1)
                return
        }
    }

    public static class Salsa20 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public Salsa20() {
                r2 = this;
                org.bouncycastle.crypto.engines.Salsa20Engine r0 = new org.bouncycastle.crypto.engines.Salsa20Engine
                r0.<init>()
                r1 = 8
                r2.<init>(r0, r1)
                return
        }
    }

    public static class Skipjack_CFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public Skipjack_CFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
                org.bouncycastle.crypto.engines.SkipjackEngine r1 = new org.bouncycastle.crypto.engines.SkipjackEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class Skipjack_OFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public Skipjack_OFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
                org.bouncycastle.crypto.engines.SkipjackEngine r1 = new org.bouncycastle.crypto.engines.SkipjackEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 64
                r3.<init>(r0, r1)
                return
        }
    }

    public static class Twofish_CFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public Twofish_CFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
                org.bouncycastle.crypto.engines.TwofishEngine r1 = new org.bouncycastle.crypto.engines.TwofishEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 128(0x80, float:1.8E-43)
                r3.<init>(r0, r1)
                return
        }
    }

    public static class Twofish_OFB8 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public Twofish_OFB8() {
                r3 = this;
                org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
                org.bouncycastle.crypto.engines.TwofishEngine r1 = new org.bouncycastle.crypto.engines.TwofishEngine
                r1.<init>()
                r2 = 8
                r0.<init>(r1, r2)
                r1 = 128(0x80, float:1.8E-43)
                r3.<init>(r0, r1)
                return
        }
    }

    public static class VMPC extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public VMPC() {
                r2 = this;
                org.bouncycastle.crypto.engines.VMPCEngine r0 = new org.bouncycastle.crypto.engines.VMPCEngine
                r0.<init>()
                r1 = 16
                r2.<init>(r0, r1)
                return
        }
    }

    public static class VMPCKSA3 extends org.bouncycastle.jce.provider.JCEStreamCipher {
        public VMPCKSA3() {
                r2 = this;
                org.bouncycastle.crypto.engines.VMPCKSA3Engine r0 = new org.bouncycastle.crypto.engines.VMPCKSA3Engine
                r0.<init>()
                r1 = 16
                r2.<init>(r0, r1)
                return
        }
    }

    protected JCEStreamCipher(org.bouncycastle.crypto.BlockCipher r5, int r6) {
            r4 = this;
            r4.<init>()
            r0 = 4
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r2 = 0
            r0[r2] = r1
            r1 = 1
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r3 = javax.crypto.spec.RC5ParameterSpec.class
            r0[r1] = r3
            r1 = 2
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r3 = javax.crypto.spec.IvParameterSpec.class
            r0[r1] = r3
            r1 = 3
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r3 = javax.crypto.spec.PBEParameterSpec.class
            r0[r1] = r3
            r4.availableSpecs = r0
            r4.ivLength = r2
            r0 = 0
            r4.pbeSpec = r0
            r4.pbeAlgorithm = r0
            r4.ivLength = r6
            org.bouncycastle.crypto.StreamBlockCipher r6 = new org.bouncycastle.crypto.StreamBlockCipher
            r6.<init>(r5)
            r4.cipher = r6
            return
    }

    protected JCEStreamCipher(org.bouncycastle.crypto.StreamCipher r5, int r6) {
            r4 = this;
            r4.<init>()
            r0 = 4
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r2 = 0
            r0[r2] = r1
            r1 = 1
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r3 = javax.crypto.spec.RC5ParameterSpec.class
            r0[r1] = r3
            r1 = 2
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r3 = javax.crypto.spec.IvParameterSpec.class
            r0[r1] = r3
            r1 = 3
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r3 = javax.crypto.spec.PBEParameterSpec.class
            r0[r1] = r3
            r4.availableSpecs = r0
            r4.ivLength = r2
            r0 = 0
            r4.pbeSpec = r0
            r4.pbeAlgorithm = r0
            r4.cipher = r5
            r4.ivLength = r6
            return
    }

    @Override
    protected int engineDoFinal(byte[] r7, int r8, int r9, byte[] r10, int r11) {
            r6 = this;
            if (r9 == 0) goto Lc
            org.bouncycastle.crypto.StreamCipher r0 = r6.cipher
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.processBytes(r1, r2, r3, r4, r5)
        Lc:
            org.bouncycastle.crypto.StreamCipher r7 = r6.cipher
            r7.reset()
            return r9
    }

    @Override
    protected byte[] engineDoFinal(byte[] r1, int r2, int r3) {
            r0 = this;
            if (r3 == 0) goto Lc
            byte[] r1 = r0.engineUpdate(r1, r2, r3)
            org.bouncycastle.crypto.StreamCipher r2 = r0.cipher
            r2.reset()
            return r1
        Lc:
            org.bouncycastle.crypto.StreamCipher r1 = r0.cipher
            r1.reset()
            r1 = 0
            byte[] r1 = new byte[r1]
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
            org.bouncycastle.crypto.params.ParametersWithIV r0 = r1.ivParam
            if (r0 == 0) goto L9
            byte[] r0 = r0.getIV()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    protected int engineGetKeySize(java.security.Key r1) {
            r0 = this;
            byte[] r1 = r1.getEncoded()
            int r1 = r1.length
            int r1 = r1 * 8
            return r1
    }

    @Override
    protected int engineGetOutputSize(int r1) {
            r0 = this;
            return r1
    }

    @Override
    protected java.security.AlgorithmParameters engineGetParameters() {
            r2 = this;
            java.security.AlgorithmParameters r0 = r2.engineParams
            if (r0 != 0) goto L18
            javax.crypto.spec.PBEParameterSpec r0 = r2.pbeSpec
            if (r0 == 0) goto L18
            java.lang.String r0 = r2.pbeAlgorithm     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "BC"
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)     // Catch: java.lang.Exception -> L16
            javax.crypto.spec.PBEParameterSpec r1 = r2.pbeSpec     // Catch: java.lang.Exception -> L16
            r0.init(r1)     // Catch: java.lang.Exception -> L16
            return r0
        L16:
            r0 = 0
            return r0
        L18:
            java.security.AlgorithmParameters r0 = r2.engineParams
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
            r4.engineInit(r5, r6, r0, r8)
            r4.engineParams = r7
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
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
    }

    @Override
    protected void engineInit(int r4, java.security.Key r5, java.security.spec.AlgorithmParameterSpec r6, java.security.SecureRandom r7) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r3 = this;
            r0 = 0
            r3.pbeSpec = r0
            r3.pbeAlgorithm = r0
            r3.engineParams = r0
            boolean r0 = r5 instanceof javax.crypto.SecretKey
            if (r0 == 0) goto Le8
            boolean r0 = r5 instanceof org.bouncycastle.jce.provider.JCEPBEKey
            if (r0 == 0) goto L67
            org.bouncycastle.jce.provider.JCEPBEKey r5 = (org.bouncycastle.jce.provider.JCEPBEKey) r5
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r5.getOID()
            if (r0 == 0) goto L20
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r5.getOID()
            java.lang.String r0 = r0.getId()
            goto L24
        L20:
            java.lang.String r0 = r5.getAlgorithm()
        L24:
            r3.pbeAlgorithm = r0
            org.bouncycastle.crypto.CipherParameters r0 = r5.getParam()
            if (r0 == 0) goto L40
            org.bouncycastle.crypto.CipherParameters r6 = r5.getParam()
            javax.crypto.spec.PBEParameterSpec r0 = new javax.crypto.spec.PBEParameterSpec
            byte[] r1 = r5.getSalt()
            int r2 = r5.getIterationCount()
            r0.<init>(r1, r2)
            r3.pbeSpec = r0
            goto L53
        L40:
            boolean r0 = r6 instanceof javax.crypto.spec.PBEParameterSpec
            if (r0 == 0) goto L5f
            org.bouncycastle.crypto.StreamCipher r0 = r3.cipher
            java.lang.String r0 = r0.getAlgorithmName()
            org.bouncycastle.crypto.CipherParameters r0 = org.bouncycastle.jce.provider.PBE.Util.makePBEParameters(r5, r6, r0)
            javax.crypto.spec.PBEParameterSpec r6 = (javax.crypto.spec.PBEParameterSpec) r6
            r3.pbeSpec = r6
            r6 = r0
        L53:
            int r5 = r5.getIvSize()
            if (r5 == 0) goto L91
            r5 = r6
            org.bouncycastle.crypto.params.ParametersWithIV r5 = (org.bouncycastle.crypto.params.ParametersWithIV) r5
            r3.ivParam = r5
            goto L91
        L5f:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "PBE requires PBE parameters to be set."
            r4.<init>(r5)
            throw r4
        L67:
            if (r6 != 0) goto L73
            org.bouncycastle.crypto.params.KeyParameter r6 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r5 = r5.getEncoded()
            r6.<init>(r5)
            goto L91
        L73:
            boolean r0 = r6 instanceof javax.crypto.spec.IvParameterSpec
            if (r0 == 0) goto Le0
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r5 = r5.getEncoded()
            r1.<init>(r5)
            javax.crypto.spec.IvParameterSpec r6 = (javax.crypto.spec.IvParameterSpec) r6
            byte[] r5 = r6.getIV()
            r0.<init>(r1, r5)
            r5 = r0
            org.bouncycastle.crypto.params.ParametersWithIV r5 = (org.bouncycastle.crypto.params.ParametersWithIV) r5
            r3.ivParam = r5
            r6 = r0
        L91:
            int r5 = r3.ivLength
            r0 = 3
            r1 = 1
            if (r5 == 0) goto Lc1
            boolean r5 = r6 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r5 != 0) goto Lc1
            if (r7 != 0) goto La2
            java.security.SecureRandom r7 = new java.security.SecureRandom
            r7.<init>()
        La2:
            if (r4 == r1) goto Laf
            if (r4 != r0) goto La7
            goto Laf
        La7:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "no IV set when one expected"
            r4.<init>(r5)
            throw r4
        Laf:
            int r5 = r3.ivLength
            byte[] r5 = new byte[r5]
            r7.nextBytes(r5)
            org.bouncycastle.crypto.params.ParametersWithIV r7 = new org.bouncycastle.crypto.params.ParametersWithIV
            r7.<init>(r6, r5)
            r5 = r7
            org.bouncycastle.crypto.params.ParametersWithIV r5 = (org.bouncycastle.crypto.params.ParametersWithIV) r5
            r3.ivParam = r5
            r6 = r7
        Lc1:
            if (r4 == r1) goto Lda
            r5 = 2
            if (r4 == r5) goto Ld3
            if (r4 == r0) goto Lda
            r5 = 4
            if (r4 == r5) goto Ld3
            java.io.PrintStream r4 = java.lang.System.out
            java.lang.String r5 = "eeek!"
            r4.println(r5)
            goto Ldf
        Ld3:
            org.bouncycastle.crypto.StreamCipher r4 = r3.cipher
            r5 = 0
            r4.init(r5, r6)
            goto Ldf
        Lda:
            org.bouncycastle.crypto.StreamCipher r4 = r3.cipher
            r4.init(r1, r6)
        Ldf:
            return
        Le0:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "unknown parameter type."
            r4.<init>(r5)
            throw r4
        Le8:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Key for algorithm "
            r6.append(r7)
            java.lang.String r5 = r5.getAlgorithm()
            r6.append(r5)
            java.lang.String r5 = " not suitable for symmetric enryption."
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.<init>(r5)
            throw r4
    }

    @Override
    protected void engineSetMode(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "ECB"
            boolean r0 = r4.equalsIgnoreCase(r0)
            if (r0 == 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
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
            java.lang.String r0 = "NoPadding"
            boolean r0 = r4.equalsIgnoreCase(r0)
            if (r0 == 0) goto L9
            return
        L9:
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
    protected int engineUpdate(byte[] r7, int r8, int r9, byte[] r10, int r11) throws javax.crypto.ShortBufferException {
            r6 = this;
            org.bouncycastle.crypto.StreamCipher r0 = r6.cipher     // Catch: org.bouncycastle.crypto.DataLengthException -> Lb
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.processBytes(r1, r2, r3, r4, r5)     // Catch: org.bouncycastle.crypto.DataLengthException -> Lb
            return r9
        Lb:
            r7 = move-exception
            javax.crypto.ShortBufferException r8 = new javax.crypto.ShortBufferException
            java.lang.String r7 = r7.getMessage()
            r8.<init>(r7)
            throw r8
    }

    @Override
    protected byte[] engineUpdate(byte[] r8, int r9, int r10) {
            r7 = this;
            byte[] r6 = new byte[r10]
            org.bouncycastle.crypto.StreamCipher r0 = r7.cipher
            r5 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r6
            r0.processBytes(r1, r2, r3, r4, r5)
            return r6
    }
}
