package org.bouncycastle.crypto.params;

public class DHPublicKeyParameters extends org.bouncycastle.crypto.params.DHKeyParameters {
    private java.math.BigInteger y;

    public DHPublicKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.DHParameters r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r3)
            r1.y = r2
            return
    }

    @Override
    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.DHPublicKeyParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r0 = r4
            org.bouncycastle.crypto.params.DHPublicKeyParameters r0 = (org.bouncycastle.crypto.params.DHPublicKeyParameters) r0
            java.math.BigInteger r0 = r0.getY()
            java.math.BigInteger r2 = r3.y
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L1c
            boolean r4 = super.equals(r4)
            if (r4 == 0) goto L1c
            r1 = 1
        L1c:
            return r1
    }

    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }

    @Override
    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.y
            int r0 = r0.hashCode()
            int r1 = super.hashCode()
            r0 = r0 ^ r1
            return r0
    }
}
