package org.bouncycastle.crypto.generators;

import java.math.BigInteger;
import org.bouncycastle.crypto.AsymmetricCipherKeyPair;
import org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator;
import org.bouncycastle.crypto.KeyGenerationParameters;
import org.bouncycastle.crypto.params.RSAKeyGenerationParameters;
import org.bouncycastle.crypto.params.RSAKeyParameters;
import org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters;

public class RSAKeyPairGenerator implements AsymmetricCipherKeyPairGenerator {
    private static final BigInteger ONE = BigInteger.valueOf(1);
    private RSAKeyGenerationParameters param;

    @Override
    public AsymmetricCipherKeyPair generateKeyPair() {
        BigInteger bigInteger;
        BigInteger bigInteger2;
        BigInteger bigIntegerMultiply;
        BigInteger bigInteger3;
        BigInteger bigInteger4;
        int strength = this.param.getStrength();
        int i = (strength + 1) / 2;
        int i2 = strength - i;
        int i3 = strength / 3;
        BigInteger publicExponent = this.param.getPublicExponent();
        while (true) {
            bigInteger = new BigInteger(i, 1, this.param.getRandom());
            if (!bigInteger.mod(publicExponent).equals(ONE) && bigInteger.isProbablePrime(this.param.getCertainty()) && publicExponent.gcd(bigInteger.subtract(ONE)).equals(ONE)) {
                break;
            }
        }
        while (true) {
            bigInteger2 = new BigInteger(i2, 1, this.param.getRandom());
            if (bigInteger2.subtract(bigInteger).abs().bitLength() >= i3 && !bigInteger2.mod(publicExponent).equals(ONE) && bigInteger2.isProbablePrime(this.param.getCertainty()) && publicExponent.gcd(bigInteger2.subtract(ONE)).equals(ONE)) {
                bigIntegerMultiply = bigInteger.multiply(bigInteger2);
                if (bigIntegerMultiply.bitLength() == this.param.getStrength()) {
                    break;
                }
                bigInteger = bigInteger.max(bigInteger2);
            }
        }
        if (bigInteger.compareTo(bigInteger2) < 0) {
            bigInteger4 = bigInteger2;
            bigInteger3 = bigInteger;
        } else {
            bigInteger3 = bigInteger2;
            bigInteger4 = bigInteger;
        }
        BigInteger bigIntegerSubtract = bigInteger4.subtract(ONE);
        BigInteger bigIntegerSubtract2 = bigInteger3.subtract(ONE);
        BigInteger bigIntegerModInverse = publicExponent.modInverse(bigIntegerSubtract.multiply(bigIntegerSubtract2));
        return new AsymmetricCipherKeyPair(new RSAKeyParameters(false, bigIntegerMultiply, publicExponent), new RSAPrivateCrtKeyParameters(bigIntegerMultiply, publicExponent, bigIntegerModInverse, bigInteger4, bigInteger3, bigIntegerModInverse.remainder(bigIntegerSubtract), bigIntegerModInverse.remainder(bigIntegerSubtract2), bigInteger3.modInverse(bigInteger4)));
    }

    @Override
    public void init(KeyGenerationParameters keyGenerationParameters) {
        this.param = (RSAKeyGenerationParameters) keyGenerationParameters;
    }
}
