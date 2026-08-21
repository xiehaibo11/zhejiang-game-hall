package org.bouncycastle.jce.spec;

public class ECNamedCurveParameterSpec extends org.bouncycastle.jce.spec.ECParameterSpec {
    private java.lang.String name;

    public ECNamedCurveParameterSpec(java.lang.String r1, org.bouncycastle.math.ec.ECCurve r2, org.bouncycastle.math.ec.ECPoint r3, java.math.BigInteger r4) {
            r0 = this;
            r0.<init>(r2, r3, r4)
            r0.name = r1
            return
    }

    public ECNamedCurveParameterSpec(java.lang.String r1, org.bouncycastle.math.ec.ECCurve r2, org.bouncycastle.math.ec.ECPoint r3, java.math.BigInteger r4, java.math.BigInteger r5) {
            r0 = this;
            r0.<init>(r2, r3, r4, r5)
            r0.name = r1
            return
    }

    public ECNamedCurveParameterSpec(java.lang.String r7, org.bouncycastle.math.ec.ECCurve r8, org.bouncycastle.math.ec.ECPoint r9, java.math.BigInteger r10, java.math.BigInteger r11, byte[] r12) {
            r6 = this;
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            r6.name = r7
            return
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }
}
