package org.bouncycastle.crypto.digests;

public class SHA512Digest extends org.bouncycastle.crypto.digests.LongDigest {
    private static final int DIGEST_LENGTH = 64;

    public SHA512Digest() {
            r0 = this;
            r0.<init>()
            return
    }

    public SHA512Digest(org.bouncycastle.crypto.digests.SHA512Digest r1) {
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
            int r2 = r5 + 40
            r3.unpackWord(r0, r4, r2)
            long r0 = r3.H7
            int r2 = r5 + 48
            r3.unpackWord(r0, r4, r2)
            long r0 = r3.H8
            int r5 = r5 + 56
            r3.unpackWord(r0, r4, r5)
            r3.reset()
            r4 = 64
            return r4
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "SHA-512"
            return r0
    }

    @Override
    public int getDigestSize() {
            r1 = this;
            r0 = 64
            return r0
    }

    @Override
    public void reset() {
            r2 = this;
            super.reset()
            r0 = 7640891576956012808(0x6a09e667f3bcc908, double:6.344059688352415E202)
            r2.H1 = r0
            r0 = -4942790177534073029(0xbb67ae8584caa73b, double:-1.5671250923562117E-22)
            r2.H2 = r0
            r0 = 4354685564936845355(0x3c6ef372fe94f82b, double:1.342284505169847E-17)
            r2.H3 = r0
            r0 = -6534734903238641935(0xa54ff53a5f1d36f1, double:-5.7630236296758864E-129)
            r2.H4 = r0
            r0 = 5840696475078001361(0x510e527fade682d1, double:2.876275032471325E82)
            r2.H5 = r0
            r0 = -7276294671716946913(0x9b05688c2b3e6c1f, double:-1.6509600469840327E-178)
            r2.H6 = r0
            r0 = 2270897969802886507(0x1f83d9abfb41bd6b, double:7.229011495228878E-157)
            r2.H7 = r0
            r0 = 6620516959819538809(0x5be0cd19137e2179, double:3.816167663240759E134)
            r2.H8 = r0
            return
    }
}
