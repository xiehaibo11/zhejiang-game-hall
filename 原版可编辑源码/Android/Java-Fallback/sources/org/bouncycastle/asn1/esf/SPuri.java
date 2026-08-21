package org.bouncycastle.asn1.esf;

public class SPuri {
    private org.bouncycastle.asn1.DERIA5String uri;

    public SPuri(org.bouncycastle.asn1.DERIA5String r1) {
            r0 = this;
            r0.<init>()
            r0.uri = r1
            return
    }

    public static org.bouncycastle.asn1.esf.SPuri getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.esf.SPuri
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.esf.SPuri r3 = (org.bouncycastle.asn1.esf.SPuri) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERIA5String
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.esf.SPuri r0 = new org.bouncycastle.asn1.esf.SPuri
            org.bouncycastle.asn1.DERIA5String r3 = (org.bouncycastle.asn1.DERIA5String) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'SPuri' factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.DERIA5String getUri() {
            r1 = this;
            org.bouncycastle.asn1.DERIA5String r0 = r1.uri
            return r0
    }

    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DERIA5String r0 = r1.uri
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }
}
