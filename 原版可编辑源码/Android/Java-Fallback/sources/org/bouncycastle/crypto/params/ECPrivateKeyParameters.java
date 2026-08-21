package org.bouncycastle.crypto.params;

public class ECPrivateKeyParameters extends org.bouncycastle.crypto.params.ECKeyParameters {
    java.math.BigInteger d;

    public ECPrivateKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.ECDomainParameters r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r3)
            r1.d = r2
            return
    }

    public java.math.BigInteger getD() {
            r1 = this;
            java.math.BigInteger r0 = r1.d
            return r0
    }
}
