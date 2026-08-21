package org.bouncycastle.math.ec;

interface ECMultiplier {
    org.bouncycastle.math.ec.ECPoint multiply(org.bouncycastle.math.ec.ECPoint r1, java.math.BigInteger r2, org.bouncycastle.math.ec.PreCompInfo r3);
}
