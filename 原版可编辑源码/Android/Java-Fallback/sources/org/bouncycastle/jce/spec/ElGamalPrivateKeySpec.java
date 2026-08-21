package org.bouncycastle.jce.spec;

public class ElGamalPrivateKeySpec extends org.bouncycastle.jce.spec.ElGamalKeySpec {
    private java.math.BigInteger x;

    public ElGamalPrivateKeySpec(java.math.BigInteger r1, org.bouncycastle.jce.spec.ElGamalParameterSpec r2) {
            r0 = this;
            r0.<init>(r2)
            r0.x = r1
            return
    }

    public java.math.BigInteger getX() {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            return r0
    }
}
