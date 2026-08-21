package org.bouncycastle.jce;

public class ECNamedCurveTable {
    public ECNamedCurveTable() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void addEnumeration(java.util.Vector r1, java.util.Enumeration r2) {
        L0:
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto Le
            java.lang.Object r0 = r2.nextElement()
            r1.addElement(r0)
            goto L0
        Le:
            return
    }

    public static java.util.Enumeration getNames() {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            java.util.Enumeration r1 = org.bouncycastle.asn1.x9.X962NamedCurves.getNames()
            addEnumeration(r0, r1)
            java.util.Enumeration r1 = org.bouncycastle.asn1.sec.SECNamedCurves.getNames()
            addEnumeration(r0, r1)
            java.util.Enumeration r1 = org.bouncycastle.asn1.nist.NISTNamedCurves.getNames()
            addEnumeration(r0, r1)
            java.util.Enumeration r1 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getNames()
            addEnumeration(r0, r1)
            java.util.Enumeration r0 = r0.elements()
            return r0
    }

    public static org.bouncycastle.jce.spec.ECNamedCurveParameterSpec getParameterSpec(java.lang.String r8) {
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.x9.X962NamedCurves.getByName(r8)
            if (r0 != 0) goto L11
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.IllegalArgumentException -> L10
            r1.<init>(r8)     // Catch: java.lang.IllegalArgumentException -> L10
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.x9.X962NamedCurves.getByOID(r1)     // Catch: java.lang.IllegalArgumentException -> L10
            goto L11
        L10:
        L11:
            if (r0 != 0) goto L24
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.sec.SECNamedCurves.getByName(r8)
            if (r0 != 0) goto L24
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.IllegalArgumentException -> L23
            r1.<init>(r8)     // Catch: java.lang.IllegalArgumentException -> L23
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.sec.SECNamedCurves.getByOID(r1)     // Catch: java.lang.IllegalArgumentException -> L23
            goto L24
        L23:
        L24:
            if (r0 != 0) goto L37
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getByName(r8)
            if (r0 != 0) goto L37
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: java.lang.IllegalArgumentException -> L36
            r1.<init>(r8)     // Catch: java.lang.IllegalArgumentException -> L36
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getByOID(r1)     // Catch: java.lang.IllegalArgumentException -> L36
            goto L37
        L36:
        L37:
            if (r0 != 0) goto L3d
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.getByName(r8)
        L3d:
            if (r0 != 0) goto L41
            r8 = 0
            return r8
        L41:
            org.bouncycastle.jce.spec.ECNamedCurveParameterSpec r7 = new org.bouncycastle.jce.spec.ECNamedCurveParameterSpec
            org.bouncycastle.math.ec.ECCurve r2 = r0.getCurve()
            org.bouncycastle.math.ec.ECPoint r3 = r0.getG()
            java.math.BigInteger r4 = r0.getN()
            java.math.BigInteger r5 = r0.getH()
            byte[] r6 = r0.getSeed()
            r0 = r7
            r1 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }
}
