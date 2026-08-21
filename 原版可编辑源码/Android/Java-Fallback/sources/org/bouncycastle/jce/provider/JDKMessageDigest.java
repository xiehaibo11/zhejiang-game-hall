package org.bouncycastle.jce.provider;

public class JDKMessageDigest extends java.security.MessageDigest {
    org.bouncycastle.crypto.Digest digest;

    public static class GOST3411 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public GOST3411() {
                r1 = this;
                org.bouncycastle.crypto.digests.GOST3411Digest r0 = new org.bouncycastle.crypto.digests.GOST3411Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$GOST3411 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.GOST3411) r0
                org.bouncycastle.crypto.digests.GOST3411Digest r1 = new org.bouncycastle.crypto.digests.GOST3411Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.GOST3411Digest r2 = (org.bouncycastle.crypto.digests.GOST3411Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class MD2 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public MD2() {
                r1 = this;
                org.bouncycastle.crypto.digests.MD2Digest r0 = new org.bouncycastle.crypto.digests.MD2Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$MD2 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.MD2) r0
                org.bouncycastle.crypto.digests.MD2Digest r1 = new org.bouncycastle.crypto.digests.MD2Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.MD2Digest r2 = (org.bouncycastle.crypto.digests.MD2Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class MD4 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public MD4() {
                r1 = this;
                org.bouncycastle.crypto.digests.MD4Digest r0 = new org.bouncycastle.crypto.digests.MD4Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$MD4 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.MD4) r0
                org.bouncycastle.crypto.digests.MD4Digest r1 = new org.bouncycastle.crypto.digests.MD4Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.MD4Digest r2 = (org.bouncycastle.crypto.digests.MD4Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class MD5 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public MD5() {
                r1 = this;
                org.bouncycastle.crypto.digests.MD5Digest r0 = new org.bouncycastle.crypto.digests.MD5Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$MD5 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.MD5) r0
                org.bouncycastle.crypto.digests.MD5Digest r1 = new org.bouncycastle.crypto.digests.MD5Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.MD5Digest r2 = (org.bouncycastle.crypto.digests.MD5Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class RIPEMD128 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public RIPEMD128() {
                r1 = this;
                org.bouncycastle.crypto.digests.RIPEMD128Digest r0 = new org.bouncycastle.crypto.digests.RIPEMD128Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD128 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.RIPEMD128) r0
                org.bouncycastle.crypto.digests.RIPEMD128Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD128Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.RIPEMD128Digest r2 = (org.bouncycastle.crypto.digests.RIPEMD128Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class RIPEMD160 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public RIPEMD160() {
                r1 = this;
                org.bouncycastle.crypto.digests.RIPEMD160Digest r0 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD160 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.RIPEMD160) r0
                org.bouncycastle.crypto.digests.RIPEMD160Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.RIPEMD160Digest r2 = (org.bouncycastle.crypto.digests.RIPEMD160Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class RIPEMD256 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public RIPEMD256() {
                r1 = this;
                org.bouncycastle.crypto.digests.RIPEMD256Digest r0 = new org.bouncycastle.crypto.digests.RIPEMD256Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD256 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.RIPEMD256) r0
                org.bouncycastle.crypto.digests.RIPEMD256Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD256Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.RIPEMD256Digest r2 = (org.bouncycastle.crypto.digests.RIPEMD256Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class RIPEMD320 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public RIPEMD320() {
                r1 = this;
                org.bouncycastle.crypto.digests.RIPEMD320Digest r0 = new org.bouncycastle.crypto.digests.RIPEMD320Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD320 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.RIPEMD320) r0
                org.bouncycastle.crypto.digests.RIPEMD320Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD320Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.RIPEMD320Digest r2 = (org.bouncycastle.crypto.digests.RIPEMD320Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class SHA1 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public SHA1() {
                r1 = this;
                org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$SHA1 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.SHA1) r0
                org.bouncycastle.crypto.digests.SHA1Digest r1 = new org.bouncycastle.crypto.digests.SHA1Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.SHA1Digest r2 = (org.bouncycastle.crypto.digests.SHA1Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class SHA224 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public SHA224() {
                r1 = this;
                org.bouncycastle.crypto.digests.SHA224Digest r0 = new org.bouncycastle.crypto.digests.SHA224Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$SHA224 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.SHA224) r0
                org.bouncycastle.crypto.digests.SHA224Digest r1 = new org.bouncycastle.crypto.digests.SHA224Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.SHA224Digest r2 = (org.bouncycastle.crypto.digests.SHA224Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class SHA256 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public SHA256() {
                r1 = this;
                org.bouncycastle.crypto.digests.SHA256Digest r0 = new org.bouncycastle.crypto.digests.SHA256Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$SHA256 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.SHA256) r0
                org.bouncycastle.crypto.digests.SHA256Digest r1 = new org.bouncycastle.crypto.digests.SHA256Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.SHA256Digest r2 = (org.bouncycastle.crypto.digests.SHA256Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class SHA384 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public SHA384() {
                r1 = this;
                org.bouncycastle.crypto.digests.SHA384Digest r0 = new org.bouncycastle.crypto.digests.SHA384Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$SHA384 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.SHA384) r0
                org.bouncycastle.crypto.digests.SHA384Digest r1 = new org.bouncycastle.crypto.digests.SHA384Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.SHA384Digest r2 = (org.bouncycastle.crypto.digests.SHA384Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class SHA512 extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public SHA512() {
                r1 = this;
                org.bouncycastle.crypto.digests.SHA512Digest r0 = new org.bouncycastle.crypto.digests.SHA512Digest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$SHA512 r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.SHA512) r0
                org.bouncycastle.crypto.digests.SHA512Digest r1 = new org.bouncycastle.crypto.digests.SHA512Digest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.SHA512Digest r2 = (org.bouncycastle.crypto.digests.SHA512Digest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class Tiger extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public Tiger() {
                r1 = this;
                org.bouncycastle.crypto.digests.TigerDigest r0 = new org.bouncycastle.crypto.digests.TigerDigest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$Tiger r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.Tiger) r0
                org.bouncycastle.crypto.digests.TigerDigest r1 = new org.bouncycastle.crypto.digests.TigerDigest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.TigerDigest r2 = (org.bouncycastle.crypto.digests.TigerDigest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    public static class Whirlpool extends org.bouncycastle.jce.provider.JDKMessageDigest implements java.lang.Cloneable {
        public Whirlpool() {
                r1 = this;
                org.bouncycastle.crypto.digests.WhirlpoolDigest r0 = new org.bouncycastle.crypto.digests.WhirlpoolDigest
                r0.<init>()
                r1.<init>(r0)
                return
        }

        @Override
        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r3 = this;
                java.lang.Object r0 = super.clone()
                org.bouncycastle.jce.provider.JDKMessageDigest$Whirlpool r0 = (org.bouncycastle.jce.provider.JDKMessageDigest.Whirlpool) r0
                org.bouncycastle.crypto.digests.WhirlpoolDigest r1 = new org.bouncycastle.crypto.digests.WhirlpoolDigest
                org.bouncycastle.crypto.Digest r2 = r3.digest
                org.bouncycastle.crypto.digests.WhirlpoolDigest r2 = (org.bouncycastle.crypto.digests.WhirlpoolDigest) r2
                r1.<init>(r2)
                r0.digest = r1
                return r0
        }
    }

    protected JDKMessageDigest(org.bouncycastle.crypto.Digest r2) {
            r1 = this;
            java.lang.String r0 = r2.getAlgorithmName()
            r1.<init>(r0)
            r1.digest = r2
            return
    }

    @Override
    public byte[] engineDigest() {
            r3 = this;
            org.bouncycastle.crypto.Digest r0 = r3.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Digest r1 = r3.digest
            r2 = 0
            r1.doFinal(r0, r2)
            return r0
    }

    @Override
    public void engineReset() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.reset()
            return
    }

    @Override
    public void engineUpdate(byte r2) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2)
            return
    }

    @Override
    public void engineUpdate(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2, r3, r4)
            return
    }
}
