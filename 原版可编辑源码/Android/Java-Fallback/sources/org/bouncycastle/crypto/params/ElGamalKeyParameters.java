package org.bouncycastle.crypto.params;

public class ElGamalKeyParameters extends org.bouncycastle.crypto.params.AsymmetricKeyParameter {
    private org.bouncycastle.crypto.params.ElGamalParameters params;

    protected ElGamalKeyParameters(boolean r1, org.bouncycastle.crypto.params.ElGamalParameters r2) {
            r0 = this;
            r0.<init>(r1)
            r0.params = r2
            return
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.ElGamalKeyParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.crypto.params.ElGamalKeyParameters r3 = (org.bouncycastle.crypto.params.ElGamalKeyParameters) r3
            org.bouncycastle.crypto.params.ElGamalParameters r0 = r2.params
            org.bouncycastle.crypto.params.ElGamalParameters r3 = r3.getParameters()
            if (r0 != 0) goto L14
            if (r3 != 0) goto L13
            r1 = 1
        L13:
            return r1
        L14:
            boolean r3 = r0.equals(r3)
            return r3
    }

    public org.bouncycastle.crypto.params.ElGamalParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.ElGamalParameters r0 = r1.params
            return r0
    }

    public int hashCode() {
            r1 = this;
            org.bouncycastle.crypto.params.ElGamalParameters r0 = r1.params
            if (r0 == 0) goto L9
            int r0 = r0.hashCode()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }
}
