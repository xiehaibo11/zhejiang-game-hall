package org.bouncycastle.crypto.params;

public class DSAKeyParameters extends org.bouncycastle.crypto.params.AsymmetricKeyParameter {
    private org.bouncycastle.crypto.params.DSAParameters params;

    public DSAKeyParameters(boolean r1, org.bouncycastle.crypto.params.DSAParameters r2) {
            r0 = this;
            r0.<init>(r1)
            r0.params = r2
            return
    }

    public org.bouncycastle.crypto.params.DSAParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.DSAParameters r0 = r1.params
            return r0
    }
}
