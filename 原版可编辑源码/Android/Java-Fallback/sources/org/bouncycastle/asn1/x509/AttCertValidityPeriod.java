package org.bouncycastle.asn1.x509;

public class AttCertValidityPeriod extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERGeneralizedTime notAfterTime;
    org.bouncycastle.asn1.DERGeneralizedTime notBeforeTime;

    public AttCertValidityPeriod(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 2
            if (r0 != r1) goto L21
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0)
            r3.notBeforeTime = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERGeneralizedTime r4 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r4)
            r3.notAfterTime = r4
            return
        L21:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public AttCertValidityPeriod(org.bouncycastle.asn1.DERGeneralizedTime r1, org.bouncycastle.asn1.DERGeneralizedTime r2) {
            r0 = this;
            r0.<init>()
            r0.notBeforeTime = r1
            r0.notAfterTime = r2
            return
    }

    public static org.bouncycastle.asn1.x509.AttCertValidityPeriod getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.AttCertValidityPeriod
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r3 = (org.bouncycastle.asn1.x509.AttCertValidityPeriod) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.AttCertValidityPeriod r0 = new org.bouncycastle.asn1.x509.AttCertValidityPeriod
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
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

    public org.bouncycastle.asn1.DERGeneralizedTime getNotAfterTime() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.notAfterTime
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getNotBeforeTime() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.notBeforeTime
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r2.notBeforeTime
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r2.notAfterTime
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
