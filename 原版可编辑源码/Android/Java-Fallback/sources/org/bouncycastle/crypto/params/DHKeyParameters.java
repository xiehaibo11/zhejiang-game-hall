package org.bouncycastle.crypto.params;

public class DHKeyParameters extends org.bouncycastle.crypto.params.AsymmetricKeyParameter {
    private org.bouncycastle.crypto.params.DHParameters params;

    protected DHKeyParameters(boolean r1, org.bouncycastle.crypto.params.DHParameters r2) {
            r0 = this;
            r0.<init>(r1)
            r0.params = r2
            return
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.DHKeyParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.crypto.params.DHKeyParameters r3 = (org.bouncycastle.crypto.params.DHKeyParameters) r3
            org.bouncycastle.crypto.params.DHParameters r0 = r2.params
            org.bouncycastle.crypto.params.DHParameters r3 = r3.getParameters()
            if (r0 != 0) goto L14
            if (r3 != 0) goto L13
            r1 = 1
        L13:
            return r1
        L14:
            boolean r3 = r0.equals(r3)
            return r3
    }

    public org.bouncycastle.crypto.params.DHParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.DHParameters r0 = r1.params
            return r0
    }

    public int hashCode() {
            r2 = this;
            boolean r0 = r2.isPrivate()
            r0 = r0 ^ 1
            org.bouncycastle.crypto.params.DHParameters r1 = r2.params
            if (r1 == 0) goto Lf
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
        Lf:
            return r0
    }
}
