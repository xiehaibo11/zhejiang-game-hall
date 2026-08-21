package org.bouncycastle.crypto.prng;

public interface RandomGenerator {
    void addSeedMaterial(long r1);

    void addSeedMaterial(byte[] r1);

    void nextBytes(byte[] r1);

    void nextBytes(byte[] r1, int r2, int r3);
}
