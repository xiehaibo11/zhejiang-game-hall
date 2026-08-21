package org.bouncycastle.crypto.digests;

import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

public class SHA512Digest extends LongDigest {
    private static final int DIGEST_LENGTH = 64;

    public SHA512Digest() {
    }

    public SHA512Digest(SHA512Digest sHA512Digest) {
        super(sHA512Digest);
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
        unpackWord(this.H7, bArr, i + 48);
        unpackWord(this.H8, bArr, i + 56);
        reset();
        return 64;
    }

    @Override
    public String getAlgorithmName() {
        return MessageDigestAlgorithms.SHA_512;
    }

    @Override
    public int getDigestSize() {
        return 64;
    }

    @Override
    public void reset() {
        super.reset();
        this.H1 = 7640891576956012808L;
        this.H2 = -4942790177534073029L;
        this.H3 = 4354685564936845355L;
        this.H4 = -6534734903238641935L;
        this.H5 = 5840696475078001361L;
        this.H6 = -7276294671716946913L;
        this.H7 = 2270897969802886507L;
        this.H8 = 6620516959819538809L;
    }
}
