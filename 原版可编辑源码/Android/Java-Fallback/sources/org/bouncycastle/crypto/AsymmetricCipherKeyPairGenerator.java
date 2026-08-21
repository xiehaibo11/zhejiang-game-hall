package org.bouncycastle.crypto;

public interface AsymmetricCipherKeyPairGenerator {
    org.bouncycastle.crypto.AsymmetricCipherKeyPair generateKeyPair();

    void init(org.bouncycastle.crypto.KeyGenerationParameters r1);
}
