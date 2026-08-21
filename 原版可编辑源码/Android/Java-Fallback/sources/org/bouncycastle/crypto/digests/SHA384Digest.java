package org.bouncycastle.crypto.digests;

public class SHA384Digest extends org.bouncycastle.crypto.digests.LongDigest {
    private static final int DIGEST_LENGTH = 48;

    public SHA384Digest() {
            r0 = this;
            r0.<init>()
            return
    }

    public SHA384Digest(org.bouncycastle.crypto.digests.SHA384Digest r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public int doFinal(byte[] r4, int r5) {
            r3 = this;
            r3.finish()
            long r0 = r3.H1
            r3.unpackWord(r0, r4, r5)
            long r0 = r3.H2
            int r2 = r5 + 8
            r3.unpackWord(r0, r4, r2)
            long r0 = r3.H3
            int r2 = r5 + 16
            r3.unpackWord(r0, r4, r2)
            long r0 = r3.H4
            int r2 = r5 + 24
            r3.unpackWord(r0, r4, r2)
            long r0 = r3.H5
            int r2 = r5 + 32
            r3.unpackWord(r0, r4, r2)
            long r0 = r3.H6
            int r5 = r5 + 40
            r3.unpackWord(r0, r4, r5)
            r3.reset()
            r4 = 48
            return r4
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "SHA-384"
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 48
            return r0
    }

    @Override
    public void reset() {
            r2 = this;
            super.reset()
            r0 = -3766243637369397544(0xcbbb9d5dc1059ed8, double:-6.771107636816954E56)
            r2.H1 = r0
            r0 = 7105036623409894663(0x629a292a367cd507, double:9.641589608180943E166)
            r2.H2 = r0
            r0 = -7973340178411365097(0x9159015a3070dd17, double:-4.222163200156129E-225)
            r2.H3 = r0
            r0 = 1526699215303891257(0x152fecd8f70e5939, double:1.2429865193970183E-206)
            r2.H4 = r0
            r0 = 7436329637833083697(0x67332667ffc00b31, double:1.3331733573491853E189)
            r2.H5 = r0
            r0 = -8163818279084223215(0x8eb44a8768581511, double:-7.790218494879152E-238)
            r2.H6 = r0
            r0 = -2662702644619276377(0xdb0c2e0d64f98fa7, double:-3.9066766103558855E130)
            r2.H7 = r0
            r0 = 5167115440072839076(0x47b5481dbefa4fa4, double:2.8288236605994657E37)
            r2.H8 = r0
            return
    }
}
