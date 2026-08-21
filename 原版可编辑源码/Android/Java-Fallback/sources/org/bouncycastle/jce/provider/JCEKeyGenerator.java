package org.bouncycastle.jce.provider;

public class JCEKeyGenerator extends javax.crypto.KeyGeneratorSpi {
    protected java.lang.String algName;
    protected int defaultKeySize;
    protected org.bouncycastle.crypto.CipherKeyGenerator engine;
    protected int keySize;
    protected boolean uninitialised;

    public static class Blowfish extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public Blowfish() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "Blowfish"
                r2 = 448(0x1c0, float:6.28E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class CAST6 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public CAST6() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "CAST6"
                r2 = 256(0x100, float:3.59E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class DES extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public DES() {
                r3 = this;
                org.bouncycastle.crypto.generators.DESKeyGenerator r0 = new org.bouncycastle.crypto.generators.DESKeyGenerator
                r0.<init>()
                java.lang.String r1 = "DES"
                r2 = 64
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class DESede extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        private boolean keySizeSet;

        public DESede() {
                r3 = this;
                org.bouncycastle.crypto.generators.DESedeKeyGenerator r0 = new org.bouncycastle.crypto.generators.DESedeKeyGenerator
                r0.<init>()
                java.lang.String r1 = "DESede"
                r2 = 192(0xc0, float:2.69E-43)
                r3.<init>(r1, r2, r0)
                r0 = 0
                r3.keySizeSet = r0
                return
        }

        @Override
        protected javax.crypto.SecretKey engineGenerateKey() {
                r5 = this;
                boolean r0 = r5.uninitialised
                r1 = 0
                if (r0 == 0) goto L18
                org.bouncycastle.crypto.CipherKeyGenerator r0 = r5.engine
                org.bouncycastle.crypto.KeyGenerationParameters r2 = new org.bouncycastle.crypto.KeyGenerationParameters
                java.security.SecureRandom r3 = new java.security.SecureRandom
                r3.<init>()
                int r4 = r5.defaultKeySize
                r2.<init>(r3, r4)
                r0.init(r2)
                r5.uninitialised = r1
            L18:
                boolean r0 = r5.keySizeSet
                if (r0 != 0) goto L31
                org.bouncycastle.crypto.CipherKeyGenerator r0 = r5.engine
                byte[] r0 = r0.generateKey()
                r2 = 16
                r3 = 8
                java.lang.System.arraycopy(r0, r1, r0, r2, r3)
                javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
                java.lang.String r2 = r5.algName
                r1.<init>(r0, r2)
                return r1
            L31:
                javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
                org.bouncycastle.crypto.CipherKeyGenerator r1 = r5.engine
                byte[] r1 = r1.generateKey()
                java.lang.String r2 = r5.algName
                r0.<init>(r1, r2)
                return r0
        }

        @Override
        protected void engineInit(int r1, java.security.SecureRandom r2) {
                r0 = this;
                super.engineInit(r1, r2)
                r1 = 1
                r0.keySizeSet = r1
                return
        }
    }

    public static class DESede3 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public DESede3() {
                r3 = this;
                org.bouncycastle.crypto.generators.DESedeKeyGenerator r0 = new org.bouncycastle.crypto.generators.DESedeKeyGenerator
                r0.<init>()
                java.lang.String r1 = "DESede3"
                r2 = 192(0xc0, float:2.69E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class GOST28147 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public GOST28147() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "GOST28147"
                r2 = 256(0x100, float:3.59E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HC128 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HC128() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HC128"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HC256 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HC256() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HC256"
                r2 = 256(0x100, float:3.59E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HMACSHA1 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HMACSHA1() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACSHA1"
                r2 = 160(0xa0, float:2.24E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HMACSHA224 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HMACSHA224() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACSHA224"
                r2 = 224(0xe0, float:3.14E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HMACSHA256 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HMACSHA256() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACSHA256"
                r2 = 256(0x100, float:3.59E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HMACSHA384 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HMACSHA384() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACSHA384"
                r2 = 384(0x180, float:5.38E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HMACSHA512 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HMACSHA512() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACSHA512"
                r2 = 512(0x200, float:7.17E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class HMACTIGER extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public HMACTIGER() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACTIGER"
                r2 = 192(0xc0, float:2.69E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class IDEA extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public IDEA() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "IDEA"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class MD2HMAC extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public MD2HMAC() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACMD2"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class MD4HMAC extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public MD4HMAC() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACMD4"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class MD5HMAC extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public MD5HMAC() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACMD5"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class RC2 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public RC2() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "RC2"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class RC4 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public RC4() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "RC4"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class RC5 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public RC5() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "RC5"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class RC564 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public RC564() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "RC5-64"
                r2 = 256(0x100, float:3.59E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class RC6 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public RC6() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "RC6"
                r2 = 256(0x100, float:3.59E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class RIPEMD128HMAC extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public RIPEMD128HMAC() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACRIPEMD128"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class RIPEMD160HMAC extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public RIPEMD160HMAC() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "HMACRIPEMD160"
                r2 = 160(0xa0, float:2.24E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class Rijndael extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public Rijndael() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "Rijndael"
                r2 = 192(0xc0, float:2.69E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class Salsa20 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public Salsa20() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "Salsa20"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class Serpent extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public Serpent() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "Serpent"
                r2 = 192(0xc0, float:2.69E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class Skipjack extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public Skipjack() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "SKIPJACK"
                r2 = 80
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class TEA extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public TEA() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "TEA"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class Twofish extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public Twofish() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "Twofish"
                r2 = 256(0x100, float:3.59E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class VMPC extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public VMPC() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "VMPC"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class VMPCKSA3 extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public VMPCKSA3() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "VMPC-KSA3"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    public static class XTEA extends org.bouncycastle.jce.provider.JCEKeyGenerator {
        public XTEA() {
                r3 = this;
                org.bouncycastle.crypto.CipherKeyGenerator r0 = new org.bouncycastle.crypto.CipherKeyGenerator
                r0.<init>()
                java.lang.String r1 = "XTEA"
                r2 = 128(0x80, float:1.8E-43)
                r3.<init>(r1, r2, r0)
                return
        }
    }

    protected JCEKeyGenerator(java.lang.String r2, int r3, org.bouncycastle.crypto.CipherKeyGenerator r4) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.uninitialised = r0
            r1.algName = r2
            r1.defaultKeySize = r3
            r1.keySize = r3
            r1.engine = r4
            return
    }

    @Override
    protected javax.crypto.SecretKey engineGenerateKey() {
            r4 = this;
            boolean r0 = r4.uninitialised
            if (r0 == 0) goto L18
            org.bouncycastle.crypto.CipherKeyGenerator r0 = r4.engine
            org.bouncycastle.crypto.KeyGenerationParameters r1 = new org.bouncycastle.crypto.KeyGenerationParameters
            java.security.SecureRandom r2 = new java.security.SecureRandom
            r2.<init>()
            int r3 = r4.defaultKeySize
            r1.<init>(r2, r3)
            r0.init(r1)
            r0 = 0
            r4.uninitialised = r0
        L18:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec
            org.bouncycastle.crypto.CipherKeyGenerator r1 = r4.engine
            byte[] r1 = r1.generateKey()
            java.lang.String r2 = r4.algName
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    protected void engineInit(int r3, java.security.SecureRandom r4) {
            r2 = this;
            org.bouncycastle.crypto.CipherKeyGenerator r0 = r2.engine     // Catch: java.lang.IllegalArgumentException -> Le
            org.bouncycastle.crypto.KeyGenerationParameters r1 = new org.bouncycastle.crypto.KeyGenerationParameters     // Catch: java.lang.IllegalArgumentException -> Le
            r1.<init>(r4, r3)     // Catch: java.lang.IllegalArgumentException -> Le
            r0.init(r1)     // Catch: java.lang.IllegalArgumentException -> Le
            r3 = 0
            r2.uninitialised = r3     // Catch: java.lang.IllegalArgumentException -> Le
            return
        Le:
            r3 = move-exception
            java.security.InvalidParameterException r4 = new java.security.InvalidParameterException
            java.lang.String r3 = r3.getMessage()
            r4.<init>(r3)
            throw r4
    }

    @Override
    protected void engineInit(java.security.SecureRandom r4) {
            r3 = this;
            if (r4 == 0) goto L11
            org.bouncycastle.crypto.CipherKeyGenerator r0 = r3.engine
            org.bouncycastle.crypto.KeyGenerationParameters r1 = new org.bouncycastle.crypto.KeyGenerationParameters
            int r2 = r3.defaultKeySize
            r1.<init>(r4, r2)
            r0.init(r1)
            r4 = 0
            r3.uninitialised = r4
        L11:
            return
    }

    @Override
    protected void engineInit(java.security.spec.AlgorithmParameterSpec r1, java.security.SecureRandom r2) throws java.security.InvalidAlgorithmParameterException {
            r0 = this;
            java.security.InvalidAlgorithmParameterException r1 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r2 = "Not Implemented"
            r1.<init>(r2)
            throw r1
    }
}
