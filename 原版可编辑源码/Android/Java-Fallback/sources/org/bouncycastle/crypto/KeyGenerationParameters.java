package org.bouncycastle.crypto;

public class KeyGenerationParameters {
    private java.security.SecureRandom random;
    private int strength;

    public KeyGenerationParameters(java.security.SecureRandom r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.random = r1
            r0.strength = r2
            return
    }

    public java.security.SecureRandom getRandom() {
            r1 = this;
            java.security.SecureRandom r0 = r1.random
            return r0
    }

    public int getStrength() {
            r1 = this;
            int r0 = r1.strength
            return r0
    }
}
