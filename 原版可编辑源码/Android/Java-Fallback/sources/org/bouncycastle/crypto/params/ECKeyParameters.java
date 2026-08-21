package org.bouncycastle.crypto.params;

public class ECKeyParameters extends org.bouncycastle.crypto.params.AsymmetricKeyParameter {
    org.bouncycastle.crypto.params.ECDomainParameters params;

    protected ECKeyParameters(boolean r1, org.bouncycastle.crypto.params.ECDomainParameters r2) {
            r0 = this;
            r0.<init>(r1)
            r0.params = r2
            return
    }

    public org.bouncycastle.crypto.params.ECDomainParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.ECDomainParameters r0 = r1.params
            return r0
    }
}
