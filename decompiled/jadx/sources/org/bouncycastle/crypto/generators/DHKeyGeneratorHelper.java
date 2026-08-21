package org.bouncycastle.crypto.generators;

import java.math.BigInteger;
import java.security.SecureRandom;

/* JADX INFO: loaded from: classes4.dex */
class DHKeyGeneratorHelper {
    private static final int MAX_ITERATIONS = 1000;
    static final DHKeyGeneratorHelper INSTANCE = new DHKeyGeneratorHelper();
    private static final BigInteger ZERO = BigInteger.valueOf(0);
    private static final BigInteger TWO = BigInteger.valueOf(2);

    private DHKeyGeneratorHelper() {
    }

    private BigInteger createInRange(BigInteger bigInteger, SecureRandom secureRandom) {
        BigInteger bigInteger2;
        int iBitLength = bigInteger.bitLength();
        int i = 0;
        do {
            bigInteger2 = new BigInteger(iBitLength, secureRandom);
            i++;
            if (!bigInteger2.equals(ZERO) && bigInteger2.compareTo(bigInteger) <= 0) {
                break;
            }
        } while (i != 1000);
        return i == 1000 ? new BigInteger(iBitLength - 1, secureRandom).setBit(0) : bigInteger2;
    }

    BigInteger calculatePrivate(BigInteger bigInteger, SecureRandom secureRandom, int i) {
        BigInteger bigInteger2;
        BigInteger bigIntegerSubtract = bigInteger.subtract(TWO);
        if (i == 0) {
            return createInRange(bigIntegerSubtract, secureRandom);
        }
        do {
            bigInteger2 = new BigInteger(i, 0, secureRandom);
        } while (bigInteger2.equals(ZERO));
        return bigInteger2;
    }

    BigInteger calculatePublic(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3) {
        return bigInteger2.modPow(bigInteger3, bigInteger);
    }
}
