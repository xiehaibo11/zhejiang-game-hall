package org.bouncycastle.crypto.prng;

import org.bouncycastle.crypto.Digest;

public class DigestRandomGenerator implements RandomGenerator {
    private long counter = 1;
    private Digest digest;
    private byte[] state;

    public DigestRandomGenerator(Digest digest) {
        this.digest = digest;
        this.state = new byte[digest.getDigestSize()];
    }

    private void digestDoFinal(byte[] bArr) {
        this.digest.doFinal(bArr, 0);
    }

    private void digestUpdate(long j) {
        for (int i = 0; i != 8; i++) {
            this.digest.update((byte) j);
            j >>>= 8;
        }
    }

    private void digestUpdate(byte[] bArr) {
        this.digest.update(bArr, 0, bArr.length);
    }

    @Override
    public void addSeedMaterial(long j) {
        synchronized (this) {
            for (int i = 0; i != 8; i++) {
                digestUpdate((byte) j);
                j >>>= 8;
            }
        }
    }

    @Override
    public void addSeedMaterial(byte[] bArr) {
        synchronized (this) {
            digestUpdate(bArr);
        }
    }

    @Override
    public void nextBytes(byte[] bArr) {
        nextBytes(bArr, 0, bArr.length);
    }

    @Override
    public void nextBytes(byte[] bArr, int i, int i2) {
        synchronized (this) {
            digestDoFinal(this.state);
            int i3 = i2 + i;
            int i4 = 0;
            while (i != i3) {
                if (i4 == this.state.length) {
                    long j = this.counter;
                    this.counter = 1 + j;
                    digestUpdate(j);
                    digestUpdate(this.state);
                    digestDoFinal(this.state);
                    i4 = 0;
                }
                bArr[i] = this.state[i4];
                i++;
                i4++;
            }
            long j2 = this.counter;
            this.counter = 1 + j2;
            digestUpdate(j2);
            digestUpdate(this.state);
        }
    }
}
