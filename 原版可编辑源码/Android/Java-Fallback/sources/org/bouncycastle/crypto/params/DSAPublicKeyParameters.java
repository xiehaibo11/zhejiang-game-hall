package org.bouncycastle.crypto.params;

public class DSAPublicKeyParameters extends org.bouncycastle.crypto.params.DSAKeyParameters {
    private java.math.BigInteger y;

    public DSAPublicKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.DSAParameters r3) {
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
