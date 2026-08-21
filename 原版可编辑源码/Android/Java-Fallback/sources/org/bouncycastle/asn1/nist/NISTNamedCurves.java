package org.bouncycastle.asn1.nist;

public class NISTNamedCurves {
    static final java.util.Hashtable names = null;
    static final java.util.Hashtable objIds = null;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.asn1.nist.NISTNamedCurves.objIds = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.asn1.nist.NISTNamedCurves.names = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.sect571r1
            java.lang.String r1 = "B-571"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.sect409r1
            java.lang.String r1 = "B-409"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.sect283r1
            java.lang.String r1 = "B-283"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.sect233r1
            java.lang.String r1 = "B-233"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.sect163r2
            java.lang.String r1 = "B-163"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.secp521r1
            java.lang.String r1 = "P-521"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.secp256r1
            java.lang.String r1 = "P-256"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.secp224r1
            java.lang.String r1 = "P-224"
            defineCurve(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.sec.SECObjectIdentifiers.secp384r1
            java.lang.String r1 = "P-384"
            defineCurve(r1, r0)
            return
    }

    public NISTNamedCurves() {
            r0 = this;
            r0.<init>()
            return
    }

    static void defineCurve(java.lang.String r1, org.bouncycastle.asn1.DERObjectIdentifier r2) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.objIds
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.names
            r0.put(r2, r1)
            return
    }

    public static org.bouncycastle.asn1.x9.X9ECParameters getByName(java.lang.String r1) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.objIds
            java.lang.String r1 = org.bouncycastle.util.Strings.toUpperCase(r1)
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            if (r1 == 0) goto L13
            org.bouncycastle.asn1.x9.X9ECParameters r1 = getByOID(r1)
            return r1
        L13:
            r1 = 0
            return r1
    }

    public static org.bouncycastle.asn1.x9.X9ECParameters getByOID(org.bouncycastle.asn1.DERObjectIdentifier r0) {
            org.bouncycastle.asn1.x9.X9ECParameters r0 = org.bouncycastle.asn1.sec.SECNamedCurves.getByOID(r0)
            return r0
    }

    public static java.lang.String getName(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.names
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }

    public static java.util.Enumeration getNames() {
            java.util.Hashtable r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.objIds
            java.util.Enumeration r0 = r0.keys()
            return r0
    }

    public static org.bouncycastle.asn1.DERObjectIdentifier getOID(java.lang.String r1) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.nist.NISTNamedCurves.objIds
            java.lang.String r1 = org.bouncycastle.util.Strings.toUpperCase(r1)
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            return r1
    }
}
