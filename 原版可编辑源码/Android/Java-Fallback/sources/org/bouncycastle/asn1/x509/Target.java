package org.bouncycastle.asn1.x509;

public class Target extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    public static final int targetGroup = 1;
    public static final int targetName = 0;
    private org.bouncycastle.asn1.x509.GeneralName targGroup;
    private org.bouncycastle.asn1.x509.GeneralName targName;

    public Target(int r2, org.bouncycastle.asn1.x509.GeneralName r3) {
            r1 = this;
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r0.<init>(r2, r3)
            r1.<init>(r0)
            return
    }

    private Target(org.bouncycastle.asn1.ASN1TaggedObject r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.getTagNo()
            r1 = 1
            if (r0 == 0) goto L2e
            if (r0 != r1) goto L13
            org.bouncycastle.asn1.x509.GeneralName r4 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r4, r1)
            r3.targGroup = r4
            goto L34
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag: "
            r1.append(r2)
            int r4 = r4.getTagNo()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L2e:
            org.bouncycastle.asn1.x509.GeneralName r4 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r4, r1)
            r3.targName = r4
        L34:
            return
    }

    public static org.bouncycastle.asn1.x509.Target getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.Target
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.Target r3 = (org.bouncycastle.asn1.x509.Target) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.Target r0 = new org.bouncycastle.asn1.x509.Target
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
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getTargetGroup() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.targGroup
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getTargetName() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.targName
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r4.targName
            r1 = 1
            if (r0 == 0) goto Le
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.x509.GeneralName r3 = r4.targName
            r0.<init>(r1, r2, r3)
            return r0
        Le:
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.GeneralName r2 = r4.targGroup
            r0.<init>(r1, r1, r2)
            return r0
    }
}
