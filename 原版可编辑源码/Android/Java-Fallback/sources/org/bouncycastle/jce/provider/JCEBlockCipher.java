package org.bouncycastle.jce.provider;

public class JCEBlockCipher extends org.bouncycastle.jce.provider.WrapCipherSpi implements org.bouncycastle.jce.provider.PBE {
    private java.lang.Class[] availableSpecs;
    private org.bouncycastle.crypto.BlockCipher baseEngine;
    private org.bouncycastle.jce.provider.JCEBlockCipher.GenericBlockCipher cipher;
    private int ivLength;
    private org.bouncycastle.crypto.params.ParametersWithIV ivParam;
    private java.lang.String modeName;
    private boolean padded;
    private java.lang.String pbeAlgorithm;
    private javax.crypto.spec.PBEParameterSpec pbeSpec;

    private static class AEADGenericBlockCipher implements org.bouncycastle.jce.provider.JCEBlockCipher.GenericBlockCipher {
        private org.bouncycastle.crypto.modes.AEADBlockCipher cipher;

        AEADGenericBlockCipher(org.bouncycastle.crypto.modes.AEADBlockCipher r1) {
                r0 = this;
                r0.<init>()
                r0.cipher = r1
                return
        }

        @Override
        public int doFinal(byte[] r2, int r3) throws java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
                r1 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r1.cipher
                int r2 = r0.doFinal(r2, r3)
                return r2
        }

        @Override
        public java.lang.String getAlgorithmName() {
                r1 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r1.cipher
                org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
                java.lang.String r0 = r0.getAlgorithmName()
                return r0
        }

        @Override
        public int getOutputSize(int r2) {
                r1 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r1.cipher
                int r2 = r0.getOutputSize(r2)
                return r2
        }

        @Override
        public org.bouncycastle.crypto.BlockCipher getUnderlyingCipher() {
                r1 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r1.cipher
                org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
                return r0
        }

        @Override
        public int getUpdateOutputSize(int r2) {
                r1 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r1.cipher
                int r2 = r0.getUpdateOutputSize(r2)
                return r2
        }

