package org.bouncycastle.crypto.params;

public class ElGamalPrivateKeyParameters extends org.bouncycastle.crypto.params.ElGamalKeyParameters {
    private java.math.BigInteger x;

    public ElGamalPrivateKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.ElGamalParameters r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r3)
            r1.x = r2
            return
    }

    @Override
    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r0 = r4
            org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters r0 = (org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters) r0
            java.math.BigInteger r0 = r0.getX()
            java.math.BigInteger r2 = r3.x
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L16
            return r1
        L16:
            boolean r4 = super.equals(r4)
            return r4
    }

    public java.math.BigInteger getX() {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.math.BigInteger r0 = r1.getX()
            int r0 = r0.hashCode()
            return r0
    }
}
