package org.bouncycastle.crypto.generators;

public class DHKeyPairGenerator implements org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator {
    private org.bouncycastle.crypto.generators.DHKeyGeneratorHelper helper;
    private org.bouncycastle.crypto.params.DHKeyGenerationParameters param;

    public DHKeyPairGenerator() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.generators.DHKeyGeneratorHelper r0 = org.bouncycastle.crypto.generators.DHKeyGeneratorHelper.INSTANCE
            r1.helper = r0
            return
    }

    @Override
    public org.bouncycastle.crypto.AsymmetricCipherKeyPair generateKeyPair() {
            r5 = this;
            org.bouncycastle.crypto.params.DHKeyGenerationParameters r0 = r5.param
            org.bouncycastle.crypto.params.DHParameters r0 = r0.getParameters()
            java.math.BigInteger r1 = r0.getP()
            org.bouncycastle.crypto.generators.DHKeyGeneratorHelper r2 = r5.helper
            org.bouncycastle.crypto.params.DHKeyGenerationParameters r3 = r5.param
            java.security.SecureRandom r3 = r3.getRandom()
            int r4 = r0.getL()
            java.math.BigInteger r2 = r2.calculatePrivate(r1, r3, r4)
            org.bouncycastle.crypto.generators.DHKeyGeneratorHelper r3 = r5.helper
            java.math.BigInteger r4 = r0.getG()
            java.math.BigInteger r1 = r3.calculatePublic(r1, r4, r2)
            org.bouncycastle.crypto.AsymmetricCipherKeyPair r3 = new org.bouncycastle.crypto.AsymmetricCipherKeyPair
            org.bouncycastle.crypto.params.DHPublicKeyParameters r4 = new org.bouncycastle.crypto.params.DHPublicKeyParameters
            r4.<init>(r1, r0)
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r1 = new org.bouncycastle.crypto.params.DHPrivateKeyParameters
            r1.<init>(r2, r0)
            r3.<init>(r4, r1)
            return r3
    }

    @Override
    public void init(org.bouncycastle.crypto.KeyGenerationParameters r1) {
            r0 = this;
            org.bouncycastle.crypto.params.DHKeyGenerationParameters r1 = (org.bouncycastle.crypto.params.DHKeyGenerationParameters) r1
            r0.param = r1
            return
    }
}
