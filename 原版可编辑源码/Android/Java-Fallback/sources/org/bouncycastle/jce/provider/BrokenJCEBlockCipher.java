package org.bouncycastle.jce.provider;

public class BrokenJCEBlockCipher implements org.bouncycastle.jce.provider.BrokenPBE {
    private java.lang.Class[] availableSpecs;
    private org.bouncycastle.crypto.BufferedBlockCipher cipher;
    private java.security.AlgorithmParameters engineParams;
    private int ivLength;
    private org.bouncycastle.crypto.params.ParametersWithIV ivParam;
    private int pbeHash;
    private int pbeIvSize;
    private int pbeKeySize;
    private int pbeType;

    public static class BrokePBEWithMD5AndDES extends org.bouncycastle.jce.provider.BrokenJCEBlockCipher {
        public BrokePBEWithMD5AndDES() {
                r6 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESEngine r0 = new org.bouncycastle.crypto.engines.DESEngine
                r0.<init>()
                r1.<init>(r0)
                r2 = 0
                r3 = 0
                r4 = 64
                r5 = 64
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }
    }

    public static class BrokePBEWithSHA1AndDES extends org.bouncycastle.jce.provider.BrokenJCEBlockCipher {
        public BrokePBEWithSHA1AndDES() {
                r6 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESEngine r0 = new org.bouncycastle.crypto.engines.DESEngine
                r0.<init>()
                r1.<init>(r0)
                r2 = 0
                r3 = 1
                r4 = 64
                r5 = 64
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }
    }

    public static class BrokePBEWithSHAAndDES2Key extends org.bouncycastle.jce.provider.BrokenJCEBlockCipher {
        public BrokePBEWithSHAAndDES2Key() {
                r6 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r0 = new org.bouncycastle.crypto.engines.DESedeEngine
                r0.<init>()
                r1.<init>(r0)
                r2 = 2
                r3 = 1
                r4 = 128(0x80, float:1.8E-43)
                r5 = 64
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }
    }

    public static class BrokePBEWithSHAAndDES3Key extends org.bouncycastle.jce.provider.BrokenJCEBlockCipher {
        public BrokePBEWithSHAAndDES3Key() {
                r6 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r0 = new org.bouncycastle.crypto.engines.DESedeEngine
                r0.<init>()
                r1.<init>(r0)
                r2 = 2
                r3 = 1
                r4 = 192(0xc0, float:2.69E-43)
                r5 = 64
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }
    }

    public static class OldPBEWithSHAAndDES3Key extends org.bouncycastle.jce.provider.BrokenJCEBlockCipher {
        public OldPBEWithSHAAndDES3Key() {
                r6 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r0 = new org.bouncycastle.crypto.engines.DESedeEngine
                r0.<init>()
                r1.<init>(r0)
                r2 = 3
                r3 = 1
                r4 = 192(0xc0, float:2.69E-43)
                r5 = 64
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }
    }

    public static class OldPBEWithSHAAndTwofish extends org.bouncycastle.jce.provider.BrokenJCEBlockCipher {
        public OldPBEWithSHAAndTwofish() {
                r6 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.TwofishEngine r0 = new org.bouncycastle.crypto.engines.TwofishEngine
                r0.<init>()
                r1.<init>(r0)
                r2 = 3
                r3 = 1
                r4 = 256(0x100, float:3.59E-43)
                r5 = 128(0x80, float:1.8E-43)
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }
    }

    protected BrokenJCEBlockCipher(org.bouncycastle.crypto.BlockCipher r7) {
            r6 = this;
            r6.<init>()
            r0 = 4
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r1 = javax.crypto.spec.IvParameterSpec.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r1 = javax.crypto.spec.PBEParameterSpec.class
            r3 = 1
            r0[r3] = r1
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r4 = 2
            r0[r4] = r1
            r1 = 3
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r5 = javax.crypto.spec.RC5ParameterSpec.class
            r0[r1] = r5
            r6.availableSpecs = r0
            r6.pbeType = r4
            r6.pbeHash = r3
            r6.ivLength = r2
            r0 = 0
            r6.engineParams = r0
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            r0.<init>(r7)
            r6.cipher = r0
            return
    }

