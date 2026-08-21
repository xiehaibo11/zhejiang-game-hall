package org.bouncycastle.asn1.isismtt.x509;

public class Restriction extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x500.DirectoryString restriction;

    public Restriction(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x500.DirectoryString r0 = new org.bouncycastle.asn1.x500.DirectoryString
            r0.<init>(r2)
            r1.restriction = r0
            return
    }

    private Restriction(org.bouncycastle.asn1.x500.DirectoryString r1) {
            r0 = this;
            r0.<init>()
            r0.restriction = r1
            return
    }

    public static org.bouncycastle.asn1.isismtt.x509.Restriction getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L34
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.x509.Restriction
            if (r0 == 0) goto L7
            goto L34
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERString
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.isismtt.x509.Restriction r0 = new org.bouncycastle.asn1.isismtt.x509.Restriction
            org.bouncycastle.asn1.x500.DirectoryString r3 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r3)
            r0.<init>(r3)
            return r0
        L15:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L34:
            org.bouncycastle.asn1.isismtt.x509.Restriction r3 = (org.bouncycastle.asn1.isismtt.x509.Restriction) r3
            return r3
    }

    public org.bouncycastle.asn1.x500.DirectoryString getRestriction() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.restriction
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.restriction
            org.bouncycastle.asn1.DERObject r0 = r0.toASN1Object()
            return r0
    }
}
