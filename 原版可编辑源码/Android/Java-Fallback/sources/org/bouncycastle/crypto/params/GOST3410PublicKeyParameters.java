package org.bouncycastle.crypto.params;

public class GOST3410PublicKeyParameters extends org.bouncycastle.crypto.params.GOST3410KeyParameters {
    private java.math.BigInteger y;

    public GOST3410PublicKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.GOST3410Parameters r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r3)
            r1.y = r2
            return
    }

    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }
}