        @Override
        public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) throws java.lang.IllegalArgumentException {
                r1 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r1.cipher
                r0.init(r2, r3)
                return
        }

        @Override
        public int processByte(byte r2, byte[] r3, int r4) throws org.bouncycastle.crypto.DataLengthException {
                r1 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r1.cipher
                int r2 = r0.processByte(r2, r3, r4)
                return r2
        }

        @Override
        public int processBytes(byte[] r7, int r8, int r9, byte[] r10, int r11) throws org.bouncycastle.crypto.DataLengthException {
                r6 = this;
                org.bouncycastle.crypto.modes.AEADBlockCipher r0 = r6.cipher
                r1 = r7
                r2 = r8
                r3 = r9
                r4 = r10
                r5 = r11
                int r7 = r0.processBytes(r1, r2, r3, r4, r5)
                return r7
        }

        @Override
        public boolean wrapOnNoPadding() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    public static class AES extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public AES() {
                r1 = this;
                org.bouncycastle.crypto.engines.AESFastEngine r0 = new org.bouncycastle.crypto.engines.AESFastEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class AESCBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public AESCBC() {
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

    public static class AESCFB extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public AESCFB() {
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

    public static class AESOFB extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public AESOFB() {
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

    public static class Blowfish extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public Blowfish() {
                r1 = this;
                org.bouncycastle.crypto.engines.BlowfishEngine r0 = new org.bouncycastle.crypto.engines.BlowfishEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    private static class BufferedGenericBlockCipher implements org.bouncycastle.jce.provider.JCEBlockCipher.GenericBlockCipher {
        private org.bouncycastle.crypto.BufferedBlockCipher cipher;

        BufferedGenericBlockCipher(org.bouncycastle.crypto.BlockCipher r2) {
                r1 = this;
                r1.<init>()
                org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
                r0.<init>(r2)
                r1.cipher = r0
                return
        }

        BufferedGenericBlockCipher(org.bouncycastle.crypto.BlockCipher r2, org.bouncycastle.crypto.paddings.BlockCipherPadding r3) {
                r1 = this;
                r1.<init>()
                org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
                r0.<init>(r2, r3)
                r1.cipher = r0
                return
        }

        BufferedGenericBlockCipher(org.bouncycastle.crypto.BufferedBlockCipher r1) {
                r0 = this;
                r0.<init>()
                r0.cipher = r1
                return
        }

        @Override
        public int doFinal(byte[] r2, int r3) throws java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                int r2 = r0.doFinal(r2, r3)
                return r2
        }

        @Override
        public java.lang.String getAlgorithmName() {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
                java.lang.String r0 = r0.getAlgorithmName()
                return r0
        }

        @Override
        public int getOutputSize(int r2) {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                int r2 = r0.getOutputSize(r2)
                return r2
        }

        @Override
        public org.bouncycastle.crypto.BlockCipher getUnderlyingCipher() {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
                return r0
        }

        @Override
        public int getUpdateOutputSize(int r2) {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                int r2 = r0.getUpdateOutputSize(r2)
                return r2
        }

        @Override
        public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) throws java.lang.IllegalArgumentException {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                r0.init(r2, r3)
                return
        }

        @Override
        public int processByte(byte r2, byte[] r3, int r4) throws org.bouncycastle.crypto.DataLengthException {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                int r2 = r0.processByte(r2, r3, r4)
                return r2
        }

        @Override
        public int processBytes(byte[] r7, int r8, int r9, byte[] r10, int r11) throws org.bouncycastle.crypto.DataLengthException {
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

        @Override
        public boolean wrapOnNoPadding() {
                r1 = this;
                org.bouncycastle.crypto.BufferedBlockCipher r0 = r1.cipher
                boolean r0 = r0 instanceof org.bouncycastle.crypto.modes.CTSBlockCipher
                r0 = r0 ^ 1
                return r0
        }
    }

    public static class CAST5 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public CAST5() {
                r1 = this;
                org.bouncycastle.crypto.engines.CAST5Engine r0 = new org.bouncycastle.crypto.engines.CAST5Engine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class CAST5CBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public CAST5CBC() {
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

    public static class CAST6 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public CAST6() {
                r1 = this;
                org.bouncycastle.crypto.engines.CAST6Engine r0 = new org.bouncycastle.crypto.engines.CAST6Engine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class DES extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public DES() {
                r1 = this;
                org.bouncycastle.crypto.engines.DESEngine r0 = new org.bouncycastle.crypto.engines.DESEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class DESCBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public DESCBC() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 64
                r2.<init>(r0, r1)
                return
        }
    }

    public static class DESede extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public DESede() {
                r1 = this;
                org.bouncycastle.crypto.engines.DESedeEngine r0 = new org.bouncycastle.crypto.engines.DESedeEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class DESedeCBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public DESedeCBC() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 64
                r2.<init>(r0, r1)
                return
        }
    }

    public static class GOST28147 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public GOST28147() {
                r1 = this;
                org.bouncycastle.crypto.engines.GOST28147Engine r0 = new org.bouncycastle.crypto.engines.GOST28147Engine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class GOST28147cbc extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public GOST28147cbc() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.GOST28147Engine r1 = new org.bouncycastle.crypto.engines.GOST28147Engine
                r1.<init>()
                r0.<init>(r1)
                r1 = 64
                r2.<init>(r0, r1)
                return
        }
    }

    private interface GenericBlockCipher {
        int doFinal(byte[] r1, int r2) throws java.lang.IllegalStateException, org.bouncycastle.crypto.InvalidCipherTextException;

        java.lang.String getAlgorithmName();

        int getOutputSize(int r1);

        org.bouncycastle.crypto.BlockCipher getUnderlyingCipher();

        int getUpdateOutputSize(int r1);

        void init(boolean r1, org.bouncycastle.crypto.CipherParameters r2) throws java.lang.IllegalArgumentException;

        int processByte(byte r1, byte[] r2, int r3) throws org.bouncycastle.crypto.DataLengthException;

        int processBytes(byte[] r1, int r2, int r3, byte[] r4, int r5) throws org.bouncycastle.crypto.DataLengthException;

        boolean wrapOnNoPadding();
    }

    public static class IDEA extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public IDEA() {
                r1 = this;
                org.bouncycastle.crypto.engines.IDEAEngine r0 = new org.bouncycastle.crypto.engines.IDEAEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class IDEACBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public IDEACBC() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.IDEAEngine r1 = new org.bouncycastle.crypto.engines.IDEAEngine
                r1.<init>()
                r0.<init>(r1)
                r1 = 64
                r2.<init>(r0, r1)
                return
        }
    }

    public static class PBEWithAESCBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithAESCBC() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.AESFastEngine r1 = new org.bouncycastle.crypto.engines.AESFastEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithMD5AndDES extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithMD5AndDES() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithMD5AndRC2 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithMD5AndRC2() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.RC2Engine r1 = new org.bouncycastle.crypto.engines.RC2Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHA1AndDES extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHA1AndDES() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHA1AndRC2 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHA1AndRC2() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.RC2Engine r1 = new org.bouncycastle.crypto.engines.RC2Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHAAnd128BitRC2 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHAAnd128BitRC2() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.RC2Engine r1 = new org.bouncycastle.crypto.engines.RC2Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHAAnd40BitRC2 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHAAnd40BitRC2() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.RC2Engine r1 = new org.bouncycastle.crypto.engines.RC2Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHAAndDES2Key extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHAAndDES2Key() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHAAndDES3Key extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHAAndDES3Key() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHAAndIDEA extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHAAndIDEA() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.IDEAEngine r1 = new org.bouncycastle.crypto.engines.IDEAEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithSHAAndTwofish extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public PBEWithSHAAndTwofish() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.TwofishEngine r1 = new org.bouncycastle.crypto.engines.TwofishEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class RC2 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public RC2() {
                r1 = this;
                org.bouncycastle.crypto.engines.RC2Engine r0 = new org.bouncycastle.crypto.engines.RC2Engine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class RC2CBC extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public RC2CBC() {
                r2 = this;
                org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
                org.bouncycastle.crypto.engines.RC2Engine r1 = new org.bouncycastle.crypto.engines.RC2Engine
                r1.<init>()
                r0.<init>(r1)
                r1 = 64
                r2.<init>(r0, r1)
                return
        }
    }

    public static class RC5 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public RC5() {
                r1 = this;
                org.bouncycastle.crypto.engines.RC532Engine r0 = new org.bouncycastle.crypto.engines.RC532Engine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class RC564 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public RC564() {
                r1 = this;
                org.bouncycastle.crypto.engines.RC564Engine r0 = new org.bouncycastle.crypto.engines.RC564Engine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class RC6 extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public RC6() {
                r1 = this;
                org.bouncycastle.crypto.engines.RC6Engine r0 = new org.bouncycastle.crypto.engines.RC6Engine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class Rijndael extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public Rijndael() {
                r1 = this;
                org.bouncycastle.crypto.engines.RijndaelEngine r0 = new org.bouncycastle.crypto.engines.RijndaelEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class SEED extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public SEED() {
                r1 = this;
                org.bouncycastle.crypto.engines.SEEDEngine r0 = new org.bouncycastle.crypto.engines.SEEDEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class Serpent extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public Serpent() {
                r1 = this;
                org.bouncycastle.crypto.engines.SerpentEngine r0 = new org.bouncycastle.crypto.engines.SerpentEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class Skipjack extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public Skipjack() {
                r1 = this;
                org.bouncycastle.crypto.engines.SkipjackEngine r0 = new org.bouncycastle.crypto.engines.SkipjackEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class TEA extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public TEA() {
                r1 = this;
                org.bouncycastle.crypto.engines.TEAEngine r0 = new org.bouncycastle.crypto.engines.TEAEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class Twofish extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public Twofish() {
                r1 = this;
                org.bouncycastle.crypto.engines.TwofishEngine r0 = new org.bouncycastle.crypto.engines.TwofishEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class XTEA extends org.bouncycastle.jce.provider.JCEBlockCipher {
        public XTEA() {
                r1 = this;
                org.bouncycastle.crypto.engines.XTEAEngine r0 = new org.bouncycastle.crypto.engines.XTEAEngine
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    protected JCEBlockCipher(org.bouncycastle.crypto.BlockCipher r6) {
            r5 = this;
            r5.<init>()
            r0 = 5
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r1 = javax.crypto.spec.RC5ParameterSpec.class
            r3 = 1
            r0[r3] = r1
            r1 = 2
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r4 = javax.crypto.spec.IvParameterSpec.class
            r0[r1] = r4
            r1 = 3
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r4 = javax.crypto.spec.PBEParameterSpec.class
            r0[r1] = r4
            r1 = 4
            java.lang.Class<org.bouncycastle.jce.spec.GOST28147ParameterSpec> r4 = org.bouncycastle.jce.spec.GOST28147ParameterSpec.class
            r0[r1] = r4
            r5.availableSpecs = r0
            r5.ivLength = r2
            r5.padded = r3
            r0 = 0
            r5.pbeSpec = r0
            r5.pbeAlgorithm = r0
            r5.modeName = r0
            r5.baseEngine = r6
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r0 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            r0.<init>(r6)
            r5.cipher = r0
            return
    }

    protected JCEBlockCipher(org.bouncycastle.crypto.BlockCipher r6, int r7) {
            r5 = this;
            r5.<init>()
            r0 = 5
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<javax.crypto.spec.RC2ParameterSpec> r1 = javax.crypto.spec.RC2ParameterSpec.class
            r2 = 0
            r0[r2] = r1
            java.lang.Class<javax.crypto.spec.RC5ParameterSpec> r1 = javax.crypto.spec.RC5ParameterSpec.class
            r3 = 1
            r0[r3] = r1
            r1 = 2
            java.lang.Class<javax.crypto.spec.IvParameterSpec> r4 = javax.crypto.spec.IvParameterSpec.class
            r0[r1] = r4
            r1 = 3
            java.lang.Class<javax.crypto.spec.PBEParameterSpec> r4 = javax.crypto.spec.PBEParameterSpec.class
            r0[r1] = r4
            r1 = 4
            java.lang.Class<org.bouncycastle.jce.spec.GOST28147ParameterSpec> r4 = org.bouncycastle.jce.spec.GOST28147ParameterSpec.class
            r0[r1] = r4
            r5.availableSpecs = r0
            r5.ivLength = r2
            r5.padded = r3
            r0 = 0
            r5.pbeSpec = r0
            r5.pbeAlgorithm = r0
            r5.modeName = r0
            r5.baseEngine = r6
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r0 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            r0.<init>(r6)
            r5.cipher = r0
            int r7 = r7 / 8
            r5.ivLength = r7
            return
    }

    @Override
    protected int engineDoFinal(byte[] r7, int r8, int r9, byte[] r10, int r11) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r6 = this;
            if (r9 == 0) goto Le
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r6.cipher
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
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r8 = r6.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L18 org.bouncycastle.crypto.DataLengthException -> L23
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

    @Override
    protected byte[] engineDoFinal(byte[] r10, int r11, int r12) throws javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            r9 = this;
            int r0 = r9.engineGetOutputSize(r12)
            byte[] r7 = new byte[r0]
            r8 = 0
            if (r12 == 0) goto L15
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r1 = r9.cipher
            r6 = 0
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r7
            int r10 = r1.processBytes(r2, r3, r4, r5, r6)
            goto L16
        L15:
            r10 = 0
        L16:
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r11 = r9.cipher     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L26 org.bouncycastle.crypto.DataLengthException -> L31
            int r11 = r11.doFinal(r7, r10)     // Catch: org.bouncycastle.crypto.InvalidCipherTextException -> L26 org.bouncycastle.crypto.DataLengthException -> L31
            int r10 = r10 + r11
            if (r10 != r0) goto L20
            return r7
        L20:
            byte[] r11 = new byte[r10]
            java.lang.System.arraycopy(r7, r8, r11, r8, r10)
            return r11
        L26:
            r10 = move-exception
            javax.crypto.BadPaddingException r11 = new javax.crypto.BadPaddingException
            java.lang.String r10 = r10.getMessage()
            r11.<init>(r10)
            throw r11
        L31:
            r10 = move-exception
            javax.crypto.IllegalBlockSizeException r11 = new javax.crypto.IllegalBlockSizeException
            java.lang.String r10 = r10.getMessage()
            r11.<init>(r10)
            throw r11
    }

    @Override
    protected int engineGetBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.BlockCipher r0 = r1.baseEngine
            int r0 = r0.getBlockSize()
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
    protected int engineGetOutputSize(int r2) {
            r1 = this;
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r1.cipher
            int r2 = r0.getOutputSize(r2)
            return r2
    }

    @Override
    protected java.security.AlgorithmParameters engineGetParameters() {
            r4 = this;
            java.security.AlgorithmParameters r0 = r4.engineParams
            if (r0 != 0) goto L58
            javax.crypto.spec.PBEParameterSpec r0 = r4.pbeSpec
            java.lang.String r1 = "BC"
            if (r0 == 0) goto L1c
            java.lang.String r0 = r4.pbeAlgorithm     // Catch: java.lang.Exception -> L1a
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)     // Catch: java.lang.Exception -> L1a
            r4.engineParams = r0     // Catch: java.lang.Exception -> L1a
            java.security.AlgorithmParameters r0 = r4.engineParams     // Catch: java.lang.Exception -> L1a
            javax.crypto.spec.PBEParameterSpec r1 = r4.pbeSpec     // Catch: java.lang.Exception -> L1a
            r0.init(r1)     // Catch: java.lang.Exception -> L1a
            goto L58
        L1a:
            r0 = 0
            return r0
        L1c:
            org.bouncycastle.crypto.params.ParametersWithIV r0 = r4.ivParam
            if (r0 == 0) goto L58
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            java.lang.String r0 = r0.getAlgorithmName()
            r2 = 47
            int r3 = r0.indexOf(r2)
            if (r3 < 0) goto L3b
            r3 = 0
            int r2 = r0.indexOf(r2)
            java.lang.String r0 = r0.substring(r3, r2)
        L3b:
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)     // Catch: java.lang.Exception -> L4d
            r4.engineParams = r0     // Catch: java.lang.Exception -> L4d
            java.security.AlgorithmParameters r0 = r4.engineParams     // Catch: java.lang.Exception -> L4d
            org.bouncycastle.crypto.params.ParametersWithIV r1 = r4.ivParam     // Catch: java.lang.Exception -> L4d
            byte[] r1 = r1.getIV()     // Catch: java.lang.Exception -> L4d
            r0.init(r1)     // Catch: java.lang.Exception -> L4d
            goto L58
        L4d:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
        L58:
            java.security.AlgorithmParameters r0 = r4.engineParams
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
            if (r0 == 0) goto L2ab
            java.lang.String r0 = "RC5-64"
            if (r6 != 0) goto L24
            org.bouncycastle.crypto.BlockCipher r1 = r3.baseEngine
            java.lang.String r1 = r1.getAlgorithmName()
            boolean r1 = r1.startsWith(r0)
            if (r1 != 0) goto L1c
            goto L24
        L1c:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "RC5 requires an RC5ParametersSpec to be passed in."
            r4.<init>(r5)
            throw r4
        L24:
            boolean r1 = r5 instanceof org.bouncycastle.jce.provider.JCEPBEKey
            if (r1 == 0) goto L83
            org.bouncycastle.jce.provider.JCEPBEKey r5 = (org.bouncycastle.jce.provider.JCEPBEKey) r5
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r5.getOID()
            if (r0 == 0) goto L39
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r5.getOID()
            java.lang.String r0 = r0.getId()
            goto L3d
        L39:
            java.lang.String r0 = r5.getAlgorithm()
        L3d:
            r3.pbeAlgorithm = r0
            org.bouncycastle.crypto.CipherParameters r0 = r5.getParam()
            if (r0 == 0) goto L59
            org.bouncycastle.crypto.CipherParameters r6 = r5.getParam()
            javax.crypto.spec.PBEParameterSpec r0 = new javax.crypto.spec.PBEParameterSpec
            byte[] r1 = r5.getSalt()
            int r5 = r5.getIterationCount()
            r0.<init>(r1, r5)
            r3.pbeSpec = r0
            goto L70
        L59:
            boolean r0 = r6 instanceof javax.crypto.spec.PBEParameterSpec
            if (r0 == 0) goto L7b
            r0 = r6
            javax.crypto.spec.PBEParameterSpec r0 = (javax.crypto.spec.PBEParameterSpec) r0
            r3.pbeSpec = r0
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            java.lang.String r0 = r0.getAlgorithmName()
            org.bouncycastle.crypto.CipherParameters r6 = org.bouncycastle.jce.provider.PBE.Util.makePBEParameters(r5, r6, r0)
        L70:
            boolean r5 = r6 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r5 == 0) goto L20b
            r5 = r6
            org.bouncycastle.crypto.params.ParametersWithIV r5 = (org.bouncycastle.crypto.params.ParametersWithIV) r5
            r3.ivParam = r5
            goto L20b
        L7b:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "PBE requires PBE parameters to be set."
            r4.<init>(r5)
            throw r4
        L83:
            if (r6 != 0) goto L90
            org.bouncycastle.crypto.params.KeyParameter r6 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r5 = r5.getEncoded()
            r6.<init>(r5)
            goto L20b
        L90:
            boolean r1 = r6 instanceof javax.crypto.spec.IvParameterSpec
            if (r1 == 0) goto L110
            int r0 = r3.ivLength
            if (r0 == 0) goto Lf0
            javax.crypto.spec.IvParameterSpec r6 = (javax.crypto.spec.IvParameterSpec) r6
            byte[] r0 = r6.getIV()
            int r0 = r0.length
            int r1 = r3.ivLength
            if (r0 == r1) goto Ld6
            java.lang.String r0 = r3.modeName
            java.lang.String r1 = "CCM"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ld6
            java.lang.String r0 = r3.modeName
            java.lang.String r1 = "EAX"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lb8
            goto Ld6
        Lb8:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "IV must be "
            r5.append(r6)
            int r6 = r3.ivLength
            r5.append(r6)
            java.lang.String r6 = " bytes long."
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        Ld6:
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r5 = r5.getEncoded()
            r1.<init>(r5)
            byte[] r5 = r6.getIV()
            r0.<init>(r1, r5)
            r5 = r0
            org.bouncycastle.crypto.params.ParametersWithIV r5 = (org.bouncycastle.crypto.params.ParametersWithIV) r5
            r3.ivParam = r5
        Led:
            r6 = r0
            goto L20b
        Lf0:
            java.lang.String r6 = r3.modeName
            if (r6 == 0) goto L105
            java.lang.String r0 = "ECB"
            boolean r6 = r6.equals(r0)
            if (r6 != 0) goto Lfd
            goto L105
        Lfd:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "ECB mode does not use an IV"
            r4.<init>(r5)
            throw r4
        L105:
            org.bouncycastle.crypto.params.KeyParameter r6 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r5 = r5.getEncoded()
            r6.<init>(r5)
            goto L20b
        L110:
            boolean r1 = r6 instanceof org.bouncycastle.jce.spec.GOST28147ParameterSpec
            if (r1 == 0) goto L143
            org.bouncycastle.jce.spec.GOST28147ParameterSpec r6 = (org.bouncycastle.jce.spec.GOST28147ParameterSpec) r6
            org.bouncycastle.crypto.params.ParametersWithSBox r0 = new org.bouncycastle.crypto.params.ParametersWithSBox
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r5 = r5.getEncoded()
            r1.<init>(r5)
            byte[] r5 = r6.getSbox()
            r0.<init>(r1, r5)
            byte[] r5 = r6.getIV()
            if (r5 == 0) goto Led
            int r5 = r3.ivLength
            if (r5 == 0) goto Led
            org.bouncycastle.crypto.params.ParametersWithIV r5 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r6 = r6.getIV()
            r5.<init>(r0, r6)
        L13b:
            r6 = r5
            org.bouncycastle.crypto.params.ParametersWithIV r6 = (org.bouncycastle.crypto.params.ParametersWithIV) r6
            r3.ivParam = r6
            r6 = r5
            goto L20b
        L143:
            boolean r1 = r6 instanceof javax.crypto.spec.RC2ParameterSpec
            if (r1 == 0) goto L16a
            javax.crypto.spec.RC2ParameterSpec r6 = (javax.crypto.spec.RC2ParameterSpec) r6
            org.bouncycastle.crypto.params.RC2Parameters r0 = new org.bouncycastle.crypto.params.RC2Parameters
            byte[] r5 = r5.getEncoded()
            int r1 = r6.getEffectiveKeyBits()
            r0.<init>(r5, r1)
            byte[] r5 = r6.getIV()
            if (r5 == 0) goto Led
            int r5 = r3.ivLength
            if (r5 == 0) goto Led
            org.bouncycastle.crypto.params.ParametersWithIV r5 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r6 = r6.getIV()
            r5.<init>(r0, r6)
            goto L13b
        L16a:
            boolean r1 = r6 instanceof javax.crypto.spec.RC5ParameterSpec
            if (r1 == 0) goto L2a3
            javax.crypto.spec.RC5ParameterSpec r6 = (javax.crypto.spec.RC5ParameterSpec) r6
            org.bouncycastle.crypto.params.RC5Parameters r1 = new org.bouncycastle.crypto.params.RC5Parameters
            byte[] r5 = r5.getEncoded()
            int r2 = r6.getRounds()
            r1.<init>(r5, r2)
            org.bouncycastle.crypto.BlockCipher r5 = r3.baseEngine
            java.lang.String r5 = r5.getAlgorithmName()
            java.lang.String r2 = "RC5"
            boolean r5 = r5.startsWith(r2)
            if (r5 == 0) goto L29b
            org.bouncycastle.crypto.BlockCipher r5 = r3.baseEngine
            java.lang.String r5 = r5.getAlgorithmName()
            java.lang.String r2 = "RC5-32"
            boolean r5 = r5.equals(r2)
            java.lang.String r2 = "."
            if (r5 == 0) goto L1c2
            int r5 = r6.getWordSize()
            r0 = 32
            if (r5 != r0) goto L1a4
            goto L1f5
        L1a4:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "RC5 already set up for a word size of 32 not "
            r5.append(r7)
            int r6 = r6.getWordSize()
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L1c2:
            org.bouncycastle.crypto.BlockCipher r5 = r3.baseEngine
            java.lang.String r5 = r5.getAlgorithmName()
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L1f5
            int r5 = r6.getWordSize()
            r0 = 64
            if (r5 != r0) goto L1d7
            goto L1f5
        L1d7:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "RC5 already set up for a word size of 64 not "
            r5.append(r7)
            int r6 = r6.getWordSize()
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L1f5:
            byte[] r5 = r6.getIV()
            if (r5 == 0) goto L20a
            int r5 = r3.ivLength
            if (r5 == 0) goto L20a
            org.bouncycastle.crypto.params.ParametersWithIV r5 = new org.bouncycastle.crypto.params.ParametersWithIV
            byte[] r6 = r6.getIV()
            r5.<init>(r1, r6)
            goto L13b
        L20a:
            r6 = r1
        L20b:
            int r5 = r3.ivLength
            r0 = 3
            r1 = 1
            if (r5 == 0) goto L250
            boolean r5 = r6 instanceof org.bouncycastle.crypto.params.ParametersWithIV
            if (r5 != 0) goto L250
            if (r7 != 0) goto L21d
            java.security.SecureRandom r5 = new java.security.SecureRandom
            r5.<init>()
            goto L21e
        L21d:
            r5 = r7
        L21e:
            if (r4 == r1) goto L23e
            if (r4 != r0) goto L223
            goto L23e
        L223:
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r5 = r3.cipher
            org.bouncycastle.crypto.BlockCipher r5 = r5.getUnderlyingCipher()
            java.lang.String r5 = r5.getAlgorithmName()
            java.lang.String r2 = "PGPCFB"
            int r5 = r5.indexOf(r2)
            if (r5 < 0) goto L236
            goto L250
        L236:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "no IV set when one expected"
            r4.<init>(r5)
            throw r4
        L23e:
            int r2 = r3.ivLength
            byte[] r2 = new byte[r2]
            r5.nextBytes(r2)
            org.bouncycastle.crypto.params.ParametersWithIV r5 = new org.bouncycastle.crypto.params.ParametersWithIV
            r5.<init>(r6, r2)
            r6 = r5
            org.bouncycastle.crypto.params.ParametersWithIV r6 = (org.bouncycastle.crypto.params.ParametersWithIV) r6
            r3.ivParam = r6
            r6 = r5
        L250:
            if (r7 == 0) goto L25c
            boolean r5 = r3.padded
            if (r5 == 0) goto L25c
            org.bouncycastle.crypto.params.ParametersWithRandom r5 = new org.bouncycastle.crypto.params.ParametersWithRandom
            r5.<init>(r6, r7)
            r6 = r5
        L25c:
            if (r4 == r1) goto L28a
            r5 = 2
            if (r4 == r5) goto L283
            if (r4 == r0) goto L28a
            r5 = 4
            if (r4 != r5) goto L267
            goto L283
        L267:
            java.security.InvalidParameterException r5 = new java.security.InvalidParameterException     // Catch: java.lang.Exception -> L290
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L290
            r6.<init>()     // Catch: java.lang.Exception -> L290
            java.lang.String r7 = "unknown opmode "
            r6.append(r7)     // Catch: java.lang.Exception -> L290
            r6.append(r4)     // Catch: java.lang.Exception -> L290
            java.lang.String r4 = " passed"
            r6.append(r4)     // Catch: java.lang.Exception -> L290
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Exception -> L290
            r5.<init>(r4)     // Catch: java.lang.Exception -> L290
            throw r5     // Catch: java.lang.Exception -> L290
        L283:
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r4 = r3.cipher     // Catch: java.lang.Exception -> L290
            r5 = 0
            r4.init(r5, r6)     // Catch: java.lang.Exception -> L290
            goto L28f
        L28a:
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r4 = r3.cipher     // Catch: java.lang.Exception -> L290
            r4.init(r1, r6)     // Catch: java.lang.Exception -> L290
        L28f:
            return
        L290:
            r4 = move-exception
            java.security.InvalidKeyException r5 = new java.security.InvalidKeyException
            java.lang.String r4 = r4.getMessage()
            r5.<init>(r4)
            throw r5
        L29b:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "RC5 parameters passed to a cipher that is not RC5."
            r4.<init>(r5)
            throw r4
        L2a3:
            java.security.InvalidAlgorithmParameterException r4 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r5 = "unknown parameter type."
            r4.<init>(r5)
            throw r4
        L2ab:
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
    protected void engineSetMode(java.lang.String r5) throws java.security.NoSuchAlgorithmException {
            r4 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r5)
            r4.modeName = r0
            java.lang.String r1 = "ECB"
            boolean r0 = r0.equals(r1)
            r1 = 0
            if (r0 == 0) goto L1c
            r4.ivLength = r1
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.BlockCipher r0 = r4.baseEngine
            r5.<init>(r0)
        L18:
            r4.cipher = r5
            goto L1ea
        L1c:
            java.lang.String r0 = r4.modeName
            java.lang.String r2 = "CBC"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L3b
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.CBCBlockCipher r0 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.BlockCipher r1 = r4.baseEngine
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L3b:
            java.lang.String r0 = r4.modeName
            java.lang.String r2 = "OFB"
            boolean r0 = r0.startsWith(r2)
            r2 = 3
            if (r0 == 0) goto L83
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            java.lang.String r5 = r4.modeName
            int r5 = r5.length()
            if (r5 == r2) goto L70
            java.lang.String r5 = r4.modeName
            java.lang.String r5 = r5.substring(r2)
            int r5 = java.lang.Integer.parseInt(r5)
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r0 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.OFBBlockCipher r1 = new org.bouncycastle.crypto.modes.OFBBlockCipher
            org.bouncycastle.crypto.BlockCipher r2 = r4.baseEngine
            r1.<init>(r2, r5)
            r0.<init>(r1)
        L6c:
            r4.cipher = r0
            goto L1ea
        L70:
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.OFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OFBBlockCipher
            org.bouncycastle.crypto.BlockCipher r1 = r4.baseEngine
            int r2 = r1.getBlockSize()
            int r2 = r2 * 8
            r0.<init>(r1, r2)
            r5.<init>(r0)
            goto L18
        L83:
            java.lang.String r0 = r4.modeName
            java.lang.String r3 = "CFB"
            boolean r0 = r0.startsWith(r3)
            if (r0 == 0) goto Lc8
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            java.lang.String r5 = r4.modeName
            int r5 = r5.length()
            if (r5 == r2) goto Lb4
            java.lang.String r5 = r4.modeName
            java.lang.String r5 = r5.substring(r2)
            int r5 = java.lang.Integer.parseInt(r5)
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r0 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.CFBBlockCipher r1 = new org.bouncycastle.crypto.modes.CFBBlockCipher
            org.bouncycastle.crypto.BlockCipher r2 = r4.baseEngine
            r1.<init>(r2, r5)
            r0.<init>(r1)
            goto L6c
        Lb4:
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.CFBBlockCipher r0 = new org.bouncycastle.crypto.modes.CFBBlockCipher
            org.bouncycastle.crypto.BlockCipher r1 = r4.baseEngine
            int r2 = r1.getBlockSize()
            int r2 = r2 * 8
            r0.<init>(r1, r2)
            r5.<init>(r0)
            goto L18
        Lc8:
            java.lang.String r0 = r4.modeName
            java.lang.String r2 = "PGP"
            boolean r0 = r0.startsWith(r2)
            if (r0 == 0) goto Lf0
            java.lang.String r5 = r4.modeName
            java.lang.String r0 = "PGPCFBwithIV"
            boolean r5 = r5.equalsIgnoreCase(r0)
            org.bouncycastle.crypto.BlockCipher r0 = r4.baseEngine
            int r0 = r0.getBlockSize()
            r4.ivLength = r0
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r0 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.PGPCFBBlockCipher r1 = new org.bouncycastle.crypto.modes.PGPCFBBlockCipher
            org.bouncycastle.crypto.BlockCipher r2 = r4.baseEngine
            r1.<init>(r2, r5)
            r0.<init>(r1)
            goto L6c
        Lf0:
            java.lang.String r0 = r4.modeName
            java.lang.String r2 = "OpenPGPCFB"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L10a
            r4.ivLength = r1
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.OpenPGPCFBBlockCipher r0 = new org.bouncycastle.crypto.modes.OpenPGPCFBBlockCipher
            org.bouncycastle.crypto.BlockCipher r1 = r4.baseEngine
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L10a:
            java.lang.String r0 = r4.modeName
            java.lang.String r1 = "SIC"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L13b
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            r0 = 16
            if (r5 < r0) goto L133
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = new org.bouncycastle.crypto.BufferedBlockCipher
            org.bouncycastle.crypto.modes.SICBlockCipher r1 = new org.bouncycastle.crypto.modes.SICBlockCipher
            org.bouncycastle.crypto.BlockCipher r2 = r4.baseEngine
            r1.<init>(r2)
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L133:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Warning: SIC-Mode can become a twotime-pad if the blocksize of the cipher is too small. Use a cipher with a block size of at least 128 bits (e.g. AES)"
            r5.<init>(r0)
            throw r5
        L13b:
            java.lang.String r0 = r4.modeName
            java.lang.String r1 = "CTR"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L160
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = new org.bouncycastle.crypto.BufferedBlockCipher
            org.bouncycastle.crypto.modes.SICBlockCipher r1 = new org.bouncycastle.crypto.modes.SICBlockCipher
            org.bouncycastle.crypto.BlockCipher r2 = r4.baseEngine
            r1.<init>(r2)
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L160:
            java.lang.String r0 = r4.modeName
            java.lang.String r1 = "GOFB"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L185
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = new org.bouncycastle.crypto.BufferedBlockCipher
            org.bouncycastle.crypto.modes.GOFBBlockCipher r1 = new org.bouncycastle.crypto.modes.GOFBBlockCipher
            org.bouncycastle.crypto.BlockCipher r2 = r4.baseEngine
            r1.<init>(r2)
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L185:
            java.lang.String r0 = r4.modeName
            java.lang.String r1 = "CTS"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L1aa
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.CTSBlockCipher r0 = new org.bouncycastle.crypto.modes.CTSBlockCipher
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.BlockCipher r2 = r4.baseEngine
            r1.<init>(r2)
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L1aa:
            java.lang.String r0 = r4.modeName
            java.lang.String r1 = "CCM"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L1ca
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            org.bouncycastle.jce.provider.JCEBlockCipher$AEADGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$AEADGenericBlockCipher
            org.bouncycastle.crypto.modes.CCMBlockCipher r0 = new org.bouncycastle.crypto.modes.CCMBlockCipher
            org.bouncycastle.crypto.BlockCipher r1 = r4.baseEngine
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L1ca:
            java.lang.String r0 = r4.modeName
            java.lang.String r1 = "EAX"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L1eb
            org.bouncycastle.crypto.BlockCipher r5 = r4.baseEngine
            int r5 = r5.getBlockSize()
            r4.ivLength = r5
            org.bouncycastle.jce.provider.JCEBlockCipher$AEADGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$AEADGenericBlockCipher
            org.bouncycastle.crypto.modes.EAXBlockCipher r0 = new org.bouncycastle.crypto.modes.EAXBlockCipher
            org.bouncycastle.crypto.BlockCipher r1 = r4.baseEngine
            r0.<init>(r1)
            r5.<init>(r0)
            goto L18
        L1ea:
            return
        L1eb:
            java.security.NoSuchAlgorithmException r0 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't support mode "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    @Override
    protected void engineSetPadding(java.lang.String r5) throws javax.crypto.NoSuchPaddingException {
            r4 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r5)
            java.lang.String r1 = "NOPADDING"
            boolean r1 = r0.equals(r1)
            r2 = 0
            if (r1 == 0) goto L2b
            r4.padded = r2
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r5 = r4.cipher
            boolean r5 = r5.wrapOnNoPadding()
            if (r5 == 0) goto L134
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.BufferedBlockCipher r0 = new org.bouncycastle.crypto.BufferedBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r1 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r1 = r1.getUnderlyingCipher()
            r0.<init>(r1)
            r5.<init>(r0)
        L27:
            r4.cipher = r5
            goto L134
        L2b:
            java.lang.String r1 = r4.modeName
            java.lang.String r3 = "CCM"
            boolean r1 = r3.equals(r1)
            if (r1 != 0) goto L135
            java.lang.String r1 = r4.modeName
            java.lang.String r3 = "EAX"
            boolean r1 = r3.equals(r1)
            if (r1 != 0) goto L135
            java.lang.String r1 = "PKCS5PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L127
            java.lang.String r1 = "PKCS7PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L51
            goto L127
        L51:
            java.lang.String r1 = "ZEROBYTEPADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L6a
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            org.bouncycastle.crypto.paddings.ZeroBytePadding r1 = new org.bouncycastle.crypto.paddings.ZeroBytePadding
            r1.<init>()
            r5.<init>(r0, r1)
            goto L27
        L6a:
            java.lang.String r1 = "ISO10126PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L115
            java.lang.String r1 = "ISO10126-2PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L7c
            goto L115
        L7c:
            java.lang.String r1 = "X9.23PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L103
            java.lang.String r1 = "X923PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L8e
            goto L103
        L8e:
            java.lang.String r1 = "ISO7816-4PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto Lf1
            java.lang.String r1 = "ISO9797-1PADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L9f
            goto Lf1
        L9f:
            java.lang.String r1 = "TBCPADDING"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Lb9
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            org.bouncycastle.crypto.paddings.TBCPadding r1 = new org.bouncycastle.crypto.paddings.TBCPadding
            r1.<init>()
            r5.<init>(r0, r1)
            goto L27
        Lb9:
            java.lang.String r1 = "WITHCTS"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Ld5
            r4.padded = r2
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.crypto.modes.CTSBlockCipher r0 = new org.bouncycastle.crypto.modes.CTSBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r1 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r1 = r1.getUnderlyingCipher()
            r0.<init>(r1)
            r5.<init>(r0)
            goto L27
        Ld5:
            javax.crypto.NoSuchPaddingException r0 = new javax.crypto.NoSuchPaddingException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Padding "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = " unknown."
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        Lf1:
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            org.bouncycastle.crypto.paddings.ISO7816d4Padding r1 = new org.bouncycastle.crypto.paddings.ISO7816d4Padding
            r1.<init>()
            r5.<init>(r0, r1)
            goto L27
        L103:
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            org.bouncycastle.crypto.paddings.X923Padding r1 = new org.bouncycastle.crypto.paddings.X923Padding
            r1.<init>()
            r5.<init>(r0, r1)
            goto L27
        L115:
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            org.bouncycastle.crypto.paddings.ISO10126d2Padding r1 = new org.bouncycastle.crypto.paddings.ISO10126d2Padding
            r1.<init>()
            r5.<init>(r0, r1)
            goto L27
        L127:
            org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher r5 = new org.bouncycastle.jce.provider.JCEBlockCipher$BufferedGenericBlockCipher
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r4.cipher
            org.bouncycastle.crypto.BlockCipher r0 = r0.getUnderlyingCipher()
            r5.<init>(r0)
            goto L27
        L134:
            return
        L135:
            javax.crypto.NoSuchPaddingException r5 = new javax.crypto.NoSuchPaddingException
            java.lang.String r0 = "Only NoPadding can be used with AEAD modes."
            r5.<init>(r0)
            throw r5
    }

    @Override
    protected int engineUpdate(byte[] r7, int r8, int r9, byte[] r10, int r11) throws javax.crypto.ShortBufferException {
            r6 = this;
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r6.cipher     // Catch: org.bouncycastle.crypto.DataLengthException -> Lc
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            int r7 = r0.processBytes(r1, r2, r3, r4, r5)     // Catch: org.bouncycastle.crypto.DataLengthException -> Lc
            return r7
        Lc:
            r7 = move-exception
            javax.crypto.ShortBufferException r8 = new javax.crypto.ShortBufferException
            java.lang.String r7 = r7.getMessage()
            r8.<init>(r7)
            throw r8
    }

    @Override
    protected byte[] engineUpdate(byte[] r10, int r11, int r12) {
            r9 = this;
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r0 = r9.cipher
            int r0 = r0.getUpdateOutputSize(r12)
            r1 = 0
            if (r0 <= 0) goto L23
            byte[] r8 = new byte[r0]
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r2 = r9.cipher
            r7 = 0
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r8
            int r10 = r2.processBytes(r3, r4, r5, r6, r7)
            if (r10 != 0) goto L19
            return r1
        L19:
            if (r10 == r0) goto L22
            byte[] r11 = new byte[r10]
            r12 = 0
            java.lang.System.arraycopy(r8, r12, r11, r12, r10)
            return r11
        L22:
            return r8
        L23:
            org.bouncycastle.jce.provider.JCEBlockCipher$GenericBlockCipher r2 = r9.cipher
            r6 = 0
            r7 = 0
            r3 = r10
            r4 = r11
            r5 = r12
            r2.processBytes(r3, r4, r5, r6, r7)
            return r1
    }
}
