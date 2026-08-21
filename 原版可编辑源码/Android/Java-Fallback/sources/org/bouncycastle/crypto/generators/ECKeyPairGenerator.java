package org.bouncycastle.crypto.generators;

public class ECKeyPairGenerator implements org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator, org.bouncycastle.math.ec.ECConstants {
    org.bouncycastle.crypto.params.ECDomainParameters params;
    java.security.SecureRandom random;

    public ECKeyPairGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.crypto.AsymmetricCipherKeyPair generateKeyPair() {
            r5 = this;
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r5.params
            java.math.BigInteger r0 = r0.getN()
            int r1 = r0.bitLength()
        La:
            java.math.BigInteger r2 = new java.math.BigInteger
            java.security.SecureRandom r3 = r5.random
            r2.<init>(r1, r3)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.ECKeyPairGenerator.ZERO
            boolean r3 = r2.equals(r3)
            if (r3 != 0) goto La
            int r3 = r2.compareTo(r0)
            if (r3 >= 0) goto La
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r5.params
            org.bouncycastle.math.ec.ECPoint r0 = r0.getG()
            org.bouncycastle.math.ec.ECPoint r0 = r0.multiply(r2)
            org.bouncycastle.crypto.AsymmetricCipherKeyPair r1 = new org.bouncycastle.crypto.AsymmetricCipherKeyPair
            org.bouncycastle.crypto.params.ECPublicKeyParameters r3 = new org.bouncycastle.crypto.params.ECPublicKeyParameters
            org.bouncycastle.crypto.params.ECDomainParameters r4 = r5.params
            r3.<init>(r0, r4)
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r0 = new org.bouncycastle.crypto.params.ECPrivateKeyParameters
            org.bouncycastle.crypto.params.ECDomainParameters r4 = r5.params
            r0.<init>(r2, r4)
            r1.<init>(r3, r0)
            return r1
    }

    @Override
    public void init(org.bouncycastle.crypto.KeyGenerationParameters r2) {
            r1 = this;
            org.bouncycastle.crypto.params.ECKeyGenerationParameters r2 = (org.bouncycastle.crypto.params.ECKeyGenerationParameters) r2
            java.security.SecureRandom r0 = r2.getRandom()
            r1.random = r0
            org.bouncycastle.crypto.params.ECDomainParameters r2 = r2.getDomainParameters()
            r1.params = r2
            return
    }
}
