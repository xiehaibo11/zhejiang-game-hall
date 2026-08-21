package org.bouncycastle.asn1.x509;

public class DistributionPoint extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.GeneralNames cRLIssuer;
    org.bouncycastle.asn1.x509.DistributionPointName distributionPoint;
    org.bouncycastle.asn1.x509.ReasonFlags reasons;

    public DistributionPoint(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r1 = 0
        L5:
            int r2 = r6.size()
            if (r1 == r2) goto L3c
            org.bouncycastle.asn1.DEREncodable r2 = r6.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r2 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r2)
            int r3 = r2.getTagNo()
            r4 = 1
            if (r3 == 0) goto L33
            if (r3 == r4) goto L27
            r4 = 2
            if (r3 == r4) goto L20
            goto L39
        L20:
            org.bouncycastle.asn1.x509.GeneralNames r2 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r2, r0)
            r5.cRLIssuer = r2
            goto L39
        L27:
            org.bouncycastle.asn1.x509.ReasonFlags r3 = new org.bouncycastle.asn1.x509.ReasonFlags
            org.bouncycastle.asn1.DERBitString r2 = org.bouncycastle.asn1.DERBitString.getInstance(r2, r0)
            r3.<init>(r2)
            r5.reasons = r3
            goto L39
        L33:
            org.bouncycastle.asn1.x509.DistributionPointName r2 = org.bouncycastle.asn1.x509.DistributionPointName.getInstance(r2, r4)
            r5.distributionPoint = r2
        L39:
            int r1 = r1 + 1
            goto L5
        L3c:
            return
    }

    public DistributionPoint(org.bouncycastle.asn1.x509.DistributionPointName r1, org.bouncycastle.asn1.x509.ReasonFlags r2, org.bouncycastle.asn1.x509.GeneralNames r3) {
            r0 = this;
            r0.<init>()
            r0.distributionPoint = r1
            r0.reasons = r2
            r0.cRLIssuer = r3
            return
    }

    private void appendObject(java.lang.StringBuffer r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            java.lang.String r0 = "    "
            r2.append(r0)
            r2.append(r4)
            java.lang.String r4 = ":"
            r2.append(r4)
            r2.append(r3)
            r2.append(r0)
            r2.append(r0)
            r2.append(r5)
            r2.append(r3)
            return
    }

    public static org.bouncycastle.asn1.x509.DistributionPoint getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.DistributionPoint
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.DistributionPoint r0 = new org.bouncycastle.asn1.x509.DistributionPoint
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid DistributionPoint: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.x509.DistributionPoint r3 = (org.bouncycastle.asn1.x509.DistributionPoint) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.DistributionPoint getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.DistributionPoint r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralNames getCRLIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r1.cRLIssuer
            return r0
    }

    public org.bouncycastle.asn1.x509.DistributionPointName getDistributionPoint() {
            r1 = this;
            org.bouncycastle.asn1.x509.DistributionPointName r0 = r1.distributionPoint
            return r0
    }

    public org.bouncycastle.asn1.x509.ReasonFlags getReasons() {
            r1 = this;
            org.bouncycastle.asn1.x509.ReasonFlags r0 = r1.reasons
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.DistributionPointName r1 = r5.distributionPoint
            r2 = 0
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.DistributionPointName r3 = r5.distributionPoint
            r1.<init>(r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.x509.ReasonFlags r1 = r5.reasons
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.x509.ReasonFlags r4 = r5.reasons
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.x509.GeneralNames r1 = r5.cRLIssuer
            if (r1 == 0) goto L32
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.x509.GeneralNames r4 = r5.cRLIssuer
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L32:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.String r0 = "line.separator"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "DistributionPoint: ["
            r1.append(r2)
            r1.append(r0)
            org.bouncycastle.asn1.x509.DistributionPointName r2 = r4.distributionPoint
            if (r2 == 0) goto L20
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "distributionPoint"
            r4.appendObject(r1, r0, r3, r2)
        L20:
            org.bouncycastle.asn1.x509.ReasonFlags r2 = r4.reasons
            if (r2 == 0) goto L2d
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "reasons"
            r4.appendObject(r1, r0, r3, r2)
        L2d:
            org.bouncycastle.asn1.x509.GeneralNames r2 = r4.cRLIssuer
            if (r2 == 0) goto L3a
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "cRLIssuer"
            r4.appendObject(r1, r0, r3, r2)
        L3a:
            java.lang.String r2 = "]"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
