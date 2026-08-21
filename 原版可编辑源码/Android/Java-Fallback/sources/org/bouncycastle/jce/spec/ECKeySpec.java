package org.bouncycastle.jce.spec;

public class ECKeySpec implements java.security.spec.KeySpec {
    private org.bouncycastle.jce.spec.ECParameterSpec spec;

    protected ECKeySpec(org.bouncycastle.jce.spec.ECParameterSpec r1) {
            r0 = this;
            r0.<init>()
            r0.spec = r1
            return
    }

    public org.bouncycastle.jce.spec.ECParameterSpec getParams() {
            r1 = this;
            org.bouncycastle.jce.spec.ECParameterSpec r0 = r1.spec
            return r0
    }
}
