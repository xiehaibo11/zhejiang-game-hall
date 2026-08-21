package org.bouncycastle.asn1.x509;

public class AttCertIssuer extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    org.bouncycastle.asn1.DERObject choiceObj;
    org.bouncycastle.asn1.ASN1Encodable obj;

    public AttCertIssuer(org.bouncycastle.asn1.x509.GeneralNames r1) {
            r0 = this;
            r0.<init>()
            r0.obj = r1
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.choiceObj = r1
            return
    }

    public AttCertIssuer(org.bouncycastle.asn1.x509.V2Form r3) {
            r2 = this;
            r2.<init>()
            r2.obj = r3
            org.bouncycastle.asn1.DERTaggedObject r3 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Encodable r0 = r2.obj
            r1 = 0
            r3.<init>(r1, r1, r0)
            r2.choiceObj = r3
            return
    }

    public static org.bouncycastle.asn1.x509.AttCertIssuer getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.AttCertIssuer
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.AttCertIssuer r3 = (org.bouncycastle.asn1.x509.AttCertIssuer) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.V2Form
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = new org.bouncycastle.asn1.x509.AttCertIssuer
            org.bouncycastle.asn1.x509.V2Form r3 = org.bouncycastle.asn1.x509.V2Form.getInstance(r3)
            r0.<init>(r3)
            return r0
        L15:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.GeneralNames
            if (r0 == 0) goto L21
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = new org.bouncycastle.asn1.x509.AttCertIssuer
            org.bouncycastle.asn1.x509.GeneralNames r3 = (org.bouncycastle.asn1.x509.GeneralNames) r3
            r0.<init>(r3)
            return r0
        L21:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L32
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = new org.bouncycastle.asn1.x509.AttCertIssuer
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            r1 = 0
            org.bouncycastle.asn1.x509.V2Form r3 = org.bouncycastle.asn1.x509.V2Form.getInstance(r3, r1)
            r0.<init>(r3)
            return r0
        L32:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L40
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = new org.bouncycastle.asn1.x509.AttCertIssuer
            org.bouncycastle.asn1.x509.GeneralNames r3 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r3)
            r0.<init>(r3)
            return r0
        L40:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.AttCertIssuer getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.x509.AttCertIssuer r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ASN1Encodable getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.obj
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.choiceObj
            return r0
    }
}
