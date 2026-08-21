package org.bouncycastle.crypto.params;

public class NaccacheSternPrivateKeyParameters extends org.bouncycastle.crypto.params.NaccacheSternKeyParameters {
    private java.math.BigInteger phi_n;
    private java.util.Vector smallPrimes;

    public NaccacheSternPrivateKeyParameters(java.math.BigInteger r2, java.math.BigInteger r3, int r4, java.util.Vector r5, java.math.BigInteger r6) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r2, r3, r4)
            r1.smallPrimes = r5
            r1.phi_n = r6
            return
    }

    public java.math.BigInteger getPhi_n() {
            r1 = this;
            java.math.BigInteger r0 = r1.phi_n
            return r0
    }

    public java.util.Vector getSmallPrimes() {
            r1 = this;
            java.util.Vector r0 = r1.smallPrimes
            return r0
    }
}
