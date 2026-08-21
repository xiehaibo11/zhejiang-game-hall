package org.bouncycastle.jce.provider;

public class JCEMac extends javax.crypto.MacSpi implements org.bouncycastle.jce.provider.PBE {
    private int keySize;
    private org.bouncycastle.crypto.Mac macEngine;
    private int pbeHash;
    private int pbeType;

    public static class DES extends org.bouncycastle.jce.provider.JCEMac {
        public DES() {
                r2 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class DES9797Alg3 extends org.bouncycastle.jce.provider.JCEMac {
        public DES9797Alg3() {
                r2 = this;
                org.bouncycastle.crypto.macs.ISO9797Alg3Mac r0 = new org.bouncycastle.crypto.macs.ISO9797Alg3Mac
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class DES9797Alg3with7816d4 extends org.bouncycastle.jce.provider.JCEMac {
        public DES9797Alg3with7816d4() {
                r3 = this;
                org.bouncycastle.crypto.macs.ISO9797Alg3Mac r0 = new org.bouncycastle.crypto.macs.ISO9797Alg3Mac
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                org.bouncycastle.crypto.paddings.ISO7816d4Padding r2 = new org.bouncycastle.crypto.paddings.ISO7816d4Padding
                r2.<init>()
                r0.<init>(r1, r2)
                r3.<init>(r0)
                return
        }
    }

    public static class DESCFB8 extends org.bouncycastle.jce.provider.JCEMac {
        public DESCFB8() {
                r2 = this;
                org.bouncycastle.crypto.macs.CFBBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CFBBlockCipherMac
                org.bouncycastle.crypto.engines.DESEngine r1 = new org.bouncycastle.crypto.engines.DESEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class DESede extends org.bouncycastle.jce.provider.JCEMac {
        public DESede() {
                r2 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class DESede64 extends org.bouncycastle.jce.provider.JCEMac {
        public DESede64() {
                r3 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r2 = 64
                r0.<init>(r1, r2)
                r3.<init>(r0)
                return
        }
    }

    public static class DESede64with7816d4 extends org.bouncycastle.jce.provider.JCEMac {
        public DESede64with7816d4() {
                r4 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                org.bouncycastle.crypto.paddings.ISO7816d4Padding r2 = new org.bouncycastle.crypto.paddings.ISO7816d4Padding
                r2.<init>()
                r3 = 64
                r0.<init>(r1, r3, r2)
                r4.<init>(r0)
                return
        }
    }

    public static class DESedeCFB8 extends org.bouncycastle.jce.provider.JCEMac {
        public DESedeCFB8() {
                r2 = this;
                org.bouncycastle.crypto.macs.CFBBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CFBBlockCipherMac
                org.bouncycastle.crypto.engines.DESedeEngine r1 = new org.bouncycastle.crypto.engines.DESedeEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class GOST28147 extends org.bouncycastle.jce.provider.JCEMac {
        public GOST28147() {
                r1 = this;
                org.bouncycastle.crypto.macs.GOST28147Mac r0 = new org.bouncycastle.crypto.macs.GOST28147Mac
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    public static class IDEA extends org.bouncycastle.jce.provider.JCEMac {
        public IDEA() {
                r2 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.IDEAEngine r1 = new org.bouncycastle.crypto.engines.IDEAEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class IDEACFB8 extends org.bouncycastle.jce.provider.JCEMac {
        public IDEACFB8() {
                r2 = this;
                org.bouncycastle.crypto.macs.CFBBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CFBBlockCipherMac
                org.bouncycastle.crypto.engines.IDEAEngine r1 = new org.bouncycastle.crypto.engines.IDEAEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class MD2 extends org.bouncycastle.jce.provider.JCEMac {
        public MD2() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.MD2Digest r1 = new org.bouncycastle.crypto.digests.MD2Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class MD4 extends org.bouncycastle.jce.provider.JCEMac {
        public MD4() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.MD4Digest r1 = new org.bouncycastle.crypto.digests.MD4Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class MD5 extends org.bouncycastle.jce.provider.JCEMac {
        public MD5() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.MD5Digest r1 = new org.bouncycastle.crypto.digests.MD5Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class OldSHA384 extends org.bouncycastle.jce.provider.JCEMac {
        public OldSHA384() {
                r2 = this;
                org.bouncycastle.crypto.macs.OldHMac r0 = new org.bouncycastle.crypto.macs.OldHMac
                org.bouncycastle.crypto.digests.SHA384Digest r1 = new org.bouncycastle.crypto.digests.SHA384Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class OldSHA512 extends org.bouncycastle.jce.provider.JCEMac {
        public OldSHA512() {
                r2 = this;
                org.bouncycastle.crypto.macs.OldHMac r0 = new org.bouncycastle.crypto.macs.OldHMac
                org.bouncycastle.crypto.digests.SHA512Digest r1 = new org.bouncycastle.crypto.digests.SHA512Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class PBEWithRIPEMD160 extends org.bouncycastle.jce.provider.JCEMac {
        public PBEWithRIPEMD160() {
                r3 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.RIPEMD160Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r1.<init>()
                r0.<init>(r1)
                r1 = 2
                r2 = 160(0xa0, float:2.24E-43)
                r3.<init>(r0, r1, r1, r2)
                return
        }
    }

    public static class PBEWithSHA extends org.bouncycastle.jce.provider.JCEMac {
        public PBEWithSHA() {
                r4 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA1Digest r1 = new org.bouncycastle.crypto.digests.SHA1Digest
                r1.<init>()
                r0.<init>(r1)
                r1 = 2
                r2 = 1
                r3 = 160(0xa0, float:2.24E-43)
                r4.<init>(r0, r1, r2, r3)
                return
        }
    }

    public static class PBEWithTiger extends org.bouncycastle.jce.provider.JCEMac {
        public PBEWithTiger() {
                r4 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.TigerDigest r1 = new org.bouncycastle.crypto.digests.TigerDigest
                r1.<init>()
                r0.<init>(r1)
                r1 = 2
                r2 = 3
                r3 = 192(0xc0, float:2.69E-43)
                r4.<init>(r0, r1, r2, r3)
                return
        }
    }

    public static class RC2 extends org.bouncycastle.jce.provider.JCEMac {
        public RC2() {
                r2 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.RC2Engine r1 = new org.bouncycastle.crypto.engines.RC2Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class RC2CFB8 extends org.bouncycastle.jce.provider.JCEMac {
        public RC2CFB8() {
                r2 = this;
                org.bouncycastle.crypto.macs.CFBBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CFBBlockCipherMac
                org.bouncycastle.crypto.engines.RC2Engine r1 = new org.bouncycastle.crypto.engines.RC2Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class RC5 extends org.bouncycastle.jce.provider.JCEMac {
        public RC5() {
                r2 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.RC532Engine r1 = new org.bouncycastle.crypto.engines.RC532Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class RC5CFB8 extends org.bouncycastle.jce.provider.JCEMac {
        public RC5CFB8() {
                r2 = this;
                org.bouncycastle.crypto.macs.CFBBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CFBBlockCipherMac
                org.bouncycastle.crypto.engines.RC532Engine r1 = new org.bouncycastle.crypto.engines.RC532Engine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class RIPEMD128 extends org.bouncycastle.jce.provider.JCEMac {
        public RIPEMD128() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.RIPEMD128Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD128Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class RIPEMD160 extends org.bouncycastle.jce.provider.JCEMac {
        public RIPEMD160() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.RIPEMD160Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class SHA1 extends org.bouncycastle.jce.provider.JCEMac {
        public SHA1() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA1Digest r1 = new org.bouncycastle.crypto.digests.SHA1Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class SHA224 extends org.bouncycastle.jce.provider.JCEMac {
        public SHA224() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA224Digest r1 = new org.bouncycastle.crypto.digests.SHA224Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class SHA256 extends org.bouncycastle.jce.provider.JCEMac {
        public SHA256() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA256Digest r1 = new org.bouncycastle.crypto.digests.SHA256Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class SHA384 extends org.bouncycastle.jce.provider.JCEMac {
        public SHA384() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA384Digest r1 = new org.bouncycastle.crypto.digests.SHA384Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class SHA512 extends org.bouncycastle.jce.provider.JCEMac {
        public SHA512() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.SHA512Digest r1 = new org.bouncycastle.crypto.digests.SHA512Digest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class Skipjack extends org.bouncycastle.jce.provider.JCEMac {
        public Skipjack() {
                r2 = this;
                org.bouncycastle.crypto.macs.CBCBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CBCBlockCipherMac
                org.bouncycastle.crypto.engines.SkipjackEngine r1 = new org.bouncycastle.crypto.engines.SkipjackEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class SkipjackCFB8 extends org.bouncycastle.jce.provider.JCEMac {
        public SkipjackCFB8() {
                r2 = this;
                org.bouncycastle.crypto.macs.CFBBlockCipherMac r0 = new org.bouncycastle.crypto.macs.CFBBlockCipherMac
                org.bouncycastle.crypto.engines.SkipjackEngine r1 = new org.bouncycastle.crypto.engines.SkipjackEngine
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class Tiger extends org.bouncycastle.jce.provider.JCEMac {
        public Tiger() {
                r2 = this;
                org.bouncycastle.crypto.macs.HMac r0 = new org.bouncycastle.crypto.macs.HMac
                org.bouncycastle.crypto.digests.TigerDigest r1 = new org.bouncycastle.crypto.digests.TigerDigest
                r1.<init>()
                r0.<init>(r1)
                r2.<init>(r0)
                return
        }
    }

    public static class VMPC extends org.bouncycastle.jce.provider.JCEMac {
        public VMPC() {
                r1 = this;
                org.bouncycastle.crypto.macs.VMPCMac r0 = new org.bouncycastle.crypto.macs.VMPCMac
                r0.<init>()
                r1.<init>(r0)
                return
        }
    }

    protected JCEMac(org.bouncycastle.crypto.Mac r2) {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.pbeType = r0
            r0 = 1
            r1.pbeHash = r0
            r0 = 160(0xa0, float:2.24E-43)
            r1.keySize = r0
            r1.macEngine = r2
            return
    }

    protected JCEMac(org.bouncycastle.crypto.Mac r2, int r3, int r4, int r5) {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.pbeType = r0
            r0 = 1
            r1.pbeHash = r0
            r0 = 160(0xa0, float:2.24E-43)
            r1.keySize = r0
            r1.macEngine = r2
            r1.pbeType = r3
            r1.pbeHash = r4
            r1.keySize = r5
            return
    }

    @Override
    protected byte[] engineDoFinal() {
            r3 = this;
            int r0 = r3.engineGetMacLength()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Mac r1 = r3.macEngine
            r2 = 0
            r1.doFinal(r0, r2)
            return r0
    }

    @Override
    protected int engineGetMacLength() {
            r1 = this;
            org.bouncycastle.crypto.Mac r0 = r1.macEngine
            int r0 = r0.getMacSize()
            return r0
    }

    @Override
    protected void engineInit(java.security.Key r3, java.security.spec.AlgorithmParameterSpec r4) throws java.security.InvalidKeyException, java.security.InvalidAlgorithmParameterException {
            r2 = this;
            if (r3 == 0) goto L58
            boolean r0 = r3 instanceof org.bouncycastle.jce.provider.JCEPBEKey
            if (r0 == 0) goto L24
            org.bouncycastle.jce.provider.JCEPBEKey r3 = (org.bouncycastle.jce.provider.JCEPBEKey) r3
            org.bouncycastle.crypto.CipherParameters r0 = r3.getParam()
            if (r0 == 0) goto L13
            org.bouncycastle.crypto.CipherParameters r3 = r3.getParam()
            goto L4a
        L13:
            boolean r0 = r4 instanceof javax.crypto.spec.PBEParameterSpec
            if (r0 == 0) goto L1c
            org.bouncycastle.crypto.CipherParameters r3 = org.bouncycastle.jce.provider.PBE.Util.makePBEMacParameters(r3, r4)
            goto L4a
        L1c:
            java.security.InvalidAlgorithmParameterException r3 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r4 = "PBE requires PBE parameters to be set."
            r3.<init>(r4)
            throw r3
        L24:
            boolean r0 = r4 instanceof javax.crypto.spec.IvParameterSpec
            if (r0 == 0) goto L3e
            org.bouncycastle.crypto.params.ParametersWithIV r0 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r3 = r3.getEncoded()
            r1.<init>(r3)
            javax.crypto.spec.IvParameterSpec r4 = (javax.crypto.spec.IvParameterSpec) r4
            byte[] r3 = r4.getIV()
            r0.<init>(r1, r3)
            r3 = r0
            goto L4a
        L3e:
            if (r4 != 0) goto L50
            org.bouncycastle.crypto.params.KeyParameter r4 = new org.bouncycastle.crypto.params.KeyParameter
            byte[] r3 = r3.getEncoded()
            r4.<init>(r3)
            r3 = r4
        L4a:
            org.bouncycastle.crypto.Mac r4 = r2.macEngine
            r4.init(r3)
            return
        L50:
            java.security.InvalidAlgorithmParameterException r3 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r4 = "unknown parameter type."
            r3.<init>(r4)
            throw r3
        L58:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            java.lang.String r4 = "key is null"
            r3.<init>(r4)
            throw r3
    }

    @Override
    protected void engineReset() {
            r1 = this;
            org.bouncycastle.crypto.Mac r0 = r1.macEngine
            r0.reset()
            return
    }

    @Override
    protected void engineUpdate(byte r2) {
            r1 = this;
            org.bouncycastle.crypto.Mac r0 = r1.macEngine
            r0.update(r2)
            return
    }

    @Override
    protected void engineUpdate(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.Mac r0 = r1.macEngine
            r0.update(r2, r3, r4)
            return
    }
}
