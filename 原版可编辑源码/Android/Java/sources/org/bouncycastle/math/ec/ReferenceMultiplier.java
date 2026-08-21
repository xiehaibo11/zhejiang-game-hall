package org.bouncycastle.math.ec;

import java.math.BigInteger;

class ReferenceMultiplier implements ECMultiplier {
    ReferenceMultiplier() {
    }

    @Override
    public ECPoint multiply(ECPoint eCPoint, BigInteger bigInteger, PreCompInfo preCompInfo) {
        ECPoint infinity = eCPoint.getCurve().getInfinity();
        int iBitLength = bigInteger.bitLength();
        for (int i = 0; i < iBitLength; i++) {
            if (bigInteger.testBit(i)) {
                infinity = infinity.add(eCPoint);
            }
            eCPoint = eCPoint.twice();
        }
        return infinity;
    }
}
