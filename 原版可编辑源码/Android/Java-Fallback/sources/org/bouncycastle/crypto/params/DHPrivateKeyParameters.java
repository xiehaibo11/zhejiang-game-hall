package org.bouncycastle.crypto.params;

public class DHPrivateKeyParameters extends org.bouncycastle.crypto.params.DHKeyParameters {
    private java.math.BigInteger x;

    public DHPrivateKeyParameters(java.math.BigInteger r2, org.bouncycastle.crypto.params.DHParameters r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r3)
            r1.x = r2
            return
    }

    @Override
    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.DHPrivateKeyParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r0 = r4
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r0 = (org.bouncycastle.crypto.params.DHPrivateKeyParameters) r0
            java.math.BigInteger r0 = r0.getX()
            java.math.BigInteger r2 = r3.x
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L1c
            boolean r4 = super.equals(r4)
            if (r4 == 0) goto L1c
            r1 = 1
        L1c:
            return r1
    }

    public java.math.BigInteger getX() {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            return r0
    }

    @Override
    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.x
            int r0 = r0.hashCode()
            int r1 = super.hashCode()
            r0 = r0 ^ r1
            return r0
    }
}
