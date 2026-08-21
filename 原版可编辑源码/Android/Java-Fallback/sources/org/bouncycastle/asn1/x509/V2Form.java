package org.bouncycastle.asn1.x509;

public class V2Form extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.IssuerSerial baseCertificateID;
    org.bouncycastle.asn1.x509.GeneralNames issuerName;
    org.bouncycastle.asn1.x509.ObjectDigestInfo objectDigestInfo;

    public V2Form(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            int r0 = r6.size()
            r1 = 3
            if (r0 > r1) goto L67
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r6.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r2 = 1
            if (r1 != 0) goto L20
            org.bouncycastle.asn1.DEREncodable r1 = r6.getObjectAt(r0)
            org.bouncycastle.asn1.x509.GeneralNames r1 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r1)
            r5.issuerName = r1
            r1 = 1
            goto L21
        L20:
            r1 = 0
        L21:
            int r3 = r6.size()
            if (r1 == r3) goto L66
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r3)
            int r4 = r3.getTagNo()
            if (r4 != 0) goto L3c
            org.bouncycastle.asn1.x509.IssuerSerial r3 = org.bouncycastle.asn1.x509.IssuerSerial.getInstance(r3, r0)
            r5.baseCertificateID = r3
            goto L48
        L3c:
            int r4 = r3.getTagNo()
            if (r4 != r2) goto L4b
            org.bouncycastle.asn1.x509.ObjectDigestInfo r3 = org.bouncycastle.asn1.x509.ObjectDigestInfo.getInstance(r3, r0)
            r5.objectDigestInfo = r3
        L48:
            int r1 = r1 + 1
            goto L21
        L4b:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Bad tag number: "
            r0.append(r1)
            int r1 = r3.getTagNo()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L66:
            return
        L67:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r6 = r6.size()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
    }

    public V2Form(org.bouncycastle.asn1.x509.GeneralNames r1) {
            r0 = this;
            r0.<init>()
            r0.issuerName = r1
            return
    }

    public static org.bouncycastle.asn1.x509.V2Form getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.V2Form
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.V2Form r0 = new org.bouncycastle.asn1.x509.V2Form
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
            org.bouncycastle.asn1.x509.V2Form r3 = (org.bouncycastle.asn1.x509.V2Form) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.V2Form getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.V2Form r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.IssuerSerial getBaseCertificateID() {
            r1 = this;
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r1.baseCertificateID
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralNames getIssuerName() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r1.issuerName
            return r0
    }

    public org.bouncycastle.asn1.x509.ObjectDigestInfo getObjectDigestInfo() {
            r1 = this;
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r1.objectDigestInfo
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralNames r1 = r5.issuerName
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.x509.IssuerSerial r1 = r5.baseCertificateID
            r2 = 0
            if (r1 == 0) goto L1b
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.IssuerSerial r3 = r5.baseCertificateID
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L1b:
            org.bouncycastle.asn1.x509.ObjectDigestInfo r1 = r5.objectDigestInfo
            if (r1 == 0) goto L2a
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.x509.ObjectDigestInfo r4 = r5.objectDigestInfo
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L2a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
