package org.bouncycastle.crypto.params;

public class GOST3410PrivateKeyParameters extends org.bouncycastle.crypto.params.GOST3410KeyParameters {
    private java.math.BigInteger x;

    public GOST3410PrivateKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.GOST3410Parameters r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r3)
            r1.x = r2
            return
    }

    public java.math.BigInteger getX() {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            return r0
    }
}
