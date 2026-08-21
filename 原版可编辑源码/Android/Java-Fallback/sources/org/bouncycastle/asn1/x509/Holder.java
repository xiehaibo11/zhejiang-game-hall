package org.bouncycastle.asn1.x509;

public class Holder extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.IssuerSerial baseCertificateID;
    org.bouncycastle.asn1.x509.GeneralNames entityName;
    org.bouncycastle.asn1.x509.ObjectDigestInfo objectDigestInfo;
    private int version;

    public Holder(org.bouncycastle.asn1.ASN1Sequence r7) {
            r6 = this;
            r6.<init>()
            r0 = 1
            r6.version = r0
            int r1 = r7.size()
            r2 = 3
            if (r1 > r2) goto L4a
            r1 = 0
            r2 = 0
        Lf:
            int r3 = r7.size()
            if (r2 == r3) goto L47
            org.bouncycastle.asn1.DEREncodable r3 = r7.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r3)
            int r4 = r3.getTagNo()
            if (r4 == 0) goto L3e
            if (r4 == r0) goto L37
            r5 = 2
            if (r4 != r5) goto L2f
            org.bouncycastle.asn1.x509.ObjectDigestInfo r3 = org.bouncycastle.asn1.x509.ObjectDigestInfo.getInstance(r3, r1)
            r6.objectDigestInfo = r3
            goto L44
        L2f:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown tag in Holder"
            r7.<init>(r0)
            throw r7
        L37:
            org.bouncycastle.asn1.x509.GeneralNames r3 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r3, r1)
            r6.entityName = r3
            goto L44
        L3e:
            org.bouncycastle.asn1.x509.IssuerSerial r3 = org.bouncycastle.asn1.x509.IssuerSerial.getInstance(r3, r1)
            r6.baseCertificateID = r3
        L44:
            int r2 = r2 + 1
            goto Lf
        L47:
            r6.version = r0
            return
        L4a:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r7 = r7.size()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
    }

    public Holder(org.bouncycastle.asn1.ASN1TaggedObject r4) {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.version = r0
            int r1 = r4.getTagNo()
            r2 = 0
            if (r1 == 0) goto L1e
            if (r1 != r0) goto L16
            org.bouncycastle.asn1.x509.GeneralNames r4 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r4, r2)
            r3.entityName = r4
            goto L24
        L16:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown tag in Holder"
            r4.<init>(r0)
            throw r4
        L1e:
            org.bouncycastle.asn1.x509.IssuerSerial r4 = org.bouncycastle.asn1.x509.IssuerSerial.getInstance(r4, r2)
            r3.baseCertificateID = r4
        L24:
            r3.version = r2
            return
    }

    public Holder(org.bouncycastle.asn1.x509.GeneralNames r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.version = r0
            r1.entityName = r2
            return
    }

    public Holder(org.bouncycastle.asn1.x509.GeneralNames r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.version = r0
            r1.entityName = r2
            r1.version = r3
            return
    }

    public Holder(org.bouncycastle.asn1.x509.IssuerSerial r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.version = r0
            r1.baseCertificateID = r2
            return
    }

    public Holder(org.bouncycastle.asn1.x509.IssuerSerial r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.version = r0
            r1.baseCertificateID = r2
            r1.version = r3
            return
    }

    public Holder(org.bouncycastle.asn1.x509.ObjectDigestInfo r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.version = r0
            r1.objectDigestInfo = r2
            return
    }

    public static org.bouncycastle.asn1.x509.Holder getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.Holder
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.Holder r3 = (org.bouncycastle.asn1.x509.Holder) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.Holder r0 = new org.bouncycastle.asn1.x509.Holder
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.x509.Holder r0 = new org.bouncycastle.asn1.x509.Holder
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            r0.<init>(r3)
            return r0
        L1f:
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

    public org.bouncycastle.asn1.x509.IssuerSerial getBaseCertificateID() {
            r1 = this;
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r1.baseCertificateID
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralNames getEntityName() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r1.entityName
            return r0
    }

    public org.bouncycastle.asn1.x509.ObjectDigestInfo getObjectDigestInfo() {
            r1 = this;
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r1.objectDigestInfo
            return r0
    }

    public int getVersion() {
            r1 = this;
            int r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            int r0 = r5.version
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L3c
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.IssuerSerial r3 = r5.baseCertificateID
            if (r3 == 0) goto L19
            org.bouncycastle.asn1.DERTaggedObject r3 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.IssuerSerial r4 = r5.baseCertificateID
            r3.<init>(r2, r2, r4)
            r0.add(r3)
        L19:
            org.bouncycastle.asn1.x509.GeneralNames r3 = r5.entityName
            if (r3 == 0) goto L27
            org.bouncycastle.asn1.DERTaggedObject r3 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.GeneralNames r4 = r5.entityName
            r3.<init>(r2, r1, r4)
            r0.add(r3)
        L27:
            org.bouncycastle.asn1.x509.ObjectDigestInfo r1 = r5.objectDigestInfo
            if (r1 == 0) goto L36
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.x509.ObjectDigestInfo r4 = r5.objectDigestInfo
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L36:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
        L3c:
            org.bouncycastle.asn1.x509.GeneralNames r0 = r5.entityName
            if (r0 == 0) goto L48
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.GeneralNames r3 = r5.entityName
            r0.<init>(r2, r1, r3)
            return r0
        L48:
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.IssuerSerial r1 = r5.baseCertificateID
            r0.<init>(r2, r2, r1)
            return r0
    }
}
