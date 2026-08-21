package org.bouncycastle.asn1.ocsp;

public class CertStatus extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private int tagNo;
    private org.bouncycastle.asn1.DEREncodable value;

    public CertStatus() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.tagNo = r0
            org.bouncycastle.asn1.DERNull r0 = new org.bouncycastle.asn1.DERNull
            r0.<init>()
            r1.value = r0
            return
    }

    public CertStatus(int r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.tagNo = r1
            r0.value = r2
            return
    }

    public CertStatus(org.bouncycastle.asn1.ASN1TaggedObject r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.getTagNo()
            r2.tagNo = r0
            int r0 = r3.getTagNo()
            if (r0 == 0) goto L22
            r1 = 1
            if (r0 == r1) goto L1c
            r3 = 2
            if (r0 == r3) goto L16
            goto L29
        L16:
            org.bouncycastle.asn1.DERNull r3 = new org.bouncycastle.asn1.DERNull
            r3.<init>()
            goto L27
        L1c:
            r0 = 0
            org.bouncycastle.asn1.ocsp.RevokedInfo r3 = org.bouncycastle.asn1.ocsp.RevokedInfo.getInstance(r3, r0)
            goto L27
        L22:
            org.bouncycastle.asn1.DERNull r3 = new org.bouncycastle.asn1.DERNull
            r3.<init>()
        L27:
            r2.value = r3
        L29:
            return
    }

    public CertStatus(org.bouncycastle.asn1.ocsp.RevokedInfo r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.tagNo = r0
            r1.value = r2
            return
    }

    public static org.bouncycastle.asn1.ocsp.CertStatus getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.CertStatus
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.CertStatus r0 = new org.bouncycastle.asn1.ocsp.CertStatus
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
            org.bouncycastle.asn1.ocsp.CertStatus r3 = (org.bouncycastle.asn1.ocsp.CertStatus) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.CertStatus getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ocsp.CertStatus r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getStatus() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.value
            return r0
    }

    public int getTagNo() {
            r1 = this;
            int r0 = r1.tagNo
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            int r1 = r4.tagNo
            org.bouncycastle.asn1.DEREncodable r2 = r4.value
            r3 = 0
            r0.<init>(r3, r1, r2)
            return r0
    }
}
