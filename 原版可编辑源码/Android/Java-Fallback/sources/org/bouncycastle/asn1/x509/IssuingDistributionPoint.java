package org.bouncycastle.asn1.x509;

public class IssuingDistributionPoint extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.DistributionPointName distributionPoint;
    private boolean indirectCRL;
    private boolean onlyContainsAttributeCerts;
    private boolean onlyContainsCACerts;
    private boolean onlyContainsUserCerts;
    private org.bouncycastle.asn1.x509.ReasonFlags onlySomeReasons;
    private org.bouncycastle.asn1.ASN1Sequence seq;

    public IssuingDistributionPoint(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            r5.seq = r6
            r0 = 0
            r1 = 0
        L7:
            int r2 = r6.size()
            if (r1 == r2) goto L73
            org.bouncycastle.asn1.DEREncodable r2 = r6.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r2 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r2)
            int r3 = r2.getTagNo()
            r4 = 1
            if (r3 == 0) goto L6a
            if (r3 == r4) goto L5f
            r4 = 2
            if (r3 == r4) goto L54
            r4 = 3
            if (r3 == r4) goto L48
            r4 = 4
            if (r3 == r4) goto L3d
            r4 = 5
            if (r3 != r4) goto L35
            org.bouncycastle.asn1.DERBoolean r2 = org.bouncycastle.asn1.DERBoolean.getInstance(r2, r0)
            boolean r2 = r2.isTrue()
            r5.onlyContainsAttributeCerts = r2
            goto L70
        L35:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown tag in IssuingDistributionPoint"
            r6.<init>(r0)
            throw r6
        L3d:
            org.bouncycastle.asn1.DERBoolean r2 = org.bouncycastle.asn1.DERBoolean.getInstance(r2, r0)
            boolean r2 = r2.isTrue()
            r5.indirectCRL = r2
            goto L70
        L48:
            org.bouncycastle.asn1.x509.ReasonFlags r3 = new org.bouncycastle.asn1.x509.ReasonFlags
            org.bouncycastle.asn1.DERBitString r2 = org.bouncycastle.asn1.x509.ReasonFlags.getInstance(r2, r0)
            r3.<init>(r2)
            r5.onlySomeReasons = r3
            goto L70
        L54:
            org.bouncycastle.asn1.DERBoolean r2 = org.bouncycastle.asn1.DERBoolean.getInstance(r2, r0)
            boolean r2 = r2.isTrue()
            r5.onlyContainsCACerts = r2
            goto L70
        L5f:
            org.bouncycastle.asn1.DERBoolean r2 = org.bouncycastle.asn1.DERBoolean.getInstance(r2, r0)
            boolean r2 = r2.isTrue()
            r5.onlyContainsUserCerts = r2
            goto L70
        L6a:
            org.bouncycastle.asn1.x509.DistributionPointName r2 = org.bouncycastle.asn1.x509.DistributionPointName.getInstance(r2, r4)
            r5.distributionPoint = r2
        L70:
            int r1 = r1 + 1
            goto L7
        L73:
            return
    }

    public IssuingDistributionPoint(org.bouncycastle.asn1.x509.DistributionPointName r5, boolean r6, boolean r7, org.bouncycastle.asn1.x509.ReasonFlags r8, boolean r9, boolean r10) {
            r4 = this;
            r4.<init>()
            r4.distributionPoint = r5
            r4.indirectCRL = r9
            r4.onlyContainsAttributeCerts = r10
            r4.onlyContainsCACerts = r7
            r4.onlyContainsUserCerts = r6
            r4.onlySomeReasons = r8
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1 = 0
            r2 = 1
            if (r5 == 0) goto L20
            org.bouncycastle.asn1.DERTaggedObject r3 = new org.bouncycastle.asn1.DERTaggedObject
            r3.<init>(r2, r1, r5)
            r0.add(r3)
        L20:
            if (r6 != 0) goto L2f
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERBoolean r6 = new org.bouncycastle.asn1.DERBoolean
            r6.<init>(r2)
            r5.<init>(r1, r2, r6)
            r0.add(r5)
        L2f:
            if (r7 != 0) goto L3f
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            r6 = 2
            org.bouncycastle.asn1.DERBoolean r7 = new org.bouncycastle.asn1.DERBoolean
            r7.<init>(r2)
            r5.<init>(r1, r6, r7)
            r0.add(r5)
        L3f:
            if (r8 == 0) goto L4a
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            r6 = 3
            r5.<init>(r1, r6, r8)
            r0.add(r5)
        L4a:
            if (r9 != 0) goto L5a
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            r6 = 4
            org.bouncycastle.asn1.DERBoolean r7 = new org.bouncycastle.asn1.DERBoolean
            r7.<init>(r2)
            r5.<init>(r1, r6, r7)
            r0.add(r5)
        L5a:
            if (r10 != 0) goto L6a
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            r6 = 5
            org.bouncycastle.asn1.DERBoolean r7 = new org.bouncycastle.asn1.DERBoolean
            r7.<init>(r2)
            r5.<init>(r1, r6, r7)
            r0.add(r5)
        L6a:
            org.bouncycastle.asn1.DERSequence r5 = new org.bouncycastle.asn1.DERSequence
            r5.<init>(r0)
            r4.seq = r5
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

    private java.lang.String booleanToString(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L5
            java.lang.String r1 = "true"
            goto L7
        L5:
            java.lang.String r1 = "false"
        L7:
            return r1
    }

    public static org.bouncycastle.asn1.x509.IssuingDistributionPoint getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.IssuingDistributionPoint
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r0 = new org.bouncycastle.asn1.x509.IssuingDistributionPoint
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
        L32:
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r3 = (org.bouncycastle.asn1.x509.IssuingDistributionPoint) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.IssuingDistributionPoint getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.DistributionPointName getDistributionPoint() {
            r1 = this;
            org.bouncycastle.asn1.x509.DistributionPointName r0 = r1.distributionPoint
            return r0
    }

    public org.bouncycastle.asn1.x509.ReasonFlags getOnlySomeReasons() {
            r1 = this;
            org.bouncycastle.asn1.x509.ReasonFlags r0 = r1.onlySomeReasons
            return r0
    }

    public boolean isIndirectCRL() {
            r1 = this;
            boolean r0 = r1.indirectCRL
            return r0
    }

    public boolean onlyContainsAttributeCerts() {
            r1 = this;
            boolean r0 = r1.onlyContainsAttributeCerts
            return r0
    }

    public boolean onlyContainsCACerts() {
            r1 = this;
            boolean r0 = r1.onlyContainsCACerts
            return r0
    }

    public boolean onlyContainsUserCerts() {
            r1 = this;
            boolean r0 = r1.onlyContainsUserCerts
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.String r0 = "line.separator"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "IssuingDistributionPoint: ["
            r1.append(r2)
            r1.append(r0)
            org.bouncycastle.asn1.x509.DistributionPointName r2 = r4.distributionPoint
            if (r2 == 0) goto L20
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "distributionPoint"
            r4.appendObject(r1, r0, r3, r2)
        L20:
            boolean r2 = r4.onlyContainsUserCerts
            if (r2 == 0) goto L2d
            java.lang.String r2 = r4.booleanToString(r2)
            java.lang.String r3 = "onlyContainsUserCerts"
            r4.appendObject(r1, r0, r3, r2)
        L2d:
            boolean r2 = r4.onlyContainsCACerts
            if (r2 == 0) goto L3a
            java.lang.String r2 = r4.booleanToString(r2)
            java.lang.String r3 = "onlyContainsCACerts"
            r4.appendObject(r1, r0, r3, r2)
        L3a:
            org.bouncycastle.asn1.x509.ReasonFlags r2 = r4.onlySomeReasons
            if (r2 == 0) goto L47
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "onlySomeReasons"
            r4.appendObject(r1, r0, r3, r2)
        L47:
            boolean r2 = r4.onlyContainsAttributeCerts
            if (r2 == 0) goto L54
            java.lang.String r2 = r4.booleanToString(r2)
            java.lang.String r3 = "onlyContainsAttributeCerts"
            r4.appendObject(r1, r0, r3, r2)
        L54:
            boolean r2 = r4.indirectCRL
            if (r2 == 0) goto L61
            java.lang.String r2 = r4.booleanToString(r2)
            java.lang.String r3 = "indirectCRL"
            r4.appendObject(r1, r0, r3, r2)
        L61:
            java.lang.String r2 = "]"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
