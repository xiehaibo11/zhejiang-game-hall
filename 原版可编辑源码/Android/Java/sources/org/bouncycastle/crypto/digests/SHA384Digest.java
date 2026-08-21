package org.bouncycastle.crypto.digests;

import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

public class SHA384Digest extends LongDigest {
    private static final int DIGEST_LENGTH = 48;

    public SHA384Digest() {
    }

    public SHA384Digest(SHA384Digest sHA384Digest) {
        super(sHA384Digest);
    }

    @Override
    public int doFinal(byte[] bArr, int i) {
        finish();
        unpackWord(this.H1, bArr, i);
        unpackWord(this.H2, bArr, i + 8);
        unpackWord(this.H3, bArr, i + 16);
        unpackWord(this.H4, bArr, i + 24);
        unpackWord(this.H5, bArr, i + 32);
        unpackWord(this.H6, bArr, i + 40);
        reset();
        return 48;
    }

    @Override
    public String getAlgorithmName() {
        return MessageDigestAlgorithms.SHA_384;
    }

    @Override
    public int getDigestSize() {
        return 48;
    }

    @Override
    public void reset() {
        super.reset();
        this.H1 = -3766243637369397544L;
        this.H2 = 7105036623409894663L;
        this.H3 = -7973340178411365097L;
        this.H4 = 1526699215303891257L;
        this.H5 = 7436329637833083697L;
        this.H6 = -8163818279084223215L;
        this.H7 = -2662702644619276377L;
        this.H8 = 5167115440072839076L;
    }
}
