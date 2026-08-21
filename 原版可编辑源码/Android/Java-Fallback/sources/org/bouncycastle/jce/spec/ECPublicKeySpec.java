package org.bouncycastle.jce.spec;

public class ECPublicKeySpec extends org.bouncycastle.jce.spec.ECKeySpec {
    private org.bouncycastle.math.ec.ECPoint q;

    public ECPublicKeySpec(org.bouncycastle.math.ec.ECPoint r1, org.bouncycastle.jce.spec.ECParameterSpec r2) {
            r0 = this;
            r0.<init>(r2)
            r0.q = r1
            return
    }

    public org.bouncycastle.math.ec.ECPoint getQ() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r1.q
            return r0
    }
}
