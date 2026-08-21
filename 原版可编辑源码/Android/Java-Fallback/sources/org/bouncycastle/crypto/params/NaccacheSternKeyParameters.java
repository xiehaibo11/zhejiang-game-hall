package org.bouncycastle.crypto.params;

public class NaccacheSternKeyParameters extends org.bouncycastle.crypto.params.AsymmetricKeyParameter {
    private java.math.BigInteger g;
    int lowerSigmaBound;
    private java.math.BigInteger n;

    public NaccacheSternKeyParameters(boolean r1, java.math.BigInteger r2, java.math.BigInteger r3, int r4) {
            r0 = this;
            r0.<init>(r1)
            r0.g = r2
            r0.n = r3
            r0.lowerSigmaBound = r4
            return
    }

    public java.math.BigInteger getG() {
            r1 = this;
            java.math.BigInteger r0 = r1.g
            return r0
    }

    public int getLowerSigmaBound() {
            r1 = this;
            int r0 = r1.lowerSigmaBound
            return r0
    }

    public java.math.BigInteger getModulus() {
            r1 = this;
            java.math.BigInteger r0 = r1.n
            return r0
    }
}
