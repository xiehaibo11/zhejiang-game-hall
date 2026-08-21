package org.bouncycastle.crypto.params;

public class GOST3410KeyParameters extends org.bouncycastle.crypto.params.AsymmetricKeyParameter {
    private org.bouncycastle.crypto.params.GOST3410Parameters params;

    public GOST3410KeyParameters(boolean r1, org.bouncycastle.crypto.params.GOST3410Parameters r2) {
            r0 = this;
            r0.<init>(r1)
            r0.params = r2
            return
    }

    public org.bouncycastle.crypto.params.GOST3410Parameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.GOST3410Parameters r0 = r1.params
            return r0
    }
}
