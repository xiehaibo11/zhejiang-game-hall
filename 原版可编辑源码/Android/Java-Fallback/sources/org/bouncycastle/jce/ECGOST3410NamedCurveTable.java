package org.bouncycastle.jce;

public class ECGOST3410NamedCurveTable {
    public ECGOST3410NamedCurveTable() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Enumeration getNames() {
            java.util.Enumeration r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getNames()
            return r0
    }

    public static org.bouncycastle.jce.spec.ECNamedCurveParameterSpec getParameterSpec(java.lang.String r9) {
            org.bouncycastle.crypto.params.ECDomainParameters r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getByName(r9)
            r1 = 0
            if (r0 != 0) goto L12
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.IllegalArgumentException -> L11
            r0.<init>(r9)     // Catch: java.lang.IllegalArgumentException -> L11
            org.bouncycastle.crypto.params.ECDomainParameters r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.getByOID(r0)     // Catch: java.lang.IllegalArgumentException -> L11
            goto L12
        L11:
            return r1
        L12:
            if (r0 != 0) goto L15
            return r1
        L15:
            org.bouncycastle.jce.spec.ECNamedCurveParameterSpec r1 = new org.bouncycastle.jce.spec.ECNamedCurveParameterSpec
            org.bouncycastle.math.ec.ECCurve r4 = r0.getCurve()
            org.bouncycastle.math.ec.ECPoint r5 = r0.getG()
            java.math.BigInteger r6 = r0.getN()
            java.math.BigInteger r7 = r0.getH()
            byte[] r8 = r0.getSeed()
            r2 = r1
            r3 = r9
            r2.<init>(r3, r4, r5, r6, r7, r8)
            return r1
    }
}
