package org.bouncycastle.asn1.crmf;

public class CertId extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.GeneralName issuer;
    private org.bouncycastle.asn1.DERInteger serialNumber;

    private CertId(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0)
            r1.issuer = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.DERInteger.getInstance(r2)
            r1.serialNumber = r2
            return
    }

    public static org.bouncycastle.asn1.crmf.CertId getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.CertId
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.CertId r3 = (org.bouncycastle.asn1.crmf.CertId) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.CertId r0 = new org.bouncycastle.asn1.crmf.CertId
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

    public static org.bouncycastle.asn1.crmf.CertId getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.crmf.CertId r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.issuer
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.serialNumber
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralName r1 = r2.issuer
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.serialNumber
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
