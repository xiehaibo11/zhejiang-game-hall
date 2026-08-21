package org.bouncycastle.asn1.x9;

public abstract class X9ECParametersHolder {
    private org.bouncycastle.asn1.x9.X9ECParameters params;

    public X9ECParametersHolder() {
            r0 = this;
            r0.<init>()
            return
    }

    protected abstract org.bouncycastle.asn1.x9.X9ECParameters createParameters();

    public org.bouncycastle.asn1.x9.X9ECParameters getParameters() {
            r1 = this;
            org.bouncycastle.asn1.x9.X9ECParameters r0 = r1.params
            if (r0 != 0) goto La
            org.bouncycastle.asn1.x9.X9ECParameters r0 = r1.createParameters()
            r1.params = r0
        La:
            org.bouncycastle.asn1.x9.X9ECParameters r0 = r1.params
            return r0
    }
}
