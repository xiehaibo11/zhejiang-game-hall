package org.bouncycastle.jce.spec;

public class ECPrivateKeySpec extends org.bouncycastle.jce.spec.ECKeySpec {
    private java.math.BigInteger d;

    public ECPrivateKeySpec(java.math.BigInteger r1, org.bouncycastle.jce.spec.ECParameterSpec r2) {
            r0 = this;
            r0.<init>(r2)
            r0.d = r1
            return
    }

    public java.math.BigInteger getD() {
            r1 = this;
            java.math.BigInteger r0 = r1.d
            return r0
    }
}
