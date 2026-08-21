package org.bouncycastle.crypto.params;

public class DSAPrivateKeyParameters extends org.bouncycastle.crypto.params.DSAKeyParameters {
    private java.math.BigInteger x;

    public DSAPrivateKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.DSAParameters r3) {
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
