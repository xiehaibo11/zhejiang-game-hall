package org.bouncycastle.jce.spec;

public class ElGamalKeySpec implements java.security.spec.KeySpec {
    private org.bouncycastle.jce.spec.ElGamalParameterSpec spec;

    public ElGamalKeySpec(org.bouncycastle.jce.spec.ElGamalParameterSpec r1) {
            r0 = this;
            r0.<init>()
            r0.spec = r1
            return
    }

    public org.bouncycastle.jce.spec.ElGamalParameterSpec getParams() {
            r1 = this;
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = r1.spec
            return r0
    }
}
