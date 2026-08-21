package org.bouncycastle.asn1.crmf;

public class OptionalValidity extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.Time notAfter;
    private org.bouncycastle.asn1.x509.Time notBefore;

    private OptionalValidity(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r4 = r4.getObjects()
        L7:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L24
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 0
            org.bouncycastle.asn1.x509.Time r0 = org.bouncycastle.asn1.x509.Time.getInstance(r0, r2)
            if (r1 != 0) goto L21
            r3.notBefore = r0
            goto L7
        L21:
            r3.notAfter = r0
            goto L7
        L24:
            return
    }

    public static org.bouncycastle.asn1.crmf.OptionalValidity getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.OptionalValidity
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.OptionalValidity r3 = (org.bouncycastle.asn1.crmf.OptionalValidity) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.OptionalValidity r0 = new org.bouncycastle.asn1.crmf.OptionalValidity
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.Time r1 = r2.notBefore
            r0.add(r1)
            org.bouncycastle.asn1.x509.Time r1 = r2.notAfter
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
