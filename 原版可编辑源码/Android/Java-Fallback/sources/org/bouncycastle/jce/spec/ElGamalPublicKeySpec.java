package org.bouncycastle.jce.spec;

public class ElGamalPublicKeySpec extends org.bouncycastle.jce.spec.ElGamalKeySpec {
    private java.math.BigInteger y;

    public ElGamalPublicKeySpec(java.math.BigInteger r1, org.bouncycastle.jce.spec.ElGamalParameterSpec r2) {
            r0 = this;
            r0.<init>(r2)
            r0.y = r1
            return
    }

    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }
}
