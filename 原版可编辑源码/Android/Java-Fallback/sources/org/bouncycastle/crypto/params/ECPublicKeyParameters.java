package org.bouncycastle.crypto.params;

public class ECPublicKeyParameters extends org.bouncycastle.crypto.params.ECKeyParameters {
    org.bouncycastle.math.ec.ECPoint Q;

    public ECPublicKeyParameters(org.bouncycastle.math.ec.ECPoint r2, org.bouncycastle.crypto.params.ECDomainParameters r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r3)
            r1.Q = r2
            return
    }

    public org.bouncycastle.math.ec.ECPoint getQ() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r1.Q
            return r0
    }
}