    protected BrokenJCEBlockCipher(org.bouncycastle.crypto.BlockCipher r7, int r8, int r9, int r10, int r11) {
            r6 = this;
            r6.<init>()
            r0 = 4
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r1 = javax.crypto.spec.IvParameterSpec.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r1 = javax.crypto.spec.PBEParameterSpec.class
            r3 = 1
            r0[r3] = r1
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r4 = 2
            r0[r4] = r1
            r1 = 3
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r5 = javax.crypto.spec.RC5ParameterSpec.class
            r0[r1] = r5
            r6.availableSpecs = r0
            r6.pbeType = r4
            r6.pbeHash = r3
            r6.ivLength = r2
            r0 = 0
            r6.engineParams = r0
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            r0.<init>(r7)
            r6.cipher = r0
            r6.pbeType = r8
            r6.pbeHash = r9
            r6.pbeKeySize = r10
            r6.pbeIvSize = r11
            return
    }

    protected int engineDoFinal(byte[] r7, int r8, int r9, byte[] r10, int r11) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r6 = this;
            if (r9 == 0) goto Le
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r6.cipher
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            int r7 = r0.processBytes(r1, r2, r3, r4, r5)
            goto Lf
        Le:
            r7 = 0
        Lf:
            org.bouncycastle.crypto.BufferedBlockCipher r8 = r6.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L18 org.bouncycastle.crypto.DataLengthException -> L23
            int r11 = r11 + r7
            int r8 = r8.doFinal(r10, r11)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L18 org.bouncycastle.crypto.DataLengthException -> L23
            int r7 = r7 + r8
            return r7
        L18:
            r7 = move-exception
            javax.crypto.BadPaddingException r8 = new javax.crypto.BadPaddingException
            java.lang.String r7 = r7.getMessage()
            r8.<init>(r7)
            throw r8
        L23:
            r7 = move-exception
            javax.crypto.IllegalBlockSizeException r8 = new javax.crypto.IllegalBlockSizeException
            java.lang.String r7 = r7.getMessage()
            r8.<init>(r7)
            throw r8
    }

    protected byte[] engineDoFinal(byte[] r9, int r10, int r11) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r8 = this;
            int r0 = r8.engineGetOutputSize(r11)
            byte[] r0 = new byte[r0]
            r7 = 0
            if (r11 == 0) goto L15
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r8.cipher
            r6 = 0
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r0
            int r9 = r1.processBytes(r2, r3, r4, r5, r6)
            goto L16
        L15:
            r9 = 0
        L16:
            org.bouncycastle.crypto.BufferedBlockCipher r10 = r8.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L23 org.bouncycastle.crypto.DataLengthException -> L2e
            int r10 = r10.doFinal(r0, r9)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L23 org.bouncycastle.crypto.DataLengthException -> L2e
            int r9 = r9 + r10
            byte[] r10 = new byte[r9]
            java.lang.System.arraycopy(r0, r7, r10, r7, r9)
            return r10
        L23:
            r9 = move-exception
            javax.crypto.BadPaddingException r10 = new javax.crypto.BadPaddingException
            java.lang.String r9 = r9.getMessage()
            r10.<init>(r9)
            throw r10
        L2e:
            r9 = move-exception
            javax.crypto.IllegalBlockSizeException r10 = new javax.crypto.IllegalBlockSizeException
            java.lang.String r9 = r9.getMessage()
            r10.<init>(r9)
            throw r10
    }

    protected int engineGetBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
            int r0 = r0.getBlockSize()
            return r0
    }

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

    protected int engineGetKeySize(java.security.Key r1) {
            r0 = this;
            byte[] r1 = r1.getEncoded()
            int r1 = r1.length
            return r1
    }

    protected int engineGetOutputSize(int r2) {
            r1 = this;
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
            int r2 = r0.getOutputSize(r2)
            return r2
    }

    protected java.security.AlgorithmParameters engineGetParameters() {
            r3 = this;
            java.security.AlgorithmParameters r0 = r3.engineParams
            if (r0 != 0) goto L40
            org.bouncycastle.crypto.params.ParametersWithIV r0 = r3.ivParam
            if (r0 == 0) goto L40
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            java.lang.String r0 = r0.getAlgorithmName()
            r1 = 47
            int r2 = r0.indexOf(r1)
            if (r2 < 0) goto L23
            r2 = 0
            int r1 = r0.indexOf(r1)
            java.lang.String r0 = r0.substring(r2, r1)
        L23:
            java.lang.String r1 = "BC"
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)     // Catch: java.lang.Exception -> L35
            r3.engineParams = r0     // Catch: java.lang.Exception -> L35
            org.bouncycastle.crypto.params.ParametersWithIV r1 = r3.ivParam     // Catch: java.lang.Exception -> L35
            byte[] r1 = r1.getIV()     // Catch: java.lang.Exception -> L35
            r0.init(r1)     // Catch: java.lang.Exception -> L35
            goto L40
        L35:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
        L40:
            java.security.AlgorithmParameters r0 = r3.engineParams
            return r0
    }

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
            r4.engineParams = r7
            r4.engineInit(r5, r6, r0, r8)
            return
    }

    protected void engineInit(int r2, java.security.Key r3, java.security.SecureRandom r4) throws java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            java.security.spec.AlgorithmParameterSpec r0 = (java.security.spec.AlgorithmParameterSpec) r0     // Catch: java.security.InvalidAlgorithmParameterException -> L7
            r1.engineInit(r2, r3, r0, r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L7
            return
        L7:
            r2 = move-exception
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.getMessage()
            r3.<init>(r2)
            throw r3
    }

    protected void engineInit(int r9, java.security.Key r10, java.security.spec.AlgorithmParameterSpec r11, java.security.SecureRandom r12) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r8 = this;
            boolean r0 = r10 instanceof org.bouncycastle.jce.provider.JCEPBEKey
            if (r0 == 0) goto L29
            r1 = r10
            org.bouncycastle.jce.provider.JCEPBEKey r1 = (org.bouncycastle.jce.provider.JCEPBEKey) r1
            int r3 = r8.pbeType
            int r4 = r8.pbeHash
            org.bouncycastle.crypto.BufferedBlockCipher r10 = r8.cipher
            org.bouncycastle.crypto.BlockCipher r10 = r10.getUnderlyingCipher()
            java.lang.String r5 = r10.getAlgorithmName()
            int r6 = r8.pbeKeySize
            int r7 = r8.pbeIvSize
            r2 = r11
            org.bouncycastle.crypto.CipherParameters r10 = org.bouncycastle.jce.provider.BrokenPBE.Util.makePBEParameters(r1, r2, r3, r4, r5, r6, r7)
            int r11 = r8.pbeIvSize
            if (r11 == 0) goto Lbb
        L22:
            r11 = r10
            org.bouncycastle.crypto.params.ParametersWithIV r11 = (org.bouncycastle.crypto.params.ParametersWithIV) r11
            r8.ivParam = r11
            goto Lbb
        L29:
            if (r11 != 0) goto L37
            org.bouncycastle.crypto.params.KeyParameter r11 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r10 = r10.getEncoded()
            r11.<init>(r10)
        L34:
            r10 = r11
            goto Lbb
        L37:
            boolean r0 = r11 instanceof javax.crypto.spec.IvParameterSpec
            if (r0 == 0) goto L64
            int r0 = r8.ivLength
            if (r0 == 0) goto L5a
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r10 = r10.getEncoded()
            r1.<init>(r10)
            javax.crypto.spec.IvParameterSpec r11 = (javax.crypto.spec.IvParameterSpec) r11
            byte[] r10 = r11.getIV()
            r0.<init>(r1, r10)
            r10 = r0
            org.bouncycastle.crypto.params.ParametersWithIV r10 = (org.bouncycastle.crypto.params.ParametersWithIV) r10
            r8.ivParam = r10
        L58:
            r10 = r0
            goto Lbb
        L5a:
            org.bouncycastle.crypto.params.KeyParameter r11 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r10 = r10.getEncoded()
            r11.<init>(r10)
            goto L34
        L64:
            boolean r0 = r11 instanceof javax.crypto.spec.RC2ParameterSpec
            if (r0 == 0) goto L8b
            javax.crypto.spec.RC2ParameterSpec r11 = (javax.crypto.spec.RC2ParameterSpec) r11
            org.bouncycastle.crypto.params.RC2Parameters r0 = new org.bouncycastle.crypto.params.RC2Parameters
            byte[] r10 = r10.getEncoded()
            int r1 = r11.getEffectiveKeyBits()
            r0.<init>(r10, r1)
            byte[] r10 = r11.getIV()
            if (r10 == 0) goto L58
            int r10 = r8.ivLength
            if (r10 == 0) goto L58
            org.bouncycastle.crypto.params.ParametersWithIV r10 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r11 = r11.getIV()
            r10.<init>(r0, r11)
            goto L22
        L8b:
            boolean r0 = r11 instanceof javax.crypto.spec.RC5ParameterSpec
            if (r0 == 0) goto L112
            javax.crypto.spec.RC5ParameterSpec r11 = (javax.crypto.spec.RC5ParameterSpec) r11
            org.bouncycastle.crypto.params.RC5Parameters r0 = new org.bouncycastle.crypto.params.RC5Parameters
            byte[] r10 = r10.getEncoded()
            int r1 = r11.getRounds()
            r0.<init>(r10, r1)
            int r10 = r11.getWordSize()
            r1 = 32
            if (r10 != r1) goto L10a
            byte[] r10 = r11.getIV()
            if (r10 == 0) goto L58
            int r10 = r8.ivLength
            if (r10 == 0) goto L58
            org.bouncycastle.crypto.params.ParametersWithIV r10 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r11 = r11.getIV()
            r10.<init>(r0, r11)
            goto L22
        Lbb:
            int r11 = r8.ivLength
            r0 = 3
            r1 = 1
            if (r11 == 0) goto Leb
            boolean r11 = r10 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r11 != 0) goto Leb
            if (r12 != 0) goto Lcc
            java.security.SecureRandom r12 = new java.security.SecureRandom
            r12.<init>()
        Lcc:
            if (r9 == r1) goto Ld9
            if (r9 != r0) goto Ld1
            goto Ld9
        Ld1:
            java.security.InvalidAlgorithmParameterException r9 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r10 = "no IV set when one expected"
            r9.<init>(r10)
            throw r9
        Ld9:
            int r11 = r8.ivLength
            byte[] r11 = new byte[r11]
            r12.nextBytes(r11)
            org.bouncycastle.crypto.params.ParametersWithIV r12 = new org.bouncycastle.crypto.params.ParametersWithIV
            r12.<init>(r10, r11)
            r10 = r12
            org.bouncycastle.crypto.params.ParametersWithIV r10 = (org.bouncycastle.crypto.params.ParametersWithIV) r10
            r8.ivParam = r10
            r10 = r12
        Leb:
            if (r9 == r1) goto L104
            r11 = 2
            if (r9 == r11) goto Lfd
            if (r9 == r0) goto L104
            r11 = 4
            if (r9 == r11) goto Lfd
            java.io.PrintStream r9 = java.lang.System.out
            java.lang.String r10 = "eeek!"
            r9.println(r10)
            goto L109
        Lfd:
            org.bouncycastle.crypto.BufferedBlockCipher r9 = r8.cipher
            r11 = 0
            r9.init(r11, r10)
            goto L109
        L104:
            org.bouncycastle.crypto.BufferedBlockCipher r9 = r8.cipher
            r9.init(r1, r10)
        L109:
            return
        L10a:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r10 = "can only accept RC5 word size 32 (at the moment...)"
            r9.<init>(r10)
            throw r9
        L112:
            java.security.InvalidAlgorithmParameterException r9 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r10 = "unknown parameter type."
            r9.<init>(r10)
            throw r9
    }

    protected void engineSetMode(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r4)
            java.lang.String r1 = "ECB"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L1e
            r4 = 0
            r3.ivLength = r4
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r4 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            r4.<init>(r0)
        L1a:
            r3.cipher = r4
            goto Ldf
        L1e:
            java.lang.String r1 = "CBC"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L43
            org.bouncycastle.crypto.BufferedBlockCipher r4 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r4 = r4.getUnderlyingCipher()
            int r4 = r4.getBlockSize()
            r3.ivLength = r4
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r4 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r1 = r1.getUnderlyingCipher()
            r0.<init>(r1)
            r4.<init>(r0)
            goto L1a
        L43:
            java.lang.String r1 = "OFB"
            boolean r1 = r0.startsWith(r1)
            r2 = 3
            if (r1 == 0) goto L92
            org.bouncycastle.crypto.BufferedBlockCipher r4 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r4 = r4.getUnderlyingCipher()
            int r4 = r4.getBlockSize()
            r3.ivLength = r4
            int r4 = r0.length()
            if (r4 == r2) goto L79
            java.lang.String r4 = r0.substring(r2)
            int r4 = java.lang.Integer.parseInt(r4)
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.modes.OFBBlockCipher r1 = new org.bouncycastle.crypto.modes.OFBBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r2 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r2 = r2.getUnderlyingCipher()
            r1.<init>(r2, r4)
            r0.<init>(r1)
        L76:
            r3.cipher = r0
            goto Ldf
        L79:
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r4 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r1 = r1.getUnderlyingCipher()
            org.bouncycastle.crypto.BufferedBlockCipher r2 = r3.cipher
            int r2 = r2.getBlockSize()
            int r2 = r2 * 8
            r0.<init>(r1, r2)
            r4.<init>(r0)
            goto L1a
        L92:
            java.lang.String r1 = "CFB"
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto Le0
            org.bouncycastle.crypto.BufferedBlockCipher r4 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r4 = r4.getUnderlyingCipher()
            int r4 = r4.getBlockSize()
            r3.ivLength = r4
            int r4 = r0.length()
            if (r4 == r2) goto Lc5
            java.lang.String r4 = r0.substring(r2)
            int r4 = java.lang.Integer.parseInt(r4)
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.modes.CFBBlockCipher r1 = new org.bouncycastle.crypto.modes.CFBBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r2 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r2 = r2.getUnderlyingCipher()
            r1.<init>(r2, r4)
            r0.<init>(r1)
            goto L76
        Lc5:
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r4 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r1 = r1.getUnderlyingCipher()
            org.bouncycastle.crypto.BufferedBlockCipher r2 = r3.cipher
            int r2 = r2.getBlockSize()
            int r2 = r2 * 8
            r0.<init>(r1, r2)
            r4.<init>(r0)
            goto L1a
        Ldf:
            return
        Le0:
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

    protected void engineSetPadding(java.lang.String r4) throws javax.crypto.NoSuchPaddingException {
            r3 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r4)
            java.lang.String r1 = "NOPADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L1a
            org.bouncycastle.crypto.BufferedBlockCipher r4 = new org.bouncycastle.crypto.BufferedBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            r4.<init>(r0)
        L17:
            r3.cipher = r4
            goto L6f
        L1a:
            java.lang.String r1 = "PKCS5PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L63
            java.lang.String r1 = "PKCS7PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L63
            java.lang.String r1 = "ISO10126PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L33
            goto L63
        L33:
            java.lang.String r1 = "WITHCTS"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L47
            org.bouncycastle.crypto.modes.CTSBlockCipher r4 = new org.bouncycastle.crypto.modes.CTSBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            r4.<init>(r0)
            goto L17
        L47:
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
        L63:
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r4 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            r4.<init>(r0)
            goto L17
        L6f:
            return
    }

    protected java.security.Key engineUnwrap(byte[] r4, java.lang.String r5, int r6) throws java.security.InvalidKeyException {
            r3 = this;
            java.lang.String r0 = "Unknown key type "
            r1 = 0
            int r2 = r4.length     // Catch: javax.crypto.IllegalBlockSizeException -> L94 javax.crypto.BadPaddingException -> L9f
            byte[] r4 = r3.engineDoFinal(r4, r1, r2)     // Catch: javax.crypto.IllegalBlockSizeException -> L94 javax.crypto.BadPaddingException -> L9f
            r1 = 3
            if (r6 != r1) goto L11
            javax.crypto.spec.SecretKeySpec r6 = new javax.crypto.spec.SecretKeySpec
            r6.<init>(r4, r5)
            return r6
        L11:
            java.lang.String r1 = "BC"
            java.security.KeyFactory r5 = java.security.KeyFactory.getInstance(r5, r1)     // Catch: java.security.spec.InvalidKeySpecException -> L46 java.security.NoSuchAlgorithmException -> L60 java.security.NoSuchProviderException -> L7a
            r1 = 1
            if (r6 != r1) goto L24
            java.security.spec.X509EncodedKeySpec r6 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> L46 java.security.NoSuchAlgorithmException -> L60 java.security.NoSuchProviderException -> L7a
            r6.<init>(r4)     // Catch: java.security.spec.InvalidKeySpecException -> L46 java.security.NoSuchAlgorithmException -> L60 java.security.NoSuchProviderException -> L7a
            java.security.PublicKey r4 = r5.generatePublic(r6)     // Catch: java.security.spec.InvalidKeySpecException -> L46 java.security.NoSuchAlgorithmException -> L60 java.security.NoSuchProviderException -> L7a
            return r4
        L24:
            r1 = 2
            if (r6 != r1) goto L31
            java.security.spec.PKCS8EncodedKeySpec r6 = new java.security.spec.PKCS8EncodedKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> L46 java.security.NoSuchAlgorithmException -> L60 java.security.NoSuchProviderException -> L7a
            r6.<init>(r4)     // Catch: java.security.spec.InvalidKeySpecException -> L46 java.security.NoSuchAlgorithmException -> L60 java.security.NoSuchProviderException -> L7a
            java.security.PrivateKey r4 = r5.generatePrivate(r6)     // Catch: java.security.spec.InvalidKeySpecException -> L46 java.security.NoSuchAlgorithmException -> L60 java.security.NoSuchProviderException -> L7a
            return r4
        L31:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L46:
            r4 = move-exception
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r4 = r4.getMessage()
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
        L60:
            r4 = move-exception
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r4 = r4.getMessage()
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
        L7a:
            r4 = move-exception
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r4 = r4.getMessage()
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
        L94:
            r4 = move-exception
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.String r4 = r4.getMessage()
            r5.<init>(r4)
            throw r5
        L9f:
            r4 = move-exception
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.String r4 = r4.getMessage()
            r5.<init>(r4)
            throw r5
    }

    protected int engineUpdate(byte[] r7, int r8, int r9, byte[] r10, int r11) {
            r6 = this;
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r6.cipher
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            int r7 = r0.processBytes(r1, r2, r3, r4, r5)
            return r7
    }

    protected byte[] engineUpdate(byte[] r8, int r9, int r10) {
            r7 = this;
            org.bouncycastle.crypto.BufferedBlockCipher r0 = r7.cipher
            int r0 = r0.getUpdateOutputSize(r10)
            if (r0 <= 0) goto L15
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r7.cipher
            r6 = 0
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r0
            r1.processBytes(r2, r3, r4, r5, r6)
            return r0
        L15:
            org.bouncycastle.crypto.BufferedBlockCipher r1 = r7.cipher
            r5 = 0
            r6 = 0
            r2 = r8
            r3 = r9
            r4 = r10
            r1.processBytes(r2, r3, r4, r5, r6)
            r0 = 0
            return r0
    }

    protected byte[] engineWrap(java.security.Key r3) throws javax.crypto.IllegalBlockSizeException, java.security.InvalidKeyException {
            r2 = this;
            byte[] r3 = r3.getEncoded()
            if (r3 == 0) goto L18
            r0 = 0
            int r1 = r3.length     // Catch: javax.crypto.BadPaddingException -> Ld
            byte[] r3 = r2.engineDoFinal(r3, r0, r1)     // Catch: javax.crypto.BadPaddingException -> Ld
            return r3
        Ld:
            r3 = move-exception
            javax.crypto.IllegalBlockSizeException r0 = new javax.crypto.IllegalBlockSizeException
            java.lang.String r3 = r3.getMessage()
            r0.<init>(r3)
            throw r0
        L18:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r0 = "Cannot wrap key, null encoding."
            r3.<init>(r0)
            throw r3
    }
}
