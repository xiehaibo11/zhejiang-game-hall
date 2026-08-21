package org.bouncycastle.crypto;

public class CipherKeyGenerator {
    protected java.security.SecureRandom random;
    protected int strength;

    public CipherKeyGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    public byte[] generateKey() {
            r2 = this;
            int r0 = r2.strength
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = r2.random
            r1.nextBytes(r0)
            return r0
    }

    public void init(org.bouncycastle.crypto.KeyGenerationParameters r2) {
            r1 = this;
            java.security.SecureRandom r0 = r2.getRandom()
            r1.random = r0
            int r2 = r2.getStrength()
            int r2 = r2 + 7
            int r2 = r2 / 8
            r1.strength = r2
            return
    }
}
