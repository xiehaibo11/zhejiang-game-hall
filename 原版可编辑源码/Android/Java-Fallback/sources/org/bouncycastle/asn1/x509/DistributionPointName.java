package org.bouncycastle.asn1.x509;

public class DistributionPointName extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    public static final int FULL_NAME = 0;
    public static final int NAME_RELATIVE_TO_CRL_ISSUER = 1;
    org.bouncycastle.asn1.DEREncodable name;
    int type;

    public DistributionPointName(int r1, org.bouncycastle.asn1.ASN1Encodable r2) {
            r0 = this;
            r0.<init>()
            r0.type = r1
            r0.name = r2
            return
    }

    public DistributionPointName(int r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.type = r1
            r0.name = r2
            return
    }

    public DistributionPointName(org.bouncycastle.asn1.ASN1TaggedObject r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.getTagNo()
            r2.type = r0
            r1 = 0
            if (r0 != 0) goto L11
            org.bouncycastle.asn1.x509.GeneralNames r3 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r3, r1)
            goto L15
        L11:
            org.bouncycastle.asn1.ASN1Set r3 = org.bouncycastle.asn1.ASN1Set.getInstance(r3, r1)
        L15:
            r2.name = r3
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

    public static org.bouncycastle.asn1.x509.DistributionPointName getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.DistributionPointName
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.DistributionPointName r0 = new org.bouncycastle.asn1.x509.DistributionPointName
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
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
            org.bouncycastle.asn1.x509.DistributionPointName r3 = (org.bouncycastle.asn1.x509.DistributionPointName) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.DistributionPointName getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            r1 = 1
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.DistributionPointName r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ASN1Encodable getName() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.name
            org.bouncycastle.asn1.ASN1Encodable r0 = (org.bouncycastle.asn1.ASN1Encodable) r0
            return r0
    }

    public int getType() {
            r1 = this;
            int r0 = r1.type
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            int r1 = r4.type
            org.bouncycastle.asn1.DEREncodable r2 = r4.name
            r3 = 0
            r0.<init>(r3, r1, r2)
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.String r0 = "line.separator"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "DistributionPointName: ["
            r1.append(r2)
            r1.append(r0)
            int r2 = r4.type
            if (r2 != 0) goto L20
            org.bouncycastle.asn1.DEREncodable r2 = r4.name
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "fullName"
            goto L28
        L20:
            org.bouncycastle.asn1.DEREncodable r2 = r4.name
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "nameRelativeToCRLIssuer"
        L28:
            r4.appendObject(r1, r0, r3, r2)
            java.lang.String r2 = "]"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
